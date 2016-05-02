#include <osgParticle/FireEffect>
//includes


#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osgParticle/FireEffect_pmoc.hpp>
#include <customCode/osgParticle/FireEffect_pmoc.hpp>
#include <customCode/osgParticle/ParticleEffect_pmoc.hpp>
#include <customCode/osgParticle/Emitter_pmoc.hpp>
#include <customCode/osgParticle/Program_pmoc.hpp>
using namespace pmoc;
 void osgParticle::QReflect_FireEffect::setDefaults(){
//params checking
 _model->setDefaults();

}
 void osgParticle::QReflect_FireEffect::setUpEmitterAndProgram(){
//params checking
 _model->setUpEmitterAndProgram();

}
osgParticle::QReflect_Emitter*osgParticle::QReflect_FireEffect::getEmitter()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getEmitter(),inst);
return inst.isValid()?((osgParticle::QReflect_Emitter * )inst.model->createQQModel(&inst)):NULL;
}
osgParticle::QReflect_Emitter*osgParticle::QReflect_FireEffect::getEmitter(){
//params checking
PMOCSAFEADDOBJECT(*_model->getEmitter(),inst);
return inst.isValid()?((osgParticle::QReflect_Emitter * )inst.model->createQQModel(&inst)):NULL;
}
osgParticle::QReflect_Program*osgParticle::QReflect_FireEffect::getProgram()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getProgram(),inst);
return inst.isValid()?((osgParticle::QReflect_Program * )inst.model->createQQModel(&inst)):NULL;
}
osgParticle::QReflect_Program*osgParticle::QReflect_FireEffect::getProgram(){
//params checking
PMOCSAFEADDOBJECT(*_model->getProgram(),inst);
return inst.isValid()?((osgParticle::QReflect_Program * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osgParticle::QReflect_FireEffect::QReflect_FireEffect(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osgParticle::FireEffect*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osgParticle::QReflect_FireEffect::~QReflect_FireEffect( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osgParticle::QReflect_FireEffect::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osgParticle::MetaQReflect_FireEffect::createInstance( ){
osg::ref_ptr<osgParticle::FireEffect> osgParticle_FireEffect_ptr	;
osgParticle_FireEffect_ptr = new osgParticle::FireEffect ()	;
Instance o(PMOCGETMETACLASS("osgParticle::FireEffect"),(void*)osgParticle_FireEffect_ptr.get()		,true);
_managedinstances.insert(osgParticle_FireEffect_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osgParticle::MetaQReflect_FireEffect::MetaQReflect_FireEffect():MetaQQuickClass( "osgParticle::FireEffect"){
_typeid=&typeid(osgParticle::FireEffect );
           qRegisterMetaType<osgParticle::QMLFireEffect>();
           qRegisterMetaType<osgParticle::QMLFireEffect*>("pmoc.osgParticle.QMLFireEffect");
qmlRegisterType<osgParticle::QReflect_FireEffect>("pmoc.osgParticle",1,0,"QReflect_FireEffect");
           qmlRegisterType<osgParticle::QMLFireEffect>("pmoc.osgParticle",1,0,"QMLFireEffect");
};
const std::string osgParticle::MetaQReflect_FireEffect::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgParticle::MetaQReflect_FireEffect::PREcompoQML()const{return std::string("");}
const std::string osgParticle::MetaQReflect_FireEffect::POSTcompoQML()const{return std::string("");}
QQModel* osgParticle::MetaQReflect_FireEffect::createQQModel(const Instance*i){ //return new MetaQReflect_FireEffect_QModel(i);}
QMLFireEffect *ret =new QMLFireEffect(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osgParticle::ParticleEffect *mother =dynamic_cast<osgParticle::ParticleEffect*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osgParticle::ParticleEffect");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osgParticle::ParticleEffect model for osgParticle::FireEffectis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osgParticle::ParticleEffect");
if(!cl){std::cerr<<"osgParticle::ParticleEffect QQModel for osgParticle::FireEffectis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_FireEffect_pmoc.cpp"
#endif




