//#define USEOSGAUDIO 1
//#define USEGL2
//#define BUILD_BEFORE_RUN
#include "mainwindow.h"
#define PMOC_OSGDB_OPTIONS_STRING ""
//"WriteImageHint=UseExternal"
#include "../ui_mainwindow.h"
#include <colorcomponentsplugin/colorcomponents.h>
#include <string>
std::string  myreplace(std::string f, std::string pattern, std::string replace)
{
    std::vector< std::string > tstrings;
    std:: string fp = f;
    int posend = fp.find(pattern);
    while (posend >= 0)
    {
        std::string s = fp.substr(0, posend);
        tstrings.push_back(s);
        fp = fp.substr(posend + pattern.size(), fp.size());
        posend = fp.find(pattern);
    }
    if (!fp.empty())tstrings.push_back(fp);
    std::string out;
    for (std::vector< std::string >::iterator i = tstrings.begin(); i != --tstrings.end(); i++)
        out += (*i) + replace;
    return out + tstrings.back();
}
#include <MetaQQuickLibraryRegistry.h>
#include <QTextEdit>

#include "qdebugstream.h"
#include <QQmlContext>
#include <QStatusBar>
//#include <MetaLibraryRegistry.h>
//#include "../colorcomponentsplugin/colorcomponents.h"
//#include "../OSGSimulationNode.hpp"
#include <osg/Vec4>
#include <osg/Geometry>
#include <osg/Geode>
#include <osg/ShapeDrawable>
#include <osg/TextureRectangle>
#include <osg/LineWidth>
#include "QtToOSGView.h"
#include <osgGA/TrackballManipulator>

#include <osgGA/FirstPersonManipulator>
#include <osgDB/FileUtils>
#include <osgUtil/RenderBin>
#include <osgDB/ReadFile>
#include <osgDB/WriteFile>
#include <osgDB/ExternalFileWriter>

#ifdef USEOSGAUDIO
#include <osgAudio/AudioEnvironment.h>
#include <osgAudio/SoundManager.h>
#endif
#include <sstream>

#include <osgViewer/ViewerEventHandlers>
#include <osgViewer/CompositeViewer>
//#include "../myStatsHandler.h"
#include <QMessageBox>
#include <iostream>
#ifdef WIN32
#include <direct.h>
#define getcwd _getcwd
#else
#include <unistd.h>
// #define getcwd getcwd
#endif
//#include "grohack.cpp"


