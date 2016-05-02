#include <osg/Notify>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Notify_pmoc.hpp>
#include <customCode/osg/Notify_pmoc.hpp>
#include <customCode/osg/Referenced_pmoc.hpp>
using namespace pmoc;

///DefaultConstructor////////////////
osg::QReflect_NotifyHandler::QReflect_NotifyHandler(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::NotifyHandler*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_NotifyHandler::~QReflect_NotifyHandler( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_NotifyHandler::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_NotifyHandler::createInstance( ){
std::cerr<<"osg::NotifyHandler is not instanciable"<<std::endl;return Instance();


}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_NotifyHandler::MetaQReflect_NotifyHandler():MetaQQuickClass( "osg::NotifyHandler"){
_typeid=&typeid(osg::NotifyHandler );
           qRegisterMetaType<osg::QMLNotifyHandler>();
           qRegisterMetaType<osg::QMLNotifyHandler*>("pmoc.osg.QMLNotifyHandler");
qmlRegisterType<osg::QReflect_NotifyHandler>("pmoc.osg",1,0,"QReflect_NotifyHandler");
           qmlRegisterType<osg::QMLNotifyHandler>("pmoc.osg",1,0,"QMLNotifyHandler");
};
const std::string osg::MetaQReflect_NotifyHandler::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_NotifyHandler::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_NotifyHandler::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_NotifyHandler::createQQModel(const Instance*i){ //return new MetaQReflect_NotifyHandler_QModel(i);}
QMLNotifyHandler *ret =new QMLNotifyHandler(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Referenced *mother =dynamic_cast<osg::Referenced*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Referenced");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Referenced model for osg::NotifyHandleris invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Referenced");
if(!cl){std::cerr<<"osg::Referenced QQModel for osg::NotifyHandleris not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Notify_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Notify_pmoc.hpp>
#include <customCode/osg/Notify_pmoc.hpp>
#include <customCode/osg/Notify_pmoc.hpp>
using namespace pmoc;

///DefaultConstructor////////////////
osg::QReflect_StandardNotifyHandler::QReflect_StandardNotifyHandler(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::StandardNotifyHandler*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_StandardNotifyHandler::~QReflect_StandardNotifyHandler( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_StandardNotifyHandler::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_StandardNotifyHandler::createInstance( ){
std::cerr<<"osg::StandardNotifyHandler is not instanciable"<<std::endl;return Instance();


}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_StandardNotifyHandler::MetaQReflect_StandardNotifyHandler():MetaQQuickClass( "osg::StandardNotifyHandler"){
_typeid=&typeid(osg::StandardNotifyHandler );
           qRegisterMetaType<osg::QMLStandardNotifyHandler>();
           qRegisterMetaType<osg::QMLStandardNotifyHandler*>("pmoc.osg.QMLStandardNotifyHandler");
qmlRegisterType<osg::QReflect_StandardNotifyHandler>("pmoc.osg",1,0,"QReflect_StandardNotifyHandler");
           qmlRegisterType<osg::QMLStandardNotifyHandler>("pmoc.osg",1,0,"QMLStandardNotifyHandler");
};
const std::string osg::MetaQReflect_StandardNotifyHandler::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_StandardNotifyHandler::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_StandardNotifyHandler::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_StandardNotifyHandler::createQQModel(const Instance*i){ //return new MetaQReflect_StandardNotifyHandler_QModel(i);}
QMLStandardNotifyHandler *ret =new QMLStandardNotifyHandler(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::NotifyHandler *mother =dynamic_cast<osg::NotifyHandler*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::NotifyHandler");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::NotifyHandler model for osg::StandardNotifyHandleris invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::NotifyHandler");
if(!cl){std::cerr<<"osg::NotifyHandler QQModel for osg::StandardNotifyHandleris not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Notify_pmoc.cpp"
#endif




