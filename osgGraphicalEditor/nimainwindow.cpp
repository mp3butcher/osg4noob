#include "mainwindow.h"
#include "src/UIEditor.hpp"
#include <MetaQQuickLibraryRegistry.h>
#include <MetaLibraryRegistry.h>
#include <osgViewer/CompositeViewer>
#include "ui_mainwindow.h"
//#include <UIEditor_pmoc.hpp>
//#include "../colorcomponentsplugin/colorcomponents.h"
//#include "../OSGSimulationNode.hpp"
#include <osg/Vec4>
#include <osg/Geometry>
#include <osg/Geode>
#include <osg/TextureRectangle>
#include "QtToOSGView.h"
#include <osgGA/TrackballManipulator>

#include <osgGA/FirstPersonManipulator>
#include <osgDB/FileUtils>
#include <osgDB/ReadFile>
#include <sstream>

#include <osgViewer/ViewerEventHandlers>

#include <iostream>
#ifdef WIN32
#include <direct.h>
#define getcwd _getcwd
#else
#include <unistd.h>
// #define getcwd getcwd
#endif


#include <QGuiApplication>
#include <QtWidgets/QApplication>
#include <QtGui/QWindow>
#include <QtGui/qopenglcontext.h>
#include <QOpenGLFunctions_2_0>
#include <QOpenGLFunctions_3_1>
#include <qtimer.h>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QSlider>
#include <QtWidgets/QLabel>
#include <QtWidgets/QGraphicsOpacityEffect>
#include <osgQt/GraphicsWindowQt>
#include "osgQtQuick/Utility.hpp"
#include "osgQtQuick/QuickWindowViewer.hpp"
#include <qsgnode.h>
#include <QtQuick/QQuickView>
#include <QtQuick/QQuickItem>
#include <QtQml/QQmlEngine>
#include <QtQml/QQmlComponent>
#include <osg/BufferIndexBinding>
#include <osg/ImageUtils>
#include <osgVolume/Volume>
#include <osgVolume/VolumeTile>
#include <osgVolume/FixedFunctionTechnique>
//#include "../OSGVolumetest.h"
using namespace pmoc;
class myFirstPersonManipulator : public osgGA::FirstPersonManipulator
{
public:
    myFirstPersonManipulator():osgGA::FirstPersonManipulator()
    {
        setAllowThrow(false);
        this->setHomePosition(osg::Vec3(0.5,-0.2,-0.5),osg::Vec3(0.5,0.5,0),osg::Vec3(0,0,1));
        //this->setPosition(osg::Vec3(0,0,0));
    }
protected:
    //bool performMovementLeftMouseButton( const double /*eventTimeDelta*/, const double dx, const double dy )
    //{   // world up vector
    //	osg::CoordinateFrame coordinateFrame = getCoordinateFrame( _eye );	osg::Vec3d localUp = getUpVector( coordinateFrame );
    //	rotateYawPitch( _rotation, dx*100, dy*100, localUp );//hack rotation x100
    //	return true;
    //}

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
static osg::GraphicsContext * gc ;
using namespace std;
/*
void MyDock::paintEvent(QPaintEvent*e)
{


    QDockWidget::paintEvent(e);
}
//osg::ref_ptr<osg::StateSet> geomss;  stateset where we can attach textures
QWidget* MainWindow::createDockBar()
{
    MyDock*	  dockWidget = new MyDock();
    //	QGraphicsOpacityEffect * effect = new QGraphicsOpacityEffect(dockWidget);
    //effect->setOpacity(0.5);
    //dockWidget->setGraphicsEffect(effect);

    dockWidget->setObjectName(QStringLiteral("dockWidget"));
    QWidget* dockWidgetContents = new QWidget();
    QVBoxLayout *verticalLayout_4 = new QVBoxLayout(dockWidgetContents);
    verticalLayout_4->setSpacing(6);
    dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));

    //   verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));

    //   verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
    {
        QHBoxLayout * horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        //      horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        QLabel * label = new QLabel(dockWidgetContents);
        label->setObjectName(QStringLiteral("label"));
        label->setText("slider test");
        horizontalLayout_3->addWidget(label);

        QSlider*   horizontalSlider = new QSlider(dockWidgetContents);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        connect( horizontalSlider, SIGNAL(valueChanged(int)), this, SLOT(updateTest(int)) );

        horizontalLayout_3->addWidget(horizontalSlider);


        verticalLayout_4->addLayout(horizontalLayout_3);
    }
    {
        QHBoxLayout * horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        //      horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        QLabel * label = new QLabel(dockWidgetContents);
        label->setObjectName(QStringLiteral("label2"));
        label->setText("slider2 test");
        horizontalLayout_3->addWidget(label);

        QPushButton *   push = new QPushButton(dockWidgetContents);
        push->setObjectName(QStringLiteral("push"));
        push->setText("add sim node");

        connect( push, SIGNAL(pressed()), this, SLOT(addDangerousGeode()) );

        horizontalLayout_3->addWidget(push);


        verticalLayout_4->addLayout(horizontalLayout_3);
    }

    dockWidget->setWidget(dockWidgetContents);
    return dockWidget;
}

*/
class QtRaiserCallBack : public osg::NodeCallback
{
    std::vector<QWidget*> toraise;
public:
    void addWidgetToRaise(QWidget*q)
    {
        toraise.push_back(q);
    }


