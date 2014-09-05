#include "mainwindow.h"
#include "../ui_mainwindow.h"
#include <colorcomponentsplugin/colorcomponents.h>

#include <MetaQQuickLibraryRegistry.h>
#include <QTextEdit>
#include <QStatusBar>
#include <MetaLibraryRegistry.h>
//#include "../colorcomponentsplugin/colorcomponents.h"
//#include "../OSGSimulationNode.hpp"
#include <osg/Vec4>
#include <osg/Geometry>
#include <osg/Geode>
#include <osg/ShapeDrawable>
#include <osg/TextureRectangle>
#include "QtToOSGView.h"
#include <osgGA/TrackballManipulator>

#include <osgGA/FirstPersonManipulator>
#include <osgDB/FileUtils>
#include <osgDB/ReadFile>
#include <osgDB/WriteFile>

#include <sstream>

#include <osgViewer/ViewerEventHandlers>
#include <osgViewer/CompositeViewer>
//#include "../myStatsHandler.h"

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
#include <QGuiApplication>
#include <QtWidgets/QApplication>
#include <QtGui/QWindow>
#include <QtGui/qopenglcontext.h>
#include <QOpenGLFunctions_3_1>
#include <qtimer.h>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QSlider>
#include <QtWidgets/QLabel>
#include <QtWidgets/QGraphicsOpacityEffect>
#include <osgQt/GraphicsWindowQt>
#include <osgQtQuick/Utility.hpp>
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
#include "src/UIEditor.hpp"
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

// class to handle events with a pick
class PickHandler : public osgGA::GUIEventHandler
{
public:

    PickHandler( pmoc::UIEditor * uieditor): _uieditor(uieditor)
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

    osg::ref_ptr<osg::Node> wirebox;
    osg::ref_ptr<osg::Node> _selectedNode;
protected:
    pmoc::UIEditor * _uieditor;
    osg::ref_ptr<osg::Material>  _selmat;
    osg::Geode *createWireBox(osg::Geode * geode);
};

