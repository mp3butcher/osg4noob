/********************************************************************************
**
********************************************************************************/
//#include <boost/tr1/regex.hpp>


#define MYUSEQT
#define MYUSEQTQUICK
#include <QOpenGLFunctions_3_1>
#include <osg/Vec3>
#include <osg/Vec4>
#include <osg/Geometry>
#include <osg/Geode>
#include <osg/TextureRectangle>

#include <osgGA/TrackballManipulator>

#include <osgGA/SphericalManipulator>
#include <osgDB/FileUtils>
#include <osgDB/ReadFile>
#include <sstream>

#include <osgViewer/ViewerEventHandlers>


#include <iostream>
#include <osgGA/TrackballManipulator>

#include <osgGA/FirstPersonManipulator>
#include <osgDB/FileUtils>
#include <osgDB/ReadFile>
#include <osgDB/WriteFile>
#include <osgDB/ExternalFileWriter>
//#include "grohack.cpp"
/*#include "ProcessPassFBODIY.h"
#include "FIMPass.h"
*/


#include <osg/BufferIndexBinding>
#include <osg/Depth>
#include <osg/ImageUtils>
#include <osgVolume/Volume>
#include <osgVolume/VolumeTile>

#include <osgGA/KeySwitchMatrixManipulator>
#include <osgGA/TrackballManipulator>

#include <osgGA/FirstPersonManipulator>
//#include "myRayTracedTechnique.h"
#include <osgVolume/FixedFunctionTechnique>
//#include "OSGVolumetest.h"

#include <QGuiApplication>
#include <QtWidgets/QApplication>
#include <QtGui/QWindow>
#include <QtGui/qopenglcontext.h>


#include <qtimer.h>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <osgQt/GraphicsWindowQt>
#include <osgQtQuick/Utility.hpp>
#include "osgQtQuick/QuickWindowViewer.hpp"
#include <qsgnode.h>
#include <QtQuick/QQuickView>
#include <qobject.h>
//#include "myStatsHandler.h"
//#include "colorcomponentsplugin/colorcomponents.h"
//#include "OSGSimulationNode.hpp"
//#include "osgQtOctreeFluid/QtToOSGView.h"
/*osgViewer::View* QTEveLifeMainWindowsGUI::createTextureDebugView(osgOctreeVolume & tex,QWidget * win)
{


osg::ref_ptr<osg::Geode> geode = new osg::Geode();

// turn lighting off for the text and disable depth test to ensure its always ontop.
osg::ref_ptr<osg::StateSet> stateset = geode->getOrCreateStateSet();
stateset->setMode(GL_LIGHTING,osg::StateAttribute::OFF);

osg::ref_ptr<osg::Geometry> geom = new osg::Geometry;

osg::ref_ptr< osg::Vec2Array> vertices = new osg::Vec2Array;
vertices->push_back(osg::Vec2(0.0,0));
vertices->push_back(osg::Vec2(0.0,1.0));
vertices->push_back(osg::Vec2(1.0,1.0));
vertices->push_back(osg::Vec2(1.0,0.0));

geom->setVertexArray(vertices.get());

osg::ref_ptr<osg::Vec2Array> texcoord = new osg::Vec2Array;
texcoord->push_back(osg::Vec2(0.0f, 0.0f));
texcoord->push_back(osg::Vec2(0.0f,tex.getImage()->t()));
texcoord->push_back(osg::Vec2(tex.getImage()->s(), tex.getImage()->t()));
texcoord->push_back(osg::Vec2(tex.getImage()->s(), 0.0f));
geom->setTexCoordArray(0,texcoord.get());
osg::ref_ptr<osg::DrawArrays> da = new osg::DrawArrays(osg::PrimitiveSet::QUADS,0,4);
geom->addPrimitiveSet(da.get());
osg::ref_ptr<osg::StateSet>  geomss = new osg::StateSet();
geomss->setTextureAttributeAndModes(0,
&tex,
osg::StateAttribute::ON);
//	geomss->setUpdateCallback(new TextureUpdaterCallBack(&tex,this));
geode->setStateSet(geomss);
geode->addDrawable(geom.get());





osg::ref_ptr<ViewQOSG> view = new ViewQOSG( win );





// create a view and cam to set up the projection and model view matrices
//osgViewer::View* view =new osgViewer::View;
view->setSceneData(geode.get());




// set the view matrix
view->getCamera()->setReferenceFrame(osg::Transform::ABSOLUTE_RF);
view->getCamera()->setViewMatrix(osg::Matrix::identity());
7
// set the projection matrix
view->getCamera()->setProjectionMatrix(osg::Matrix::ortho2D(0,1,0,1));
view->getCamera()->setViewport(new osg::Viewport(0,0,640,480));
//view->addEventHandler(new osgViewer::StatsHandler);
//view->setCameraManipulator(new osgGA::TrackballManipulator);
//view->getCamera()->setGraphicsContext(win->getGraphicsWindow ());


return view ;
}

static ProcessPass3DFBODIY* splatter,*splatter2;*/
static osg::ref_ptr< osg::GraphicsContext > gc ;
using namespace std;

osg::ref_ptr<osg::StateSet> geomss; // stateset where we can attach textures


#include <osgViewer/ViewerEventHandlers>


class myTrackballManipulator: public osgGA::TrackballManipulator
{
public:
    myTrackballManipulator():osgGA::TrackballManipulator() {}

    virtual bool handle( const osgGA::GUIEventAdapter& ea, osgGA::GUIActionAdapter& us )
    {
        return false;
    };
};