    /** Callback method called by the NodeVisitor when visiting a node.*/
    virtual void operator()(osg::Node* node, osg::NodeVisitor* nv)
    {
        /*	for(std::vector<QWidget*>::iterator i = toraise.begin();i!=toraise.end();i++)
        (*i)->hide();*/
        for(std::vector<QWidget*>::iterator i = toraise.begin(); i!=toraise.end(); i++)
            (*i)->raise();
    }
};


//  void MainWindow::resizeEvent(QResizeEvent *event){
//        QSize s=event->size();
//        int width(s.width()),height( s.height()	);
//		std::cout <<"resize"<<std::endl;
////		ui->centralWidget->resize(s);
//            //reset view camera andit self
//            //managedview->getCamera()->setViewport(0,0,width,height);
//
//   // 	managedview->getCamera()->setProjectionMatrix( osg::Matrix::perspective( 30., (double)width/(double)height, 1., 500 ) );
//      //  resize(width,height);
//	//	QWindow::resizeEvent(event);
//    }
//BUG: Seams like mainwindow miss some  events....
void MainWindow::mouseMoveEvent(QMouseEvent * event) {
	bool menuVisible = (event->pos().y())<10;
	//ui->menuBar->setVisible(menuVisible);
	//	qDebug() << "menubar:" << event->pos().y();

}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
 	const int width(1200),height( 900);
	osgDB::FilePathList path=osgDB::getDataFilePathList();
	char cCurrentPath[FILENAME_MAX];
	if (!getcwd(cCurrentPath, sizeof(cCurrentPath)))
	{
		std::cout<<"problem reading current directory"<<std::endl;
	}
	cCurrentPath[sizeof(cCurrentPath) - 1] = '\0';
	std::string curdir(cCurrentPath);
	path.push_back( curdir);
	curdir+="/PlugIns";
	path.push_back( curdir);
	osgDB::setDataFilePathList(path);



	ui->setupUi(this);
	//resize(800,600);
	//this->setMouseTracking(true);


	setMinimumSize(800, 600);
	setMaximumSize(10000, 6000);
	setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);

	win=new QtToOSGView;
	//	((QtQtToOSGView*)win)->setDockBar(_dock);
	//this->setAcceptedMouseButtons(Qt::AllButtons);;
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

	format.setProfile( QSurfaceFormat::CompatibilityProfile );//CoreProfile );
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


/*
    	osgDB::FilePathList npath = pmoc::MetaLibraryRegistry::instance()->getLibraryFilePathList();
    	osgDB::FilePathList qpath = pmoc::MetaLibraryRegistry::instance()->getLibraryFilePathList();

    #ifdef WIN32
    	npath.push_front("D:\\SRC\\osgCastWizard\\EditorGenerator2\\src\\CPPContextModules\\osg\\Debug");
    	npath.push_front("D:\\SRC\\osgCastWizard\\EditorGenerator2\\src\\UIEditorModules\\osg\\Debug");
    #else
    	npath.push_front("/home/pascal/SRC/osgCastWizard/EditorGenerator2/src/CPPContextModules/osg/");
    	qpath.push_front("/home/pascal/SRC/osgCastWizard/EditorGenerator2/src/UIEditorModules/osg/");
    #endif
    	 pmoc::MetaLibraryRegistry::instance()->setLibraryFilePathList(npath);
    	 pmoc::MetaQQuickLibraryRegistry::instance()->setLibraryFilePathList(qpath);
*/
    	 	MetaLibrary *lib=pmoc::MetaLibraryRegistry::instance()->getMetaLibraryForNamespace("osgUtil");
    	 	MetaQQuickLibrary *Qlib=pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickLibraryForNamespace("osgUtil");


