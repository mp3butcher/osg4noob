//	STD includes
#include <iostream>
#include <cstdlib>

//	OSG core includes
#include <osg/CullFace>
#include <osg/Depth>
#include <osg/FrontFace>
#include <osg/Geode>
#include <osg/Group>
#include <osg/MatrixTransform>
#include <osg/Node>
#include <osg/PositionAttitudeTransform>
#include <osg/ShapeDrawable>
#include <osg/Texture2D>

//	OSG extra includes
#include <osgDB/FileUtils>
#include <osgDB/ReadFile>
#include <osgViewer/Viewer>

#define WINDOW_WIDTH	1024
#define WINDOW_HEIGHT	1024

//  =========================================================================================

//!
//!	Load shader.
//!	@return	false On failure.
//!
static bool loadShader( osg::Shader* shader, const std::string& name )
{
	bool success = shader->loadShaderSourceFromFile(name.c_str());
	if( !success ) {
		osg::notify( osg::NOTICE ) << "Could not load shader file: '" << name << std::endl;
	}
	return success;
}

static osg::Program* loadProgram( const std::string& programName )
{
	osg::Program* program = new osg::Program();

	std::stringstream vShaderFile; vShaderFile << programName << ".vert";
	std::stringstream fShaderFile; fShaderFile << programName << ".frag";

	osg::Shader* vShader = new osg::Shader(osg::Shader::VERTEX);
	osg::Shader* fShader = new osg::Shader(osg::Shader::FRAGMENT);

	loadShader(vShader,vShaderFile.str());
	loadShader(fShader,fShaderFile.str());

	program->addShader(vShader);
	program->addShader(fShader);

	return program;
}

static osg::Texture2D* createRenderTexture(int width, int height)
{
    osg::Texture2D* texture = new osg::Texture2D();
    texture->setTextureSize(width,height);

    texture->setInternalFormat(GL_RGBA);

    texture->setWrap(osg::Texture2D::WRAP_S,osg::Texture2D::CLAMP_TO_EDGE);
    texture->setWrap(osg::Texture2D::WRAP_T,osg::Texture2D::CLAMP_TO_EDGE);
	texture->setFilter(osg::Texture2D::MIN_FILTER,osg::Texture2D::LINEAR);
	texture->setFilter(osg::Texture2D::MAG_FILTER,osg::Texture2D::LINEAR);

    return texture;
}

static osg::Texture2D* createDepthTexture(int width, int height)
{
	osg::Texture2D* texture = new osg::Texture2D();
	texture->setTextureSize(width,height);

	texture->setSourceFormat(GL_DEPTH_COMPONENT);
	texture->setSourceType(GL_FLOAT);
	texture->setInternalFormat(GL_DEPTH_COMPONENT32F);

	texture->setWrap(osg::Texture2D::WRAP_S,osg::Texture2D::CLAMP_TO_EDGE);
    texture->setWrap(osg::Texture2D::WRAP_T,osg::Texture2D::CLAMP_TO_EDGE);
	texture->setFilter(osg::Texture2D::MIN_FILTER,osg::Texture2D::LINEAR);
	texture->setFilter(osg::Texture2D::MAG_FILTER,osg::Texture2D::LINEAR);

	return texture;
}

//  =========================================================================================

