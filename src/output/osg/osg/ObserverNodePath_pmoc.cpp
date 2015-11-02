#include <osg/ObserverNodePath>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/ObserverNodePath_pmoc.hpp>
#include <customCode/osg/ObserverNodePath_pmoc.hpp>
#include <customCode/osg/Node_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_ObserverNodePath::empty()const{
return _model->empty();

}
 void osg::QReflect_ObserverNodePath::clearNodePath(){
 _model->clearNodePath();

}
 void osg::QReflect_ObserverNodePath::setNodePathTo(osg::QReflect_Node *p0){
 _model->setNodePathTo(p0->_model);

}

///DefaultConstructor////////////////
osg::QReflect_ObserverNodePath::QReflect_ObserverNodePath(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::ObserverNodePath*>(i->ptr);
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_ObserverNodePath::~QReflect_ObserverNodePath( ){
 }
///update this according _model new state
void osg::QReflect_ObserverNodePath::updateModel(){
}
Instance osg::MetaQReflect_ObserverNodePath::createInstance( ){
osg::ObserverNodePath* osg_ObserverNodePath_ptr	;
osg_ObserverNodePath_ptr= new osg::ObserverNodePath()	;
Instance o(PMOCGETMETACLASS("osg::ObserverNodePath"),(void*)osg_ObserverNodePath_ptr	,true);
_managedinstances.insert(osg_ObserverNodePath_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_ObserverNodePath::MetaQReflect_ObserverNodePath():MetaQQuickClass( "osg::ObserverNodePath"){
_typeid=&typeid(osg::ObserverNodePath );           qRegisterMetaType<QMLObserverNodePath>();
qmlRegisterType<QReflect_ObserverNodePath>("pmoc.osg",1,0,"QReflect_ObserverNodePath");
           qmlRegisterType<QMLObserverNodePath>("pmoc.osg",1,0,"QMLObserverNodePath");
};
const std::string osg::MetaQReflect_ObserverNodePath::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_ObserverNodePath::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_ObserverNodePath::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_ObserverNodePath::createQQModel(Instance*i){ //return new MetaQReflect_ObserverNodePath_QModel(i);}
QMLObserverNodePath *ret =new QMLObserverNodePath(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ObserverNodePath_pmoc.cpp"
#endif



