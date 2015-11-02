#include <osg/ScriptEngine>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/ScriptEngine_pmoc.hpp>
#include <customCode/osg/ScriptEngine_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
using namespace pmoc;
 unsigned int  osg::QReflect_Script::getModifiedCount()const{
return _model->getModifiedCount();

}
 void osg::QReflect_Script::dirty(){
 _model->dirty();

}
const QString osg::QReflect_Script::getLanguage()const{return QString(_model->getLanguage().c_str());}
const QString osg::QReflect_Script::getScript()const{return QString(_model->getScript().c_str());}
void osg::QReflect_Script::setLanguage(const QString &par){_model->setLanguage(par.toStdString());emit LanguageChanged(par);}
void osg::QReflect_Script::setScript(const QString &par){_model->setScript(par.toStdString());emit ScriptChanged(par);}

///DefaultConstructor////////////////
osg::QReflect_Script::QReflect_Script(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Script*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Script::~QReflect_Script( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_Script::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_Script::createInstance( ){
osg::ref_ptr<osg::Script> osg_Script_ptr	;
osg_Script_ptr = new osg::Script ()	;
Instance o(PMOCGETMETACLASS("osg::Script"),(void*)osg_Script_ptr.get()		,true);
_managedinstances.insert(osg_Script_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Script::MetaQReflect_Script():MetaQQuickClass( "osg::Script"){
_typeid=&typeid(osg::Script );           qRegisterMetaType<QMLScript>();
qmlRegisterType<QReflect_Script>("pmoc.osg",1,0,"QReflect_Script");
           qmlRegisterType<QMLScript>("pmoc.osg",1,0,"QMLScript");
};
const std::string osg::MetaQReflect_Script::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Script::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Script::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Script::createQQModel(Instance*i){ //return new MetaQReflect_Script_QModel(i);}
QMLScript *ret =new QMLScript(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Object *mother =dynamic_cast<osg::Object*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Object");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Object model for osg::Scriptis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Object");
if(!cl){std::cerr<<"osg::Object QQModel for osg::Scriptis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ScriptEngine_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/ScriptEngine_pmoc.hpp>
#include <customCode/osg/ScriptEngine_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osg/ScriptEngine_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_ScriptEngine::run(osg::QReflect_Script *p0){
return _model->run(p0->_model);

}
QString  osg::QReflect_ScriptEngine::getLanguage()const{
QString ret(_model->getLanguage().c_str());return ret;

}

///DefaultConstructor////////////////
osg::QReflect_ScriptEngine::QReflect_ScriptEngine(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::ScriptEngine*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_ScriptEngine::~QReflect_ScriptEngine( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_ScriptEngine::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_ScriptEngine::createInstance( ){
std::cerr<<"osg::ScriptEngine is not instanciable"<<std::endl;return Instance();


}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_ScriptEngine::MetaQReflect_ScriptEngine():MetaQQuickClass( "osg::ScriptEngine"){
_typeid=&typeid(osg::ScriptEngine );           qRegisterMetaType<QMLScriptEngine>();
qmlRegisterType<QReflect_ScriptEngine>("pmoc.osg",1,0,"QReflect_ScriptEngine");
           qmlRegisterType<QMLScriptEngine>("pmoc.osg",1,0,"QMLScriptEngine");
};
const std::string osg::MetaQReflect_ScriptEngine::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_ScriptEngine::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_ScriptEngine::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_ScriptEngine::createQQModel(Instance*i){ //return new MetaQReflect_ScriptEngine_QModel(i);}
QMLScriptEngine *ret =new QMLScriptEngine(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Object *mother =dynamic_cast<osg::Object*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Object");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Object model for osg::ScriptEngineis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Object");
if(!cl){std::cerr<<"osg::Object QQModel for osg::ScriptEngineis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ScriptEngine_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/ScriptEngine_pmoc.hpp>
#include <customCode/osg/ScriptEngine_pmoc.hpp>
#include <customCode/osg/Callback_pmoc.hpp>
#include <customCode/osg/ScriptEngine_pmoc.hpp>
#include <osg/ScriptEngine>
#include <osg/ScriptEngine_pmoc.hpp>
using namespace pmoc;
osg::QReflect_Script * osg::QReflect_ScriptNodeCallback::getScript()const{
PMOCSAFEADDOBJECT(*_model->getScript(),inst);
return inst.isValid()?((osg::QReflect_Script * )inst.model->createQQModel(&inst)):NULL;
}
void osg::QReflect_ScriptNodeCallback::pmoc_reverse_setScript( osg::QReflect_Script *par){_model->setScript(NULL);
emit ScriptChanged(NULL);
}
void osg::QReflect_ScriptNodeCallback::setScript( osg::QReflect_Script *par){_model->setScript(par->_model);
emit ScriptChanged(par);
}

///DefaultConstructor////////////////
osg::QReflect_ScriptNodeCallback::QReflect_ScriptNodeCallback(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =dynamic_cast<osg::ScriptNodeCallback*>(reinterpret_cast<osg::Referenced*>(i->ptr));
 if(!_model)  _model =dynamic_cast<osg::ScriptNodeCallback*>(reinterpret_cast<osg::Object*>(i->ptr));
 if(!_model)  _model =reinterpret_cast<osg::ScriptNodeCallback*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_ScriptNodeCallback::~QReflect_ScriptNodeCallback( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_ScriptNodeCallback::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_ScriptNodeCallback::createInstance( ){
osg::ref_ptr<osg::ScriptNodeCallback> osg_ScriptNodeCallback_ptr	;
osg_ScriptNodeCallback_ptr = new osg::ScriptNodeCallback ()	;
Instance o(PMOCGETMETACLASS("osg::ScriptNodeCallback"),(void*)dynamic_cast<osg::Object*>( osg_ScriptNodeCallback_ptr.get()		),true);
_managedinstances.insert(osg_ScriptNodeCallback_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_ScriptNodeCallback::MetaQReflect_ScriptNodeCallback():MetaQQuickClass( "osg::ScriptNodeCallback"){
_typeid=&typeid(osg::ScriptNodeCallback );           qRegisterMetaType<QMLScriptNodeCallback>();
qmlRegisterType<QReflect_ScriptNodeCallback>("pmoc.osg",1,0,"QReflect_ScriptNodeCallback");
           qmlRegisterType<QMLScriptNodeCallback>("pmoc.osg",1,0,"QMLScriptNodeCallback");
       PMOCACTION("getScript","setScript","unsetScript");
};
const std::string osg::MetaQReflect_ScriptNodeCallback::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_ScriptNodeCallback::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_ScriptNodeCallback::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_ScriptNodeCallback::createQQModel(Instance*i){ //return new MetaQReflect_ScriptNodeCallback_QModel(i);}
QMLScriptNodeCallback *ret =new QMLScriptNodeCallback(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::NodeCallback *mother =dynamic_cast<osg::NodeCallback*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::NodeCallback");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::NodeCallback model for osg::ScriptNodeCallbackis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::NodeCallback");
if(!cl){std::cerr<<"osg::NodeCallback QQModel for osg::ScriptNodeCallbackis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ScriptEngine_pmoc.cpp"
#endif



