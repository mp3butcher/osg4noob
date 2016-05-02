#include <osg/ShaderAttribute>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/ShaderAttribute_pmoc.hpp>
#include <customCode/osg/ShaderAttribute_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/CopyOp_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osg/Shader_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/State_pmoc.hpp>
#include <customCode/osg/Uniform_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_ShaderAttribute:: isSameKindAs(osg::QReflect_Object  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ShaderAttribute::isSameKindAs : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->isSameKindAs(p0->_model);

}
 int  osg::QReflect_ShaderAttribute:: compare(osg::QReflect_StateAttribute  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ShaderAttribute::compare : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->compare(*p0->_model);

}
 unsigned int  osg::QReflect_ShaderAttribute:: addShader(osg::QReflect_Shader  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ShaderAttribute::addShader : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->addShader(p0->_model);

}
 unsigned int  osg::QReflect_ShaderAttribute:: addUniform(osg::QReflect_Uniform  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ShaderAttribute::addUniform : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->addUniform(p0->_model);

}
 unsigned int  osg::QReflect_ShaderAttribute:: getNumShaders()const{
//params checking
return _model->getNumShaders();

}
 unsigned int  osg::QReflect_ShaderAttribute:: getNumUniforms()const{
//params checking
return _model->getNumUniforms();

}
 void osg::QReflect_ShaderAttribute::apply(osg::QReflect_State  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ShaderAttribute::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_ShaderAttribute::compileGLObjects(osg::QReflect_State  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ShaderAttribute::compileGLObjects : parameter n.0 is NULL\n"<<endl;return;}
 _model->compileGLObjects(*p0->_model);

}
 void osg::QReflect_ShaderAttribute::releaseGLObjects(osg::QReflect_State  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ShaderAttribute::releaseGLObjects : parameter n.0 is NULL\n"<<endl;return;}
 _model->releaseGLObjects(p0->_model);

}
 void osg::QReflect_ShaderAttribute::removeShader( unsigned int  p0){
//params checking
 _model->removeShader(p0);

}
 void osg::QReflect_ShaderAttribute::removeUniform( unsigned int  p0){
//params checking
 _model->removeUniform(p0);

}
 void osg::QReflect_ShaderAttribute::resizeGLObjectBuffers( unsigned int  p0){
//params checking
 _model->resizeGLObjectBuffers(p0);

}
const  char*  osg::QReflect_ShaderAttribute:: className()const{
//params checking
return _model->className();

}
const  char*  osg::QReflect_ShaderAttribute:: libraryName()const{
//params checking
return _model->libraryName();

}
osg::QReflect_Object*osg::QReflect_ShaderAttribute::clone(osg::QReflect_CopyOp  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ShaderAttribute::clone : parameter n.0 is NULL\n"<<endl;;}
PMOCSAFEADDOBJECT(*_model->clone(*p0->_model),inst);
return inst.isValid()?((osg::QReflect_Object * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Object*osg::QReflect_ShaderAttribute::cloneType()const{
//params checking
PMOCSAFEADDOBJECT(*_model->cloneType(),inst);
return inst.isValid()?((osg::QReflect_Object * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Shader*osg::QReflect_ShaderAttribute::getShader( unsigned int  p0)const{
//params checking
PMOCSAFEADDOBJECT(*_model->getShader(p0),inst);
return inst.isValid()?((osg::QReflect_Shader * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Shader*osg::QReflect_ShaderAttribute::getShader( unsigned int  p0){
//params checking
PMOCSAFEADDOBJECT(*_model->getShader(p0),inst);
return inst.isValid()?((osg::QReflect_Shader * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Uniform*osg::QReflect_ShaderAttribute::getUniform( unsigned int  p0)const{
//params checking
PMOCSAFEADDOBJECT(*_model->getUniform(p0),inst);
return inst.isValid()?((osg::QReflect_Uniform * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Uniform*osg::QReflect_ShaderAttribute::getUniform( unsigned int  p0){
//params checking
PMOCSAFEADDOBJECT(*_model->getUniform(p0),inst);
return inst.isValid()?((osg::QReflect_Uniform * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osg::QReflect_ShaderAttribute::QReflect_ShaderAttribute(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::ShaderAttribute*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_ShaderAttribute::~QReflect_ShaderAttribute( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_ShaderAttribute::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_ShaderAttribute::createInstance( ){
osg::ref_ptr<osg::ShaderAttribute> osg_ShaderAttribute_ptr	;
osg_ShaderAttribute_ptr = new osg::ShaderAttribute ()	;
Instance o(PMOCGETMETACLASS("osg::ShaderAttribute"),(void*)osg_ShaderAttribute_ptr.get()		,true);
_managedinstances.insert(osg_ShaderAttribute_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_ShaderAttribute::MetaQReflect_ShaderAttribute():MetaQQuickClass( "osg::ShaderAttribute"){
_typeid=&typeid(osg::ShaderAttribute );
           qRegisterMetaType<osg::QMLShaderAttribute>();
           qRegisterMetaType<osg::QMLShaderAttribute*>("pmoc.osg.QMLShaderAttribute");
qmlRegisterType<osg::QReflect_ShaderAttribute>("pmoc.osg",1,0,"QReflect_ShaderAttribute");
           qmlRegisterType<osg::QMLShaderAttribute>("pmoc.osg",1,0,"QMLShaderAttribute");
};
const std::string osg::MetaQReflect_ShaderAttribute::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_ShaderAttribute::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_ShaderAttribute::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_ShaderAttribute::createQQModel(const Instance*i){ //return new MetaQReflect_ShaderAttribute_QModel(i);}
QMLShaderAttribute *ret =new QMLShaderAttribute(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::StateAttribute *mother =dynamic_cast<osg::StateAttribute*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::StateAttribute");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::StateAttribute model for osg::ShaderAttributeis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::StateAttribute");
if(!cl){std::cerr<<"osg::StateAttribute QQModel for osg::ShaderAttributeis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ShaderAttribute_pmoc.cpp"
#endif




