#include <osgParticle/SmokeEffect>
//includes


#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osgParticle/SmokeEffect_pmoc.hpp>
#include <customCode/osgParticle/SmokeEffect_pmoc.hpp>
#include <customCode/osgParticle/ParticleEffect_pmoc.hpp>
#include <customCode/osgParticle/Emitter_pmoc.hpp>
#include <customCode/osgParticle/Program_pmoc.hpp>
using namespace pmoc;
 void osgParticle::QReflect_SmokeEffect::setDefaults(){
//params checking
 _model->setDefaults();

}
 void osgParticle::QReflect_SmokeEffect::setUpEmitterAndProgram(){
//params checking
 _model->setUpEmitterAndProgram();

}
osgParticle::QReflect_Emitter*osgParticle::QReflect_SmokeEffect::getEmitter()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getEmitter(),inst);
return inst.isValid()?((osgParticle::QReflect_Emitter * )inst.model->createQQModel(&inst)):NULL;
}
osgParticle::QReflect_Emitter*osgParticle::QReflect_SmokeEffect::getEmitter(){
//params checking
PMOCSAFEADDOBJECT(*_model->getEmitter(),inst);
return inst.isValid()?((osgParticle::QReflect_Emitter * )inst.model->createQQModel(&inst)):NULL;
}
osgParticle::QReflect_Program*osgParticle::QReflect_SmokeEffect::getProgram()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getProgram(),inst);
return inst.isValid()?((osgParticle::QReflect_Program * )inst.model->createQQModel(&inst)):NULL;
}
osgParticle::QReflect_Program*osgParticle::QReflect_SmokeEffect::getProgram(){
//params checking
PMOCSAFEADDOBJECT(*_model->getProgram(),inst);
return inst.isValid()?((osgParticle::QReflect_Program * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osgParticle::QReflect_SmokeEffect::QReflect_SmokeEffect(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osgParticle::SmokeEffect*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osgParticle::QReflect_SmokeEffect::~QReflect_SmokeEffect( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osgParticle::QReflect_SmokeEffect::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osgParticle::MetaQReflect_SmokeEffect::createInstance( ){
osg::ref_ptr<osgParticle::SmokeEffect> osgParticle_SmokeEffect_ptr	;
osgParticle_SmokeEffect_ptr = new osgParticle::SmokeEffect ()	;
Instance o(PMOCGETMETACLASS("osgParticle::SmokeEffect"),(void*)osgParticle_SmokeEffect_ptr.get()		,true);
_managedinstances.insert(osgParticle_SmokeEffect_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osgParticle::MetaQReflect_SmokeEffect::MetaQReflect_SmokeEffect():MetaQQuickClass( "osgParticle::SmokeEffect"){
_typeid=&typeid(osgParticle::SmokeEffect );
           qRegisterMetaType<osgParticle::QMLSmokeEffect>();
           qRegisterMetaType<osgParticle::QMLSmokeEffect*>("pmoc.osgParticle.QMLSmokeEffect");
qmlRegisterType<osgParticle::QReflect_SmokeEffect>("pmoc.osgParticle",1,0,"QReflect_SmokeEffect");
           qmlRegisterType<osgParticle::QMLSmokeEffect>("pmoc.osgParticle",1,0,"QMLSmokeEffect");
};
const std::string osgParticle::MetaQReflect_SmokeEffect::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgParticle::MetaQReflect_SmokeEffect::PREcompoQML()const{return std::string("");}
const std::string osgParticle::MetaQReflect_SmokeEffect::POSTcompoQML()const{return std::string("");}
QQModel* osgParticle::MetaQReflect_SmokeEffect::createQQModel(const Instance*i){ //return new MetaQReflect_SmokeEffect_QModel(i);}
QMLSmokeEffect *ret =new QMLSmokeEffect(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osgParticle::ParticleEffect *mother =dynamic_cast<osgParticle::ParticleEffect*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osgParticle::ParticleEffect");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osgParticle::ParticleEffect model for osgParticle::SmokeEffectis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osgParticle::ParticleEffect");
if(!cl){std::cerr<<"osgParticle::ParticleEffect QQModel for osgParticle::SmokeEffectis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_SmokeEffect_pmoc.cpp"
#endif




