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
 int  osg::QReflect_AtomicCounterBufferBinding:: compare(osg::QReflect_StateAttribute  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_AtomicCounterBufferBinding::compare : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->compare(*p0->_model);

}

///DefaultConstructor////////////////
osg::QReflect_AtomicCounterBufferBinding::QReflect_AtomicCounterBufferBinding(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osg::AtomicCounterBufferBinding );
           qRegisterMetaType<osg::QMLAtomicCounterBufferBinding>();
           qRegisterMetaType<osg::QMLAtomicCounterBufferBinding*>("pmoc.osg.QMLAtomicCounterBufferBinding");
qmlRegisterType<osg::QReflect_AtomicCounterBufferBinding>("pmoc.osg",1,0,"QReflect_AtomicCounterBufferBinding");
           qmlRegisterType<osg::QMLAtomicCounterBufferBinding>("pmoc.osg",1,0,"QMLAtomicCounterBufferBinding");
};
const std::string osg::MetaQReflect_AtomicCounterBufferBinding::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_AtomicCounterBufferBinding::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_AtomicCounterBufferBinding::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_AtomicCounterBufferBinding::createQQModel(const Instance*i){ //return new MetaQReflect_AtomicCounterBufferBinding_QModel(i);}
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
#include <customCode/osg/State_pmoc.hpp>
using namespace pmoc;
 GLenum  osg::QReflect_BufferIndexBinding:: getTarget()const{
//params checking
return _model->getTarget();

}
 GLuint  osg::QReflect_BufferIndexBinding:: getIndex()const{
//params checking
return _model->getIndex();

}
 int  osg::QReflect_BufferIndexBinding:: getOffset()const{
//params checking
return _model->getOffset();

}
 int  osg::QReflect_BufferIndexBinding:: getSize()const{
//params checking
return _model->getSize();

}
 void osg::QReflect_BufferIndexBinding::apply(osg::QReflect_State  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_BufferIndexBinding::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_BufferIndexBinding::setBufferObject(osg::QReflect_BufferObject  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_BufferIndexBinding::setBufferObject : parameter n.0 is NULL\n"<<endl;return;}
 _model->setBufferObject(p0->_model);
emit BufferObjectChanged();

}
 void osg::QReflect_BufferIndexBinding::setOffset( int  p0){
//params checking
 _model->setOffset(p0);
emit OffsetChanged();

}
 void osg::QReflect_BufferIndexBinding::setSize( int  p0){
//params checking
 _model->setSize(p0);
emit SizeChanged();

}
osg::QReflect_BufferObject*osg::QReflect_BufferIndexBinding::getBufferObject()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getBufferObject(),inst);
return inst.isValid()?((osg::QReflect_BufferObject * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osg::QReflect_BufferIndexBinding::QReflect_BufferIndexBinding(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osg::BufferIndexBinding );
           qRegisterMetaType<osg::QMLBufferIndexBinding>();
           qRegisterMetaType<osg::QMLBufferIndexBinding*>("pmoc.osg.QMLBufferIndexBinding");
qmlRegisterType<osg::QReflect_BufferIndexBinding>("pmoc.osg",1,0,"QReflect_BufferIndexBinding");
           qmlRegisterType<osg::QMLBufferIndexBinding>("pmoc.osg",1,0,"QMLBufferIndexBinding");
};
const std::string osg::MetaQReflect_BufferIndexBinding::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_BufferIndexBinding::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_BufferIndexBinding::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_BufferIndexBinding::createQQModel(const Instance*i){ //return new MetaQReflect_BufferIndexBinding_QModel(i);}
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
 int  osg::QReflect_ShaderStorageBufferBinding:: compare(osg::QReflect_StateAttribute  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ShaderStorageBufferBinding::compare : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->compare(*p0->_model);

}

///DefaultConstructor////////////////
osg::QReflect_ShaderStorageBufferBinding::QReflect_ShaderStorageBufferBinding(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osg::ShaderStorageBufferBinding );
           qRegisterMetaType<osg::QMLShaderStorageBufferBinding>();
           qRegisterMetaType<osg::QMLShaderStorageBufferBinding*>("pmoc.osg.QMLShaderStorageBufferBinding");
qmlRegisterType<osg::QReflect_ShaderStorageBufferBinding>("pmoc.osg",1,0,"QReflect_ShaderStorageBufferBinding");
           qmlRegisterType<osg::QMLShaderStorageBufferBinding>("pmoc.osg",1,0,"QMLShaderStorageBufferBinding");
};
const std::string osg::MetaQReflect_ShaderStorageBufferBinding::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_ShaderStorageBufferBinding::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_ShaderStorageBufferBinding::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_ShaderStorageBufferBinding::createQQModel(const Instance*i){ //return new MetaQReflect_ShaderStorageBufferBinding_QModel(i);}
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
 int  osg::QReflect_TransformFeedbackBufferBinding:: compare(osg::QReflect_StateAttribute  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_TransformFeedbackBufferBinding::compare : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->compare(*p0->_model);

}

///DefaultConstructor////////////////
osg::QReflect_TransformFeedbackBufferBinding::QReflect_TransformFeedbackBufferBinding(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osg::TransformFeedbackBufferBinding );
           qRegisterMetaType<osg::QMLTransformFeedbackBufferBinding>();
           qRegisterMetaType<osg::QMLTransformFeedbackBufferBinding*>("pmoc.osg.QMLTransformFeedbackBufferBinding");
qmlRegisterType<osg::QReflect_TransformFeedbackBufferBinding>("pmoc.osg",1,0,"QReflect_TransformFeedbackBufferBinding");
           qmlRegisterType<osg::QMLTransformFeedbackBufferBinding>("pmoc.osg",1,0,"QMLTransformFeedbackBufferBinding");
};
const std::string osg::MetaQReflect_TransformFeedbackBufferBinding::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_TransformFeedbackBufferBinding::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_TransformFeedbackBufferBinding::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_TransformFeedbackBufferBinding::createQQModel(const Instance*i){ //return new MetaQReflect_TransformFeedbackBufferBinding_QModel(i);}
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
 int  osg::QReflect_UniformBufferBinding:: compare(osg::QReflect_StateAttribute  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_UniformBufferBinding::compare : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->compare(*p0->_model);

}

///DefaultConstructor////////////////
osg::QReflect_UniformBufferBinding::QReflect_UniformBufferBinding(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osg::UniformBufferBinding );
           qRegisterMetaType<osg::QMLUniformBufferBinding>();
           qRegisterMetaType<osg::QMLUniformBufferBinding*>("pmoc.osg.QMLUniformBufferBinding");
qmlRegisterType<osg::QReflect_UniformBufferBinding>("pmoc.osg",1,0,"QReflect_UniformBufferBinding");
           qmlRegisterType<osg::QMLUniformBufferBinding>("pmoc.osg",1,0,"QMLUniformBufferBinding");
};
const std::string osg::MetaQReflect_UniformBufferBinding::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_UniformBufferBinding::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_UniformBufferBinding::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_UniformBufferBinding::createQQModel(const Instance*i){ //return new MetaQReflect_UniformBufferBinding_QModel(i);}
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




