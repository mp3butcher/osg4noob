#include <osgParticle/ExplosionEffect>
//includes


#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osgParticle/ExplosionEffect_pmoc.hpp>
#include <customCode/osgParticle/ExplosionEffect_pmoc.hpp>
#include <customCode/osgParticle/ParticleEffect_pmoc.hpp>
#include <customCode/osgParticle/Emitter_pmoc.hpp>
#include <customCode/osgParticle/Program_pmoc.hpp>
using namespace pmoc;
 void osgParticle::QReflect_ExplosionEffect::setDefaults(){
//params checking
 _model->setDefaults();

}
 void osgParticle::QReflect_ExplosionEffect::setUpEmitterAndProgram(){
//params checking
 _model->setUpEmitterAndProgram();

}
osgParticle::QReflect_Emitter*osgParticle::QReflect_ExplosionEffect::getEmitter()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getEmitter(),inst);
return inst.isValid()?((osgParticle::QReflect_Emitter * )inst.model->createQQModel(&inst)):NULL;
}
osgParticle::QReflect_Emitter*osgParticle::QReflect_ExplosionEffect::getEmitter(){
//params checking
PMOCSAFEADDOBJECT(*_model->getEmitter(),inst);
return inst.isValid()?((osgParticle::QReflect_Emitter * )inst.model->createQQModel(&inst)):NULL;
}
osgParticle::QReflect_Program*osgParticle::QReflect_ExplosionEffect::getProgram()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getProgram(),inst);
return inst.isValid()?((osgParticle::QReflect_Program * )inst.model->createQQModel(&inst)):NULL;
}
osgParticle::QReflect_Program*osgParticle::QReflect_ExplosionEffect::getProgram(){
//params checking
PMOCSAFEADDOBJECT(*_model->getProgram(),inst);
return inst.isValid()?((osgParticle::QReflect_Program * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osgParticle::QReflect_ExplosionEffect::QReflect_ExplosionEffect(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osgParticle::ExplosionEffect*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osgParticle::QReflect_ExplosionEffect::~QReflect_ExplosionEffect( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osgParticle::QReflect_ExplosionEffect::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osgParticle::MetaQReflect_ExplosionEffect::createInstance( ){
osg::ref_ptr<osgParticle::ExplosionEffect> osgParticle_ExplosionEffect_ptr	;
osgParticle_ExplosionEffect_ptr = new osgParticle::ExplosionEffect ()	;
Instance o(PMOCGETMETACLASS("osgParticle::ExplosionEffect"),(void*)osgParticle_ExplosionEffect_ptr.get()		,true);
_managedinstances.insert(osgParticle_ExplosionEffect_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osgParticle::MetaQReflect_ExplosionEffect::MetaQReflect_ExplosionEffect():MetaQQuickClass( "osgParticle::ExplosionEffect"){
_typeid=&typeid(osgParticle::ExplosionEffect );
           qRegisterMetaType<osgParticle::QMLExplosionEffect>();
           qRegisterMetaType<osgParticle::QMLExplosionEffect*>("pmoc.osgParticle.QMLExplosionEffect");
qmlRegisterType<osgParticle::QReflect_ExplosionEffect>("pmoc.osgParticle",1,0,"QReflect_ExplosionEffect");
           qmlRegisterType<osgParticle::QMLExplosionEffect>("pmoc.osgParticle",1,0,"QMLExplosionEffect");
};
const std::string osgParticle::MetaQReflect_ExplosionEffect::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgParticle::MetaQReflect_ExplosionEffect::PREcompoQML()const{return std::string("");}
const std::string osgParticle::MetaQReflect_ExplosionEffect::POSTcompoQML()const{return std::string("");}
QQModel* osgParticle::MetaQReflect_ExplosionEffect::createQQModel(const Instance*i){ //return new MetaQReflect_ExplosionEffect_QModel(i);}
QMLExplosionEffect *ret =new QMLExplosionEffect(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osgParticle::ParticleEffect *mother =dynamic_cast<osgParticle::ParticleEffect*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osgParticle::ParticleEffect");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osgParticle::ParticleEffect model for osgParticle::ExplosionEffectis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osgParticle::ParticleEffect");
if(!cl){std::cerr<<"osgParticle::ParticleEffect QQModel for osgParticle::ExplosionEffectis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ExplosionEffect_pmoc.cpp"
#endif