#ifdef OBFUSCATESHADERTM
#include "advect.frag.h"
#include "radvect.frag.h"
#include "MacCormack.frag.h"
//#include "boundaries.frag.h"
//#include "boundary.frag.h"
#include "poisson.frag.h"
#include "divergenceandcopy.frag.h"
#include "copyscalar.frag.h"
#include "gradsub.frag.h"
#include "splat.frag.h"
#endif



class ViewerWidget : public QWidget
{
public:
    ViewerWidget( osg::Camera* camera, osg::Node* scene,QWidget* parent=0  )
        :   QWidget( parent)
    {
        _viewer.setCamera( camera );
        _viewer.setSceneData( scene );
        _viewer.addEventHandler( new osgViewer::StatsHandler );
        _viewer.setCameraManipulator( new osgGA::TrackballManipulator );
        _viewer.setThreadingModel( osgViewer::Viewer::SingleThreaded );

        osgQt::GraphicsWindowQt* gw = dynamic_cast<osgQt::GraphicsWindowQt*>( camera->getGraphicsContext() );
        if ( gw )
        {
            QVBoxLayout* layout = new QVBoxLayout;
            layout->addWidget( gw->getGLWidget() );
            setLayout( layout );
        }

        connect( &_timer, SIGNAL(timeout()), this, SLOT(update()) );
        _timer.start( 40 );
    }

protected:
    virtual void paintEvent( QPaintEvent* event )
    {
        _viewer.frame();
    }

    osgViewer::Viewer _viewer;
    QTimer _timer;
};

//Window::Window( QScreen* screen )
//    : QWindow( screen ),
//{
//    // Tell Qt we will use OpenGL for this window
//    setSurfaceType( OpenGLSurface );
//
//    // Specify the format and create platform-specific surface
//    QSurfaceFormat format;
//    format.setDepthBufferSize( 24 );
//    format.setMajorVersion( 4 );
//    format.setMinorVersion( 3 );
//    format.setSamples( 4 );
//    format.setProfile( QSurfaceFormat::CoreProfile );
//    setFormat( format );
//    create();
//
//    // Create an OpenGL context
//    m_context = new QOpenGLContext;
//    m_context->setFormat( format );
//    m_context->create();
//
//    // Make the context current on this window
//    m_context->makeCurrent( this );
//
//    // Obtain a functions object and resolve all entry points
//    // m_funcs is declared as: QOpenGLFunctions_4_3_Core* m_funcs
//    m_funcs = m_context->versionFunctions();
//    if ( !m_funcs ) {
//        qWarning( &quot;Could not obtain OpenGL versions object&quot; );
//        exit( 1 );
//    }
//    m_funcs->initializeOpenGLFunctions();
//}




#include <osgDB/FileUtils>
#include <osgDB/WriteFile>
#include "osgQtWindowing/mainwindow.h"
#include "UIEditorMAIN.h"


