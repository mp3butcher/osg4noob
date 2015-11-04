#include <osgParticle/PrecipitationEffect>
//includes


#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osgParticle/PrecipitationEffect_pmoc.hpp>
#include <customCode/osgParticle/PrecipitationEffect_pmoc.hpp>
#include <customCode/osg/Node_pmoc.hpp>
#include <customCode/osg/Fog_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osg/Vec3f_pmoc.hpp>
#include <customCode/osg/Vec4f_pmoc.hpp>
#include <osg/Fog>
#include <osg/Fog_pmoc.hpp>
using namespace pmoc;
 bool  osgParticle::QReflect_PrecipitationEffect::isSameKindAs(osg::QReflect_Object *p0)const{
return _model->isSameKindAs(p0->_model);

}
 void osgParticle::QReflect_PrecipitationEffect::rain( float p0){
 _model->rain(p0);

}
 void osgParticle::QReflect_PrecipitationEffect::setCellSize(osg::QReflect_Vec3f *p0){
 _model->setCellSize(*p0->_model);

}
 void osgParticle::QReflect_PrecipitationEffect::setParticleColor(osg::QReflect_Vec4f *p0){
 _model->setParticleColor(*p0->_model);

}
 void osgParticle::QReflect_PrecipitationEffect::setPosition(osg::QReflect_Vec3f *p0){
 _model->setPosition(*p0->_model);

}
 void osgParticle::QReflect_PrecipitationEffect::setWind(osg::QReflect_Vec3f *p0){
 _model->setWind(*p0->_model);

}
 void osgParticle::QReflect_PrecipitationEffect::snow( float p0){
 _model->snow(p0);

}
const  char*  osgParticle::QReflect_PrecipitationEffect::className()const{
return _model->className();

}
const  char*  osgParticle::QReflect_PrecipitationEffect::libraryName()const{
return _model->libraryName();

}
const bool osgParticle::QReflect_PrecipitationEffect::getUseFarLineSegments()const{return _model->getUseFarLineSegments();}
const float osgParticle::QReflect_PrecipitationEffect::getFarTransition()const{return _model->getFarTransition();}
const float osgParticle::QReflect_PrecipitationEffect::getMaximumParticleDensity()const{return _model->getMaximumParticleDensity();}
const float osgParticle::QReflect_PrecipitationEffect::getNearTransition()const{return _model->getNearTransition();}
const float osgParticle::QReflect_PrecipitationEffect::getParticleSize()const{return _model->getParticleSize();}
const float osgParticle::QReflect_PrecipitationEffect::getParticleSpeed()const{return _model->getParticleSpeed();}
osg::QReflect_Fog * osgParticle::QReflect_PrecipitationEffect::getFog()const{
PMOCSAFEADDOBJECT(*_model->getFog(),inst);
return inst.isValid()?((osg::QReflect_Fog * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Geometry*osgParticle::QReflect_PrecipitationEffect::getLineGeometry(){
PMOCSAFEADDOBJECT(*_model->getLineGeometry(),inst);
return inst.isValid()?((osg::QReflect_Geometry * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Geometry*osgParticle::QReflect_PrecipitationEffect::getPointGeometry(){
PMOCSAFEADDOBJECT(*_model->getPointGeometry(),inst);
return inst.isValid()?((osg::QReflect_Geometry * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Geometry*osgParticle::QReflect_PrecipitationEffect::getQuadGeometry(){
PMOCSAFEADDOBJECT(*_model->getQuadGeometry(),inst);
return inst.isValid()?((osg::QReflect_Geometry * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_StateSet*osgParticle::QReflect_PrecipitationEffect::getLineStateSet(){
PMOCSAFEADDOBJECT(*_model->getLineStateSet(),inst);
return inst.isValid()?((osg::QReflect_StateSet * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_StateSet*osgParticle::QReflect_PrecipitationEffect::getPointStateSet(){
PMOCSAFEADDOBJECT(*_model->getPointStateSet(),inst);
return inst.isValid()?((osg::QReflect_StateSet * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_StateSet*osgParticle::QReflect_PrecipitationEffect::getQuadStateSet(){
PMOCSAFEADDOBJECT(*_model->getQuadStateSet(),inst);
return inst.isValid()?((osg::QReflect_StateSet * )inst.model->createQQModel(&inst)):NULL;
}
void  osgParticle::QReflect_PrecipitationEffect::setFarTransition(const float &par){_model->setFarTransition(par);emit FarTransitionChanged(par);}
void  osgParticle::QReflect_PrecipitationEffect::setMaximumParticleDensity(const float &par){_model->setMaximumParticleDensity(par);emit MaximumParticleDensityChanged(par);}
void  osgParticle::QReflect_PrecipitationEffect::setNearTransition(const float &par){_model->setNearTransition(par);emit NearTransitionChanged(par);}
void  osgParticle::QReflect_PrecipitationEffect::setParticleSize(const float &par){_model->setParticleSize(par);emit ParticleSizeChanged(par);}
void  osgParticle::QReflect_PrecipitationEffect::setParticleSpeed(const float &par){_model->setParticleSpeed(par);emit ParticleSpeedChanged(par);}
void  osgParticle::QReflect_PrecipitationEffect::setUseFarLineSegments(const bool &par){_model->setUseFarLineSegments(par);emit UseFarLineSegmentsChanged(par);}
void osgParticle::QReflect_PrecipitationEffect::pmoc_reverse_setFog( osg::QReflect_Fog *par){_model->setFog(NULL);
emit FogChanged(NULL);
}
void osgParticle::QReflect_PrecipitationEffect::setFog( osg::QReflect_Fog *par){_model->setFog(par->_model);
emit FogChanged(par);
}

///DefaultConstructor////////////////
osgParticle::QReflect_PrecipitationEffect::QReflect_PrecipitationEffect(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osgParticle::PrecipitationEffect*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osgParticle::QReflect_PrecipitationEffect::~QReflect_PrecipitationEffect( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osgParticle::QReflect_PrecipitationEffect::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osgParticle::MetaQReflect_PrecipitationEffect::createInstance( ){
osg::ref_ptr<osgParticle::PrecipitationEffect> osgParticle_PrecipitationEffect_ptr	;
osgParticle_PrecipitationEffect_ptr = new osgParticle::PrecipitationEffect ()	;
Instance o(PMOCGETMETACLASS("osgParticle::PrecipitationEffect"),(void*)osgParticle_PrecipitationEffect_ptr.get()		,true);
_managedinstances.insert(osgParticle_PrecipitationEffect_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osgParticle::MetaQReflect_PrecipitationEffect::MetaQReflect_PrecipitationEffect():MetaQQuickClass( "osgParticle::PrecipitationEffect"){
_typeid=&typeid(osgParticle::PrecipitationEffect );           qRegisterMetaType<QMLPrecipitationEffect>();
qmlRegisterType<QReflect_PrecipitationEffect>("pmoc.osgParticle",1,0,"QReflect_PrecipitationEffect");
           qmlRegisterType<QMLPrecipitationEffect>("pmoc.osgParticle",1,0,"QMLPrecipitationEffect");
       PMOCACTION("getFog","setFog","unsetFog");
};
const std::string osgParticle::MetaQReflect_PrecipitationEffect::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgParticle::MetaQReflect_PrecipitationEffect::PREcompoQML()const{return std::string("");}
const std::string osgParticle::MetaQReflect_PrecipitationEffect::POSTcompoQML()const{return std::string("");}
QQModel* osgParticle::MetaQReflect_PrecipitationEffect::createQQModel(Instance*i){ //return new MetaQReflect_PrecipitationEffect_QModel(i);}
QMLPrecipitationEffect *ret =new QMLPrecipitationEffect(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Node *mother =dynamic_cast<osg::Node*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Node");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Node model for osgParticle::PrecipitationEffectis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Node");
if(!cl){std::cerr<<"osg::Node QQModel for osgParticle::PrecipitationEffectis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_PrecipitationEffect_pmoc.cpp"
#endif