bool PickHandler::handle(const osgGA::GUIEventAdapter& ea,osgGA::GUIActionAdapter& aa)
{
    switch(ea.getEventType())
    {
    case(osgGA::GUIEventAdapter::PUSH):
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
osg::Geode *PickHandler::createWireBox(osg::Geode * geode)
{


    //create an empty bounding box
    osg::BoundingBoxf bb;

    //if we have a geode, expand by the drawables bounding box, else use the bounding sphere
    //geode = osg.NodeToGeode(node)
    if (geode)
    {
        cout<< "geode found"  <<endl;
        for(int  i=0; i<geode->getNumDrawables(); i++)
        {
            osg::Drawable *dwb = geode->getDrawable(i);
            bb.expandBy(dwb->getBound());
        }
    }
    else
        bb.expandBy(geode->getBound());

    osg::Vec3 center = geode->getBound().center();

    ///create a geode for the wirebox
    osg::ref_ptr<osg::Geode> wbgeode = new osg::Geode();
    wbgeode->setName("ExtentsGeode");

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

    ///create a drawablw box with the right position and size
    float     lx = bb._max.x() - bb._min.x();
    float ly = bb._max.y() - bb._min.y();
    float lz = bb._max.z() - bb._min.z();
    osg::ref_ptr<  osg::Box> box = new osg::Box(center, lx, ly, lz);
    osg::ref_ptr<osg::ShapeDrawable>  shape = new osg::ShapeDrawable(box);
    //shape.setColor(osg.Vec4(1.0, 0.0, 0.0, 1.0))

    ///#add the drawable to the wirebox geode
    wbgeode->addDrawable(shape);

    ///for pointer in [stateset, box, polyModeObj, lw, shape]:
    ///    pointer.thisown = False

    ///return the wirebox geode
    cout<<"returning geode"<<endl;
    return wbgeode.release();
}
void PickHandler::pick(osgViewer::View* view, const osgGA::GUIEventAdapter& ea)
{
    osg::ref_ptr<osg::Viewport> viewport = view->getCamera()->getViewport();
    osgUtil::LineSegmentIntersector::Intersections intersections;
#ifdef POLYTOPEPICKER
    float x = ea.getX()/float(viewport->width()- viewport->x() );//*0.5+0.5;
    float y = ea.getY()/float(viewport->height()- viewport->y() );//*0.5+0.5;
    std::cerr<<"pickat"<< x<<" "<<y<<endl;


    /*   double mx = viewport->x() + (int)((double )viewport->width()*(ea.getXnormalized()*0.5+0.5));
       double my = viewport->y() + (int)((double )viewport->height()*(ea.getYnormalized()*0.5+0.5));
       double w = 0.05;
       double h = 0.05;
       osg::ref_ptr<osgUtil::PolytopeIntersector> picker = new osgUtil::PolytopeIntersector(
        osgUtil::Intersector::WINDOW, mx-w, my-h, mx+w, my+h );
    */


    double w( .05 ), h( .05 );
    osgUtil::PolytopeIntersector* picker =
        new osgUtil::PolytopeIntersector(
        osgUtil::Intersector::PROJECTION,
        x-w, y-h, x+w, y+h );

    osgUtil::IntersectionVisitor iv( picker );
    view->getCamera()->accept( iv );

    if (picker->containsIntersections())
    {
        const osg::NodePath& nodePath =
            picker->getFirstIntersection().nodePath;
        unsigned int idx = nodePath.size();
        while (idx--)
        {
            // Find the LAST MatrixTransform in the node
            //   path; this will be the MatrixTransform
            //   to attach our callback to.
            osg::Geode* mt =
                dynamic_cast<osg::Geode*>(
                    nodePath[ idx ] );
            if (mt == NULL)
                continue;

            // If we get here, we just found a
            //   MatrixTransform in the nodePath.

            //    if (_selectedNode.valid())
            // Clear the previous selected node's
            //   callback to make it stop spinning.
            //   _selectedNode->setUpdateCallback( NULL );

            _selectedNode = mt;
            if(_selectedNode->asGeode())
            {
                osg::Geode * ge=_selectedNode->asGeode();
                osg::ref_ptr<osg::Group> boxgr=new osg::Group();

                wirebox=createWireBox(ge);
                // boxgr->addChild(box);
                osg::Group *gr;
                for(int i=0; i<_selectedNode->getNumParents(); i++)
                {
                    gr=_selectedNode->getParent(i)->asGroup();
                    if(gr)
                        gr->addChild(  wirebox);
                }
            }
            break;
        }
        if (!_selectedNode.valid())
            osg::notify() << "Pick failed." << std::endl;
    }
    else if (_selectedNode.valid())
    {
        _selectedNode->setUpdateCallback( NULL );
        _selectedNode = NULL;
    }
    //      return( _selectedNode.valid() );
#else
    std::string gdlist="";
    float x = ea.getX();
    float y = ea.getY();
    if (view->computeIntersections(x,y,intersections))
    {
        for(osgUtil::LineSegmentIntersector::Intersections::iterator hitr = intersections.begin();
                hitr != intersections.end();
                ++hitr)
        {
            std::ostringstream os;
            if (!hitr->nodePath.empty() && !(hitr->nodePath.back()->getName().empty()))
            {
                // the geodes are identified by name.
                os<<"Object \""<<hitr->nodePath.back()->getName()<<"\""<<std::endl;
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

            gdlist += os.str();
        }
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


void MainWindow::recompilePlugins()
{
///unloadPlugins
    loadPlugins(false);
#ifndef WIN32
    for(list<string>::iterator i=this->_pluginsStringList.begin(); i!=_pluginsStringList.end(); i++)
    {

        _compileprocess.start("make",QStringList() << (string("Module_")+(*i) +string("_MetaLibrary") ).c_str());

// Wait for it to start
        while(!_compileprocess.waitForStarted());
        //return 0;
        {
// Continue reading the data until EOF reached
            QByteArray qdata;

            while(_compileprocess.waitForReadyRead())
                qdata.append(_compileprocess.readAll());

// Output the data
            qDebug(qdata.data());

            _compileprocess.waitForFinished();
        }
        _compileprocess.start("make",QStringList() << (string("Module_")+(*i) +string("_QQuickLibrary") ).c_str() );/*to recompile plugin
*/
        {
// Continue reading the data until EOF reached
            QByteArray qdata;

            while(_compileprocess.waitForReadyRead());
            qdata.append(_compileprocess.readAll());

// Output the data
            qDebug(qdata.data());

            _compileprocess.waitForFinished();
        }
        _compileprocess.waitForFinished();
    }
#endif
///reloadPlugins
    loadPlugins();
}
void MainWindow::loadPlugins(bool load)
{
    if(load)
    {
        for(list<string>::iterator i=this->_pluginsStringList.begin(); i!=_pluginsStringList.end(); i++)
        {
            MetaLibrary *lib=pmoc::MetaLibraryRegistry::instance()->getMetaLibraryForNamespace(*i);
            MetaQQuickLibrary *Qlib=pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickLibraryForNamespace(*i);
        }
///load

    }
    else
    {
///unload
        pmoc::MetaLibraryRegistry::instance()->closeAllLibraries();
        pmoc::MetaQQuickLibraryRegistry::instance()->closeAllLibraries();
    }

}
void MainWindow::loadFile(const QString& file)
{

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
    osg::ref_ptr<osg::Node> n=osgDB::readNodeFile(file.toStdString());
    osg::Group *rootnode=n->asGroup();
    bool audiotoadd=true;
    for(int i=0; i<rootnode->getNumChildren(); i++)
    {
        /*  osg::Node *ch=rootnode->getChild(i);
        if (ch->className()=="SoundRoot")
        {
           rootnode->removeChild(ch);
        #obj=getDownCastedClass(ch)
           #while obj.getUpdateCallback():obj.removeUpdateCallback(obj.getUpdateCallback())
           #obj.setCamera(self.win.osgview.getCamera())
           #toadd=False
           break;
        }*/
    }
    /*if(audiotoadd){
    	soundroot=osgAudio.SoundRoot()
    	soundroot.setCamera(self.win.osgview.getCamera())
    	root.addChild(soundroot)
    */



    _TreeNode.resetTreeViewModel();

    _osgview->setSceneData(rootnode);
    /*#tre=TreeNodeDataObject("ROOT",0)
    #recursive parse scenegraph node:scenedata,root NodeListModel and return the Global QModel

    self.win.OSGQTFramer.setbtWorld(None)*/
    parseScene(n,0,5);
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
void MainWindow::saveFile(QString const&file)
{
    /*osgAudio.SoundManager.instance().stopAllSources()*/
    //_selectedTree=self._picker._selectedNode
    osg::Group* gr;
    if (this->_osgpicker->_selectedNode)
    {

        gr=_osgpicker->_selectedNode->asGroup();
        if (gr)
            gr->removeChild(_osgpicker->wirebox);
    }
    _osgpicker->_selectedNode=0;
    /*#restore bullet transform dldagatino
    self.win.Phi.setFileName(file+'Phi')
    self.win.Phi.savePhysics()*/
    osgDB::writeNodeFile(*_osgview->getSceneData(),file.toStdString());
    setCurrentFile(file);
    //#self.userSpace.setFileName(file+'Phi')
    //self.win.Phi.postSaving()#restor callback after saving
    statusBar()->showMessage(file+"File saved", 2000);
}

string MainWindow::generateID(osg::Object * scenedata)
{
#ifndef WIN32
    if(sizeof(unsigned long int)!=8)
    {
        std::cerr<<"seams you havent a 64 bit built "<<endl;
        cout<<sizeof(unsigned long int)<<endl;
        cout<<sizeof(unsigned long long int)<<endl;
        exit(-1);

    }
	stringstream ss;
	ss << ((unsigned long int)(scenedata));
	return string("0x") + ss.str();
#else
	if (sizeof(unsigned long long int) != 8)
	{
		std::cerr << "seams you havent a 64 bit built " << endl;
		cout << sizeof(unsigned long int) << endl;
		cout << sizeof(unsigned long long int) << endl;
		exit(-1);

	}

    stringstream ss;
	ss << ((unsigned long long int)(scenedata));
    return string("0x")+ss.str();
#endif
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
    QString name=QString( QString::fromUtf8(scenedata->getName().c_str()));

    QString typen((scenedata->libraryName()+string("::")+scenedata->className()).c_str());

    TreeNodeDataObject *tre=new TreeNodeDataObject(name,depth,typen,0,curnode);
    //tre->_parentModel=curnode;
    // tre->_subnodes=0;
    tre->_subnodes=new TreeNodeModel();
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
///where in Qt event thread
///so
///add a findnodecallback
///and wait till it signal its termination


    TreeNodeModel* papa;
    if(_selectedqnode)
    {
        papa=_selectedqnode->_parentModel;
        QModelIndex index=papa->index(papa->nodeindex(_selectedqnode),0,QModelIndex());
        papa->setData(index,QVariant::fromValue<bool>(false),TreeNodeModel::selectedRole);


    }

    _selectedqnode =this->_TreeNode.getTreeNodeByName(nodename);
    papa=_selectedqnode->_parentModel;
    int idx=papa->nodeindex(_selectedqnode);
    QModelIndex index=papa->index(idx,0,QModelIndex());
  //  index.r=0;
    papa->setData(index,QVariant::fromValue<bool>(true),TreeNodeModel::selectedRole);

    _findNamedNodeCallback=new findNamedNodeCallback(nodename.toStdString(),_osgview->getSceneData(),this);


    connect(_findNamedNodeCallback.get(),SIGNAL(namedNodesFound()), this,SLOT(setNodeModelStep2()));
    _osgview->getSceneData()->addUpdateCallback(_findNamedNodeCallback);


}


void MainWindow::setNodeModelStep2()
{

    _osgview->getSceneData()->removeUpdateCallback(_findNamedNodeCallback);
    osg::Node* n=_findNamedNodeCallback->_result.empty()?0:_findNamedNodeCallback->_result.front();
    /*check if UIEDitor menu class*/

if(n){
osg::Group *gr=n->asGroup();
if(gr)
    if(_selectedqnode->_subnodes->rowCount()!=gr->getNumChildren()){
        for(int i=0;i<gr->getNumChildren();i++)
        parseScene(gr->getChild(i),_selectedqnode->_level+1,_selectedqnode->_level+5,_selectedqnode->_subnodes);
        }
    _generatedEditor->setosg_Group_cur_selected(gr);

    _generatedEditor->setosg_Node_cur_selected(n);
    _generatedEditor->setosg_StateSet_cur_selected(n->getStateSet());
 _findNamedNodeCallback=0;
///NODES
    {
        Instance inst=PMOCADDOBJECT(*n);
        QQUICKMETACLASS(inst.model->id())->getGuiComponent(_win,inst,_UIrootItem);
        pmoc::MetaQQuickClass * classs= QQUICKMETACLASS(inst.model->id());
        QQModel *mod=classs->getQQModel4QQuickView(_win);
        emit treeNodeSelected(mod);

    }
///STATESETS
    {
        osg::StateSet * st=n->getStateSet();
        if(st)
        {

            Instance inst=PMOCADDOBJECT( *st);
            QQUICKMETACLASS(inst.model->id())->getGuiComponent(_win,inst,_UIrootItem);

        }
    }

///CALLBACKS
    {
        osg::NodeCallback * cb=n->getUpdateCallback();
        if(cb)
        {
            Instance inst=PMOCADDOBJECT( *cb);
            QQUICKMETACLASS(inst.model->id())->getGuiComponent(_win,inst,_UIrootItem);
        }
    }



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



    osg::Node * n=   reinterpret_cast<osg::Node*>(this->_generatedEditor->cur_operand.ptr);//qqn->getModel();
    if(n->getName().empty())
    n->setName(generateID(n));


    cout<<"Say my name"<<n->getName()<<std::endl;

    QString typen((n->libraryName()+string("::")+n->className()).c_str());

  //  TreeNodeDataObject * newtreenode=new TreeNodeDataObject(QString(n->getName().c_str()), this->_selectedqnode->_level+1,typen,new TreeNodeModel(),_selectedqnode->_subnodes);

    //this->_selectedqnode->_subnodes->addNode(newtreenode);
    parseScene(n,_selectedqnode->_level+1,_selectedqnode->_level+5,_selectedqnode->_parentModel);


}


MainWindow::MainWindow(QWidget *parent) :
    BaseQWindow()//,    ui(new Ui::MainWindow)
{

//_TreeNode=new TreeNodeModel(parent);
    _selectedqnode=0;
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
	_container = QWidget::createWindowContainer(_win, this);//	ui->centralWidget)
	// win->setParent(this->win);
	_container->setMinimumSize(800, 600);
	_container->setMaximumSize(10000, 6000);
	_container->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

	setCentralWidget(_container);
    // Create an OpenGL context
    QOpenGLContext*   m_context = new QOpenGLContext;
    m_context->setFormat( format );
    m_context->create();

    // Make the context current on this window
    m_context->makeCurrent(_win );
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


    _win->setResizeMode(QQuickView::SizeRootObjectToView);

    const char *uri = "osgQtQuick";
    osgQtQuick::registerTypes(uri);
    const char *myuri0 = "myQPlot";

    const char *myuri = "mySimulationNode";
    const char *myuri2 = "ColorComponentsNode";
    int maj = 1, min = 0;
    ///	qmlRegisterType<OSGTemplateonNode>(myuri, maj, min, "OSGSimulationNode");
    ///
	 	qmlRegisterType<ColorComponents>(myuri2, maj, min, "ColorComponents");

    list<string> plugins;
    plugins.push_back("osgUtil");
///osg not required cause dependency but add it for runtime plugin recompilation
    plugins.push_back("osg");

    _makefilePath="/home/xeul/SRC/osgCastWizard2/";
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
    osg::ref_ptr<osg::Node> vache=osgDB::readNodeFile("test.osg");



    parseScene(vache.get(),0,5);
    _selectedqnode=_TreeNode._treeNodes[0];
    _win->setClearBeforeRendering(false);
    _win->setColor(Qt::blue);
    // _win->rootContext()->setContextProperty("myModel",&_TreeNode);

_win->engine()->addImportPath("./qml");
_win->engine()->addPluginPath("./qml");
qWarning()<<_win->engine()->pluginPathList();
_win->engine()->setOutputWarningsToStandardError(true);
    _win->rootContext()->setContextProperty("objModel",&_TreeNode);
    _win->setSource(QUrl::fromLocalFile("osgGUI.qml"));//main.qml"));
    _UIrootItem=_win->rootObject() ->findChild<QQuickItem*>("fullview");
    _generatedEditor=new UIEditor(_win, _UIrootItem);


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


   // resize(width,height);
  //  _win->setVisible(false);

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
    _osgview=osgQtQuick::QuickWindowViewer::instance(_win)->compositeViewer()->getView(0);



    if (vache.valid())
        _osgview->setSceneData(vache->asGroup());

    _osgview->setLightingMode(osg::View::SKY_LIGHT);



    _generatedEditor->setosg_Group_cur_selected(vache->asGroup());


    Instance inst=PMOCADDOBJECT( *_generatedEditor->osg_Group_cur_selected);
    QQUICKMETACLASS(inst.model->id())->getGuiComponent(_win,inst,_UIrootItem);

    _win->setManagedview(_osgview);
    osgGA::FirstPersonManipulator * orb=new 	myFirstPersonManipulator;
    _osgview->setCameraManipulator( orb );

    _osgpicker=new PickHandler(_generatedEditor);
    _osgview->addEventHandler(_osgpicker);


    _osgview->addEventHandler(new osgViewer::WindowSizeHandler);

#if 0
    connect(ui->actionExit,SIGNAL(triggered()),this,SLOT(Quit( )));
#endif
    //this->setGeometry(0,0,200,400);
    //move(500,500);



 /*  _textEdit = new QsciScintilla; // инитилизируем редактор
    _textEdit->setUtf8(true); // мы же хотим читать кириллицу
    // 	 	QMainWindow * other=new QMainWindow(this);
    //other->setCentralWidget(textEdit); // задаем редактор в ui
    //other->show();
    QsciLexerCPP * lexCpp = new QsciLexerCPP(this); // создаем лексер (схему подсветки)
    _textEdit->setLexer(lexCpp); // задаем С++ лексер нашему редактору
_textEdit->show();*/

   
    connect(_generatedEditor,SIGNAL(osg_Node_added(pmoc::QQModel*)),this,SLOT(newNodeadded(pmoc::QQModel*)));

    connect(_generatedEditor,SIGNAL(selectedChanged(pmoc::QQModel*)),this,SLOT(selectedStatus(pmoc::QQModel*)));
    connect(_generatedEditor,SIGNAL(copied(pmoc::QQModel*)),this,SLOT(copiedStatus(pmoc::QQModel*)));
    connect(_generatedEditor,SIGNAL(cutted(pmoc::QQModel*)),this,SLOT(cuttedStatus(pmoc::QQModel*)));
    connect(_generatedEditor,SIGNAL(pasted(pmoc::QQModel*)),this,SLOT(pastedStatus(pmoc::QQModel*)));
    connect(_generatedEditor,SIGNAL(deleted(pmoc::QQModel*)),this,SLOT(deletedStatus(pmoc::QQModel*)));

    connect(_win->rootObject(),SIGNAL(nodeselected(QString)),this,SLOT(setNodeModel(QString)));
   connect(this,SIGNAL(treeNodeSelected(pmoc::QQModel*)),_generatedEditor,SLOT(setOperand(pmoc::QQModel*)));
    //	_nodeadder=new NodeAdder(_scene);
    //	_scene->setUpdateCallback(_nodeadder);

    _findNamedNodeCallback=new findNamedNodeCallback("",_osgview->getSceneData(),this);
    // ui->verticalLayout_2->addWidget(container);
  //  _win->setVisible(true);

  //  QQuickItem* uied=_win->rootObject() ->findChild<QQuickItem*>("menu",Qt::FindChildrenRecursively);
//QMenu * fok=uied ->findChild<QMenu*>("osg_Node",Qt::FindChildrenRecursively);
//fok->setEnabled(false);
    //	win->showFullScreen ();
	setAttribute(Qt::WA_DeleteOnClose);

	/* textEdit = new QTextEdit;
	setCentralWidget(textEdit);*/

	createActions();
	createMenus();
	(void)statusBar();

	setWindowFilePath(QString());

	_viewMenu = menuBar()->addMenu(tr("&View"));
	_fullscreenAct = new QAction(this);
	_fullscreenAct->setText("QWindow.FullScreen");
	_viewMenu->addAction(_fullscreenAct);
	connect(_fullscreenAct, SIGNAL(triggered()), this, SLOT(Fullscreen()));
	_osgview->getEventQueue()->windowResize(0,0,1200,900);
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