class Redemmer:public osg::NodeVisitor{

public:
Redemmer():NodeVisitor(osg::NodeVisitor::TRAVERSE_ALL_CHILDREN){}
        virtual void apply(osg::Geometry& geometry){
        if(geometry.getTexCoordArray(2) &&geometry.getTexCoordArray(3)){

        geometry.setVertexAttribArray(3,geometry.getTexCoordArray(2),osg::Array::BIND_PER_VERTEX);
        geometry.setVertexAttribArray(4,geometry.getTexCoordArray(3),osg::Array::BIND_PER_VERTEX);
        geometry.setTexCoordArray(1,NULL);
           geometry.setTexCoordArray(2,NULL);
        geometry.setTexCoordArray(3,NULL);
        }

        }

};
class Redemmer2:public osg::NodeVisitor{

public:
Redemmer2():NodeVisitor(osg::NodeVisitor::TRAVERSE_ALL_CHILDREN){}
      virtual void apply(osg::Geode& geod){

        for(int i=0;i<geod.getNumDrawables();i++){
        /*if(geod.getDrawable(i)->getName().find("Cube")!=std::string::npos){
        geod.removeDrawable(geod.getDrawable(i--));
        }*/

geod.getDrawable(i)->setDataVariance(osg::Object::STATIC);
        }

        }

};
#define WINDOW_WIDTH 1024
#define WINDOW_HEIGHT 1024
#include <osgViewer/CompositeViewer>
#include <osg/Texture3D>
#include <osg/LogicOp>
#include <osg/LineWidth>
#include "osgQtWindowing/osg_deferred.cpp"
using namespace osg;
MainEntry::MainEntry(int &argc,char** argv): QApplication(argc, argv)
{
if(0){///rtt3D

osg::Vec3ui _resolution(128,128,128);
    ref_ptr<osg::Group >root = new osg::Group();
    ref_ptr<osg::Camera >cam = new osg::Camera();
     ref_ptr<osg::Group >InstancingGroup = new osg::Group();
        ref_ptr<Geometry> geom=osg::createTexturedQuadGeometry(Vec3(0,0,0),Vec3(1,0,0),Vec3(0,1,0));

geom->getPrimitiveSet(0)->setNumInstances(128);
geom->getPrimitiveSet(0)->dirty();
    InstancingGroup->addChild(geom);
    cam->addChild(InstancingGroup);
      //create StateSet
    osg::StateSet * ss = InstancingGroup->getOrCreateStateSet();
 ss->setAttributeAndModes(new osg::CullFace(osg::CullFace::FRONT_AND_BACK), osg::StateAttribute::OFF | osg::StateAttribute::OVERRIDE);
    ss->setRenderingHint( osg::StateSet::TRANSPARENT_BIN);
#ifdef GOODCONTOURS
    osg::ref_ptr<osg::LogicOp > xorer = new osg::LogicOp(osg::LogicOp::XOR);
    ss->setAttributeAndModes(xorer, osg::StateAttribute::ON | osg::StateAttribute::OVERRIDE);
#else

	osg::ref_ptr<osg::LogicOp > add = new osg::LogicOp(osg::LogicOp::OR);
	ss->setAttributeAndModes(add, osg::StateAttribute::ON | osg::StateAttribute::OVERRIDE);

	osg::ref_ptr<osg::LineWidth > thickness = new osg::LineWidth();
	thickness->setWidth(5.0f);
	ss->setAttributeAndModes(thickness, osg::StateAttribute::ON | osg::StateAttribute::OVERRIDE);
#endif

    osg::ref_ptr<osg::Program> po = new osg::Program();
    osg::ref_ptr<osg::Shader> fs = new osg::Shader(osg::Shader::FRAGMENT);
    osg::ref_ptr<osg::Shader> vs = new osg::Shader(osg::Shader::VERTEX);
    osg::ref_ptr<osg::Shader> gs = new osg::Shader(osg::Shader::GEOMETRY);
    vs->setShaderSource( "varying int instanceID;\n"
                        "void main(){\n"
                        "instanceID=gl_InstanceID;"
                        "gl_Position= gl_Vertex;}" );
    gs->setShaderSource(  "#extension GL_EXT_geometry_shader4 : enable\n"
                        "varying int instanceID[3];\n"
                        ""
                        "void main(){\n"
                        "float depth=0;\n"
                        ""
                        "//instanceID[0];\n"
                        "depth=(depth+0.5)/128;\n"
                        "for(int i=0;i<3;i++){\n"
                        "gl_Position=vec4(gl_PositionIn[i].xy,0,1);\n"
                        "gl_Layer=0;//instanceID[i];\n"
                        "EmitVertex();\n"
                        "}\n"
                        "EndPrimitive();\n"
                        "}\n" );
    fs->setShaderSource( "void main(){"

                        "gl_FragColor=vec4(1,1,1,1);"
                        "}"
                        "" );
  //  po->addShader(classicInstancingGeometryShader);
   // po->addShader(classicInstancingVertexShader);
    po->addShader(vs);
    po->addShader(gs);
    po->addShader(fs);

    po->setParameter(GL_GEOMETRY_VERTICES_OUT_EXT, 3);
    po->setParameter(GL_GEOMETRY_INPUT_TYPE_EXT, GL_TRIANGLES);
    po->setParameter(GL_GEOMETRY_OUTPUT_TYPE_EXT, GL_TRIANGLE_STRIP);
    ss->setAttributeAndModes(po, osg::StateAttribute::ON  | osg::StateAttribute::OVERRIDE);

  /*  _rdx = new osg::Uniform();
    _rdx->setName("rdx");
    _rdx->setType(osg::Uniform::FLOAT_VEC3);
 //   _rdx->set(osg::Vec3f(_resolution.x(), _resolution.y(), _resolution.z()));
    ss->addUniform(_rdx);*/
    ss->setMode(GL_DEPTH_TEST, osg::StateAttribute::OFF | osg::StateAttribute::OVERRIDE);
    ss->setMode(GL_BLEND, osg::StateAttribute::OFF | osg::StateAttribute::OVERRIDE);
    ss->setMode(GL_LIGHTING, osg::StateAttribute::OFF | osg::StateAttribute::OVERRIDE);
    ss->setMode(GL_COLOR_LOGIC_OP, osg::StateAttribute::ON | osg::StateAttribute::OVERRIDE);
    ref_ptr<osg::Texture3D > _voxels = new osg::Texture3D();

    	        _voxels->setInternalFormat(GL_RGBA16F_ARB);
 	        _voxels->setSourceFormat(GL_RGBA);
       _voxels->setSourceType(GL_FLOAT);

    _voxels->setDataVariance(osg::Texture3D::DYNAMIC);
    _voxels->setFilter(osg::Texture3D::MIN_FILTER, osg::Texture3D::NEAREST);
    _voxels->setFilter(osg::Texture3D::MAG_FILTER, osg::Texture3D::NEAREST);
    /*	_voxels->setBorderColor(osg::Vec4(1.0, 1.0, 1.0, 1.0));
    	_voxels->setWrap(osg::Texture3D::WRAP_S, osg::Texture3D::CLAMP_TO_BORDER);
    	_voxels->setWrap(osg::Texture3D::WRAP_T, osg::Texture3D::CLAMP_TO_BORDER);
    	_voxels->setWrap(osg::Texture3D::WRAP_R, osg::Texture3D::CLAMP_TO_BORDER);*/
    //setCullCallback(new CameraCullCallback(this));
    cam->setClearMask( GL_COLOR_BUFFER_BIT);
    //	setClearMask( GL_COLOR_BUFFER_BIT);
	cam->setClearColor(osg::Vec4(0.0f,0,0,0.0f));
    cam->setComputeNearFarMode(osg::Camera::DO_NOT_COMPUTE_NEAR_FAR);

    // set the camera to render before the main camera.
	cam->setRenderOrder(osg::Camera::PRE_RENDER, 110);
    // tell the camera to use OpenGL frame buffer object where supported.
   cam-> setRenderTargetImplementation(osg::Camera::FRAME_BUFFER_OBJECT);
//setReadBuffer(osg::Camera::COLOR_BUFFER);
	cam->setProjectionResizePolicy(osg::Camera::FIXED);
    cam->setReferenceFrame(osg::Transform::ABSOLUTE_RF);
    cam->setViewMatrix(osg::Matrix::identity());
    cam->setImplicitBufferAttachmentMask( osg::Camera::IMPLICIT_COLOR_BUFFER_ATTACHMENT,osg::Camera::IMPLICIT_COLOR_BUFFER_ATTACHMENT);
  //  ~osg::Camera::IMPLICIT_DEPTH_BUFFER_ATTACHMENT);,
    cam->setAllowEventFocus(false);
    cam->setDrawBuffer(osg::Camera::COLOR_BUFFER0);
    cam->setViewMatrix(osg::Matrix::identity());
  cam->setViewport(0, 0, _resolution.x(), _resolution.y());
    _voxels->setTextureSize(_resolution.x(), _resolution.y(), _resolution.z());
    ///DEBUG
    	float *data = new float[(_resolution.x()* _resolution.y()* _resolution.z()) * 4];
    	//memset(data, 0, sizeof(float)*(_resolution.x()* _resolution.y()* _resolution.z()) * 4);
    	osg::Image *im = new osg::Image();
    	im->setImage(_resolution.x(), _resolution.y(), _resolution.z(),
    		//	GL_RGBA8,
    		//high accuracy but vary costfull
    		GL_RGBA16F_ARB,
    		GL_RGBA,
    		GL_FLOAT, (unsigned char *)data, osg::Image::USE_NEW_DELETE);
    	_voxels->setImage(im);
    ///ENDDEBUG


    //_voxels->dirtyTextureObject();
   cam-> setProjectionMatrix(osg::Matrix::ortho2D(0, 1, 0, 1));
//	setProjectionMatrix(osg::Matrix::ortho2D(0, _resolution.x(), 0, _resolution.y()));

   cam-> attach(osg::Camera::COLOR_BUFFER0, _voxels.get(), 0, osg::Camera::FACE_CONTROLLED_BY_GEOMETRY_SHADER,false);

ref_ptr<Camera> camprincipal=new Camera();
ref_ptr<Geometry> geom2=osg::createTexturedQuadGeometry(Vec3(0,0,0),Vec3(1,0,0),Vec3(0,1,0));
//geom->getPrimitiveSet(0)->setNumInstances(128);
StateSet * ss2=geom2->getOrCreateStateSet();

ref_ptr<Shader> fs2=new Shader(Shader::FRAGMENT);

ref_ptr<Program> po2=new Program();
    fs2->setShaderSource("uniform sampler3D tex;\n"
     "void main(){"

                        "gl_FragColor=texture3D(tex,vec3(gl_TexCoord[0].st,0));"
                        "}"
                        "" );
  //  po->addShader(classicInstancingGeometryShader);
   // po->addShader(classicInstancingVertexShader);
    po2->addShader(fs2);


    ss2->setAttributeAndModes(po2, osg::StateAttribute::ON);


    ss2->setTextureAttributeAndModes(0,_voxels, osg::StateAttribute::ON);

root->addChild(geom2);
camprincipal->setImplicitBufferAttachmentMask( osg::Camera::IMPLICIT_COLOR_BUFFER_ATTACHMENT| osg::Camera::IMPLICIT_DEPTH_BUFFER_ATTACHMENT,
osg::Camera::IMPLICIT_COLOR_BUFFER_ATTACHMENT| osg::Camera::IMPLICIT_DEPTH_BUFFER_ATTACHMENT);



root->addChild(cam);


osgDB::writeNodeFile(*root.get(),"rtt3D2.osgb");


osg::ref_ptr<osg::Node> n=osgDB::readNodeFile("rtt3D2.osgb");



osgViewer::CompositeViewer viewer;
viewer.addView(new osgViewer::View);
viewer.getView(0)->setSceneData(n);
viewer.getView(0)->setUpViewInWindow(  0,0,WINDOW_WIDTH,WINDOW_HEIGHT );

viewer.realize();
viewer.run();
}
if(0){///remove boxes
osg::ref_ptr<osg::Node> n=osgDB::readNodeFile("arg.osgb");
Redemmer2 v;
n->accept(v);

osgDB::writeNodeFile(*n,"arg.osgb");

}
if(0){///deferred test
//go();
osgViewer::Viewer viewer;
osg::ref_ptr<osg::Node> load=osgDB::readNodeFile("cessna.osgt");
osg::ref_ptr<osg::Group> root=new osg::Group();
osg::ref_ptr<osg::Group> gr1=new osg::Group();
osg::ref_ptr<osg::Group> gr2=new osg::Group();
osg::ref_ptr<osg::Camera> camrtt=new osg::Camera();
osg::ref_ptr<osg::Camera> camrect=new osg::Camera();
osg::ref_ptr<osg::Image> im=new osg::Image();



osg::ref_ptr<osg::Texture2D> tex=createRenderTexture(1024,1024);//new osg::Texture2D(im);
//im->allocateImage(1024,1024,1,GL_RGBA,GL_UNSIGNED_INT);
//im->setInternalTextureFormat(GL_RGBA8);

//tex->setTextureSize(1024, 1024);
//tex->setInternalFormat(GL_RGBA8);
//tex->setFilter(osg::Texture2D::MIN_FILTER,osg::Texture2D::NEAREST);
//tex->setFilter(osg::Texture2D::MAG_FILTER,osg::Texture2D::NEAREST);


camrect->setClearMask(GL_DEPTH_BUFFER_BIT|GL_COLOR_BUFFER_BIT|GL_STENCIL_BUFFER_BIT);
camrect->setClearColor(osg::Vec4(1,0,0,1));
camrect->setAllowEventFocus(false);
camrect->setRenderTargetImplementation(osg::Camera::FRAME_BUFFER);

camrect->setRenderOrder(osg::Camera::POST_RENDER);
//camrect->setProjectionMatrix(osg::Matrix::ortho2D(0,1,0,1));
camrect->setReferenceFrame(osg::Transform::ABSOLUTE_RF);
	//	Set viewport
	camrect->setViewport(0,0,WINDOW_WIDTH,WINDOW_HEIGHT);
	//	Set projection
	camrect->setProjectionMatrixAsOrtho2D(0,1024,0,1024);
	//	Set view
	camrect->setReferenceFrame(osg::Transform::ABSOLUTE_RF);
	camrect->setViewMatrix(osg::Matrix::identity());
	//	Camera hints
	camrect->setComputeNearFarMode(osg::CullSettings::DO_NOT_COMPUTE_NEAR_FAR);
//camrect=createNormalCamera();

osg::ref_ptr<osg::Geode> geode=new osg::Geode();
osg::ref_ptr<osg::Geometry> geom=new osg::Geometry();
geom=osg:: createTexturedQuadGeometry(osg::Vec3(0,0,0),osg::Vec3(1024,0,0),osg::Vec3(0,1024,0));

geode->addDrawable(geom);//geode=createPlaneGeode( 0,	0, 1024, 1024);
camrect->addChild(geode);
//camrect->addChild(load);

//camrtt->addChild(geode);
osg::StateSet* ss=geode->getOrCreateStateSet();
osg::ref_ptr<osg::Depth> d=new osg::Depth();
osg::ref_ptr<osg::Program> prog=new osg::Program();
osg::ref_ptr<osg::Shader> frag=new osg::Shader();
frag->setType(osg::Shader::FRAGMENT);
frag->setShaderSource("uniform sampler2D tex;void main(){gl_FragColor=0.5+texture2D(tex,gl_TexCoord[0].st);}");
prog->addShader(frag);
ss->setAttributeAndModes(prog,osg::StateAttribute::ON|osg::StateAttribute::OVERRIDE);
d->setWriteMask (false);
//ss->setAttribute(d);
ss->setTextureAttributeAndModes(0,tex,osg::StateAttribute::ON|osg::StateAttribute::OVERRIDE);
ss->setMode(GL_DEPTH_TEST,osg::StateAttribute::OFF|osg::StateAttribute::OVERRIDE);
ss->setMode(GL_LIGHTING,osg::StateAttribute::OFF|osg::StateAttribute::OVERRIDE);


camrtt->setClearMask(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT|GL_STENCIL_BUFFER_BIT);
//camrtt->setClearColor(osg::Vec4(0,1,0,0));
camrtt->setRenderTargetImplementation(osg::Camera::FRAME_BUFFER_OBJECT);
camrtt->setRenderOrder(osg::Camera::PRE_RENDER);
camrtt->attach(osg::Camera::BufferComponent(osg::Camera::COLOR_BUFFER), tex.get());
	//camrtt->setComputeNearFarMode(osg::CullSettings::DO_NOT_COMPUTE_NEAR_FAR);

camrtt->setViewport(0,1024,0,1024);//-512,512,-512,512);//1024,0,1024);


 camrtt->setRenderOrder(osg::Camera::PRE_RENDER);
	//	Tell the camera to use OpenGL frame buffer object where supported.
    camrtt->setRenderTargetImplementation(osg::Camera::FRAME_BUFFER_OBJECT);
	//	Attack RTT textures to Camera
	//camera->attach(osg::Camera::DEPTH_BUFFER, rttDepthTexture  );
	camrtt->attach(osg::Camera::COLOR_BUFFER0,tex);
	//camera->attach(osg::Camera::COLOR_BUFFER1,rttColorTexture02);
	//camera->attach(osg::Camera::COLOR_BUFFER2,rttColorTexture03);
	//	Set up the background color and clear mask.
	camrtt->setClearColor(osg::Vec4(0.0f,0.0f,0.0f,1.0f));
    camrtt->setClearMask(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

	//	Camera hints
	camrtt->setComputeNearFarMode(osg::CullSettings::DO_NOT_COMPUTE_NEAR_FAR);
 camrtt->setViewport(0,0,1024,1024);

    osg::ref_ptr<osg::MatrixTransform > modelTransform=new osg::MatrixTransform;
    modelTransform->addChild(load);
	//camrtt->addChild(modelTransform);

	osg::NodeCallback* nc = new osg::AnimationPathCallback(modelTransform->getBound().center(),osg::Vec3(0.0f,0.0f,1.0f),osg::inDegrees(45.0f));
    modelTransform->setUpdateCallback(nc);
//camrtt->addChild(modelTransform);
//viewer.addSlave(camrect,false);
camrtt->getOrCreateStateSet()->setGlobalDefaults();
gr1->getOrCreateStateSet()->setAttributeAndModes(new osg::Program(),osg::StateAttribute::ON|osg::StateAttribute::OVERRIDE);
gr2->getOrCreateStateSet()->setAttributeAndModes(new osg::Program(),osg::StateAttribute::ON|osg::StateAttribute::OVERRIDE);
//viewer.addSlave(camrtt,false);

root->addChild(camrtt);

root->addChild(camrect);
camrtt->addChild(gr1);
camrtt->addChild(gr2);
gr1->addChild(modelTransform);

//viewer.setLightingMode(osg::View::NO_LIGHT);

osgDB::writeNodeFile(*root.get(),"fok.osgb");

viewer.setSceneData(root);
viewer.setUpViewInWindow(  0,0,WINDOW_WIDTH,WINDOW_HEIGHT );
{
        osg::ref_ptr<osgGA::KeySwitchMatrixManipulator> keyswitchManipulator = new osgGA::KeySwitchMatrixManipulator;

        keyswitchManipulator->addMatrixManipulator( '1', "Trackball", new osgGA::TrackballManipulator() );
      //  keyswitchManipulator->addMatrixManipulator( '2', "Flight", new osgGA::FlightManipulator() );
//        keyswitchManipulator->addMatrixManipulator( '3', "Drive", new osgGA::DriveManipulator() );
//        keyswitchManipulator->addMatrixManipulator( '4', "Terrain", new osgGA::TerrainManipulator() );
        keyswitchManipulator->addMatrixManipulator( '5', "Orbit", new osgGA::OrbitManipulator() );
        keyswitchManipulator->addMatrixManipulator( '6', "FirstPerson", new osgGA::FirstPersonManipulator() );



        viewer.setCameraManipulator( keyswitchManipulator.get() );
    }

viewer.run();
}

if(0){

osg::ref_ptr<osg::Node> n=osgDB::readNodeFile("arg2.osgb");
if(n){
Redemmer nv;
n->setUpdateCallback(NULL);
n->accept(nv);
osgDB::writeNodeFile(*n,"arg3.osgb");

}

}
    std::string confmenu;
    if (argc>1)confmenu=argv[1];
    gui=new MainWindow(confmenu);
    gui->setParent(0);
    setQuitOnLastWindowClosed(true);
    connect(this, SIGNAL(lastWindowClosed()), this, SLOT(quit()));

    /*	gui->showFullScreen ();*/
    gui->show();

}
void MainEntry:: killit()
{
    // delete gui;
    std::cout<<"killit"<<std::endl;
    //
    this->closeAllWindows();
    quit();
}

class myFirstPersonManipulator : public osgGA::FirstPersonManipulator
{
protected:
    virtual bool handle( const osgGA::GUIEventAdapter& ea, osgGA::GUIActionAdapter& us )
    {
        /*  switch(ea.getEventType())
        {*/
        //case(osgGA::GUIEventAdapter::KEYDOWN):

        switch(ea.getKey())
        {
        case osgGA::GUIEventAdapter::KEY_Up :

            moveForward(0.1);
            break;
        case osgGA::GUIEventAdapter::KEY_Down :

            moveForward(-0.1);
            break;
        case osgGA::GUIEventAdapter::KEY_Left :

            moveRight(-0.1);
            break;
        case osgGA::GUIEventAdapter::KEY_Right :

            moveRight(0.1);
            break;
        default:
            break;
        }

        /* default:
         }*/
        return osgGA::FirstPersonManipulator::handle(ea,us);
    }
};
int main(int argc, char *argv[])
{



#ifdef OBFUSCATESHADERTM
    LOAD(advect_frag);

//	LOAD(radvect_frag);
//	LOAD(MacCormack_frag);
//	LOAD(boundaries);
    //LOAD(boundary);
    LOAD(divergenceandcopy_frag);
    LOAD(poisson_frag);
    LOAD(splat_frag);
    LOAD(gradsub_frag);
    LOAD(copyscalar_frag);
#else
//	ProcessPass * p=new ProcessPass("boundaries.frag",1,1);
//	ProcessPass * gp=new ProcessPass("boundary.frag",1,1);
#endif
    //	QApplication a( argc, argv );
    // use an ArgumentParser object to manage the program arguments.
    osg::ArgumentParser arguments(&argc,argv);

    // set up the usage document, in case we need to print out how to use this program.
    arguments.getApplicationUsage()->setDescription(arguments.getApplicationName()+" is the example which demonstrates Flo simulation using rendertotesture.");
    arguments.getApplicationUsage()->setCommandLineUsage(arguments.getApplicationName()+" [options] --startim start_image --nbblindpass nb_blind_pass --nbblock nb_blok");
    arguments.getApplicationUsage()->addCommandLineOption("-h or --help","Display this information");
    arguments.getApplicationUsage()->addCommandLineOption("--startim","The initial image to seed the game of life with.");
    arguments.getApplicationUsage()->addCommandLineOption("--nbblindpass","Thenumber of render call before to check convergence");
    arguments.getApplicationUsage()->addCommandLineOption("--nbblock","RenderSurface tesselation index ( number of block composing the entire image)");
    // if user request help write it out to cout.
    if (arguments.read("-h") || arguments.read("--help"))
    {
        arguments.getApplicationUsage()->write(std::cout);
        return 1;
    }

    std::string startName("evil_smiley.bmp");
    while(arguments.read("--startim", startName)) {}

    if (startName == "")
    {
        arguments.getApplicationUsage()->write(std::cout);
        return 1;
    }

    string nbpass,nbblock,snbdiv4stat;

    int nbloop=0,nbblocks,nbdiv4stat;

    //while(arguments.read("--nbblindpass", nbpass)) {}

    //istringstream streamloop(nbpass);
    //streamloop>>nbloop;
    //if (nbpass == ""||( streamloop.bad())) {
    //	nbloop=0;
    //}

    //// load the image
    //while(arguments.read("--nbblock", nbblock)) {}
    //istringstream streambl(nbblock);
    //streambl>>nbblocks;
    //if (nbblock == ""|| streambl.bad()) {
    //	cout<<"no nbblock"<<endl;
    //
    //	arguments.getApplicationUsage()->write(std::cout);
    //	return 1;
    //}
    //// load the image
    //while(arguments.read("--nbdiv4stat", snbdiv4stat)) {}
    //istringstream streambrl(snbdiv4stat);
    //streambrl>>nbdiv4stat;
    //if (snbdiv4stat == ""|| streambrl.bad()) {
    //	cout<<"no stat assume to be be no statitical CPU update"<<endl;
    //	nbdiv4stat=0;
    //

    //}

    /*	osg::ref_ptr<osg::Image> startIm = osgDB::readImageFile(startName);

    	if (!startIm) {
    		std::cout << "Could not load start image.\n";
    		return(1);
    	}*/
    //QTEveLifeMainWindowsGUI gui;
    // QApplication app( argc, argv );



    ///////////////////////////////////////////////////////////////////////////
    //  app.connect( &app, SIGNAL(lastWindowClosed()), &app, SLOT(quit()) );


    //   testMainWin* myMainWindow = new testMainWin;









    const int width(800),height( 600);
    /* const std::string version( "3.1" );
     osg::ref_ptr< osg::GraphicsContext::Traits > traits = new osg::GraphicsContext::Traits();
     traits->x = 20; traits->y = 30;
     traits->width = width; traits->height = height;
     traits->windowDecoration = false;
     traits->doubleBuffer = true;
     traits->glContextVersion = version;
    gc= osg::GraphicsContext::createGraphicsContext( traits.get() );
     if( !gc.valid() )
     {
         osg::notify( osg::FATAL ) << "Unable to create OpenGL v" << version << " context." << std::endl;
         return( 1 );
     }

     // Create a Camera that uses the above OpenGL context.
     osg::Camera* cam = new osg::Camera;
     cam->setGraphicsContext( gc.get() );
     // Must set perspective projection for fovy and aspect.
     cam->setProjectionMatrix( osg::Matrix::perspective( 30., (double)width/(double)height, 1., 5 ) );
     // Unlike OpenGL, OSG viewport does *not* default to window dimensions.
     cam->setViewport( new osg::Viewport( 0, 0, width, height ) );*/


    //QApplication app( argc, argv );
//
// //  osg::Node* scene = osgDB::readNodeFile("cow.osg");
//   QWindow win;
    //win.setGeometry( 100, 100, 800, 600 );
//   ViewerWidget* widget = new ViewerWidget(cam, scene,&win);
//   widget->setGeometry( 100, 100, 800, 600 );
//   win.show();
//   return app.exec();




#ifdef MYUSEQT
#ifdef MYUSEQTQUICK

    MainEntry a(argc,argv);

    return a.exec();

#else// MYUSEQTQUICK

    // Create application object
    QGuiApplication app(argc, argv);

    QtToOSGView* win=new QtToOSGView;
    //((QtQtToOSGView*)win)->setDockBar(_dock);
//	container = QWidget::createWindowContainer(win, 	ui->centralWidget);
    //container->setMinimumSize(800, 600);
    //container->setMaximumSize(10000, 6000);
    //container->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    //container->setFocusPolicy(Qt::TabFocus);
    // win->setSource(QUrl("main.qml"));




    //// Tell Qt we will use OpenGL for this window
    win-> setSurfaceType(QSurface::OpenGLSurface );

    // Specify the format and create platform-specific surface
    QSurfaceFormat format;
    format.setDepthBufferSize( 24 );
    format.setStencilBufferSize( 8 );
    format.setMajorVersion( 4 );
    format.setMinorVersion( 3 );
    format.setSamples( 1 );

    format.setProfile( QSurfaceFormat::CompatibilityProfile );
    win-> setFormat( format );
    win-> create();

    // Create an OpenGL context
    QOpenGLContext*   m_context = new QOpenGLContext;
    m_context->setFormat( format );
    m_context->create();

    // Make the context current on this window
    m_context->makeCurrent( win );
    QOpenGLVersionProfile profil;
    profil.setVersion(3,1);
    // Obtain a functions object and resolve all entry points
    // m_funcs is declared as: QOpenGLFunctions_4_3_Core* m_funcs
    //   QOpenGLVersionProfile::;
    QOpenGLFunctions_3_1 *  m_funcs = m_context->versionFunctions<QOpenGLFunctions_3_1>();//versionFunctions(profil);
    if ( !m_funcs )
    {
        qWarning( "Could not obtain OpenGL versions object" );
        exit( 1 );
    }
    m_funcs->initializeOpenGLFunctions();	/* */

    osg::ref_ptr<osgViewer::CompositeViewer> compositeViewer ;




    const char *uri = "osgQtQuick";
    osgQtQuick::registerTypes(uri);
    const char *myuri = "mySimulationNode";
    const char *myuri2 = "ColorComponentsNode";
    int maj = 1, min = 0;
    qmlRegisterType<OSGSimulationNode>(myuri, maj, min, "OSGSimulationNode");
    qmlRegisterType<ColorComponents>(myuri2, maj, min, "ColorComponents");
    //win->resize(width, height);
    win->setSource(QUrl::fromLocalFile("myGUI.qml"));//main.qml"));
    win->  setManagedview(osgQtQuick::QuickWindowViewer::instance(win)->compositeViewer()->getView(0));

    win->show();
    return app.exec();
    compositeViewer=osgQtQuick::QuickWindowViewer::instance(win)->compositeViewer();
    gc=  osgQtQuick::QuickWindowViewer::instance(win)-> graphicsContext();

    osg::Camera*   cam=new osg::Camera();
    cam->setGraphicsContext(gc);
//win->setResizeMode(QQuickView::SizeRootObjectToView);


    osg::ref_ptr<osgViewer::View > nview=new osgViewer::View();





    //osg::ref_ptr<osg::Image> startIm = osgDB::readImageFile("evil_smileydark.jpg");
    osg::Group* scene = createScene(startIm.get());

    // QSGNode node=win.findChild<QSGNode>("Viewport");

    // Must set perspective projection for fovy and aspect.
    cam->setProjectionMatrix( osg::Matrix::perspective( 30., (double)win->width()/(double)win->height(), 1., 500 ) );
    // Unlike OpenGL, OSG viewport does *not* default to window dimensions.
    cam->setViewport( new osg::Viewport( 0, 0, win->width(),win->height() ) );

    cam->setClearColor(osg::Vec4(0.5,0,0.5,1));
    nview->setCamera(cam);
    osgGA::TrackballManipulator * orb=new 	osgGA::TrackballManipulator;
    //	osgGA::FirstPersonManipulator * orb=new 	myFirstPersonManipulator;
    nview->setCameraManipulator( orb );

    //nview->setCamera(new osg::Camera);

    //osg::Node *lavach=osgDB::readNodeFile("cessna.osg");


    nview->setLightingMode(osg::View::NO_LIGHT);
//nview->addEventHandler(new BrushHandler(splatter2,splatter));
    osg::Node *lavach=osgDB::readNodeFile("cessna.osg");
    //scene->addChild(lavach);
    nview->setSceneData(scene);

    win->  setManagedview(nview);

    compositeViewer->addView(nview);

    //compositeViewer-> setCameraWithFocus(nview->getCamera());

    ////nview->addEventHandler(new osgViewer::WindowSizeHandler());
    ////nview->addEventHandler(new osgViewer::ThreadingHandler());

    compositeViewer->realize();    // Start loop

//	nview->getEventQueue()->keyPress(osgGA::GUIEventAdapter::KEY_S);

    win->show();
    return app.exec();

#endif
#else

    osg::ref_ptr<osgViewer::CompositeViewer> compositeViewer= new osgViewer::CompositeViewer ;
    osg::ref_ptr<osgViewer::View > nview=new osgViewer::View();
    compositeViewer->setThreadingModel(osgViewer::ViewerBase::SingleThreaded);


    const std::string version( "3.1" );
    osg::ref_ptr< osg::GraphicsContext::Traits > traits = new osg::GraphicsContext::Traits();
    traits->x = 20;
    traits->y = 30;
    traits->width = width;
    traits->height = height;
    traits->windowDecoration = true;
    traits->doubleBuffer = true;
    traits->glContextVersion = version;
    traits->setInheritedWindowPixelFormat=true;
    gc= osg::GraphicsContext::createGraphicsContext( traits.get() );
    if( !gc.valid() )
    {
        osg::notify( osg::FATAL ) << "Unable to create OpenGL v" << version << " context." << std::endl;
        return( 1 );
    }

    std::cout << "Cview creat.\n";
    osg::Camera*   cam=new osg::Camera();
    cam->setGraphicsContext(gc);
    // Must set perspective projection for fovy and aspect.
    cam->setProjectionMatrix( osg::Matrix::perspective( 30., (double)width/(double)height, 1., 500 ) );
    // Unlike OpenGL, OSG viewport does *not* default to window dimensions.
    cam->setViewport( new osg::Viewport( 0, 0,width,height ) );






    cam->setClearColor(osg::Vec4(0.5,0,0.5,1));
    nview->setCamera(cam);
    osg::Group *scene=createScene(startIm);
    osg::Node *lavach=osgDB::readNodeFile("cessna.osg");
    scene->addChild(lavach);
    //nview->setSceneData(lavach);
    nview->setSceneData( scene );


    osgGA::TrackballManipulator* f=new osgGA::TrackballManipulator();

    nview->setCameraManipulator( f);
    //nview->addEventHandler(new osgViewer::StatsHandler);




//nview->setSceneData(scene);
    //nview->setLightingMode(osg::View::NO_LIGHT);


    nview->addEventHandler(new osgViewer::WindowSizeHandler());
    nview->addEventHandler(new osgViewer::ThreadingHandler());
    //nview->addEventHandler(new BrushHandler(splatter2,splatter));
    //nview->setCameraManipulator( new osgGA::AnimationPathManipulator  ());


    int cpt=0;
    osg::Timer timer;
    osg::Timer_t t1,t2;
    timer.setStartTick();
    t1=timer.tick();




    compositeViewer->addView(nview);

    compositeViewer->setCameraWithFocus(nview->getCamera());


    compositeViewer->realize();


    compositeViewer->run();
    while(!compositeViewer->done())
    {

        compositeViewer->advance(0.03);
        compositeViewer->updateTraversal();

        //compositeViewer->cull();
        //nview->getCamera()->setViewMatrix(osg::Matrixf::identity());
        //	osgUtil::makeContextCurrent( Context0 );
        //v->draw();
        //viewer.getScene()->
        //viewer.prerenderingTraversals();
        compositeViewer->frame();
        // flip the textures after we've completed a frame
        //  golpass->flip();
        // attach the proper output to view
        /*geomss->setTextureAttributeAndModes(0,
        golpass->getOutputTexture(),
        osg::StateAttribute::ON);*/
        cpt++;
        if(cpt==903)
        {
            t2=timer.tick();
            std::cout<<timer.delta_s(t1,t2);
        }
    }


    return 0;
#endif
}
