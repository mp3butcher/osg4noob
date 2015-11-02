#include <osg/Callback>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Callback_pmoc.hpp>
#include <customCode/osg/Callback_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osg/Callback_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <osg/Callback>
#include <osg/Callback_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_Callback::run(osg::QReflect_Object *p0 ,osg::QReflect_Object *p1){
return _model->run(p0->_model ,p1->_model);

}
 bool  osg::QReflect_Callback::traverse(osg::QReflect_Object *p0 ,osg::QReflect_Object *p1){
return _model->traverse(p0->_model ,p1->_model);

}
osg::QReflect_Callback * osg::QReflect_Callback::getNestedCallback()const{
PMOCSAFEADDOBJECT(*_model->getNestedCallback(),inst);
return inst.isValid()?((osg::QReflect_Callback * )inst.model->createQQModel(&inst)):NULL;
}
void   osg::QReflect_Callback::addNestedCallback( osg::QReflect_Callback *par){
_model->addNestedCallback(par->_model);
}
void   osg::QReflect_Callback::pmoc_reverse_addNestedCallback( osg::QReflect_Callback *par){
_model->removeNestedCallback(par->_model);
emit NestedCallbackCollectionChanged();
}
void osg::QReflect_Callback::pmoc_reverse_setNestedCallback( osg::QReflect_Callback *par){_model->setNestedCallback(NULL);
emit NestedCallbackChanged(NULL);
}
void osg::QReflect_Callback::setNestedCallback( osg::QReflect_Callback *par){_model->setNestedCallback(par->_model);
emit NestedCallbackChanged(par);
}

