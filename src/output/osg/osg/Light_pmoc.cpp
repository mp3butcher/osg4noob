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
#include <customCode/osg/Vec3f_pmoc.hpp>
#include <customCode/osg/Vec4f_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_Light::isSameKindAs(osg::QReflect_Object *p0)const{
return _model->isSameKindAs(p0->_model);

}
 int  osg::QReflect_Light::compare(osg::QReflect_StateAttribute *p0)const{
return _model->compare(*p0->_model);

}
 unsigned int  osg::QReflect_Light::getMember()const{
return _model->getMember();

}
 void osg::QReflect_Light::captureLightState(){
 _model->captureLightState();

}
 void osg::QReflect_Light::setAmbient(osg::QReflect_Vec4f *p0){
 _model->setAmbient(*p0->_model);

}
 void osg::QReflect_Light::setDiffuse(osg::QReflect_Vec4f *p0){
 _model->setDiffuse(*p0->_model);

}
 void osg::QReflect_Light::setDirection(osg::QReflect_Vec3f *p0){
 _model->setDirection(*p0->_model);

}
 void osg::QReflect_Light::setPosition(osg::QReflect_Vec4f *p0){
 _model->setPosition(*p0->_model);

}
 void osg::QReflect_Light::setSpecular(osg::QReflect_Vec4f *p0){
 _model->setSpecular(*p0->_model);

}
const  char*  osg::QReflect_Light::className()const{
return _model->className();

}
const  char*  osg::QReflect_Light::libraryName()const{
return _model->libraryName();

}
const float osg::QReflect_Light::getConstantAttenuation()const{return _model->getConstantAttenuation();}
const float osg::QReflect_Light::getLinearAttenuation()const{return _model->getLinearAttenuation();}
const float osg::QReflect_Light::getQuadraticAttenuation()const{return _model->getQuadraticAttenuation();}
const float osg::QReflect_Light::getSpotCutoff()const{return _model->getSpotCutoff();}
const float osg::QReflect_Light::getSpotExponent()const{return _model->getSpotExponent();}
const int osg::QReflect_Light::getLightNum()const{return _model->getLightNum();}
osg::QReflect_Object*osg::QReflect_Light::clone(osg::QReflect_CopyOp *p0)const{
PMOCSAFEADDOBJECT(*_model->clone(*p0->_model),inst);
return inst.isValid()?((osg::QReflect_Object * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Object*osg::QReflect_Light::cloneType()const{
PMOCSAFEADDOBJECT(*_model->cloneType(),inst);
return inst.isValid()?((osg::QReflect_Object * )inst.model->createQQModel(&inst)):NULL;
}
void  osg::QReflect_Light::setConstantAttenuation(const float &par){_model->setConstantAttenuation(par);emit ConstantAttenuationChanged(par);}
void  osg::QReflect_Light::setLightNum(const int &par){_model->setLightNum(par);emit LightNumChanged(par);}
void  osg::QReflect_Light::setLinearAttenuation(const float &par){_model->setLinearAttenuation(par);emit LinearAttenuationChanged(par);}
void  osg::QReflect_Light::setQuadraticAttenuation(const float &par){_model->setQuadraticAttenuation(par);emit QuadraticAttenuationChanged(par);}
void  osg::QReflect_Light::setSpotCutoff(const float &par){_model->setSpotCutoff(par);emit SpotCutoffChanged(par);}
void  osg::QReflect_Light::setSpotExponent(const float &par){_model->setSpotExponent(par);emit SpotExponentChanged(par);}

///DefaultConstructor////////////////
osg::QReflect_Light::QReflect_Light(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osg::Light );           qRegisterMetaType<QMLLight>();
qmlRegisterType<QReflect_Light>("pmoc.osg",1,0,"QReflect_Light");
           qmlRegisterType<QMLLight>("pmoc.osg",1,0,"QMLLight");
};
const std::string osg::MetaQReflect_Light::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Light::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Light::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Light::createQQModel(Instance*i){ //return new MetaQReflect_Light_QModel(i);}
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


