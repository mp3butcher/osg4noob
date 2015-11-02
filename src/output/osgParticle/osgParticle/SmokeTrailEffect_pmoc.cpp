#include <osgParticle/SmokeTrailEffect>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osgParticle/SmokeTrailEffect_pmoc.hpp>
#include <customCode/osgParticle/SmokeTrailEffect_pmoc.hpp>
#include <customCode/osgParticle/ParticleEffect_pmoc.hpp>
using namespace pmoc;
 void osgParticle::QReflect_SmokeTrailEffect::setDefaults(){
 _model->setDefaults();

}
 void osgParticle::QReflect_SmokeTrailEffect::setUpEmitterAndProgram(){
 _model->setUpEmitterAndProgram();

}
osgParticle::QReflect_Emitter*osgParticle::QReflect_SmokeTrailEffect::getEmitter()const{
PMOCSAFEADDOBJECT(*_model->getEmitter(),inst);
return inst.isValid()?((osgParticle::QReflect_Emitter * )inst.model->createQQModel(&inst)):NULL;
}
osgParticle::QReflect_Emitter*osgParticle::QReflect_SmokeTrailEffect::getEmitter(){
PMOCSAFEADDOBJECT(*_model->getEmitter(),inst);
return inst.isValid()?((osgParticle::QReflect_Emitter * )inst.model->createQQModel(&inst)):NULL;
}
osgParticle::QReflect_Program*osgParticle::QReflect_SmokeTrailEffect::getProgram()const{
PMOCSAFEADDOBJECT(*_model->getProgram(),inst);
return inst.isValid()?((osgParticle::QReflect_Program * )inst.model->createQQModel(&inst)):NULL;
}
osgParticle::QReflect_Program*osgParticle::QReflect_SmokeTrailEffect::getProgram(){
PMOCSAFEADDOBJECT(*_model->getProgram(),inst);
return inst.isValid()?((osgParticle::QReflect_Program * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osgParticle::QReflect_SmokeTrailEffect::QReflect_SmokeTrailEffect(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osgParticle::SmokeTrailEffect*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osgParticle::QReflect_SmokeTrailEffect::~QReflect_SmokeTrailEffect( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osgParticle::QReflect_SmokeTrailEffect::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osgParticle::MetaQReflect_SmokeTrailEffect::createInstance( ){
osg::ref_ptr<osgParticle::SmokeTrailEffect> osgParticle_SmokeTrailEffect_ptr	;
osgParticle_SmokeTrailEffect_ptr = new osgParticle::SmokeTrailEffect ()	;
Instance o(PMOCGETMETACLASS("osgParticle::SmokeTrailEffect"),(void*)osgParticle_SmokeTrailEffect_ptr.get()		,true);
_managedinstances.insert(osgParticle_SmokeTrailEffect_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osgParticle::MetaQReflect_SmokeTrailEffect::MetaQReflect_SmokeTrailEffect():MetaQQuickClass( "osgParticle::SmokeTrailEffect"){
_typeid=&typeid(osgParticle::SmokeTrailEffect );           qRegisterMetaType<QMLSmokeTrailEffect>();
qmlRegisterType<QReflect_SmokeTrailEffect>("pmoc.osgParticle",1,0,"QReflect_SmokeTrailEffect");
           qmlRegisterType<QMLSmokeTrailEffect>("pmoc.osgParticle",1,0,"QMLSmokeTrailEffect");
};
const std::string osgParticle::MetaQReflect_SmokeTrailEffect::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgParticle::MetaQReflect_SmokeTrailEffect::PREcompoQML()const{return std::string("");}
const std::string osgParticle::MetaQReflect_SmokeTrailEffect::POSTcompoQML()const{return std::string("");}
QQModel* osgParticle::MetaQReflect_SmokeTrailEffect::createQQModel(Instance*i){ //return new MetaQReflect_SmokeTrailEffect_QModel(i);}
QMLSmokeTrailEffect *ret =new QMLSmokeTrailEffect(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osgParticle::ParticleEffect *mother =dynamic_cast<osgParticle::ParticleEffect*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osgParticle::ParticleEffect");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osgParticle::ParticleEffect model for osgParticle::SmokeTrailEffectis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osgParticle::ParticleEffect");
if(!cl){std::cerr<<"osgParticle::ParticleEffect QQModel for osgParticle::SmokeTrailEffectis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_SmokeTrailEffect_pmoc.cpp"
#endif