/*

    	osg::ref_ptr<osgDB::Options> opt=new osgDB::Options();
    	osg::ref_ptr<osgDB::Options> opt2=new osgDB::Options();
    		std::string metaosg=pmoc::MetaLibraryRegistry::instance()->findLibraryFile(
    #ifdef WIN32
    		"Module_osg_MetaLibrary.dll"
    		#else
    			"libModule_osg_MetaLibrary.so"
    #endif
    		,opt2,osgDB::CASE_SENSITIVE);
    MetaLibraryRegistry::instance()->loadLibrary(metaosg);
    //MetaLibraryRegistry::instance()->closeLibrary(metaosg);


    std::string metaQQosg=MetaQQuickLibraryRegistry::instance()->findLibraryFile(
    #ifdef WIN32
    		"Module_osg_MetaQQuickLibrary.dll"
    		#else
    			"libModule_osg_QQuickLibrary.so"
    #endif
    		,opt,osgDB::CASE_SENSITIVE);

    		MetaQQuickLibraryRegistry::instance()->loadLibrary(metaQQosg);
    		//MetaQQuickLibraryRegistry::instance()->closeLibrary(metaQQosg);
*/

    	pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::Geometry");

    	pmoc::Instance inst=cl->createInstance();
    if(inst.isValid())
    cout<<"OK"<<endl;
    else cout<<"PAS OK"<<endl;



    	pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::Geometry");

    	QQuickItem* qitem=Qcl->getGuiComponent(win,inst);

    const char *uri = "osgQtQuick";

    osgQtQuick::registerTypes(uri);
    const char *myuri0 = "myQPlot";

    const char *myuri = "mySimulationNode";
    const char *myuri2 = "ColorComponentsNode";
    int maj = 1, min = 0;
    ///	qmlRegisterType<OSGTemplateonNode>(myuri, maj, min, "OSGSimulationNode");
    ///
    /*	qmlRegisterType<QQuickPlot>(myuri0, maj, min, "QQuickPlot");
    	qmlRegisterType<OSGSimulationNode>(myuri, maj, min, "OSGSimulationNode");
    	qmlRegisterType<ColorComponents>(myuri2, maj, min, "ColorComponents");*/
    //win->resize(width, height);
    //pmoc::UIEditor * MYMETAKAKA=new pmoc::UIEditor(win);

    //pmoc::MetaLibraryRegistry * reg =


    UIEditor *editor=new UIEditor(win);
    string osgQQView="import osgQtQuick 1.0\n"
                     " OSGViewport {\n"
                     "  focus: true\n"
                     "  id: fullview\n"
                     "  anchors.fill: parent\n"
                     "   mode: OSGViewport.Native //Buffer \n"

                     "    }\n";

    QQmlComponent *component = new QQmlComponent( win->engine());
    component->setData(osgQQView.c_str(), QUrl());
	QQuickItem *item =  qobject_cast<QQuickItem *>(component->create());
    std::cerr << component->errorString().toStdString() << std::endl;
    if (item)
    {
		QQuickItem *papa = win->rootObject();// ->findChild<QQuickItem*>("screen");
        item->setParentItem(papa);


    }
	//win->setSource(QUrl::fromLocalFile("myGUI.qml"));//main.qml"));


resize(width,height);
	//win->setVisible(false);
	container = QWidget::createWindowContainer(win,this);//	ui->centralWidget)
	// win->setParent(this->win);
	container->setMinimumSize(800, 600);
	container->setMaximumSize(10000, 6000);
	container->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
	win->setResizeMode(QQuickView::SizeRootObjectToView);
	ui->verticalLayout_2->addWidget(container);
    ///CUSTOMIZE THE VIEW
    osg::ref_ptr<osgViewer::View > nview;//=new osgViewer::View();
    nview=osgQtQuick::QuickWindowViewer::instance(win)->compositeViewer()->getView(0);


	osg::ref_ptr<osg::Node> vache=osgDB::readNodeFile("cow.osg");
	if (vache.valid())
	nview->setSceneData(vache);

   osgGA::FirstPersonManipulator * orb=new 	myFirstPersonManipulator;
    nview->setCameraManipulator( orb );
    nview->addEventHandler(new osgViewer::WindowSizeHandler);

//osg::ref_ptr<MyStatsHandler> stat=new MyStatsHandler(nview);
    	osg::ref_ptr<osgViewer::StatsHandler> stat=new osgViewer::StatsHandler();

	nview->addEventHandler(stat);
    //
((QtToOSGView*)win)->setManagedview(nview);
//osgQtQuick::QuickWindowViewer::instance(win)->compositeViewer()->removeView(nview);
//osgQtQuick::QuickWindowViewer::instance(win)->compositeViewer()->realize();

//osgQtQuick::QuickWindowViewer::instance(win)->compositeViewer()->addView(nview);
osgQtQuick::QuickWindowViewer::instance(win)->compositeViewer()->realize();

    connect(ui->actionFullscreen,SIGNAL(triggered()),this,SLOT(Fullscreen( )));
    connect(ui->actionExit,SIGNAL(triggered()),this,SLOT(Quit( )));

    //this->setGeometry(0,0,200,400);
    //move(500,500);



    //	_nodeadder=new NodeAdder(_scene);
    //	_scene->setUpdateCallback(_nodeadder);


    win->setVisible(true);
    //	win->showFullScreen ();
}
void MainWindow::closeEvent(QCloseEvent *event)
{
    delete win;
}
MainWindow::~MainWindow()
{
    /*delete ui;
    delete win; delete container;*/
}
void MainWindow::Quit( )
{


    close();

    //std::cerr<<"wanadie"<<std::endl; emit(wannaDie());

}

void MainWindow::updateTest(int i)
{

    std::cerr<<i<<std::endl;
}

void  MainWindow::Fullscreen()
{
    if(this->isFullScreen())
    {

        //avoid a bug when moving dockable but animation don't work:/
        //	_dock->setParent(ui->centralWidget);
        showNormal();
    }
    else
    {
        //enable fun stuff with dockbar in full screen
        //_dock->setParent(this);
        showFullScreen();
        //	win->getManagedView()->getEventQueue()->keyPress(osgGA::GUIEventAdapter::KEY_F);
    }
}