//!
//!	Utility.
//!	Create a plane geode
//!
static osg::Geode* createPlaneGeode( float x, float y, float width, float height)
{
	osg::Geode* newPlaneGeode = new osg::Geode();
	//	Create plane's geometry
	osg::Geometry* quadGeometry = new osg::Geometry();
	 //	Vertices
    osg::Vec3Array* vertices = new osg::Vec3Array();
    vertices->push_back( osg::Vec3f( x,			y,			0	) );	//	First triangle
    vertices->push_back( osg::Vec3f( x,			y+height,	0	) );
    vertices->push_back( osg::Vec3f( x+width,	y,			0	) );

    vertices->push_back( osg::Vec3f( x,			y+height,	0	) );	//	Second triangle
    vertices->push_back( osg::Vec3f( x+width,	y+height,	0	) );
    vertices->push_back( osg::Vec3f( x+width,	y		,	0	) );
	//	Normals
	osg::Vec3Array* normals = new osg::Vec3Array();
	normals->push_back( osg::Vec3f( 0.0f, 0.0f, -1.0f ) );	//	First triangle
	normals->push_back( osg::Vec3f( 0.0f, 0.0f, -1.0f ) );
	normals->push_back( osg::Vec3f( 0.0f, 0.0f, -1.0f ) );
	normals->push_back( osg::Vec3f( 0.0f, 0.0f, -1.0f ) );	//	Second triangle
	normals->push_back( osg::Vec3f( 0.0f, 0.0f, -1.0f ) );
	normals->push_back( osg::Vec3f( 0.0f, 0.0f, -1.0f ) );
	//	Tex Coords
	osg::Vec3Array* texCoords = new osg::Vec3Array();
	texCoords->push_back( osg::Vec3f( 0.0f, 0.0f, 0.0f ) );	//	First triangle
	texCoords->push_back( osg::Vec3f( 0.0f, 1.0f, 0.0f ) );
	texCoords->push_back( osg::Vec3f( 1.0f, 0.0f, 0.0f ) );
	texCoords->push_back( osg::Vec3f( 0.0f, 1.0f, 0.0f ) );	//	Second triangle
	texCoords->push_back( osg::Vec3f( 1.0f, 1.0f, 0.0f ) );
	texCoords->push_back( osg::Vec3f( 1.0f, 0.0f, 0.0f ) );
	//	Create quad primitive
	osg::DrawElementsUInt* quadPrimitive = new osg::DrawElementsUInt( osg::PrimitiveSet::TRIANGLES );
	quadPrimitive->push_back(0);
	quadPrimitive->push_back(1);
	quadPrimitive->push_back(2);
	quadPrimitive->push_back(3);
	quadPrimitive->push_back(4);
	quadPrimitive->push_back(5);
	//	Attach vertices to geometry
	quadGeometry->setVertexArray(vertices);
	//	Attach vertex normals to geometry
	quadGeometry->setNormalArray(normals);
	quadGeometry->setNormalBinding(osg::Geometry::BIND_PER_VERTEX);
	//	Attach texcoords to geometry
	quadGeometry->setTexCoordArray(0,texCoords);
	//	Attach primitive to geometry
	quadGeometry->addPrimitiveSet(quadPrimitive);
	//	Set geometry to geode
	newPlaneGeode->addDrawable(quadGeometry);

	//	Return the geode
	return newPlaneGeode;
}

//  =========================================================================================

