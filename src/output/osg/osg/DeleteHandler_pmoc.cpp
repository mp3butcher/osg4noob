#include <osg/DeleteHandler>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/DeleteHandler_pmoc.hpp>
#include <customCode/osg/DeleteHandler_pmoc.hpp>
#include <customCode/osg/Referenced_pmoc.hpp>
using namespace pmoc;
 void osg::QReflect_DeleteHandler::doDelete(osg::QReflect_Referenced *p0){
 _model->doDelete(p0->_model);

}
 void osg::QReflect_DeleteHandler::flush(){
 _model->flush();

}
 void osg::QReflect_DeleteHandler::flushAll(){
 _model->flushAll();

}
 void osg::QReflect_DeleteHandler::requestDelete(osg::QReflect_Referenced *p0){
 _model->requestDelete(p0->_model);

}
const unsigned int osg::QReflect_DeleteHandler::getFrameNumber()const{return _model->getFrameNumber();}
const unsigned int osg::QReflect_DeleteHandler::getNumFramesToRetainObjects()const{return _model->getNumFramesToRetainObjects();}
void  osg::QReflect_DeleteHandler::setFrameNumber(const unsigned int &par){_model->setFrameNumber(par);emit FrameNumberChanged(par);}
void  osg::QReflect_DeleteHandler::setNumFramesToRetainObjects(const unsigned int &par){_model->setNumFramesToRetainObjects(par);emit NumFramesToRetainObjectsChanged(par);}

///DefaultConstructor////////////////
osg::QReflect_DeleteHandler::QReflect_DeleteHandler(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::DeleteHandler*>(i->ptr);
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_DeleteHandler::~QReflect_DeleteHandler( ){
 }
///update this according _model new state
void osg::QReflect_DeleteHandler::updateModel(){
}
Instance osg::MetaQReflect_DeleteHandler::createInstance( ){
osg::DeleteHandler* osg_DeleteHandler_ptr	;
osg_DeleteHandler_ptr= new osg::DeleteHandler()	;
Instance o(PMOCGETMETACLASS("osg::DeleteHandler"),(void*)osg_DeleteHandler_ptr	,true);
_managedinstances.insert(osg_DeleteHandler_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_DeleteHandler::MetaQReflect_DeleteHandler():MetaQQuickClass( "osg::DeleteHandler"){
_typeid=&typeid(osg::DeleteHandler );           qRegisterMetaType<QMLDeleteHandler>();
qmlRegisterType<QReflect_DeleteHandler>("pmoc.osg",1,0,"QReflect_DeleteHandler");
           qmlRegisterType<QMLDeleteHandler>("pmoc.osg",1,0,"QMLDeleteHandler");
};
const std::string osg::MetaQReflect_DeleteHandler::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_DeleteHandler::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_DeleteHandler::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_DeleteHandler::createQQModel(Instance*i){ //return new MetaQReflect_DeleteHandler_QModel(i);}
QMLDeleteHandler *ret =new QMLDeleteHandler(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_DeleteHandler_pmoc.cpp"
#endif


