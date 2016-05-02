#include <osgParticle/ExplosionDebrisEffect>
//includes


#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osgParticle/ExplosionDebrisEffect_pmoc.hpp>
#include <customCode/osgParticle/ExplosionDebrisEffect_pmoc.hpp>
#include <customCode/osgParticle/ParticleEffect_pmoc.hpp>
#include <customCode/osgParticle/Emitter_pmoc.hpp>
#include <customCode/osgParticle/Program_pmoc.hpp>
using namespace pmoc;
 void osgParticle::QReflect_ExplosionDebrisEffect::setDefaults(){
//params checking
 _model->setDefaults();

}
 void osgParticle::QReflect_ExplosionDebrisEffect::setUpEmitterAndProgram(){
//params checking
 _model->setUpEmitterAndProgram();

}
osgParticle::QReflect_Emitter*osgParticle::QReflect_ExplosionDebrisEffect::getEmitter()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getEmitter(),inst);
return inst.isValid()?((osgParticle::QReflect_Emitter * )inst.model->createQQModel(&inst)):NULL;
}
osgParticle::QReflect_Emitter*osgParticle::QReflect_ExplosionDebrisEffect::getEmitter(){
//params checking
PMOCSAFEADDOBJECT(*_model->getEmitter(),inst);
return inst.isValid()?((osgParticle::QReflect_Emitter * )inst.model->createQQModel(&inst)):NULL;
}
osgParticle::QReflect_Program*osgParticle::QReflect_ExplosionDebrisEffect::getProgram()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getProgram(),inst);
return inst.isValid()?((osgParticle::QReflect_Program * )inst.model->createQQModel(&inst)):NULL;
}
osgParticle::QReflect_Program*osgParticle::QReflect_ExplosionDebrisEffect::getProgram(){
//params checking
PMOCSAFEADDOBJECT(*_model->getProgram(),inst);
return inst.isValid()?((osgParticle::QReflect_Program * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osgParticle::QReflect_ExplosionDebrisEffect::QReflect_ExplosionDebrisEffect(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osgParticle::ExplosionDebrisEffect*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osgParticle::QReflect_ExplosionDebrisEffect::~QReflect_ExplosionDebrisEffect( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osgParticle::QReflect_ExplosionDebrisEffect::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osgParticle::MetaQReflect_ExplosionDebrisEffect::createInstance( ){
osg::ref_ptr<osgParticle::ExplosionDebrisEffect> osgParticle_ExplosionDebrisEffect_ptr	;
osgParticle_ExplosionDebrisEffect_ptr = new osgParticle::ExplosionDebrisEffect ()	;
Instance o(PMOCGETMETACLASS("osgParticle::ExplosionDebrisEffect"),(void*)osgParticle_ExplosionDebrisEffect_ptr.get()		,true);
_managedinstances.insert(osgParticle_ExplosionDebrisEffect_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osgParticle::MetaQReflect_ExplosionDebrisEffect::MetaQReflect_ExplosionDebrisEffect():MetaQQuickClass( "osgParticle::ExplosionDebrisEffect"){
_typeid=&typeid(osgParticle::ExplosionDebrisEffect );
           qRegisterMetaType<osgParticle::QMLExplosionDebrisEffect>();
           qRegisterMetaType<osgParticle::QMLExplosionDebrisEffect*>("pmoc.osgParticle.QMLExplosionDebrisEffect");
qmlRegisterType<osgParticle::QReflect_ExplosionDebrisEffect>("pmoc.osgParticle",1,0,"QReflect_ExplosionDebrisEffect");
           qmlRegisterType<osgParticle::QMLExplosionDebrisEffect>("pmoc.osgParticle",1,0,"QMLExplosionDebrisEffect");
};
const std::string osgParticle::MetaQReflect_ExplosionDebrisEffect::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgParticle::MetaQReflect_ExplosionDebrisEffect::PREcompoQML()const{return std::string("");}
const std::string osgParticle::MetaQReflect_ExplosionDebrisEffect::POSTcompoQML()const{return std::string("");}
QQModel* osgParticle::MetaQReflect_ExplosionDebrisEffect::createQQModel(const Instance*i){ //return new MetaQReflect_ExplosionDebrisEffect_QModel(i);}
QMLExplosionDebrisEffect *ret =new QMLExplosionDebrisEffect(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osgParticle::ParticleEffect *mother =dynamic_cast<osgParticle::ParticleEffect*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osgParticle::ParticleEffect");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osgParticle::ParticleEffect model for osgParticle::ExplosionDebrisEffectis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osgParticle::ParticleEffect");
if(!cl){std::cerr<<"osgParticle::ParticleEffect QQModel for osgParticle::ExplosionDebrisEffectis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ExplosionDebrisEffect_pmoc.cpp"
#endif