///DefaultConstructor////////////////
osg::QReflect_Callback::QReflect_Callback(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =dynamic_cast<osg::Callback*>(reinterpret_cast<osg::Referenced*>(i->ptr));
 if(!_model)  _model =dynamic_cast<osg::Callback*>(reinterpret_cast<osg::Object*>(i->ptr));
 if(!_model)  _model =reinterpret_cast<osg::Callback*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Callback::~QReflect_Callback( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_Callback::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_Callback::createInstance( ){
osg::ref_ptr<osg::Callback> osg_Callback_ptr	;
osg_Callback_ptr = new osg::Callback ()	;
Instance o(PMOCGETMETACLASS("osg::Callback"),(void*)dynamic_cast<osg::Object*>( osg_Callback_ptr.get()		),true);
_managedinstances.insert(osg_Callback_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Callback::MetaQReflect_Callback():MetaQQuickClass( "osg::Callback"){
_typeid=&typeid(osg::Callback );           qRegisterMetaType<QMLCallback>();
qmlRegisterType<QReflect_Callback>("pmoc.osg",1,0,"QReflect_Callback");
           qmlRegisterType<QMLCallback>("pmoc.osg",1,0,"QMLCallback");
       PMOCACTION("getNestedCallback","addNestedCallback","removeNestedCallback");
       PMOCACTION("getNestedCallback","setNestedCallback","unsetNestedCallback");
};
const std::string osg::MetaQReflect_Callback::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Callback::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Callback::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Callback::createQQModel(Instance*i){ //return new MetaQReflect_Callback_QModel(i);}
QMLCallback *ret =new QMLCallback(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Object *mother =dynamic_cast<osg::Object*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Object");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Object model for osg::Callbackis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Object");
if(!cl){std::cerr<<"osg::Object QQModel for osg::Callbackis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Callback_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Callback_pmoc.hpp>
#include <customCode/osg/Callback_pmoc.hpp>
#include <customCode/osg/Callback_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_CallbackObject::run(osg::QReflect_Object *p0 ,osg::QReflect_Object *p1){
return _model->run(p0->_model ,p1->_model);

}
 bool  osg::QReflect_CallbackObject::run(osg::QReflect_Object *p0)const{
return _model->run(p0->_model);

}
osg::QReflect_CallbackObject*osg::QReflect_CallbackObject::asCallbackObject()const{
PMOCSAFEADDOBJECT(*_model->asCallbackObject(),inst);
return inst.isValid()?((osg::QReflect_CallbackObject * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_CallbackObject*osg::QReflect_CallbackObject::asCallbackObject(){
PMOCSAFEADDOBJECT(*_model->asCallbackObject(),inst);
return inst.isValid()?((osg::QReflect_CallbackObject * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osg::QReflect_CallbackObject::QReflect_CallbackObject(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =dynamic_cast<osg::CallbackObject*>(reinterpret_cast<osg::Referenced*>(i->ptr));
 if(!_model)  _model =dynamic_cast<osg::CallbackObject*>(reinterpret_cast<osg::Object*>(i->ptr));
 if(!_model)  _model =reinterpret_cast<osg::CallbackObject*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_CallbackObject::~QReflect_CallbackObject( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_CallbackObject::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_CallbackObject::createInstance( ){
osg::ref_ptr<osg::CallbackObject> osg_CallbackObject_ptr	;
osg_CallbackObject_ptr = new osg::CallbackObject ()	;
Instance o(PMOCGETMETACLASS("osg::CallbackObject"),(void*)dynamic_cast<osg::Object*>( osg_CallbackObject_ptr.get()		),true);
_managedinstances.insert(osg_CallbackObject_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_CallbackObject::MetaQReflect_CallbackObject():MetaQQuickClass( "osg::CallbackObject"){
_typeid=&typeid(osg::CallbackObject );           qRegisterMetaType<QMLCallbackObject>();
qmlRegisterType<QReflect_CallbackObject>("pmoc.osg",1,0,"QReflect_CallbackObject");
           qmlRegisterType<QMLCallbackObject>("pmoc.osg",1,0,"QMLCallbackObject");
};
const std::string osg::MetaQReflect_CallbackObject::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_CallbackObject::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_CallbackObject::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_CallbackObject::createQQModel(Instance*i){ //return new MetaQReflect_CallbackObject_QModel(i);}
QMLCallbackObject *ret =new QMLCallbackObject(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Callback *mother =dynamic_cast<osg::Callback*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Callback");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Callback model for osg::CallbackObjectis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Callback");
if(!cl){std::cerr<<"osg::Callback QQModel for osg::CallbackObjectis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Callback_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Callback_pmoc.hpp>
#include <customCode/osg/Callback_pmoc.hpp>
#include <customCode/osg/Callback_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_NodeCallback::run(osg::QReflect_Object *p0 ,osg::QReflect_Object *p1){
return _model->run(p0->_model ,p1->_model);

}

///DefaultConstructor////////////////
osg::QReflect_NodeCallback::QReflect_NodeCallback(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =dynamic_cast<osg::NodeCallback*>(reinterpret_cast<osg::Referenced*>(i->ptr));
 if(!_model)  _model =dynamic_cast<osg::NodeCallback*>(reinterpret_cast<osg::Object*>(i->ptr));
 if(!_model)  _model =reinterpret_cast<osg::NodeCallback*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_NodeCallback::~QReflect_NodeCallback( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_NodeCallback::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_NodeCallback::createInstance( ){
osg::ref_ptr<osg::NodeCallback> osg_NodeCallback_ptr	;
osg_NodeCallback_ptr = new osg::NodeCallback ()	;
Instance o(PMOCGETMETACLASS("osg::NodeCallback"),(void*)dynamic_cast<osg::Object*>( osg_NodeCallback_ptr.get()		),true);
_managedinstances.insert(osg_NodeCallback_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_NodeCallback::MetaQReflect_NodeCallback():MetaQQuickClass( "osg::NodeCallback"){
_typeid=&typeid(osg::NodeCallback );           qRegisterMetaType<QMLNodeCallback>();
qmlRegisterType<QReflect_NodeCallback>("pmoc.osg",1,0,"QReflect_NodeCallback");
           qmlRegisterType<QMLNodeCallback>("pmoc.osg",1,0,"QMLNodeCallback");
};
const std::string osg::MetaQReflect_NodeCallback::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_NodeCallback::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_NodeCallback::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_NodeCallback::createQQModel(Instance*i){ //return new MetaQReflect_NodeCallback_QModel(i);}
QMLNodeCallback *ret =new QMLNodeCallback(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Callback *mother =dynamic_cast<osg::Callback*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Callback");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Callback model for osg::NodeCallbackis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Callback");
if(!cl){std::cerr<<"osg::Callback QQModel for osg::NodeCallbackis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Callback_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Callback_pmoc.hpp>
#include <customCode/osg/Callback_pmoc.hpp>
#include <customCode/osg/Callback_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_StateAttributeCallback::run(osg::QReflect_Object *p0 ,osg::QReflect_Object *p1){
return _model->run(p0->_model ,p1->_model);

}

///DefaultConstructor////////////////
osg::QReflect_StateAttributeCallback::QReflect_StateAttributeCallback(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =dynamic_cast<osg::StateAttributeCallback*>(reinterpret_cast<osg::Referenced*>(i->ptr));
 if(!_model)  _model =dynamic_cast<osg::StateAttributeCallback*>(reinterpret_cast<osg::Object*>(i->ptr));
 if(!_model)  _model =reinterpret_cast<osg::StateAttributeCallback*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_StateAttributeCallback::~QReflect_StateAttributeCallback( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_StateAttributeCallback::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_StateAttributeCallback::createInstance( ){
osg::ref_ptr<osg::StateAttributeCallback> osg_StateAttributeCallback_ptr	;
osg_StateAttributeCallback_ptr = new osg::StateAttributeCallback ()	;
Instance o(PMOCGETMETACLASS("osg::StateAttributeCallback"),(void*)dynamic_cast<osg::Object*>( osg_StateAttributeCallback_ptr.get()		),true);
_managedinstances.insert(osg_StateAttributeCallback_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_StateAttributeCallback::MetaQReflect_StateAttributeCallback():MetaQQuickClass( "osg::StateAttributeCallback"){
_typeid=&typeid(osg::StateAttributeCallback );           qRegisterMetaType<QMLStateAttributeCallback>();
qmlRegisterType<QReflect_StateAttributeCallback>("pmoc.osg",1,0,"QReflect_StateAttributeCallback");
           qmlRegisterType<QMLStateAttributeCallback>("pmoc.osg",1,0,"QMLStateAttributeCallback");
};
const std::string osg::MetaQReflect_StateAttributeCallback::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_StateAttributeCallback::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_StateAttributeCallback::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_StateAttributeCallback::createQQModel(Instance*i){ //return new MetaQReflect_StateAttributeCallback_QModel(i);}
QMLStateAttributeCallback *ret =new QMLStateAttributeCallback(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Callback *mother =dynamic_cast<osg::Callback*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Callback");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Callback model for osg::StateAttributeCallbackis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Callback");
if(!cl){std::cerr<<"osg::Callback QQModel for osg::StateAttributeCallbackis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Callback_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Callback_pmoc.hpp>
#include <customCode/osg/Callback_pmoc.hpp>
#include <customCode/osg/Callback_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_UniformCallback::run(osg::QReflect_Object *p0 ,osg::QReflect_Object *p1){
return _model->run(p0->_model ,p1->_model);

}

///DefaultConstructor////////////////
osg::QReflect_UniformCallback::QReflect_UniformCallback(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =dynamic_cast<osg::UniformCallback*>(reinterpret_cast<osg::Referenced*>(i->ptr));
 if(!_model)  _model =dynamic_cast<osg::UniformCallback*>(reinterpret_cast<osg::Object*>(i->ptr));
 if(!_model)  _model =reinterpret_cast<osg::UniformCallback*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_UniformCallback::~QReflect_UniformCallback( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_UniformCallback::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_UniformCallback::createInstance( ){
osg::ref_ptr<osg::UniformCallback> osg_UniformCallback_ptr	;
osg_UniformCallback_ptr = new osg::UniformCallback ()	;
Instance o(PMOCGETMETACLASS("osg::UniformCallback"),(void*)dynamic_cast<osg::Object*>( osg_UniformCallback_ptr.get()		),true);
_managedinstances.insert(osg_UniformCallback_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_UniformCallback::MetaQReflect_UniformCallback():MetaQQuickClass( "osg::UniformCallback"){
_typeid=&typeid(osg::UniformCallback );           qRegisterMetaType<QMLUniformCallback>();
qmlRegisterType<QReflect_UniformCallback>("pmoc.osg",1,0,"QReflect_UniformCallback");
           qmlRegisterType<QMLUniformCallback>("pmoc.osg",1,0,"QMLUniformCallback");
};
const std::string osg::MetaQReflect_UniformCallback::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_UniformCallback::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_UniformCallback::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_UniformCallback::createQQModel(Instance*i){ //return new MetaQReflect_UniformCallback_QModel(i);}
QMLUniformCallback *ret =new QMLUniformCallback(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Callback *mother =dynamic_cast<osg::Callback*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Callback");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Callback model for osg::UniformCallbackis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Callback");
if(!cl){std::cerr<<"osg::Callback QQModel for osg::UniformCallbackis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Callback_pmoc.cpp"
#endif


