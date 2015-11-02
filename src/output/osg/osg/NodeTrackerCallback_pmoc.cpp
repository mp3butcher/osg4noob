#include <osg/NodeTrackerCallback>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/NodeTrackerCallback_pmoc.hpp>
#include <customCode/osg/NodeTrackerCallback_pmoc.hpp>
#include <customCode/osg/Callback_pmoc.hpp>
#include <customCode/osg/Node_pmoc.hpp>
#include <customCode/osg/ObserverNodePath_pmoc.hpp>
#include <osg/Node>
#include <osg/Node_pmoc.hpp>
using namespace pmoc;
 void osg::QReflect_NodeTrackerCallback::setTrackNodePath(osg::QReflect_ObserverNodePath *p0){
 _model->setTrackNodePath(*p0->_model);

}
 void osg::QReflect_NodeTrackerCallback::update(osg::QReflect_Node *p0){
 _model->update(*p0->_model);

}
osg::QReflect_Node * osg::QReflect_NodeTrackerCallback::getTrackNode()const{
PMOCSAFEADDOBJECT(*_model->getTrackNode(),inst);
return inst.isValid()?((osg::QReflect_Node * )inst.model->createQQModel(&inst)):NULL;
}
void osg::QReflect_NodeTrackerCallback::pmoc_reverse_setTrackNode( osg::QReflect_Node *par){_model->setTrackNode(NULL);
emit TrackNodeChanged(NULL);
}
void osg::QReflect_NodeTrackerCallback::setTrackNode( osg::QReflect_Node *par){_model->setTrackNode(par->_model);
emit TrackNodeChanged(par);
}

///DefaultConstructor////////////////
osg::QReflect_NodeTrackerCallback::QReflect_NodeTrackerCallback(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =dynamic_cast<osg::NodeTrackerCallback*>(reinterpret_cast<osg::Referenced*>(i->ptr));
 if(!_model)  _model =dynamic_cast<osg::NodeTrackerCallback*>(reinterpret_cast<osg::Object*>(i->ptr));
 if(!_model)  _model =reinterpret_cast<osg::NodeTrackerCallback*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_NodeTrackerCallback::~QReflect_NodeTrackerCallback( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_NodeTrackerCallback::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_NodeTrackerCallback::createInstance( ){
std::cerr<<"osg::NodeTrackerCallback is not instanciable"<<std::endl;return Instance();


}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_NodeTrackerCallback::MetaQReflect_NodeTrackerCallback():MetaQQuickClass( "osg::NodeTrackerCallback"){
_typeid=&typeid(osg::NodeTrackerCallback );           qRegisterMetaType<QMLNodeTrackerCallback>();
qmlRegisterType<QReflect_NodeTrackerCallback>("pmoc.osg",1,0,"QReflect_NodeTrackerCallback");
           qmlRegisterType<QMLNodeTrackerCallback>("pmoc.osg",1,0,"QMLNodeTrackerCallback");
       PMOCACTION("getTrackNode","setTrackNode","unsetTrackNode");
};
const std::string osg::MetaQReflect_NodeTrackerCallback::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_NodeTrackerCallback::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_NodeTrackerCallback::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_NodeTrackerCallback::createQQModel(Instance*i){ //return new MetaQReflect_NodeTrackerCallback_QModel(i);}
QMLNodeTrackerCallback *ret =new QMLNodeTrackerCallback(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::NodeCallback *mother =dynamic_cast<osg::NodeCallback*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::NodeCallback");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::NodeCallback model for osg::NodeTrackerCallbackis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::NodeCallback");
if(!cl){std::cerr<<"osg::NodeCallback QQModel for osg::NodeTrackerCallbackis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_NodeTrackerCallback_pmoc.cpp"
#endif



