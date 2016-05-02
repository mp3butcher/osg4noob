#include <osg/Shader>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Shader_pmoc.hpp>
#include <customCode/osg/Shader_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osg/Shader_pmoc.hpp>
#include <customCode/osg/State_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_Shader:: loadShaderSourceFromFile(const  QString  &p0){
//params checking
return _model->loadShaderSourceFromFile(std::string(p0.toStdString()));

}
 bool  osg::QReflect_Shader:: setType(osg::QReflect_Shader::Type  p0){
//params checking
emit TypeChanged();
return _model->setType(static_cast<osg::Shader::Type>(p0));

}
 int  osg::QReflect_Shader:: compare(osg::QReflect_Shader  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Shader::compare : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->compare(*p0->_model);

}
 void osg::QReflect_Shader::addCodeInjection( float  p0 ,const  QString  &p1){
//params checking
 _model->addCodeInjection(p0 ,std::string(p1.toStdString()));

}
 void osg::QReflect_Shader::compileShader(osg::QReflect_State  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Shader::compileShader : parameter n.0 is NULL\n"<<endl;return;}
 _model->compileShader(*p0->_model);

}
 void osg::QReflect_Shader::deleteGlShader( unsigned int  p0 , GLuint  p1){
//params checking
 _model->deleteGlShader(p0 ,p1);

}
 void osg::QReflect_Shader::dirtyShader(){
//params checking
 _model->dirtyShader();

}
 void osg::QReflect_Shader::discardDeletedGlShaders( unsigned int  p0){
//params checking
 _model->discardDeletedGlShaders(p0);

}
 void osg::QReflect_Shader::flushDeletedGlShaders( unsigned int  p0 , double  p1 , double  &p2){
//params checking
 _model->flushDeletedGlShaders(p0 ,p1 ,p2);

}
 void osg::QReflect_Shader::releaseGLObjects(osg::QReflect_State  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Shader::releaseGLObjects : parameter n.0 is NULL\n"<<endl;return;}
 _model->releaseGLObjects(p0->_model);

}
 void osg::QReflect_Shader::resizeGLObjectBuffers( unsigned int  p0){
//params checking
 _model->resizeGLObjectBuffers(p0);

}
 void osg::QReflect_Shader::setFileName(const  QString  &p0){
//params checking
 _model->setFileName(std::string(p0.toStdString()));
emit FileNameChanged();

}
 void osg::QReflect_Shader::setShaderBinary(osg::QReflect_ShaderBinary  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Shader::setShaderBinary : parameter n.0 is NULL\n"<<endl;return;}
 _model->setShaderBinary(p0->_model);
emit ShaderBinaryChanged();

}
 void osg::QReflect_Shader::setShaderDefinesMode(osg::QReflect_Shader::ShaderDefinesMode  p0){
//params checking
 _model->setShaderDefinesMode(static_cast<osg::Shader::ShaderDefinesMode>(p0));
emit ShaderDefinesModeChanged();

}
 void osg::QReflect_Shader::setShaderSource(const  QString  &p0){
//params checking
 _model->setShaderSource(std::string(p0.toStdString()));
emit ShaderSourceChanged();

}
QString  osg::QReflect_Shader::getFileName()const{
//params checking
QString ret(_model->getFileName().c_str());return ret;

}
QString  osg::QReflect_Shader::getShaderSource()const{
//params checking
QString ret(_model->getShaderSource().c_str());return ret;

}
const  char*  osg::QReflect_Shader:: getTypename()const{
//params checking
return _model->getTypename();

}
osg::QReflect_Shader*osg::QReflect_Shader::readShaderFile(osg::QReflect_Shader::Type  p0 ,const  QString  &p1){
//params checking
PMOCSAFEADDOBJECT(*_model->readShaderFile(static_cast<osg::Shader::Type>(p0) ,std::string(p1.toStdString())),inst);
return inst.isValid()?((osg::QReflect_Shader * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Shader::ShaderDefinesMode  osg::QReflect_Shader::getShaderDefinesMode()const{
//params checking
osg::QReflect_Shader::ShaderDefinesMode ret=static_cast<osg::QReflect_Shader::ShaderDefinesMode>( _model->getShaderDefinesMode());return  ret;

}
osg::QReflect_Shader::Type  osg::QReflect_Shader::getType()const{
//params checking
osg::QReflect_Shader::Type ret=static_cast<osg::QReflect_Shader::Type>( _model->getType());return  ret;

}
osg::QReflect_Shader::Type  osg::QReflect_Shader::getTypeId(const  QString  &p0){
//params checking
osg::QReflect_Shader::Type ret=static_cast<osg::QReflect_Shader::Type>( _model->getTypeId(std::string(p0.toStdString())));return  ret;

}
osg::QReflect_ShaderBinary*osg::QReflect_Shader::getShaderBinary()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getShaderBinary(),inst);
return inst.isValid()?((osg::QReflect_ShaderBinary * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_ShaderBinary*osg::QReflect_Shader::getShaderBinary(){
//params checking
PMOCSAFEADDOBJECT(*_model->getShaderBinary(),inst);
return inst.isValid()?((osg::QReflect_ShaderBinary * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osg::QReflect_Shader::QReflect_Shader(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Shader*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Shader::~QReflect_Shader( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_Shader::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_Shader::createInstance( ){
osg::ref_ptr<osg::Shader> osg_Shader_ptr	;
osg_Shader_ptr = new osg::Shader ()	;
Instance o(PMOCGETMETACLASS("osg::Shader"),(void*)osg_Shader_ptr.get()		,true);
_managedinstances.insert(osg_Shader_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Shader::MetaQReflect_Shader():MetaQQuickClass( "osg::Shader"){
_typeid=&typeid(osg::Shader );
           qRegisterMetaType<osg::QMLShader>();
           qRegisterMetaType<osg::QMLShader*>("pmoc.osg.QMLShader");
qmlRegisterType<osg::QReflect_Shader>("pmoc.osg",1,0,"QReflect_Shader");
           qmlRegisterType<osg::QMLShader>("pmoc.osg",1,0,"QMLShader");
};
const std::string osg::MetaQReflect_Shader::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Shader::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Shader::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Shader::createQQModel(const Instance*i){ //return new MetaQReflect_Shader_QModel(i);}
QMLShader *ret =new QMLShader(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Object *mother =dynamic_cast<osg::Object*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Object");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Object model for osg::Shaderis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Object");
if(!cl){std::cerr<<"osg::Object QQModel for osg::Shaderis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Shader_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Shader_pmoc.hpp>
#include <customCode/osg/Shader_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osg/Shader_pmoc.hpp>
using namespace pmoc;
 unsigned int  osg::QReflect_ShaderBinary:: getSize()const{
//params checking
return _model->getSize();

}
 void osg::QReflect_ShaderBinary::allocate( unsigned int  p0){
//params checking
 _model->allocate(p0);

}
osg::QReflect_ShaderBinary*osg::QReflect_ShaderBinary::readShaderBinaryFile(const  QString  &p0){
//params checking
PMOCSAFEADDOBJECT(*_model->readShaderBinaryFile(std::string(p0.toStdString())),inst);
return inst.isValid()?((osg::QReflect_ShaderBinary * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osg::QReflect_ShaderBinary::QReflect_ShaderBinary(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::ShaderBinary*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_ShaderBinary::~QReflect_ShaderBinary( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_ShaderBinary::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_ShaderBinary::createInstance( ){
osg::ref_ptr<osg::ShaderBinary> osg_ShaderBinary_ptr	;
osg_ShaderBinary_ptr = new osg::ShaderBinary ()	;
Instance o(PMOCGETMETACLASS("osg::ShaderBinary"),(void*)osg_ShaderBinary_ptr.get()		,true);
_managedinstances.insert(osg_ShaderBinary_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_ShaderBinary::MetaQReflect_ShaderBinary():MetaQQuickClass( "osg::ShaderBinary"){
_typeid=&typeid(osg::ShaderBinary );
           qRegisterMetaType<osg::QMLShaderBinary>();
           qRegisterMetaType<osg::QMLShaderBinary*>("pmoc.osg.QMLShaderBinary");
qmlRegisterType<osg::QReflect_ShaderBinary>("pmoc.osg",1,0,"QReflect_ShaderBinary");
           qmlRegisterType<osg::QMLShaderBinary>("pmoc.osg",1,0,"QMLShaderBinary");
};
const std::string osg::MetaQReflect_ShaderBinary::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_ShaderBinary::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_ShaderBinary::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_ShaderBinary::createQQModel(const Instance*i){ //return new MetaQReflect_ShaderBinary_QModel(i);}
QMLShaderBinary *ret =new QMLShaderBinary(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Object *mother =dynamic_cast<osg::Object*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Object");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Object model for osg::ShaderBinaryis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Object");
if(!cl){std::cerr<<"osg::Object QQModel for osg::ShaderBinaryis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Shader_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Shader_pmoc.hpp>
#include <customCode/osg/Shader_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osg/Shader_pmoc.hpp>
#include <customCode/osg/State_pmoc.hpp>
using namespace pmoc;
 unsigned int  osg::QReflect_ShaderComponent:: addShader(osg::QReflect_Shader  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ShaderComponent::addShader : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->addShader(p0->_model);

}
 unsigned int  osg::QReflect_ShaderComponent:: getNumShaders()const{
//params checking
return _model->getNumShaders();

}
 void osg::QReflect_ShaderComponent::compileGLObjects(osg::QReflect_State  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ShaderComponent::compileGLObjects : parameter n.0 is NULL\n"<<endl;return;}
 _model->compileGLObjects(*p0->_model);

}
 void osg::QReflect_ShaderComponent::releaseGLObjects(osg::QReflect_State  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ShaderComponent::releaseGLObjects : parameter n.0 is NULL\n"<<endl;return;}
 _model->releaseGLObjects(p0->_model);

}
 void osg::QReflect_ShaderComponent::removeShader( unsigned int  p0){
//params checking
 _model->removeShader(p0);

}
 void osg::QReflect_ShaderComponent::resizeGLObjectBuffers( unsigned int  p0){
//params checking
 _model->resizeGLObjectBuffers(p0);

}
osg::QReflect_Shader*osg::QReflect_ShaderComponent::getShader( unsigned int  p0)const{
//params checking
PMOCSAFEADDOBJECT(*_model->getShader(p0),inst);
return inst.isValid()?((osg::QReflect_Shader * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Shader*osg::QReflect_ShaderComponent::getShader( unsigned int  p0){
//params checking
PMOCSAFEADDOBJECT(*_model->getShader(p0),inst);
return inst.isValid()?((osg::QReflect_Shader * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osg::QReflect_ShaderComponent::QReflect_ShaderComponent(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::ShaderComponent*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_ShaderComponent::~QReflect_ShaderComponent( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_ShaderComponent::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_ShaderComponent::createInstance( ){
osg::ref_ptr<osg::ShaderComponent> osg_ShaderComponent_ptr	;
osg_ShaderComponent_ptr = new osg::ShaderComponent ()	;
Instance o(PMOCGETMETACLASS("osg::ShaderComponent"),(void*)osg_ShaderComponent_ptr.get()		,true);
_managedinstances.insert(osg_ShaderComponent_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_ShaderComponent::MetaQReflect_ShaderComponent():MetaQQuickClass( "osg::ShaderComponent"){
_typeid=&typeid(osg::ShaderComponent );
           qRegisterMetaType<osg::QMLShaderComponent>();
           qRegisterMetaType<osg::QMLShaderComponent*>("pmoc.osg.QMLShaderComponent");
qmlRegisterType<osg::QReflect_ShaderComponent>("pmoc.osg",1,0,"QReflect_ShaderComponent");
           qmlRegisterType<osg::QMLShaderComponent>("pmoc.osg",1,0,"QMLShaderComponent");
};
const std::string osg::MetaQReflect_ShaderComponent::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_ShaderComponent::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_ShaderComponent::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_ShaderComponent::createQQModel(const Instance*i){ //return new MetaQReflect_ShaderComponent_QModel(i);}
QMLShaderComponent *ret =new QMLShaderComponent(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Object *mother =dynamic_cast<osg::Object*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Object");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Object model for osg::ShaderComponentis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Object");
if(!cl){std::cerr<<"osg::Object QQModel for osg::ShaderComponentis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Shader_pmoc.cpp"
#endif




