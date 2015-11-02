#include <osg/BufferIndexBinding>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/BufferIndexBinding_pmoc.hpp>
#include <customCode/osg/BufferIndexBinding_pmoc.hpp>
#include <customCode/osg/BufferIndexBinding_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
using namespace pmoc;
 int  osg::QReflect_AtomicCounterBufferBinding::compare(osg::QReflect_StateAttribute *p0)const{
return _model->compare(*p0->_model);

}

///DefaultConstructor////////////////
osg::QReflect_AtomicCounterBufferBinding::QReflect_AtomicCounterBufferBinding(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::AtomicCounterBufferBinding*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_AtomicCounterBufferBinding::~QReflect_AtomicCounterBufferBinding( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_AtomicCounterBufferBinding::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_AtomicCounterBufferBinding::createInstance( ){
osg::ref_ptr<osg::AtomicCounterBufferBinding> osg_AtomicCounterBufferBinding_ptr	;
osg_AtomicCounterBufferBinding_ptr = new osg::AtomicCounterBufferBinding ()	;
Instance o(PMOCGETMETACLASS("osg::AtomicCounterBufferBinding"),(void*)osg_AtomicCounterBufferBinding_ptr.get()		,true);
_managedinstances.insert(osg_AtomicCounterBufferBinding_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_AtomicCounterBufferBinding::MetaQReflect_AtomicCounterBufferBinding():MetaQQuickClass( "osg::AtomicCounterBufferBinding"){
_typeid=&typeid(osg::AtomicCounterBufferBinding );           qRegisterMetaType<QMLAtomicCounterBufferBinding>();
qmlRegisterType<QReflect_AtomicCounterBufferBinding>("pmoc.osg",1,0,"QReflect_AtomicCounterBufferBinding");
           qmlRegisterType<QMLAtomicCounterBufferBinding>("pmoc.osg",1,0,"QMLAtomicCounterBufferBinding");
};
const std::string osg::MetaQReflect_AtomicCounterBufferBinding::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_AtomicCounterBufferBinding::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_AtomicCounterBufferBinding::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_AtomicCounterBufferBinding::createQQModel(Instance*i){ //return new MetaQReflect_AtomicCounterBufferBinding_QModel(i);}
QMLAtomicCounterBufferBinding *ret =new QMLAtomicCounterBufferBinding(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::BufferIndexBinding *mother =dynamic_cast<osg::BufferIndexBinding*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::BufferIndexBinding");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::BufferIndexBinding model for osg::AtomicCounterBufferBindingis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::BufferIndexBinding");
if(!cl){std::cerr<<"osg::BufferIndexBinding QQModel for osg::AtomicCounterBufferBindingis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_BufferIndexBinding_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/BufferIndexBinding_pmoc.hpp>
#include <customCode/osg/BufferIndexBinding_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/BufferObject_pmoc.hpp>
#include <osg/BufferObject>
#include <osg/BufferObject_pmoc.hpp>
using namespace pmoc;
 int  osg::QReflect_BufferIndexBinding::getOffset()const{
return _model->getOffset();

}
 int  osg::QReflect_BufferIndexBinding::getSize()const{
return _model->getSize();

}
 void osg::QReflect_BufferIndexBinding::setOffset( int p0){
 _model->setOffset(p0);

}
 void osg::QReflect_BufferIndexBinding::setSize( int p0){
 _model->setSize(p0);

}
osg::QReflect_BufferObject * osg::QReflect_BufferIndexBinding::getBufferObject()const{
PMOCSAFEADDOBJECT(*_model->getBufferObject(),inst);
return inst.isValid()?((osg::QReflect_BufferObject * )inst.model->createQQModel(&inst)):NULL;
}
void osg::QReflect_BufferIndexBinding::pmoc_reverse_setBufferObject( osg::QReflect_BufferObject *par){_model->setBufferObject(NULL);
emit BufferObjectChanged(NULL);
}
void osg::QReflect_BufferIndexBinding::setBufferObject( osg::QReflect_BufferObject *par){_model->setBufferObject(par->_model);
emit BufferObjectChanged(par);
}

///DefaultConstructor////////////////
osg::QReflect_BufferIndexBinding::QReflect_BufferIndexBinding(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::BufferIndexBinding*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_BufferIndexBinding::~QReflect_BufferIndexBinding( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_BufferIndexBinding::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_BufferIndexBinding::createInstance( ){
std::cerr<<"osg::BufferIndexBinding is not instanciable"<<std::endl;return Instance();


}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_BufferIndexBinding::MetaQReflect_BufferIndexBinding():MetaQQuickClass( "osg::BufferIndexBinding"){
_typeid=&typeid(osg::BufferIndexBinding );           qRegisterMetaType<QMLBufferIndexBinding>();
qmlRegisterType<QReflect_BufferIndexBinding>("pmoc.osg",1,0,"QReflect_BufferIndexBinding");
           qmlRegisterType<QMLBufferIndexBinding>("pmoc.osg",1,0,"QMLBufferIndexBinding");
       PMOCACTION("getBufferObject","setBufferObject","unsetBufferObject");
};
const std::string osg::MetaQReflect_BufferIndexBinding::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_BufferIndexBinding::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_BufferIndexBinding::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_BufferIndexBinding::createQQModel(Instance*i){ //return new MetaQReflect_BufferIndexBinding_QModel(i);}
QMLBufferIndexBinding *ret =new QMLBufferIndexBinding(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::StateAttribute *mother =dynamic_cast<osg::StateAttribute*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::StateAttribute");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::StateAttribute model for osg::BufferIndexBindingis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::StateAttribute");
if(!cl){std::cerr<<"osg::StateAttribute QQModel for osg::BufferIndexBindingis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_BufferIndexBinding_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/BufferIndexBinding_pmoc.hpp>
#include <customCode/osg/BufferIndexBinding_pmoc.hpp>
#include <customCode/osg/BufferIndexBinding_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
using namespace pmoc;
 int  osg::QReflect_ShaderStorageBufferBinding::compare(osg::QReflect_StateAttribute *p0)const{
return _model->compare(*p0->_model);

}

///DefaultConstructor////////////////
osg::QReflect_ShaderStorageBufferBinding::QReflect_ShaderStorageBufferBinding(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::ShaderStorageBufferBinding*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_ShaderStorageBufferBinding::~QReflect_ShaderStorageBufferBinding( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_ShaderStorageBufferBinding::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_ShaderStorageBufferBinding::createInstance( ){
osg::ref_ptr<osg::ShaderStorageBufferBinding> osg_ShaderStorageBufferBinding_ptr	;
osg_ShaderStorageBufferBinding_ptr = new osg::ShaderStorageBufferBinding ()	;
Instance o(PMOCGETMETACLASS("osg::ShaderStorageBufferBinding"),(void*)osg_ShaderStorageBufferBinding_ptr.get()		,true);
_managedinstances.insert(osg_ShaderStorageBufferBinding_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_ShaderStorageBufferBinding::MetaQReflect_ShaderStorageBufferBinding():MetaQQuickClass( "osg::ShaderStorageBufferBinding"){
_typeid=&typeid(osg::ShaderStorageBufferBinding );           qRegisterMetaType<QMLShaderStorageBufferBinding>();
qmlRegisterType<QReflect_ShaderStorageBufferBinding>("pmoc.osg",1,0,"QReflect_ShaderStorageBufferBinding");
           qmlRegisterType<QMLShaderStorageBufferBinding>("pmoc.osg",1,0,"QMLShaderStorageBufferBinding");
};
const std::string osg::MetaQReflect_ShaderStorageBufferBinding::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_ShaderStorageBufferBinding::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_ShaderStorageBufferBinding::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_ShaderStorageBufferBinding::createQQModel(Instance*i){ //return new MetaQReflect_ShaderStorageBufferBinding_QModel(i);}
QMLShaderStorageBufferBinding *ret =new QMLShaderStorageBufferBinding(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::BufferIndexBinding *mother =dynamic_cast<osg::BufferIndexBinding*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::BufferIndexBinding");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::BufferIndexBinding model for osg::ShaderStorageBufferBindingis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::BufferIndexBinding");
if(!cl){std::cerr<<"osg::BufferIndexBinding QQModel for osg::ShaderStorageBufferBindingis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_BufferIndexBinding_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/BufferIndexBinding_pmoc.hpp>
#include <customCode/osg/BufferIndexBinding_pmoc.hpp>
#include <customCode/osg/BufferIndexBinding_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
using namespace pmoc;
 int  osg::QReflect_TransformFeedbackBufferBinding::compare(osg::QReflect_StateAttribute *p0)const{
return _model->compare(*p0->_model);

}

///DefaultConstructor////////////////
osg::QReflect_TransformFeedbackBufferBinding::QReflect_TransformFeedbackBufferBinding(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::TransformFeedbackBufferBinding*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_TransformFeedbackBufferBinding::~QReflect_TransformFeedbackBufferBinding( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_TransformFeedbackBufferBinding::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_TransformFeedbackBufferBinding::createInstance( ){
osg::ref_ptr<osg::TransformFeedbackBufferBinding> osg_TransformFeedbackBufferBinding_ptr	;
osg_TransformFeedbackBufferBinding_ptr = new osg::TransformFeedbackBufferBinding ()	;
Instance o(PMOCGETMETACLASS("osg::TransformFeedbackBufferBinding"),(void*)osg_TransformFeedbackBufferBinding_ptr.get()		,true);
_managedinstances.insert(osg_TransformFeedbackBufferBinding_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_TransformFeedbackBufferBinding::MetaQReflect_TransformFeedbackBufferBinding():MetaQQuickClass( "osg::TransformFeedbackBufferBinding"){
_typeid=&typeid(osg::TransformFeedbackBufferBinding );           qRegisterMetaType<QMLTransformFeedbackBufferBinding>();
qmlRegisterType<QReflect_TransformFeedbackBufferBinding>("pmoc.osg",1,0,"QReflect_TransformFeedbackBufferBinding");
           qmlRegisterType<QMLTransformFeedbackBufferBinding>("pmoc.osg",1,0,"QMLTransformFeedbackBufferBinding");
};
const std::string osg::MetaQReflect_TransformFeedbackBufferBinding::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_TransformFeedbackBufferBinding::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_TransformFeedbackBufferBinding::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_TransformFeedbackBufferBinding::createQQModel(Instance*i){ //return new MetaQReflect_TransformFeedbackBufferBinding_QModel(i);}
QMLTransformFeedbackBufferBinding *ret =new QMLTransformFeedbackBufferBinding(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::BufferIndexBinding *mother =dynamic_cast<osg::BufferIndexBinding*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::BufferIndexBinding");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::BufferIndexBinding model for osg::TransformFeedbackBufferBindingis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::BufferIndexBinding");
if(!cl){std::cerr<<"osg::BufferIndexBinding QQModel for osg::TransformFeedbackBufferBindingis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_BufferIndexBinding_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/BufferIndexBinding_pmoc.hpp>
#include <customCode/osg/BufferIndexBinding_pmoc.hpp>
#include <customCode/osg/BufferIndexBinding_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
using namespace pmoc;
 int  osg::QReflect_UniformBufferBinding::compare(osg::QReflect_StateAttribute *p0)const{
return _model->compare(*p0->_model);

}

///DefaultConstructor////////////////
osg::QReflect_UniformBufferBinding::QReflect_UniformBufferBinding(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::UniformBufferBinding*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_UniformBufferBinding::~QReflect_UniformBufferBinding( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_UniformBufferBinding::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_UniformBufferBinding::createInstance( ){
osg::ref_ptr<osg::UniformBufferBinding> osg_UniformBufferBinding_ptr	;
osg_UniformBufferBinding_ptr = new osg::UniformBufferBinding ()	;
Instance o(PMOCGETMETACLASS("osg::UniformBufferBinding"),(void*)osg_UniformBufferBinding_ptr.get()		,true);
_managedinstances.insert(osg_UniformBufferBinding_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_UniformBufferBinding::MetaQReflect_UniformBufferBinding():MetaQQuickClass( "osg::UniformBufferBinding"){
_typeid=&typeid(osg::UniformBufferBinding );           qRegisterMetaType<QMLUniformBufferBinding>();
qmlRegisterType<QReflect_UniformBufferBinding>("pmoc.osg",1,0,"QReflect_UniformBufferBinding");
           qmlRegisterType<QMLUniformBufferBinding>("pmoc.osg",1,0,"QMLUniformBufferBinding");
};
const std::string osg::MetaQReflect_UniformBufferBinding::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_UniformBufferBinding::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_UniformBufferBinding::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_UniformBufferBinding::createQQModel(Instance*i){ //return new MetaQReflect_UniformBufferBinding_QModel(i);}
QMLUniformBufferBinding *ret =new QMLUniformBufferBinding(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::BufferIndexBinding *mother =dynamic_cast<osg::BufferIndexBinding*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::BufferIndexBinding");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::BufferIndexBinding model for osg::UniformBufferBindingis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::BufferIndexBinding");
if(!cl){std::cerr<<"osg::BufferIndexBinding QQModel for osg::UniformBufferBindingis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_BufferIndexBinding_pmoc.cpp"
#endif


