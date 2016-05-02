#include <osg/Light>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Light_pmoc.hpp>
#include <customCode/osg/Light_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/CopyOp_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/State_pmoc.hpp>
#include <customCode/osg/Vec3f_pmoc.hpp>
#include <customCode/osg/Vec4f_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_Light:: isSameKindAs(osg::QReflect_Object  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Light::isSameKindAs : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->isSameKindAs(p0->_model);

}
 float  osg::QReflect_Light:: getConstantAttenuation()const{
//params checking
return _model->getConstantAttenuation();

}
 float  osg::QReflect_Light:: getLinearAttenuation()const{
//params checking
return _model->getLinearAttenuation();

}
 float  osg::QReflect_Light:: getQuadraticAttenuation()const{
//params checking
return _model->getQuadraticAttenuation();

}
 float  osg::QReflect_Light:: getSpotCutoff()const{
//params checking
return _model->getSpotCutoff();

}
 float  osg::QReflect_Light:: getSpotExponent()const{
//params checking
return _model->getSpotExponent();

}
 int  osg::QReflect_Light:: compare(osg::QReflect_StateAttribute  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Light::compare : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->compare(*p0->_model);

}
 int  osg::QReflect_Light:: getLightNum()const{
//params checking
return _model->getLightNum();

}
 unsigned int  osg::QReflect_Light:: getMember()const{
//params checking
return _model->getMember();

}
 void osg::QReflect_Light::apply(osg::QReflect_State  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Light::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_Light::captureLightState(){
//params checking
 _model->captureLightState();

}
 void osg::QReflect_Light::setAmbient(osg::QReflect_Vec4f  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Light::setAmbient : parameter n.0 is NULL\n"<<endl;return;}
 _model->setAmbient(*p0->_model);

}
 void osg::QReflect_Light::setConstantAttenuation( float  p0){
//params checking
 _model->setConstantAttenuation(p0);
emit ConstantAttenuationChanged();

}
 void osg::QReflect_Light::setDiffuse(osg::QReflect_Vec4f  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Light::setDiffuse : parameter n.0 is NULL\n"<<endl;return;}
 _model->setDiffuse(*p0->_model);

}
 void osg::QReflect_Light::setDirection(osg::QReflect_Vec3f  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Light::setDirection : parameter n.0 is NULL\n"<<endl;return;}
 _model->setDirection(*p0->_model);

}
 void osg::QReflect_Light::setLightNum( int  p0){
//params checking
 _model->setLightNum(p0);
emit LightNumChanged();

}
 void osg::QReflect_Light::setLinearAttenuation( float  p0){
//params checking
 _model->setLinearAttenuation(p0);
emit LinearAttenuationChanged();

}
 void osg::QReflect_Light::setPosition(osg::QReflect_Vec4f  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Light::setPosition : parameter n.0 is NULL\n"<<endl;return;}
 _model->setPosition(*p0->_model);

}
 void osg::QReflect_Light::setQuadraticAttenuation( float  p0){
//params checking
 _model->setQuadraticAttenuation(p0);
emit QuadraticAttenuationChanged();

}
 void osg::QReflect_Light::setSpecular(osg::QReflect_Vec4f  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Light::setSpecular : parameter n.0 is NULL\n"<<endl;return;}
 _model->setSpecular(*p0->_model);

}
 void osg::QReflect_Light::setSpotCutoff( float  p0){
//params checking
 _model->setSpotCutoff(p0);
emit SpotCutoffChanged();

}
 void osg::QReflect_Light::setSpotExponent( float  p0){
//params checking
 _model->setSpotExponent(p0);
emit SpotExponentChanged();

}
const  char*  osg::QReflect_Light:: className()const{
//params checking
return _model->className();

}
const  char*  osg::QReflect_Light:: libraryName()const{
//params checking
return _model->libraryName();

}
osg::QReflect_Object*osg::QReflect_Light::clone(osg::QReflect_CopyOp  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Light::clone : parameter n.0 is NULL\n"<<endl;;}
PMOCSAFEADDOBJECT(*_model->clone(*p0->_model),inst);
return inst.isValid()?((osg::QReflect_Object * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Object*osg::QReflect_Light::cloneType()const{
//params checking
PMOCSAFEADDOBJECT(*_model->cloneType(),inst);
return inst.isValid()?((osg::QReflect_Object * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osg::QReflect_Light::QReflect_Light(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Light*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Light::~QReflect_Light( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_Light::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_Light::createInstance( ){
osg::ref_ptr<osg::Light> osg_Light_ptr	;
osg_Light_ptr = new osg::Light ()	;
Instance o(PMOCGETMETACLASS("osg::Light"),(void*)osg_Light_ptr.get()		,true);
_managedinstances.insert(osg_Light_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Light::MetaQReflect_Light():MetaQQuickClass( "osg::Light"){
_typeid=&typeid(osg::Light );
           qRegisterMetaType<osg::QMLLight>();
           qRegisterMetaType<osg::QMLLight*>("pmoc.osg.QMLLight");
qmlRegisterType<osg::QReflect_Light>("pmoc.osg",1,0,"QReflect_Light");
           qmlRegisterType<osg::QMLLight>("pmoc.osg",1,0,"QMLLight");
};
const std::string osg::MetaQReflect_Light::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Light::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Light::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Light::createQQModel(const Instance*i){ //return new MetaQReflect_Light_QModel(i);}
QMLLight *ret =new QMLLight(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::StateAttribute *mother =dynamic_cast<osg::StateAttribute*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::StateAttribute");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::StateAttribute model for osg::Lightis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::StateAttribute");
if(!cl){std::cerr<<"osg::StateAttribute QQModel for osg::Lightis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Light_pmoc.cpp"
#endif




