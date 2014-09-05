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

//#include "grohack.cpp"
/*#include "ProcessPassFBODIY.h"
#include "FIMPass.h"
*/


#include <osg/BufferIndexBinding>
#include <osg/ImageUtils>
#include <osgVolume/Volume>
#include <osgVolume/VolumeTile>

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


class myTrackballManipulator: public osgGA::TrackballManipulator{
public:
	myTrackballManipulator():osgGA::TrackballManipulator(){}

	virtual bool handle( const osgGA::GUIEventAdapter& ea, osgGA::GUIActionAdapter& us )
	{return false;};
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
    { _viewer.frame(); }

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





#include "osgQtWindowing/mainwindow.h"
#include "UIEditorMAIN.h"

 MainEntry::MainEntry(int argc,char** argv): QApplication(argc, argv){
	   ;
    gui=new MainWindow();
	gui->setParent(0);
	setQuitOnLastWindowClosed(true);
	    connect(this, SIGNAL(lastWindowClosed()), this, SLOT(quit()));

 /*	gui->showFullScreen ();*/
 gui->show();

			  }
 void MainEntry:: killit(){
	// delete gui;
	 std::cout<<"killit"<<std::endl;
	//
	 this->closeAllWindows(); quit();
 }

 class myFirstPersonManipulator : public osgGA::FirstPersonManipulator{
	protected:
	 virtual bool handle( const osgGA::GUIEventAdapter& ea, osgGA::GUIActionAdapter& us ){
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

	if (startName == "") {
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
	   if ( !m_funcs ) {
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

	 	win->show();   return app.exec();
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

 	win->show();   return app.exec();

#endif
#else

	osg::ref_ptr<osgViewer::CompositeViewer> compositeViewer= new osgViewer::CompositeViewer ;
		osg::ref_ptr<osgViewer::View > nview=new osgViewer::View();
        compositeViewer->setThreadingModel(osgViewer::ViewerBase::SingleThreaded);


	 const std::string version( "3.1" );
    osg::ref_ptr< osg::GraphicsContext::Traits > traits = new osg::GraphicsContext::Traits();
    traits->x = 20; traits->y = 30;
    traits->width = width; traits->height = height;
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
		if(cpt==903){t2=timer.tick();
		std::cout<<timer.delta_s(t1,t2);
		}
	}


	return 0;
#endif
}