#include <Qsci/qsciscintilla.h>
#include <Qsci/qscilexercpp.h>
#include <Qsci/qscilexerhtml.h>
#include <QGuiApplication>
#include <QtWidgets/QApplication>
#include <QtGui/QWindow>
#include <QtWidgets/QShortcut>
#include <QtGui/qopenglcontext.h>
#include <QOpenGLFunctions_3_1>
#include <QOpenGLFunctions_2_0>
#include <qtimer.h>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QSlider>
#include <QtWidgets/QLabel>
#include <QtWidgets/QGraphicsOpacityEffect>
#include <osgQt/GraphicsWindowQt>
#include <osgQtQuick/Utility.hpp>
#include <osgQtQuick/OSGViewport.hpp>
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
#include <sstream>
#include "UIEditor.hpp"
//#include "../OSGVolumetest.h"
using namespace pmoc;
using namespace std;
class myFirstPersonManipulator : public osgGA::FirstPersonManipulator
{
public:
    myFirstPersonManipulator():osgGA::FirstPersonManipulator()
    {
        setAllowThrow(false);
        // this->setHomePosition(osg::Vec3(0.5,-0.2,-0.5),osg::Vec3(0.5,0.5,0),osg::Vec3(0,0,1));
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

            moveForward(0.5);
            break;
        case osgGA::GUIEventAdapter::KEY_Down :

            moveForward(-0.5);
            break;
        case osgGA::GUIEventAdapter::KEY_Left :

            moveRight(-0.5);
            break;
        case osgGA::GUIEventAdapter::KEY_Right :

            moveRight(0.5);
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



//
#include <osgUtil/Optimizer>
#include <osgDB/ReadFile>
#include <osgViewer/Viewer>
#include <osgViewer/CompositeViewer>

#include <osgGA/TerrainManipulator>
#include <osgGA/StateSetManipulator>
#include <osgGA/AnimationPathManipulator>
#include <osgGA/TrackballManipulator>
#include <osgGA/FlightManipulator>
#include <osgGA/DriveManipulator>
#include <osgGA/KeySwitchMatrixManipulator>
#include <osgGA/StateSetManipulator>
#include <osgGA/AnimationPathManipulator>
#include <osgGA/TerrainManipulator>

#include <osg/Material>
#include <osg/Geode>
#include <osg/BlendFunc>
#include <osg/Depth>
#include <osg/Projection>
#include <osg/MatrixTransform>
#include <osg/Camera>
#include <osg/io_utils>

#include <osgText/Text>

#include <sstream>

#define OSG34
#ifndef OSG34
#define ATOMICNODE osg::Geode
#else
#define ATOMICNODE osg::Drawable
#endif
// class to handle events with a pick
class PickHandler : public osgGA::GUIEventHandler
{
public:

    PickHandler( MainWindow //pmoc::UIEditor
                 * uieditor): _uieditor(uieditor)
    {
        _selectedNode=0;
        wirebox=0;
        _selmat =new osg::Material();
        _selmat->setDiffuse (osg::Material::FRONT_AND_BACK, osg::Vec4 (0.9, 0.1, 0.0, 1.0));
        _selmat->setEmission(osg::Material::FRONT_AND_BACK, osg::Vec4 (0.8, 0.1, 0.0, 1.0));
        _selmat->setAmbient(osg::Material::FRONT_AND_BACK, osg::Vec4(0.5, 0.5, 0.5, 1));


    }

    ~PickHandler() {}

    bool handle(const osgGA::GUIEventAdapter& ea,osgGA::GUIActionAdapter& aa);

    virtual void pick(osgViewer::View* view, const osgGA::GUIEventAdapter& ea);

    /*  void setLabel(const std::string& name)
       {
           if (_updateText.get()) _updateText->setText(name);
       }*/
    void removeBoxes()
    {

        osg::Group * gr;
        ///remove old boxes
        if(_selectedNode)
        {
            for(int i=0; i<_selectedNode->getNumParents(); i++)
            {
                gr=_selectedNode->getParent(i)->asGroup();
                if(gr&&wirebox.get())
                    gr->removeChild(  wirebox.get());
            }
        }
        _selectedNode=0;
        wirebox=0;
    }
    void setSelected(osg::Node*g)
    {
        ATOMICNODE *ge =dynamic_cast<ATOMICNODE*>(g);

        if(ge&&ge->getName()!="SelectionBox")
        {
            _selectedNode = ge;

            // setselcted
            osg::Group * gr;
            wirebox=createWireBox(ge);
            // boxgr->addChild(box);
            for(int i=0; i<_selectedNode->getNumParents(); i++)
            {
                gr=_selectedNode->getParent(i)->asGroup();
                if(gr)
                    gr->addChild(  wirebox);
            }
        }
    }

    osg::ref_ptr<osg::Node> wirebox;
    osg::ref_ptr<osg::Node> _selectedNode;
protected:
    //pmoc::UIEditor
    MainWindow * _uieditor;
    osg::ref_ptr<osg::Material>  _selmat;
    ATOMICNODE *createWireBox(ATOMICNODE * geode);
};
void findNamedNodeCallback::operator()(osg::Node* node, osg::NodeVisitor* nv)
{

    if( _undone)
    {
        FindNamedNodeVisitor nv(_searchedname);
        _root->accept(nv);
        _result=nv._foundNodes;
        if(!_searchedname.empty()&&!_result.empty())
        {
            _picker->removeBoxes();
            //for(    std::list<osg::Node*>::iterator it=_result.begin();it!=_result.end();it++)

            _picker->setSelected((*_result.begin()) );
        }
        emit namedNodesFound();
        _undone=false;
    }
}
bool PickHandler::handle(const osgGA::GUIEventAdapter& ea,osgGA::GUIActionAdapter& aa)
{
    switch(ea.getEventType())
    {
    case(osgGA::GUIEventAdapter::DOUBLECLICK):
    {
        osgViewer::View* view = dynamic_cast<osgViewer::View*>(&aa);
        if (view) pick(view,ea);
        return false;
    }
    case(osgGA::GUIEventAdapter::KEYDOWN):
    {
        if (ea.getKey()=='c')
        {
            osgViewer::View* view = dynamic_cast<osgViewer::View*>(&aa);
            osg::ref_ptr<osgGA::GUIEventAdapter> event = new osgGA::GUIEventAdapter(ea);
            event->setX((ea.getXmin()+ea.getXmax())*0.5);
            event->setY((ea.getYmin()+ea.getYmax())*0.5);
            if (view) pick(view,*event);
        }
        return false;
    }
    default:
        return false;
    }
}
///  """create a bounding box for the node """
ATOMICNODE *PickHandler::createWireBox(ATOMICNODE* geode)
{


    //create an empty bounding box
    osg::BoundingBoxf bb;
//   bb.expandBy(osg::Vec3f(0.01,0.01,0.01));

    //if we have a geode, expand by the drawables bounding box, else use the bounding sphere
    //geode = osg.NodeToGeode(node)
    bool expand=false;
#ifndef OSG34
    if (geode)
    {
        cout<< "geode found"  <<endl;
        for(int  i=0; i<geode->getNumDrawables(); i++)
        {
            osg::Drawable *dwb = geode->getDrawable(i);
            ///HACK FOR BOUND RECOMPUTATINON!!!!
            dwb->  dirtyBound ();
            bb.expandBy(dwb->getBoundingBox());
            expand=true;
        }
    }
    else
        bb.expandBy(geode->getBound());

    osg::Vec3 center = geode->getBound().center();
#else
//geode->  dirtyBound ();
    osg::Vec3 center = geode->getBound().center();
    bb.expandBy(geode->getBoundingBox());
    expand=true;
#endif
    ///create a geode for the wirebox
    osg::ref_ptr<ATOMICNODE> wbgeode = new ATOMICNODE();


    if(expand) ///create a drawablw box with the right position and size
    {
        float     lx = bb._max.x() - bb._min.x();
        float ly = bb._max.y() - bb._min.y();
        float lz = bb._max.z() - bb._min.z();
        // center=osg::Vec3(bb._min.x()+lx/2,bb._min.y()+ly/2,bb._min.z()+lz/2);
        osg::ref_ptr<  osg::Box> box = new osg::Box(center, lx, ly, lz);
        box->setHalfLengths(osg::Vec3(lx/2,ly/2,lz/2));
        osg::ref_ptr<osg::ShapeDrawable>  shape = new osg::ShapeDrawable(box);
        //shape.setColor(osg.Vec4(1.0, 0.0, 0.0, 1.0))

        ///#add the drawable to the wirebox geode
#ifndef OSG34
        wbgeode->addDrawable(shape);
#else
        wbgeode=shape.get();
#endif
        wbgeode->setName("SelectionBox");
        ///create a stateset for the wirebox
        osg::ref_ptr<osg::StateSet >stateset =new osg::StateSet();// wbgeode->getOrCreateStateSet();
        wbgeode->setStateSet(stateset);
//    stateset.thisown = 0

        ///create a polygonmode state attribute
        osg::ref_ptr<osg::PolygonMode> polyModeObj = new osg::PolygonMode();
        polyModeObj->setMode(osg::PolygonMode::FRONT_AND_BACK, osg::PolygonMode::LINE);
        stateset->setAttribute(polyModeObj);

        ///create a linewidth state attribute
        osg::ref_ptr<osg::LineWidth> lw = new osg::LineWidth();
        lw->setWidth(2.0);
        stateset->setAttribute(lw);

        stateset->setAttribute(_selmat);


        ///for pointer in [stateset, box, polyModeObj, lw, shape]:
        ///    pointer.thisown = False

        ///return the wirebox geode
    }
    cout<<"returning geode"<<endl;

    return wbgeode.release();
}
/*
void PickHandler::setSelected(osg::Geode *ge){
if(ge&&ge->getName()!="SelectionBox"){
 osg::Group *gr;
                    ///remove old boxes
                    if(_selectedNode)
                    {
                        for(int i=0; i<_selectedNode->getNumParents(); i++)
                        {
                            gr=_selectedNode->getParent(i)->asGroup();
                            if(gr)
                                gr->removeChild(  wirebox);
                        }
                    }
                    _selectedNode = ge;

                    // setselcted

                    wirebox=createWireBox(ge);
                    // boxgr->addChild(box);
                    for(int i=0; i<_selectedNode->getNumParents(); i++)
                    {
                        gr=_selectedNode->getParent(i)->asGroup();
                        if(gr)
                            gr->addChild(  wirebox);
                    }
                    }
                    }*/
#define POLYTOPEPICKER
void PickHandler::pick(osgViewer::View* view, const osgGA::GUIEventAdapter& ea)
{

    osg::ref_ptr<osg::Viewport> viewport = view->getCamera()->getViewport();
    osgUtil::LineSegmentIntersector::Intersections intersections;
#ifdef POLYTOPEPICKER
    float x = ea.getX()/float(viewport->width()- viewport->x() );//*0.5+0.5;
    float y = ea.getY()/float(viewport->height()- viewport->y() );//*0.5+0.5;
    //std::cerr<<"pickat"<< x<<" "<<y<<endl;

    double mx = viewport->x() + (int)((double )viewport->width()*(ea.getXnormalized()*0.5+0.5));
    double my = viewport->y() + (int)((double )viewport->height()*(ea.getYnormalized()*0.5+0.5));
    double w = 0.05;
    double h = 0.05;
    osg::ref_ptr<osgUtil::PolytopeIntersector> picker = new osgUtil::PolytopeIntersector(
        osgUtil::Intersector::WINDOW, mx-w, my-h, mx+w, my+h );
    try
    {
        /*


        double w( .05 ), h( .05 );
        osgUtil::PolytopeIntersector* picker =
            new osgUtil::PolytopeIntersector(
            osgUtil::Intersector::WINDOW,
            x-w, y-h, x+w, y+h );
        */
        osgUtil::IntersectionVisitor iv( picker );
        view->getCamera()->accept( iv );

        if (picker->containsIntersections())
        {
            const osg::NodePath& nodePath =
                picker->getFirstIntersection().nodePath;
            unsigned int idx = nodePath.size();
            while (idx-->0)
            {
                // Find the LAST MatrixTransform in the node
                //   path; this will be the MatrixTransform
                //   to attach our callback to.
                std::cout<< idx<<endl;
                cout<<nodePath[ idx ]->getName()<<endl;
                cout<<nodePath[ idx ]->className()<<endl;
#ifndef OSG34
                ATOMICNODE* ge =
                    dynamic_cast<ATOMICNODE*>(
                        nodePath[ idx ] );
#else
                osg::Group * gr=nodePath[ idx ]->asGroup();
                osg::Group* ge =0;
                if(gr)
                {


                    for(int i=0; i<gr->getNumChildren(); i++)
                    {

                        if(gr->getChild(i)==  picker->getFirstIntersection().drawable.get())
                            ge=gr;
                    }
                }
///ge is drawable parent group

#endif

                // If we get here, we just found a
                //   MatrixTransform in the nodePath.

                //    if (_selectedNode.valid())
                // Clear the previous selected node's
                //   callback to make it stop spinning.
                //   _selectedNode->setUpdateCallback( NULL );

                if(ge&&ge->getName()!="SelectionBox")
                {
                    osg::Group *gr;
                    ///remove old boxes
                    if(_selectedNode)
                    {
                        for(int i=0; i<_selectedNode->getNumParents(); i++)
                        {
                            gr=_selectedNode->getParent(i)->asGroup();
                            if(gr)
                                gr->removeChild(  wirebox);
                        }
                    }
#ifndef OSG34
                    _selectedNode = ge;

                    // setselcted

                    wirebox=createWireBox(ge);
#else
                    _selectedNode = picker->getFirstIntersection().drawable.get();
                    wirebox=createWireBox(picker->getFirstIntersection().drawable.get());
#endif

                    // boxgr->addChild(box);
                    for(int i=0; i<_selectedNode->getNumParents(); i++)
                    {
                        gr=_selectedNode->getParent(i)->asGroup();
                        if(gr)
                            gr->addChild(  wirebox);
                    }
                    /*     removeBoxes();
                    setSelected(ge);*/

                    if(_selectedNode->getName().empty())
                    {
///not named case : pop ze item
                        pmoc::Instance ins=PMOCADDOBJECT(*_selectedNode.get());

                        emit _uieditor->qmodselected(ins.model->createQQModel(&ins),_uieditor->_win->rootObject());
//ins.model->getGuiComponent((QQuickView*)_uieditor->_win->rootObject()->window(),ins,_uieditor->_win->rootObject());


                    }
                    else emit _uieditor->nodeselected(QString(_selectedNode->getName().c_str()));
                    //  _uieditor->setNodeModel(QString(ge->getName().c_str()));
                    return;
                }

            }

        }
    }
    catch(...)
    {
        std::cerr<<"EXCEPTION occurs during picker"<<endl;
    }
    //      return( _selectedNode.valid() );
#else
    std::string gdlist="";
    float x = ea.getX();
    float y = ea.getY();
    std::cerr<<"Pick at "<<x<<" "<<y<<endl;
    try
    {
        if (view->computeIntersections(x,y,intersections))
        {
            std::cerr<<"Found inters  "<<x<<" "<<y<<endl;
            for(osgUtil::LineSegmentIntersector::Intersections::iterator hitr = intersections.begin();
                    hitr != intersections.end();
                    ++hitr)
            {
                //std::ostringstream os;
                ostream &os=cout;
                if (!hitr->nodePath.empty() && !(hitr->nodePath.back()->getName().empty()))
                {
                    // the geodes are identified by name.
                    os<<"Object \""<<hitr->nodePath.back()->getName()<<"\""<<std::endl;
                    osg::Geode * ge=hitr->nodePath.back()->asGeode();
                    if(ge&&ge->getName()!="SelectionBox")
                    {
                        std::cerr<<"Geode found"<<endl;
                        osg::Group *gr;
                        ///remove old boxes
                        if(_selectedNode)
                            for(int i=0; i<_selectedNode->getNumParents(); i++)
                            {
                                gr=_selectedNode->getParent(i)->asGroup();
                                if(gr)
                                    gr->removeChild(  wirebox);
                            }



                        _selectedNode=ge;
                        osg::ref_ptr<osg::Group> boxgr=new osg::Group();

                        wirebox=createWireBox(ge);
                        // boxgr->addChild(box);

                        for(int i=0; i<_selectedNode->getNumParents(); i++)
                        {
                            gr=_selectedNode->getParent(i)->asGroup();
                            if(gr)
                                gr->addChild(  wirebox);
                        }
                        return;
                    }

                }
                else if (hitr->drawable.valid())
                {
                    os<<"Object \""<<hitr->drawable->className()<<"\""<<std::endl;
                }

                os<<"        local coords vertex("<< hitr->getLocalIntersectPoint()<<")"<<"  normal("<<hitr->getLocalIntersectNormal()<<")"<<std::endl;
                os<<"        world coords vertex("<< hitr->getWorldIntersectPoint()<<")"<<"  normal("<<hitr->getWorldIntersectNormal()<<")"<<std::endl;
                const osgUtil::LineSegmentIntersector::Intersection::IndexList& vil = hitr->indexList;
                for(unsigned int i=0; i<vil.size(); ++i)
                {
                    os<<"        vertex indices ["<<i<<"] = "<<vil[i]<<std::endl;
                }

                //gdlist += os.str();
            }
        }
    }
    catch(...)
    {
        std::cerr<<"EXCEPTION occurs during picker"<<endl;
    }
#endif
    /// setLabel(gdlist);
}

//

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
//BUG: Seams like mainwindow miss some  events....
void MainWindow::mouseMoveEvent(QMouseEvent * event)
{
    bool menuVisible = (event->pos().y())<10;
//   ui->menuBar->setVisible(menuVisible);
    //	qDebug() << "menubar:" << event->pos().y();

}
/*
class NodeAdder:public osg::NodeCallback
{
public:
    osg::Group *_scene;
    std::vector<osg::Node*> _nodes;
    NodeAdder( osg::Group *scene):osg::NodeCallback(),_scene(scene)
    {

    }
    void addNode(osg::Node *n)
    {
        _nodes.push_back(n);
    }
    virtual void operator()(osg::Node* node, osg::NodeVisitor* nv)
    {
        traverse(node, nv);
        for( std::vector<osg::Node*>::iterator i=_nodes.begin(); i!=_nodes.end(); i++)
            _scene->addChild((*i));
        _nodes.clear();

    }
};*/
void setupView(osgViewer::View *_osgview)
{
    osgGA::FirstPersonManipulator * orb=new 	myFirstPersonManipulator;
    // set up the camera manipulators.
    {
        osg::ref_ptr<osgGA::KeySwitchMatrixManipulator> keyswitchManipulator = new osgGA::KeySwitchMatrixManipulator;

        keyswitchManipulator->addMatrixManipulator( '1', "Trackball", new osgGA::TrackballManipulator() );
        keyswitchManipulator->addMatrixManipulator( '2', "Flight", new osgGA::FlightManipulator() );
        keyswitchManipulator->addMatrixManipulator( '3', "Drive", new osgGA::DriveManipulator() );
        keyswitchManipulator->addMatrixManipulator( '4', "Terrain", new osgGA::TerrainManipulator() );
        keyswitchManipulator->addMatrixManipulator( '5', "Orbit", new osgGA::OrbitManipulator() );
        keyswitchManipulator->addMatrixManipulator( '6', "FirstPerson", new osgGA::FirstPersonManipulator() );
        keyswitchManipulator->addMatrixManipulator( '7', "myFirstPerson", orb );


        _osgview->setCameraManipulator( keyswitchManipulator.get() );
    }


    // add the state manipulator
    _osgview->addEventHandler( new osgGA::StateSetManipulator(_osgview->getCamera()->getOrCreateStateSet()) );
    //_osgview->setCameraManipulator( orb );


    //  _osgview->addEventHandler(new osgViewer::ThreadingHandler);

    // add the window size toggle handler
    _osgview->addEventHandler(new osgViewer::WindowSizeHandler);

    // add the stats handler
    _osgview->addEventHandler(new osgViewer::StatsHandler);

    _osgview->addEventHandler(new osgViewer::HelpHandler());

    // add the record camera path handler
    _osgview->addEventHandler(new osgViewer::RecordCameraPathHandler);

    // add the LOD Scale handler
    _osgview->addEventHandler(new osgViewer::LODScaleHandler);

    // add the screen capture handler
    _osgview->addEventHandler(new osgViewer::ScreenCaptureHandler);

    _osgview->addEventHandler(new osgViewer::WindowSizeHandler);
}
void MainWindow::reparseTreeView()
{
    _TreeNode.resetTreeViewModel();
    parseScene(_osgview->getSceneData(),0,5);
}
void MainWindow::recompilePlugins()
{
///unloadPlugins
    loadPlugins(false);

#ifndef WIN32
#ifdef BUILD_BEFORE_RUN
    QMessageBox dial;
    dial.setGeometry(0,0,200,100);
    dial.setText(QString(_compileprocess.exitCode()));
    dial.setWindowModality (Qt::ApplicationModal);
    QMessageBox::StandardButton reply;
    QString libName;
    for(list<string>::iterator i=this->_pluginsStringList.begin(); i!=_pluginsStringList.end(); i++)
    {
        libName=QString((string("Module_QQQ")+(*i) +string("_Library") ).c_str());
        QStringList arg;
        arg<<libName;
        arg<<"-j2";
        _compileprocess.start("make",arg);

// Wait for it to start
        while(!_compileprocess.waitForStarted());
        //return 0;
        {
// Continue reading the data until EOF reached
            QByteArray qdata;

            while(_compileprocess.waitForReadyRead());
            qdata.append(_compileprocess.readAllStandardError());

// Output the data
            qDebug(qdata.data());

            _compileprocess.waitForFinished();




            // qDebug()<< "Error Compiling "<<libName<<_compileprocess.exitCode();
            if(_compileprocess.exitCode()!=0)
            {
                reply = QMessageBox::question(this, "Compile Error", "Error Compiling "+libName+_compileprocess.errorString()+tr(qdata.data()),
                                              QMessageBox::Yes|QMessageBox::No);
                //QApplication::quit();

            }
        }

        /*   libName=QString((string("Module_")+(*i) +string("_QQuickLibrary") ).c_str() );
           QStringList arg2;
           arg2<<libName;
           arg2<<"-j4";
           _compileprocess.start("make",arg2);

           while(!_compileprocess.waitForStarted());
           {
        // Continue reading the data until EOF reached
               QByteArray qdata;

               while(_compileprocess.waitForReadyRead());
               qdata.append(_compileprocess.readAllStandardError());

        // Output the data
               qDebug(qdata.data());

               _compileprocess.waitForFinished();

               // qDebug()<< "Error CompilingModule_"<<libName<<_compileprocess.exitCode();
               if(_compileprocess.exitCode()!=0)
               {
                   reply = QMessageBox::question(this, "Compile Error", "Error Compiling "+libName+_compileprocess.errorString()+tr(qdata.data()),
                                                 QMessageBox::Yes|QMessageBox::No);
                   //QApplication::quit();

               }
           }*/
        _compileprocess.waitForFinished();
    }
///reloadPlugins
#endif
#endif
    loadPlugins();
}
void MainWindow::loadPlugins(bool load)
{
    if(load)
    {
        for(list<string>::iterator i=this->_pluginsStringList.begin(); i!=_pluginsStringList.end(); i++)
        {
            //  MetaLibrary *lib=pmoc::MetaLibraryRegistry::instance()->getMetaLibraryForNamespace(*i);
            MetaQQuickLibrary *Qlib=pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickLibraryForNamespace(*i);
        }
        pmoc::MetaQQuickLibraryRegistry::instance()->setupInterLibraryRelations();
        // pmoc::MetaLibraryRegistry::instance()->setupInterLibraryRelations();
///load

    }
    else
    {
///unload
        //    pmoc::MetaLibraryRegistry::instance()->closeAllLibraries();
        pmoc::MetaQQuickLibraryRegistry::instance()->closeAllLibraries();
        pmoc::MetaQQuickLibraryRegistry::instance(true);
    }

}

void MainWindow::popQuickitem(QQModel*q,QQuickItem*p)
{
    if(QQcurnode)pmoc::fakedelete(QQcurnode);//->setParentItem(0);
    QQcurnode=0;
    QQcurnode= _generatedEditor->popQQModelUi(q,p);

}
void MainWindow::newFile()
{
    if(QQcurnode)pmoc::fakedelete(QQcurnode);//->setParentItem(0);
    QQcurnode=0;
    //osgQtQuick::QuickWindowViewer::instance(_win)->compositeViewer()->
//    osgQtQuick::QuickWindowViewer::instance(_win)->compositeViewer()->realize();
    _osgview->setSceneData(0);
#ifdef USEOSGAUDIO

    if (osgAudio::SoundManager::instance()->initialized())
        osgAudio::SoundManager::instance()->stopAllSources();

    if (! osgAudio::SoundManager::instance()->initialized())
    {
        osgAudio::SoundManager::instance()->init( 16 );
        osgAudio::AudioEnvironment *env=osgAudio::SoundManager::instance()->getEnvironment();
        env->setDistanceModel(osgAudio::InverseDistance);
        env->setDopplerFactor(1);
        env->setUnitScale(3.14);
    }
#endif

    osg::ref_ptr<osg::Group> rootnode=new osg::Group();
#ifdef USEOSGAUDIO

    osgAudio::SoundRoot *soundroot=new osgAudio::SoundRoot();
    ///set the camera...todo: i suppose there's an unserialized settercallback underneat
    soundroot->setCamera(this->_osgview->getCamera());
    rootnode->addChild(soundroot);

#endif
#ifndef WIN32

    rootnode->getOrCreateUserDataContainer()->addUserObject(osgDB::readFile<osg::ScriptEngine>("ScriptEngine.lua"));
#endif
    _osgview->setSceneData(rootnode);
    /*#tre=TreeNodeDataObject("ROOT",0)
    #recursive parse scenegraph node:scenedata,root NodeListModel and return the Global QModel

    self.win.OSGQTFramer.setbtWorld(None)*/
//   osgQtQuick::QuickWindowViewer::instance(_win)->compositeViewer()->realize();
    reparseTreeView();

    setCurrentFile("");
}



class GCHacker:public osg::NodeVisitor
{
    osg::GraphicsContext*_gc;
public:
    GCHacker(osg::GraphicsContext*gc):NodeVisitor(osg::NodeVisitor::TRAVERSE_ALL_CHILDREN),_gc(gc) {}
    virtual void apply(osg::Camera& geometry)
    {
        geometry.setGraphicsContext(_gc);
    }



};


void MainWindow::loadFile(const QString& file)
{
    if(QQcurnode)pmoc::fakedelete(QQcurnode);//->setParentItem(0);
    QQcurnode=0;
    // _osgview->setSceneData(0);

    // osgQtQuick::QuickWindowViewer::instance(_win)->compositeViewer()->realize();
#ifdef USEOSGAUDIO
    if (osgAudio::SoundManager::instance()->initialized())
        osgAudio::SoundManager::instance()->stopAllSources();

    if (! osgAudio::SoundManager::instance()->initialized())
    {
        osgAudio::SoundManager::instance()->init( 16 );
        osgAudio::AudioEnvironment *env=osgAudio::SoundManager::instance()->getEnvironment();
        env->setDistanceModel(osgAudio::InverseDistance);
        env->setDopplerFactor(1);
        env->setUnitScale(3.14);
    }
#endif
    /*if  osgAudio.SoundManager.instance().initialized():
    	osgAudio.SoundManager.instance().stopAllSources()

    #init sound system...kind of dirty PATE
    if not osgAudio.SoundManager.instance().initialized():
    	osgAudio.SoundManager.instance().init( 16 )
    	env=osgAudio.SoundManager.instance().getEnvironment()
    	env.setDistanceModel(osgAudio.InverseDistance)
    	env.setDopplerFactor(1)
    	env.setUnitScale(3.14)
    	*/
    osg::ref_ptr<osgDB::Options> opt = new osgDB::Options();

    //opt->setObjectCacheHint(osgDB::Options::CACHE_ALL);
    opt->setObjectCacheHint( osgDB::ReaderWriter::Options::CACHE_NONE );
    osg::ref_ptr<osg::Object> obj=osgDB::readObjectFile(file.toStdString(),opt);
    osg::ref_ptr<osg::Node> n=dynamic_cast<osg::Node*>(obj.get());
    if(n)
    {
        osg::GraphicsContext * gc=_osgview->getCamera()->getGraphicsContext();
        if(gc)
        {
            GCHacker v( _osgview->getCamera()->getGraphicsContext() );
            n->accept(v);
        }
        osg::Group *rootnode=n->asGroup();
        if(rootnode)
        {
            ///HACK IN ORDER TO REMOVE REDONDANT CALLBACK ON OSGAUDIO:: foking ROOTNODE
            ///AND SETUP ITS FOKING CAMERA
            ///TO DO FIX OSGAUDIO GRRRRRRR!
            bool audiotoadd=true;//always add audio node: avoid to add it by hand
            for(int i=0; i<rootnode->getNumChildren(); i++)
            {
                osg::Node *ch=rootnode->getChild(i);
                cout<<ch->className()<<endl;
                if (ch->className()==string("SoundRoot"))
                {
                    cout<<"node sound removed"<<endl;
                    rootnode->removeChild(ch);

                    audiotoadd=true;
                    break;
                }
            }
            ///READD SOUND ROOT
            if(audiotoadd)
            {
#ifdef USEOSGAUDIO
                osgAudio::SoundRoot *soundroot=new osgAudio::SoundRoot();
                ///set the camera...todo: i suppose there's an unserialized settercallback underneat
                soundroot->setCamera(this->_osgview->getCamera());
                rootnode->addChild(soundroot);
#endif
            }



#ifndef WIN32
            rootnode->getOrCreateUserDataContainer()->addUserObject(osgDB::readFile<osg::ScriptEngine>("ScriptEngine.lua"));
#endif
            _osgview->setSceneData(rootnode);

            if(!rootnode&&dynamic_cast<osgViewer::View*>(obj.get()))
            {
                /* osgDB::writeObjectFile(*_osgview,"fuck.osgb");

                osgQtQuick::QuickWindowViewer::instance(_win)->compositeViewer()->removeView(_osgview);
                _osgview= dynamic_cast<osgViewer::View*>(osgDB::readObjectFile("fuck.osgb"));*/
                osgQtQuick::QuickWindowViewer::instance(_win)->compositeViewer()->removeView(_osgview);
                _osgview=dynamic_cast<osgViewer::View*>(obj.get());

                // _osgview->setThreadingModel(osgViewer::ViewerBase::SingleThreaded);
                GCHacker v( gc );
                _osgview->getSceneData()->accept(v);
                osgQtQuick::QuickWindowViewer::instance(_win)->compositeViewer()->addView(_osgview);

                osgQtQuick::OSGViewport* qtv=_win->rootObject()->findChild<osgQtQuick::OSGViewport*>("fullview");
                qtv->hackview(_osgview);
                _win->setManagedview(_osgview);
                setupView(_osgview);
                _osgpicker=new PickHandler(this);
                _osgview->addEventHandler(_osgpicker);
                emit qtv->windowChanged(_win);
                //    osgQtQuick::QuickWindowViewer::instance(_win)->compositeViewer()->realize();
                /*#tre=TreeNodeDataObject("ROOT",0)
                #recursive parse scenegraph node:scenedata,root NodeListModel and return the Global QModel

                self.win.OSGQTFramer.setbtWorld(None)*/
            }
            reparseTreeView();


            PMOCSAFEADDVIRTUALOBJECT(*_osgview,inst,osg::View);
            PMOCGETMETACLASS(inst.model->id())->getGuiComponent(_win,inst,_UIrootItem);


            /*
            if self.win.Phi:
            	del(self.win.Phi)
            self.win.Phi=BulletManager.BulletPhysicals(self.win)
            self.win.OSGQTFramer.setbtWorld(self.win.Phi)
            self.setCurrentFile(file);self.win.Phi.setFileName(file+'Phi')
            self.win.Phi.loadPhysics(self.win.osgview)
            self.win.Phi.createPhysicalWorldGui()*/
            setCurrentFile(file);
            statusBar()->showMessage("File loaded", 2000);
        }
    }
}
void MainWindow::saveFile(QString const&file)
{
    /*osgAudio.SoundManager.instance().stopAllSources()
    //_selectedTree=self._picker._selectedNode
    osg::Group* gr;
    if (this->_osgpicker->_selectedNode)
    {

        gr=_osgpicker->_selectedNode->asGroup();
        if (gr)
            gr->removeChild(_osgpicker->wirebox);
    }*/
    _osgpicker->removeBoxes();
    /*#restore bullet transform dldagatino
    self.win.Phi.setFileName(file+'Phi')
    self.win.Phi.savePhysics()*/
    char cCurrentPath[FILENAME_MAX];
    if (!getcwd(cCurrentPath, sizeof(cCurrentPath)))
    {
        std::cout<<"problem reading current directory"<<std::endl;
    }
    cCurrentPath[sizeof(cCurrentPath) - 1] = '\0';
    std::string curdir(cCurrentPath);

    osgDB::ExternalFileWriter wr(curdir,".",true);//curdir,curdir,true );

    osg::ref_ptr<osgDB::Options > opt=new osgDB::Options();
    opt->setOptionString(PMOC_OSGDB_OPTIONS_STRING);

    osgDB::writeNodeFile(*_osgview->getSceneData(),file.toStdString(),opt);

    osg::Node * nod=_osgview->getSceneData();
    //nod->setName(file.toStdString());
    //wr. write (*nod,opt );
    setCurrentFile(file);
    //#self.userSpace.setFileName(file+'Phi')
    //self.win.Phi.postSaving()#restor callback after saving
    statusBar()->showMessage(file+"File saved", 2000);
}

string MainWindow::generateID(osg::Object * scenedata)
{
    if(sizeof(unsigned long long int)!=8)//unsigned long int)!=8)
    {
        std::cerr<<"seams you havent a 64 bit built "<<endl;
        cout<<sizeof(unsigned long int)<<endl;
        cout<<sizeof(unsigned long long int)<<endl;
        exit(-1);

    }
    stringstream ss;
    ss<<std::hex<<((unsigned long long int)(scenedata));
    return string("0x")+ss.str();
}

void MainWindow::parseScene(osg::Node * scenedata,int depth,int maxdepth,TreeNodeModel *xxccurnode)
{
    TreeNodeModel *curnode;
    TreeNodeModel *sub;
    if (!xxccurnode)curnode=&this->_TreeNode;
    else curnode=xxccurnode;

    //Give a name if none ..in order to getbyname
    /*	*/



    if (scenedata->getName()=="" || QString::fromUtf8(scenedata->getName().c_str()).toStdString()!=scenedata->getName())
    {
        string ret=this->generateID(scenedata);
        scenedata->setName(ret);// Would like the memory address but cant find it ...hex(id(scenedata))))
    }

    pmoc::MetaQQuickClass* cl=PMOCMETACLASS(*scenedata);
    QString name=QString( QString::fromUtf8(scenedata->getName().c_str()));

    QString typen/*(cl->id().c_str())*/=(scenedata->libraryName()+string("::")+scenedata->className()).c_str();

    TreeNodeDataObject *tre=new TreeNodeDataObject(name,depth,typen,0,curnode);
    //tre->_parentModel=curnode;
    // tre->_subnodes=0;
    tre->_subnodes=new TreeNodeModel(tre);
    curnode->addNode(tre);
    osg::Group *gr=scenedata->asGroup();


    //#tre=TreeNodeDataObject("osg4noob::unknow Node",depth)

    if (gr)
    {

        cout<<"found GROUPE"<<depth<<endl;
        //#tre=TreeNodeDataObject(name,depth,"osg::Group")

        //newl=NodeListModel()
        tre->_parentModel=curnode;
        osg::Node *ch;
        if (depth<=maxdepth)
        {
            for(int i=0; i<gr->getNumChildren(); i++)
            {
                ch=gr->getChild(i);
                sub=tre->_subnodes;
                parseScene(ch,depth+1,maxdepth,sub);
            }
        }
    }
}

void MainWindow::setNodeModel(const QString&nodename)
{
///we re in Qt event thread
///so
///add a findnodecallback
///and wait till it signal its termination
//_osgpicker->removeBoxes();
    if(nodename!="SelectionBox")
    {
        TreeNodeModel* papa;

        for(QList<TreeNodeDataObject*>::iterator selectedqnode=_selectedqnodes.begin(); selectedqnode!=_selectedqnodes.end(); selectedqnode++) //if(!_selectedqnodes.empty())
        {

            papa=(*selectedqnode)->_parentModel;

            QModelIndex index=papa->index(papa->nodeindex((*selectedqnode)),0,QModelIndex());
            papa->setData(index,QVariant::fromValue<bool>(false),TreeNodeModel::selectedRole);


        }
        _selectedqnodes.clear();
        this->_TreeNode.getTreeNodeByName(nodename,_selectedqnodes);
        for(QList<TreeNodeDataObject*>::iterator selectedqnode=_selectedqnodes.begin(); selectedqnode!=_selectedqnodes.end(); selectedqnode++) //if(!_selectedqnodes.empty())

        {
            papa=(*selectedqnode)->_parentModel;
            int idx=papa->nodeindex((*selectedqnode));
            QModelIndex index=papa->index(idx,0,QModelIndex());
            //  index.r=0;
            papa->setData(index,QVariant::fromValue<bool>(true),TreeNodeModel::selectedRole);
        }


        FindNamedNodeVisitor nv(nodename.toStdString());
        _osgview->getSceneData()->accept(nv);
        //   _result=nv._foundNodes;
        if(!nodename.toStdString().empty()&&!nv._foundNodes.empty())
        {
            _osgpicker->removeBoxes();
            //for(    std::list<osg::Node*>::iterator it=_result.begin();it!=_result.end();it++)
            _osgpicker->setSelected((*nv._foundNodes.begin()) );
            /*   }


              _findNamedNodeCallback=new findNamedNodeCallback(nodename.toStdString(),_osgview->getSceneData(),this,this->_osgpicker);


              connect(_findNamedNodeCallback.get(),SIGNAL(namedNodesFound()), this,SLOT(setNodeModelStep2()));
              _osgview->getSceneData()->addUpdateCallback(_findNamedNodeCallback);

            }
            }


            void MainWindow::setNodeModelStep2()
            {

            _osgview->getSceneData()->removeUpdateCallback(_findNamedNodeCallback);
            osg::Node* n=_findNamedNodeCallback->_result.empty()?0:_findNamedNodeCallback->_result.front();*/
            osg::Node*n=nv._foundNodes.empty()?0:nv._foundNodes.front();
            if(nodename.toStdString().empty())
                n=_osgpicker->_selectedNode;
            //for(vector<Node*>::iterator nit=_findNamedNodeCallback->_result.begin();nit!=_findNamedNodeCallback->_result.end();nit++){
            //n=nit;
            /*check if UIEDitor menu class*/
            if(n )
            {
                QList<QQuickItem*> children=_win->rootObject()->childItems();
                for(int i=2; i<children.count(); i++) ///DIRTY FLUS
                {
                    children[i]->deleteLater();
                }
               // cerr<<" named node found"<<endl;
                /*   if(n->asGeode()&& n->getName()!="SelectionBox") { _osgpicker->removeBoxes();
                 _osgpicker->setSelected(n->asGeode());}*/
                osg::Group *gr=n->asGroup();
                if(gr)
                {
                    for(QList<TreeNodeDataObject*>::iterator selectedqnode=_selectedqnodes.begin(); selectedqnode!=_selectedqnodes.end(); selectedqnode++) //if(!_selectedqnodes.empty())
                    {
                        if((*selectedqnode)->_subnodes->_parentTreeNode)
                            cout<<"(*selectedqnode)->_subnodes->_parentTreeNode)"<<(*selectedqnode)->_subnodes->_parentTreeNode->_name.toStdString()<<endl;
                        if((*selectedqnode)->_subnodes->rowCount()!=gr->getNumChildren())
                        {
                            // cout<<(*selectedqnode)->_subnodes->rowCount()<<"!="<<gr->getNumChildren()<<endl;
                            (*selectedqnode)->_subnodes->resetTreeViewModel();
                            for(int i=0; i<gr->getNumChildren(); i++)
                                parseScene(gr->getChild(i),(*selectedqnode)->_level+1,(*selectedqnode)->_level+5,(*selectedqnode)->_subnodes);
                        }
                    }
                }
                // Instance inst=PMOCADDOBJECT(gr);
                /*         MetaQQuickClass * cl=MetaQQuickLibraryRegistry::instance()->getMetaClassByTypeInfo(typeid(*n));
                  Instance inst=pmoc::Instance(cl ,(void*)(&n),false);
                  QQModel* qmodel =QQUICKMETACLASS(inst.model->id())->createQQModel(&inst);
                  _generatedEditor->setQModel_selected(qmodel)   ;
                 _generatedEditor->setosg_Group_cur_selected(gr);

                        _generatedEditor->setosg_Node_cur_selected(n);
                        _generatedEditor->setosg_StateSet_cur_selected(n->getStateSet());*/
                _findNamedNodeCallback=0;
///NODES
                {
                    if(QQcurnode)pmoc::fakedelete(QQcurnode);//->setParentItem(0);
                    QQcurnode=0;
                    //     #define STR(str) #str
//#define STRING(str) STR(str)


                    PMOCSAFEADDVIRTUALOBJECT( *n,inst,osg::Node);
                    pmoc::MetaQQuickClass * cl=PMOCGETMETACLASS(inst.model->id());
                    QQcurnode   =       PMOCGETMETACLASS(inst.model->id())->getGuiComponent(_win,inst,_UIrootItem);

                    ///reconnect with generated uieditor
                    ///    connect(QQcurnode,SIGNAL(subjectrequired()),this,SLOT( ) )

                    pmoc::MetaQQuickClass * classs= PMOCGETMETACLASS(inst.model->id());
                    QQModel *mod=classs->getQQModel4QQuickView(inst);
                    //_UIrootItem->setProperty("qmodel",QVariant<QQModel>)
                    emit treeNodeSelected(mod);

                }


            }
        }
        /*
        ///STATESETS
        {
            osg::StateSet * st=n->getStateSet();
            if(st)
            {
                if(QQstateset)QQstateset->destroy();;

                Instance inst=PMOCADDOBJECT( *st);
                QQstateset  = QQUICKMETACLASS(inst.model->id())->getGuiComponent(_win,inst,_UIrootItem);

            }
        }

        ///CALLBACKS//remove old ones
            int i=0;
            while(QQcurcallback[i]!=0)
            {
                QQcurcallback[i]->destroy();;
                QQcurcallback[i++]=0;
            }
        {
            osg::NodeCallback * cb=n->getUpdateCallback();


            if(cb)  //add newones
            {
                i=0;
                while(cb)
                {


                    Instance inst=PMOCADDOBJECT( *cb);
                    if(inst.model) ///check metaclass ptre as some class aren't embed in registry
                    {

                        MetaQQuickClass*  Qclass=QQUICKMETACLASS(inst.model->id());
                        //        if(QQcurcallback)QQcurcallback->destroy();;
                        QQcurcallback[i]=   Qclass->getGuiComponent(_win,inst,   _UIrootItem);
                        if(QQcurcallback[i])i++;
                    }

                    cb=cb->getNestedCallback();
                }
            }
        }
        */



        /*	#remove geode gui..is it enought
        try:

        #not acces to the model while len(self.drawables.drawableitems)>0:
        	# self.drawables.remove(self.drawables.drawableitems[0])
        self.drawables.setParentItem(None)
        #del(self.drawables)
        self.drawables=None
        #self.sceneGraphInitialized.emit()
        #self.sceneGraphInvalidated.emit()
        except:pass

        #try to find Components in plugins
        try:
        if self.currentSelected[osg.Node][0]:
        	self.currentSelected[osg.Node][0].setParentItem(None)
        except:self.currentSelected[osg.Node]=(None,None)
        self.currentSelected[osg.Node]=(self.createQQuickItemForOSGObject2(node),node)
        if self.currentSelected[osg.Node][0]:
        self.currentSelected[osg.Node][1]=node
        self.currentSelected[osg.Node][0].setParentItem(self.rootObject())

        #try to find callback in plugins
        cb=node.getUpdateCallback()
        try:
        	if self.currentcallback:
        		self.currentcallback.setParentItem(None)
        except:self.currentcallback=None
        if cb:

        self.currentcallback=self.createQQuickItemForOSGObject2(cb)
        if self.currentcallback:

        	#self.currentcallback=cb
        	self.currentcallback.setParentItem(self.rootObject())
        #try to find stateset in plugins
        ss=node.getStateSet()

        try:
        if self.currentSelected[osg.StateSet][0]:
        	self.currentSelected[osg.StateSet][0].setParentItem(None)
        except:self.currentSelected[osg.StateSet]=(None,None)
        if ss:
        self.currentSelected[osg.StateSet]=(self.createQQuickItemForOSGObject2(ss),ss)
        if self.currentSelected[osg.StateSet][0]:

        	self.currentSelected[osg.StateSet][0].setParentItem(self.rootObject())

        */

    }
}

void MainWindow::newNodeadded(pmoc::QQModel*m)
{
    //adder->



    osg::Node * n=   reinterpret_cast<osg::Node*>(this->_generatedEditor->cur_operand->getInstance().ptr);//qqn->getModel();
    if(n->getName().empty())
        n->setName(generateID(n));


    cout<<"Say my name"<<n->getName()<<std::endl;

    QString typen((n->libraryName()+string("::")+n->className()).c_str());

    //  TreeNodeDataObject * newtreenode=new TreeNodeDataObject(QString(n->getName().c_str()), this->_selectedqnode->_level+1,typen,new TreeNodeModel(),_selectedqnode->_subnodes);

    //this->_selectedqnode->_subnodes->addNode(newtreenode);
    for(QList<TreeNodeDataObject*>::iterator selectedqnode=_selectedqnodes.begin(); selectedqnode!=_selectedqnodes.end(); selectedqnode++) //if(!_selectedqnodes.empty())

        parseScene(n,(*selectedqnode)->_level+1,(*selectedqnode)->_level+5,(*selectedqnode)->_subnodes);


}
static QPlainTextEdit*  _logWidget;
void logWidgetMessageOutput(QtMsgType Type, const QMessageLogContext& Context, const QString &Message)
{
  //  OutputDebugString(reinterpret_cast<const wchar_t *>(Message.utf16()));
    _logWidget->appendPlainText(Message );
}
void myMessageOutput(QtMsgType type,// const char *msg)
const QMessageLogContext& Context, const QString &msg)
 {
     //in this function, you can write the message to any stream!
     switch (type) {
     case QtDebugMsg:
           std::cerr<<"Debug: "<< msg.toStdString()<< std::endl;
         break;
     case QtWarningMsg:
           std::cerr<<"Warning: "<< msg.toStdString()<< std::endl;
         break;
     case QtCriticalMsg:
           std::cerr<<"Critical: "<< msg.toStdString()<< std::endl;
         break;
     case QtFatalMsg:
      std::cerr<<"Fatal: "<< msg.toStdString()<< std::endl;
         abort();
         default:   std::cerr<< msg.toStdString()<< std::endl;
     }
 }

void MainWindow::createDockScintilla()
{
    QDockWidget *dock = new QDockWidget(tr("JavaScript Interactor"), this);
//    dock->setAllowedAreas(Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea);
    QWidget * stuff=new QWidget(dock);
    QLayout * stufflayout=new QVBoxLayout(stuff);
    stuff->setLayout(stufflayout);
    //stuff->  setSizePolicy(QSizePolicy::Maximum,QSizePolicy::Maximum);
 _logWidget=new QPlainTextEdit(stuff);
    _logWidget->setReadOnly(true);
  //  _logWidget->setText(QString("%1").arg(Qt::LogText));
   //   qInstallMessageHandler(myMessageOutput);
 //_logWidget->setTextFormat(Qt::LogText);

       QDebugStream* qerr=new QDebugStream(std::cerr, _logWidget);

    _javascriptInjector = new QsciScintilla(stuff);
    QStringList sep;
    sep.append(".");
// _javascriptInjector->setAutoCompletionWordSeparators(sep);

    _javascriptInjector->setLexer(_generatedEditor->getLexer());
    _javascriptInjector->setAutoCompletionSource(QsciScintilla::AcsAPIs);
//    _javascriptInjector->autoCompleteFromAPIs();
//_javascriptInjector->setAutoCompletionFillupsEnabled(false);
//_javascriptInjector->setAutoCompletionReplaceWord(true);

    //_javascriptInjector->setAutoCompletionThreshold(1);
    _javascriptInjector->setAutoIndent(true);
    _javascriptInjector->setBraceMatching(QsciScintilla::BraceMatch::SloppyBraceMatch);

    _javascriptInjector->setCallTipsStyle(QsciScintilla::CallTipsStyle::CallTipsContext);

    _javascriptInjector->setAutoCompletionShowSingle(false);

    _javascriptInjector->autoCompletionFillupsEnabled();
    _javascriptInjector->autoCompletionReplaceWord();
    _javascriptInjector->annotationDisplay();
    QShortcut* shortcut_ctrl_space = new QShortcut(QKeySequence("Ctrl+Space"),_javascriptInjector);
    connect(shortcut_ctrl_space, SIGNAL(activated()), _javascriptInjector,SLOT(autoCompleteFromAll()));


    _javascriptInjector->setText("<imports>\n/**Important: pmoc components are not polymorphics!!\t\t\t\t\t\t\t\t**/\n"
                                 "/**Use obj.cast(stringtype) in order to fullfill original methods prototypes\t\t**/\n"
                                 "/**Ex: var newgroup=pmocjs.createInstance(\"osg::Group\");    ///create a new instance\t**/\n"
                                 "/**    self.osg_Group.addChild(newgroup.cast(\"osg::Node\"));       ///upcasting required for method call\t\t\t\t**/\n"
                          //     "/**    self.osg_Group.modelChanged();                               ///update view according new state\t**/\n"
                          "import pmoc.osg 1.0\n</imports>\n<script>\n"
                                 ""
                                 "</script>");
    stufflayout->addWidget(_javascriptInjector);
    QPushButton * button=new QPushButton(stuff);
    button->setText("Inject current selected");
    stufflayout->addWidget(button);

      stufflayout->addWidget(_logWidget);

// stuff->  setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    dock->setWidget(stuff);
    addDockWidget(Qt::BottomDockWidgetArea, dock);
    /*viewMenu->addAction(dock->toggleViewAction());

    dock = new QDockWidget(tr("Paragraphs"), this);
    paragraphsList = new QListWidget(dock);
    paragraphsList->addItems(QStringList()
            << "Thank you for your payment which we have received today."
            << "Your order has been dispatched and should be with you "
               "within 28 days."
            << "We have dispatched those items that were in stock. The "
               "rest of your order will be dispatched once all the "
               "remaining items have arrived at our warehouse. No "
               "additional shipping charges will be made."
            << "You made a small overpayment (less than $5) which we "
               "will keep on account for you, or return at your request."
            << "You made a small underpayment (less than $1), but we have "
               "sent your order anyway. We'll add this underpayment to "
               "your next bill."
            << "Unfortunately you did not send enough money. Please remit "
               "an additional $. Your order will be dispatched as soon as "
               "the complete amount has been received."
            << "You made an overpayment (more than $5). Do you wish to "
               "buy more items, or should we return the excess to you?");*/
    //  dock->setWidget(paragraphsList);
    //  addDockWidget(Qt::RightDockWidgetArea, dock);
//    viewMenu->addAction(dock->toggleViewAction());


    connect(_javascriptInjector, SIGNAL(cursorPositionChanged(int,int)),
            this, SLOT(checkInjectorLexic(int,int)));
    connect(button, SIGNAL(clicked()),
            this, SLOT(injectJavascript()));
    // connect(paragraphsList, SIGNAL(currentTextChanged(QString)),            this, SLOT(addParagraph(QString)));
}
void MainWindow::checkInjectorLexic( int line ,int col )
{
///retrieve line
    char * fok=new char [1024];
    _javascriptInjector->SendScintilla(QsciScintillaBase::SCI_GETLINE,line,fok);
    fok[col]='\0';
    string linecontent(fok);
    delete fok;

///check the lex
    string::iterator lexit=linecontent.begin()+col;
    string::iterator lexend=lexit;
    while(*lexit!=' '&&lexit!= linecontent.begin())
        lexit--;
    if(lexit!= linecontent.begin() && lexit<linecontent.begin()+col)lexit++;///in order to remove space
//cerr<<linecontent<<endl;

    if(lexit<lexend)//!linecontent.empty()&&!myreplace(linecontent," ","").empty())
    {

        if(lexit>linecontent.begin() &&lexit!=linecontent.end())
            linecontent.erase(  linecontent.begin(),lexit );
        ///linecontent is the last typed word
        //cerr<<linecontent<<endl;
        ///so check Metatype with this name
        linecontent=myreplace(linecontent," ","");
        _generatedEditor->checkMetaType(QString(linecontent.c_str()));
    }
//_generatedEditor->injectJavaScriptInSelected(_javascriptInjector->text());

}
void MainWindow::injectJavascript()
{


    _generatedEditor->injectJavaScriptInSelected(_javascriptInjector->text());
}
MainWindow::MainWindow(const string &conffile,QWidget *parent) :
    BaseQWindow()//,    ui(new Ui::MainWindow)
{
    QQcurnode   =0;
    QQstateset   =0;
    for(int i=0; i<100; i++)QQcurcallback[i]=0;
//_TreeNode=new TreeNodeModel(parent);

    const int width(1200),height( 900);
    osgDB::FilePathList path=osgDB::getDataFilePathList();
    char cCurrentPath[FILENAME_MAX];
    if (!getcwd(cCurrentPath, sizeof(cCurrentPath)))
    {
        std::cout<<"problem reading current directory"<<std::endl;
    }
    cCurrentPath[sizeof(cCurrentPath) - 1] = '\0';
    std::string curdir(cCurrentPath);
    cout<<(curdir+"/osg4noob.rcc").c_str()<<endl;
    QResource::registerResource((curdir+"/osg4noob.rcc").c_str());
    path.push_back( curdir);
    osgDB::setDataFilePathList(path);


    // ui->setupUi(this);
    //resize(800,600);
    this->setMouseTracking(true);
    /* _dock=(QDockWidget *)createDockBar();
     _dock->setParent(this);//ui->centralWidget);
     _dock->setFloating(false);//prev

     //_dock->setAttribute( Qt::WA_TranslucentBackground, true );//	_dock->setProperty("docked",true);
     //_dock->setProperty("opacity",0.8);
     ////_dock->setOpacity();
     this->addDockWidget(Qt::TopDockWidgetArea,_dock);
    */
    setMinimumSize(800, 600);
    setMaximumSize(10000, 6000);
    setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);

    _win=new QtToOSGView;
    //	((QtQtToOSGView*)win)->setDockBar(_dock);
    //this->setAcceptedMouseButtons(Qt::AllButtons);;
    //container->setFocusPolicy(Qt::TabFocus);
    // win->setSource(QUrl("main.qml"));

    //// Tell Qt we will use OpenGL for this window
    _win-> setSurfaceType(QSurface::OpenGLSurface );

    // Specify the format and create platform-specific surface
    QSurfaceFormat format;
    format.setDepthBufferSize( 24 );
    format.setStencilBufferSize( 8 );
    format.setMajorVersion( 4 );
    format.setMinorVersion( 3 );
    format.setSamples( 1 );

    format.setProfile( QSurfaceFormat::CompatibilityProfile );//CoreProfile );
    _win-> setFormat( format );
    _win-> create();

    // Create an OpenGL context
    QOpenGLContext*   m_context = new QOpenGLContext;
    m_context->setFormat( format );
    m_context->create();

    // Make the context current on this window
    m_context->makeCurrent(_win );
    QOpenGLVersionProfile profil;
#ifndef USEGL2
    profil.setVersion(3, 1);

    // Obtain a functions object and resolve all entry points
    // m_funcs is declared as: QOpenGLFunctions_4_3_Core* m_funcs
    //   QOpenGLVersionProfile::;
    QOpenGLFunctions_3_1 *  m_funcs = m_context->versionFunctions<QOpenGLFunctions_3_1>();//versionFunctions(profil);
#else
    profil.setVersion(2, 0);
    QOpenGLFunctions_2_0 *  m_funcs = m_context->versionFunctions<QOpenGLFunctions_2_0>();//versionFunctions(profil);
#endif
    if (!m_funcs)
    {
        qWarning( "Could not obtain OpenGL versions object" );
        exit( 1 );
    }
    m_funcs->initializeOpenGLFunctions();	/* */



    const char *uri = "osgQtQuick";
    osgQtQuick::registerTypes(uri);
    const char *myuri0 = "myQPlot";

    const char *myuri = "mySimulationNode";
    const char *myuri2 = "ColorComponentsNode";
    int maj = 1, min = 0;
    ///	qmlRegisterType<OSGTemplateonNode>(myuri, maj, min, "OSGSimulationNode");
    ///
    qmlRegisterType<ColorComponents>(myuri2, maj, min, "ColorComponents");

    list<string> plugins;///osg not required to specifybecause of dependencies but add it for runtime plugin recompilation
    //plugins.push_back("bullet");
    plugins.push_back("osg");
    /*plugins.push_back("osgUtil");
      plugins.push_back("osgParticle");
      plugins.push_back("osgShadow");
      plugins.push_back("osgGA");
      plugins.push_back("osgAnimation");
      plugins.push_back("osgCal");*/

    /*plugins.push_back("osgCal");

    plugins.push_back("osgAudio");
    plugins.push_back("osgFX");
    plugins.push_back("osgSim");



    plugins.push_back("osgVolume");
    plugins.push_back("osgMG");
    /*
    plugins.push_back("osgbCollision");
    plugins.push_back("osgbDynamics");
    plugins.push_back("osgbLinearMath");*/


    _makefilePath="/home/pascal/SRC/osgCastWizard2/";
    _compileprocess.setWorkingDirectory(this->_makefilePath);
    this->setPluginToLoad(plugins);
    recompilePlugins();
    loadPlugins();
    /*
        MetaLibrary *lib=pmoc::MetaLibraryRegistry::instance()->getMetaLibraryForNamespace("osgUtil");
        MetaQQuickLibrary *Qlib=pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickLibraryForNamespace("osgUtil");

    */
    //win->resize(width, height);
    //set TreeViewModel

    /*   osg::ref_ptr<osg::Node> vache=osgDB::readNodeFile("test.osg");



       parseScene(vache.get(),0,5);*/
    // _selectedqnode=_TreeNode._treeNodes[0];
    _win->setClearBeforeRendering(false);
    _win->setColor(Qt::blue);
    // _win->rootContext()->setContextProperty("myModel",&_TreeNode);

    _win->engine()->addImportPath("./qml");
    _win->engine()->addPluginPath("./qml");
    qWarning()<<_win->engine()->pluginPathList();
    _win->engine()->setOutputWarningsToStandardError(true);
    _win->rootContext()->setContextProperty("objModel",&_TreeNode);

    _win->rootContext()->setContextProperty("editorWindow",this);
    _win->setSource(QUrl::fromLocalFile("osgGUI.qml"));//main.qml"));
    _UIrootItem=_win->rootObject() ->findChild<QQuickItem*>("fullview");
    _generatedEditor=new UIEditor(conffile,_win, _UIrootItem);


    createDockScintilla();
    /*  string osgQQView="import osgQtQuick 1.0\n"
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


      }*/


    //  resize(width,height);
    _win->setVisible(false);
    _container = QWidget::createWindowContainer(_win,this);//	ui->centralWidget)
    // win->setParent(this->win);
    _container->setMinimumSize(800, 600);
    _container->setMaximumSize(10000, 6000);
    _container->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    _win->setResizeMode(QQuickView::SizeRootObjectToView);
    /*QQuickItem * root=(win->rootObject());

    QQuickItem *item = win->rootObject()->findChild<QQuickItem*>("TextureVolume");
    if (item){
    	item->setProperty("text",QString("apatetept"));
    	OSGSimulationNode* sim=dynamic_cast<OSGSimulationNode*>(item);
    	if(sim){
    		std::cout<<"coool"<<std::endl;
    	}
    }*/
    ///CUSTOMIZE THE VIEW
    //osg::ref_ptr<osgViewer::View > nview;//=new osgViewer::View();
    osgUtil::   RenderBin::setDefaultRenderBinSortMode(   osgUtil:: RenderBin::  SORT_BY_STATE);//TRAVERSAL_ORDER );
    //  osgQtQuick::QuickWindowViewer::instance(_win)->compositeViewer()->getView(0)->getR
    _osgview=osgQtQuick::QuickWindowViewer::instance(_win)->compositeViewer()->getView(0);



    /* if (vache.valid())
         _osgview->setSceneData(vache->asGroup());*/

    _osgview->setLightingMode(osg::View::SKY_LIGHT);
//
    newFile();
//  loadFile("test.osgt");


    /* _generatedEditor->setosg_Group_cur_selected(vache->asGroup());


     Instance inst=PMOCADDOBJECT( *_generatedEditor->osg_Group_cur_selected);
     QQUICKMETACLASS(inst.model->id())->getGuiComponent(_win,inst,_UIrootItem);*/

    _win->setManagedview(_osgview);
    _osgpicker=new PickHandler(this);


    _osgview->addEventHandler(_osgpicker);
    setupView(_osgview);

#if 0
    connect(ui->actionExit,SIGNAL(triggered()),this,SLOT(Quit( )));
#endif
    //this->setGeometry(0,0,200,400);
    //move(500,500);
    this->setWindowTitle("osg4noob");


    /* _textEdit = new QsciScintilla; // инитилизируем редактор
     _textEdit->setUtf8(true); // мы же хотим читать кириллицу
     // 	 	QMainWindow * other=new QMainWindow(this);
     //other->setCentralWidget(textEdit); // задаем редактор в ui
     //other->show();
     QsciLexerCPP * lexCpp = new QsciLexerCPP(this); // создаем лексер (схему подсветки)
     _textEdit->setLexer(lexCpp); // задаем С++ лексер нашему редактору*/
    //  _textEdit->show();

    _viewMenu=menuBar()->addMenu(tr("&View"));
    _fullscreenAct=new QAction(this);
    _fullscreenAct->setText("QWindow.FullScreen");
    _viewMenu->addAction(_fullscreenAct);

    _compilMenu=menuBar()->addMenu(tr("&C++ Plugins"));
    _recompilAct=new QAction(this);
    _recompilAct->setText("Update compilation");
    _compilMenu->addAction(_recompilAct);

    connect(_recompilAct,SIGNAL(triggered()),this,SLOT(recompilePlugins( )));
    connect(_fullscreenAct,SIGNAL(triggered()),this,SLOT(Fullscreen( )));
    //connect(_generatedEditor,SIGNAL(osg_Node_added(pmoc::QQModel*)),this,SLOT(newNodeadded(pmoc::QQModel*)));

    connect(_generatedEditor,SIGNAL(selectedChanged(pmoc::QQModel*)),this,SLOT(selectedStatus(pmoc::QQModel*)));
    connect(_generatedEditor,SIGNAL(copied(pmoc::QQModel*)),this,SLOT(copiedStatus(pmoc::QQModel*)));
    connect(_generatedEditor,SIGNAL(cutted(pmoc::QQModel*)),this,SLOT(cuttedStatus(pmoc::QQModel*)));
    connect(_generatedEditor,SIGNAL(pasted(pmoc::QQModel*)),this,SLOT(pastedStatus(pmoc::QQModel*)));
    connect(_generatedEditor,SIGNAL(deleted(pmoc::QQModel*)),this,SLOT(deletedStatus(pmoc::QQModel*)));

    connect(_win->rootObject(),SIGNAL(nodeselected(QString)),this,SLOT(setNodeModel(QString)));
    ///signal 4 picker
    connect(this,SIGNAL(nodeselected(QString)),this,SLOT(setNodeModel(QString)));
    connect(this,SIGNAL(qmodselected(QQModel*,QQuickItem*)),this,SLOT(popQuickitem(QQModel*,QQuickItem*)));


    connect(this,SIGNAL(treeNodeSelected(pmoc::QQModel*)),_generatedEditor,SLOT(setOperand(pmoc::QQModel*)));
    //	_nodeadder=new NodeAdder(_scene);
    //	_scene->setUpdateCallback(_nodeadder);

    _findNamedNodeCallback=new findNamedNodeCallback("",_osgview->getSceneData(),this,this->_osgpicker);
    // ui->verticalLayout_2->addWidget(container);
    setCentralWidget(_container);
    // _win->setVisible(true);

    QQuickItem* uied=_win->rootObject() ->findChild<QQuickItem*>("menu",Qt::FindChildrenRecursively);
    show();
    resize(width, height);

    //QMenu * fok=uied ->findChild<QMenu*>("osg_Node",Qt::FindChildrenRecursively);
//fok->setEnabled(false);
    //	win->showFullScreen ();
}
void MainWindow::closeEvent(QCloseEvent *event)
{
    delete _win;
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