osg::Camera* createRenderTargetCamera(osg::Texture2D* rttDepthTexture,
									  osg::Texture2D* rttColorTexture01,
									  osg::Texture2D* rttColorTexture02,
									  osg::Texture2D* rttColorTexture03)
{
    osg::Camera* camera = new osg::Camera();
	//	Set the camera to render before the main camera.
    camera->setRenderOrder(osg::Camera::PRE_RENDER);
	//	Tell the camera to use OpenGL frame buffer object where supported.
    camera->setRenderTargetImplementation(osg::Camera::FRAME_BUFFER_OBJECT);
	//	Attack RTT textures to Camera
	//camera->attach(osg::Camera::DEPTH_BUFFER, rttDepthTexture  );
	camera->attach(osg::Camera::COLOR_BUFFER0,rttColorTexture01);
	//camera->attach(osg::Camera::COLOR_BUFFER1,rttColorTexture02);
	//camera->attach(osg::Camera::COLOR_BUFFER2,rttColorTexture03);
	//	Set up the background color and clear mask.
	camera->setClearColor(osg::Vec4(0.0f,0.0f,0.0f,1.0f));
    camera->setClearMask(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	//	Set viewport
    camera->setViewport(0,0,512,512);
	//	Set up projection.
	camera->setProjectionMatrixAsPerspective(45.0, 1.0, 10.0, 100.0);
	//	Set view
	camera->setReferenceFrame(osg::Transform::ABSOLUTE_RF);
	camera->setViewMatrixAsLookAt(osg::Vec3(0.0f,-30.0f,0.0f),osg::Vec3(0,0,0),osg::Vec3(0.0f,0.0f,1.0f));

	//	Camera hints
	camera->setComputeNearFarMode(osg::CullSettings::DO_NOT_COMPUTE_NEAR_FAR);

    return camera;
}

osg::Camera* createNormalCamera(void)
{
	osg::Camera* camera = new osg::Camera();
	//	Set clear color and mask
	camera->setClearColor(osg::Vec4(0.4f,0.4f,0.4f,1.0f));
	camera->setClearMask(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	//	Set viewport
	camera->setViewport(0,0,WINDOW_WIDTH,WINDOW_HEIGHT);
	//	Set projection
	camera->setProjectionMatrixAsOrtho2D(0,1024,0,1024);
	//	Set view
	camera->setReferenceFrame(osg::Transform::ABSOLUTE_RF);
	camera->setViewMatrix(osg::Matrix::identity());
	//	Camera hints
	camera->setComputeNearFarMode(osg::CullSettings::DO_NOT_COMPUTE_NEAR_FAR);

	return camera;
}

//  =========================================================================================

int go()
{
    osg::setNotifyLevel(osg::NOTICE);

    //  ======================================================================

    //	Create root group node
	osg::Group* root = new osg::Group();

    //	Create groups
	osg::Group* group01 = new osg::Group();
	osg::Group* group02 = new osg::Group();

    //	Connect the two groups to the  root
	root->addChild(group01);
	root->addChild(group02);

    //  Create boxes and spheres
    osg::Box* box01 = new osg::Box(osg::Vec3f(0.0f,0.0f,0.0f),10.0f);
    osg::Box* box02 = new osg::Box(osg::Vec3f(0.0f,0.0f,0.0f),10.0f);
	osg::Sphere* sphere01 = new osg::Sphere(osg::Vec3(0.0f,0.0f,0.0f),1.0f);
	osg::Sphere* sphere02 = new osg::Sphere(osg::Vec3(0.0f,0.0f,0.0f),1.0f);

    osg::ShapeDrawable* box01Drawable = new osg::ShapeDrawable(box01);
    osg::ShapeDrawable* box02Drawable = new osg::ShapeDrawable(box02);
	osg::ShapeDrawable* sphere01Drawable = new osg::ShapeDrawable(sphere01);
	osg::ShapeDrawable* sphere02Drawable = new osg::ShapeDrawable(sphere02);

    osg::Group* mainSceneRoot = new osg::Group();

    osg::Geode* geode01 = new osg::Geode();
    osg::Geode* geode02 = new osg::Geode();

    geode01->addDrawable(sphere01Drawable);
    geode02->addDrawable(sphere02Drawable);

    //  ======================================================================

	osg::Node* model01 = osgDB::readNodeFile("data/models/cessna.osg");

	{
		osg::Program* program = loadProgram("data/shaders/simpleShader01");
		model01->getOrCreateStateSet()->setAttribute(program,osg::StateAttribute::ON);
	}

	//	Create RT textures
	osg::Texture2D* rttDepthTexture   = createDepthTexture (512,512);
	osg::Texture2D* rttColorTexture01 = createRenderTexture(512,512);
	osg::Texture2D* rttColorTexture02 = createRenderTexture(512,512);
	osg::Texture2D* rttColorTexture03 = createRenderTexture(512,512);
	//	Create RTT camera
	osg::Camera* rttCamera = createRenderTargetCamera(rttDepthTexture,rttColorTexture01,rttColorTexture02,rttColorTexture03);


	osg::MatrixTransform* modelTransform = new osg::MatrixTransform();
    modelTransform->addChild(model01);
	rttCamera->addChild(modelTransform);

	osg::NodeCallback* nc = new osg::AnimationPathCallback(modelTransform->getBound().center(),osg::Vec3(0.0f,0.0f,1.0f),osg::inDegrees(45.0f));
    modelTransform->setUpdateCallback(nc);

	group01->addChild(rttCamera);

	//  ======================================================================

	osg::PositionAttitudeTransform* light01Transform = new osg::PositionAttitudeTransform();
	osg::PositionAttitudeTransform* light02Transform = new osg::PositionAttitudeTransform();

	light01Transform->setPosition(osg::Vec3(-20.0f, 0.0f, 0.0f));
	light02Transform->setPosition(osg::Vec3( 20.0f, 0.0f, 0.0f));

	light01Transform->addChild(geode01);
	light02Transform->addChild(geode02);

	rttCamera->addChild(light01Transform);
	rttCamera->addChild(light02Transform);

	osg::Uniform* light01Uniform = new osg::Uniform("uLight01Pos",osg::Vec4(-20.0f,0.0f,0.0f,1.0f));
	osg::Uniform* light02Uniform = new osg::Uniform("uLight02Pos",osg::Vec4( 20.0f,0.0f,0.0f,1.0f));

	rttCamera->getOrCreateStateSet()->addUniform(light01Uniform,osg::StateAttribute::ON);
	rttCamera->getOrCreateStateSet()->addUniform(light02Uniform,osg::StateAttribute::ON);

	//  ======================================================================
	//	Add 4 x ortho quads to the screen/scene

	//	Create 4 quads each one is a quarter of the screen.
	osg::Geode* fullScreenQuadGeode01 = createPlaneGeode( 0,	512, 512, 512);
	osg::Geode* fullScreenQuadGeode02 = createPlaneGeode( 512,	512, 512, 512);
	osg::Geode* fullScreenQuadGeode03 = createPlaneGeode( 0,	0,   512, 512);
	osg::Geode* fullScreenQuadGeode04 = createPlaneGeode( 512,	0,   512, 512);

	//	Create an orthographic camera and attach the 4 quads to it.
	osg::Camera* normalCamera = createNormalCamera();
	normalCamera->addChild(fullScreenQuadGeode01);
	normalCamera->addChild(fullScreenQuadGeode02);
	normalCamera->addChild(fullScreenQuadGeode03);
	normalCamera->addChild(fullScreenQuadGeode04);

	//	quad 01
	{
		osg::Program* program = loadProgram("data/shaders/colorTextureShader");
		osg::Uniform* uniformTex01 = new osg::Uniform("uTexture01",0);
		osg::StateSet* ss = new osg::StateSet();
		ss->setTextureAttributeAndModes(0,rttDepthTexture,osg::StateAttribute::ON);
		ss->setAttribute(program,osg::StateAttribute::ON);
		ss->addUniform(uniformTex01);
		fullScreenQuadGeode01->setStateSet(ss);
	}

	//	quad 02
	{
		osg::Program* program = loadProgram("data/shaders/colorTextureShader");
		osg::Uniform* uniformTex01 = new osg::Uniform("uTexture01",0);
		osg::StateSet* ss = new osg::StateSet();
		ss->setTextureAttributeAndModes(0,rttColorTexture01,osg::StateAttribute::ON);
		ss->setAttribute(program,osg::StateAttribute::ON);
		ss->addUniform(uniformTex01);
		fullScreenQuadGeode02->setStateSet(ss);
	}

	//	quad 03
	{
		osg::Program* program = loadProgram("data/shaders/colorTextureShader");
		osg::Uniform* uniformTex01 = new osg::Uniform("uTexture01",0);
		osg::StateSet* ss = new osg::StateSet();
		ss->setTextureAttributeAndModes(0,rttColorTexture02,osg::StateAttribute::ON);
		ss->setAttribute(program,osg::StateAttribute::ON);
		ss->addUniform(uniformTex01);
		fullScreenQuadGeode03->setStateSet(ss);
	}
	//	quad 04
	{
		osg::Program* program = loadProgram("data/shaders/lightingPass");
		osg::Uniform* uniformTexDepth  = new osg::Uniform("uDepthTex", 0);
		osg::Uniform* uniformTexColor  = new osg::Uniform("uColorTex", 1);
		osg::Uniform* uniformTexNormal = new osg::Uniform("uNormalTex",2);
		osg::StateSet* ss = new osg::StateSet();
		ss->setTextureAttributeAndModes(0,rttDepthTexture,osg::StateAttribute::ON);
		ss->setTextureAttributeAndModes(1,rttColorTexture01,osg::StateAttribute::ON);
		ss->setTextureAttributeAndModes(2,rttColorTexture02,osg::StateAttribute::ON);
		ss->setAttribute(program,osg::StateAttribute::ON);
		ss->addUniform(uniformTexDepth);
		ss->addUniform(uniformTexColor);
		ss->addUniform(uniformTexNormal);
		fullScreenQuadGeode04->setStateSet(ss);
	}

	group02->addChild(normalCamera);

    //  ======================================================================
	//	:D

    //	Create viewer
	osgViewer::Viewer viewer;
    //	Attach scene root node
	viewer.setSceneData(root);
	//	Setup window mode
	viewer.setUpViewInWindow( 50, 50, WINDOW_WIDTH, WINDOW_HEIGHT );
	//	Run! :)
	viewer.run();

	//  ======================================================================

    return EXIT_SUCCESS;
}
