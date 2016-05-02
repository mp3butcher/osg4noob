#include <osg/StateAttribute>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osg/Callback_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osg/Shader_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/StateSet_pmoc.hpp>
#include <customCode/osg/State_pmoc.hpp>
#include <customCode/osg/Texture_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_StateAttribute:: checkValidityOfAssociatedModes(osg::QReflect_State  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_StateAttribute::checkValidityOfAssociatedModes : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->checkValidityOfAssociatedModes(*p0->_model);

}
 bool  osg::QReflect_StateAttribute:: isSameKindAs(osg::QReflect_Object  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_StateAttribute::isSameKindAs : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->isSameKindAs(p0->_model);

}
 bool  osg::QReflect_StateAttribute:: isTextureAttribute()const{
//params checking
return _model->isTextureAttribute();

}
 bool  osg::QReflect_StateAttribute:: operator!=(osg::QReflect_StateAttribute  &p0)const{
//params checking
return _model->operator!=(*p0._model);

}
 bool  osg::QReflect_StateAttribute:: operator<(osg::QReflect_StateAttribute  &p0)const{
//params checking
return _model->operator<(*p0._model);

}
 bool  osg::QReflect_StateAttribute:: operator==(osg::QReflect_StateAttribute  &p0)const{
//params checking
return _model->operator==(*p0._model);

}
 unsigned int  osg::QReflect_StateAttribute:: getMember()const{
//params checking
return _model->getMember();

}
 unsigned int  osg::QReflect_StateAttribute:: getNumParents()const{
//params checking
return _model->getNumParents();

}
 void osg::QReflect_StateAttribute::apply(osg::QReflect_State  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_StateAttribute::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_StateAttribute::compileGLObjects(osg::QReflect_State  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_StateAttribute::compileGLObjects : parameter n.0 is NULL\n"<<endl;return;}
 _model->compileGLObjects(*p0->_model);

}
 void osg::QReflect_StateAttribute::releaseGLObjects(osg::QReflect_State  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_StateAttribute::releaseGLObjects : parameter n.0 is NULL\n"<<endl;return;}
 _model->releaseGLObjects(p0->_model);

}
 void osg::QReflect_StateAttribute::resizeGLObjectBuffers( unsigned int  p0){
//params checking
 _model->resizeGLObjectBuffers(p0);

}
 void osg::QReflect_StateAttribute::setEventCallback(osg::QReflect_StateAttributeCallback  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_StateAttribute::setEventCallback : parameter n.0 is NULL\n"<<endl;return;}
 _model->setEventCallback(p0->_model);
emit EventCallbackChanged();

}
 void osg::QReflect_StateAttribute::setShaderComponent(osg::QReflect_ShaderComponent  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_StateAttribute::setShaderComponent : parameter n.0 is NULL\n"<<endl;return;}
 _model->setShaderComponent(p0->_model);
emit ShaderComponentChanged();

}
 void osg::QReflect_StateAttribute::setUpdateCallback(osg::QReflect_StateAttributeCallback  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_StateAttribute::setUpdateCallback : parameter n.0 is NULL\n"<<endl;return;}
 _model->setUpdateCallback(p0->_model);
emit UpdateCallbackChanged();

}
const  char*  osg::QReflect_StateAttribute:: className()const{
//params checking
return _model->className();

}
const  char*  osg::QReflect_StateAttribute:: libraryName()const{
//params checking
return _model->libraryName();

}
osg::QReflect_ShaderComponent*osg::QReflect_StateAttribute::getShaderComponent()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getShaderComponent(),inst);
return inst.isValid()?((osg::QReflect_ShaderComponent * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_ShaderComponent*osg::QReflect_StateAttribute::getShaderComponent(){
//params checking
PMOCSAFEADDOBJECT(*_model->getShaderComponent(),inst);
return inst.isValid()?((osg::QReflect_ShaderComponent * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_StateAttribute*osg::QReflect_StateAttribute::asStateAttribute()const{
//params checking
PMOCSAFEADDOBJECT(*_model->asStateAttribute(),inst);
return inst.isValid()?((osg::QReflect_StateAttribute * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_StateAttribute*osg::QReflect_StateAttribute::asStateAttribute(){
//params checking
PMOCSAFEADDOBJECT(*_model->asStateAttribute(),inst);
return inst.isValid()?((osg::QReflect_StateAttribute * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_StateAttributeCallback*osg::QReflect_StateAttribute::getEventCallback()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getEventCallback(),inst);
return inst.isValid()?((osg::QReflect_StateAttributeCallback * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_StateAttributeCallback*osg::QReflect_StateAttribute::getEventCallback(){
//params checking
PMOCSAFEADDOBJECT(*_model->getEventCallback(),inst);
return inst.isValid()?((osg::QReflect_StateAttributeCallback * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_StateAttributeCallback*osg::QReflect_StateAttribute::getUpdateCallback()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getUpdateCallback(),inst);
return inst.isValid()?((osg::QReflect_StateAttributeCallback * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_StateAttributeCallback*osg::QReflect_StateAttribute::getUpdateCallback(){
//params checking
PMOCSAFEADDOBJECT(*_model->getUpdateCallback(),inst);
return inst.isValid()?((osg::QReflect_StateAttributeCallback * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_StateSet*osg::QReflect_StateAttribute::getParent( unsigned int  p0)const{
//params checking
PMOCSAFEADDOBJECT(*_model->getParent(p0),inst);
return inst.isValid()?((osg::QReflect_StateSet * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_StateSet*osg::QReflect_StateAttribute::getParent( unsigned int  p0){
//params checking
PMOCSAFEADDOBJECT(*_model->getParent(p0),inst);
return inst.isValid()?((osg::QReflect_StateSet * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Texture*osg::QReflect_StateAttribute::asTexture()const{
//params checking
PMOCSAFEADDOBJECT(*_model->asTexture(),inst);
return inst.isValid()?((osg::QReflect_Texture * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Texture*osg::QReflect_StateAttribute::asTexture(){
//params checking
PMOCSAFEADDOBJECT(*_model->asTexture(),inst);
return inst.isValid()?((osg::QReflect_Texture * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osg::QReflect_StateAttribute::QReflect_StateAttribute(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::StateAttribute*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_StateAttribute::~QReflect_StateAttribute( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_StateAttribute::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_StateAttribute::createInstance( ){
std::cerr<<"osg::StateAttribute is not instanciable"<<std::endl;return Instance();


}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_StateAttribute::MetaQReflect_StateAttribute():MetaQQuickClass( "osg::StateAttribute"){
_typeid=&typeid(osg::StateAttribute );
           qRegisterMetaType<osg::QMLStateAttribute>();
           qRegisterMetaType<osg::QMLStateAttribute*>("pmoc.osg.QMLStateAttribute");
qmlRegisterType<osg::QReflect_StateAttribute>("pmoc.osg",1,0,"QReflect_StateAttribute");
           qmlRegisterType<osg::QMLStateAttribute>("pmoc.osg",1,0,"QMLStateAttribute");
};
const std::string osg::MetaQReflect_StateAttribute::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_StateAttribute::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_StateAttribute::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_StateAttribute::createQQModel(const Instance*i){ //return new MetaQReflect_StateAttribute_QModel(i);}
QMLStateAttribute *ret =new QMLStateAttribute(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Object *mother =dynamic_cast<osg::Object*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Object");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Object model for osg::StateAttributeis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Object");
if(!cl){std::cerr<<"osg::Object QQModel for osg::StateAttributeis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_StateAttribute_pmoc.cpp"
#endif




