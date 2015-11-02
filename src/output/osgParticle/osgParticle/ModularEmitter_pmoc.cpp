#include <osgParticle/ModularEmitter>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osgParticle/ModularEmitter_pmoc.hpp>
#include <customCode/osgParticle/ModularEmitter_pmoc.hpp>
#include <customCode/osgParticle/Emitter_pmoc.hpp>
#include <customCode/osgParticle/Counter_pmoc.hpp>
#include <customCode/osgParticle/Placer_pmoc.hpp>
#include <customCode/osgParticle/Shooter_pmoc.hpp>
#include <osgParticle/Counter>
#include <osgParticle/Counter_pmoc.hpp>
#include <osgParticle/Placer>
#include <osgParticle/Placer_pmoc.hpp>
#include <osgParticle/Shooter>
#include <osgParticle/Shooter_pmoc.hpp>
using namespace pmoc;
const float osgParticle::QReflect_ModularEmitter::getNumParticlesToCreateMovementCompensationRatio()const{return _model->getNumParticlesToCreateMovementCompensationRatio();}
osgParticle::QReflect_Counter * osgParticle::QReflect_ModularEmitter::getCounter()const{
PMOCSAFEADDOBJECT(*_model->getCounter(),inst);
return inst.isValid()?((osgParticle::QReflect_Counter * )inst.model->createQQModel(&inst)):NULL;
}
osgParticle::QReflect_Placer * osgParticle::QReflect_ModularEmitter::getPlacer()const{
PMOCSAFEADDOBJECT(*_model->getPlacer(),inst);
return inst.isValid()?((osgParticle::QReflect_Placer * )inst.model->createQQModel(&inst)):NULL;
}
osgParticle::QReflect_Shooter * osgParticle::QReflect_ModularEmitter::getShooter()const{
PMOCSAFEADDOBJECT(*_model->getShooter(),inst);
return inst.isValid()?((osgParticle::QReflect_Shooter * )inst.model->createQQModel(&inst)):NULL;
}
void  osgParticle::QReflect_ModularEmitter::setNumParticlesToCreateMovementCompensationRatio(const float &par){_model->setNumParticlesToCreateMovementCompensationRatio(par);emit NumParticlesToCreateMovementCompensationRatioChanged(par);}
void osgParticle::QReflect_ModularEmitter::pmoc_reverse_setCounter( osgParticle::QReflect_Counter *par){_model->setCounter(NULL);
emit CounterChanged(NULL);
}
void osgParticle::QReflect_ModularEmitter::pmoc_reverse_setPlacer( osgParticle::QReflect_Placer *par){_model->setPlacer(NULL);
emit PlacerChanged(NULL);
}
void osgParticle::QReflect_ModularEmitter::pmoc_reverse_setShooter( osgParticle::QReflect_Shooter *par){_model->setShooter(NULL);
emit ShooterChanged(NULL);
}
void osgParticle::QReflect_ModularEmitter::setCounter( osgParticle::QReflect_Counter *par){_model->setCounter(par->_model);
emit CounterChanged(par);
}
void osgParticle::QReflect_ModularEmitter::setPlacer( osgParticle::QReflect_Placer *par){_model->setPlacer(par->_model);
emit PlacerChanged(par);
}
void osgParticle::QReflect_ModularEmitter::setShooter( osgParticle::QReflect_Shooter *par){_model->setShooter(par->_model);
emit ShooterChanged(par);
}

///DefaultConstructor////////////////
osgParticle::QReflect_ModularEmitter::QReflect_ModularEmitter(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osgParticle::ModularEmitter*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osgParticle::QReflect_ModularEmitter::~QReflect_ModularEmitter( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osgParticle::QReflect_ModularEmitter::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osgParticle::MetaQReflect_ModularEmitter::createInstance( ){
osg::ref_ptr<osgParticle::ModularEmitter> osgParticle_ModularEmitter_ptr	;
osgParticle_ModularEmitter_ptr = new osgParticle::ModularEmitter ()	;
Instance o(PMOCGETMETACLASS("osgParticle::ModularEmitter"),(void*)osgParticle_ModularEmitter_ptr.get()		,true);
_managedinstances.insert(osgParticle_ModularEmitter_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osgParticle::MetaQReflect_ModularEmitter::MetaQReflect_ModularEmitter():MetaQQuickClass( "osgParticle::ModularEmitter"){
_typeid=&typeid(osgParticle::ModularEmitter );           qRegisterMetaType<QMLModularEmitter>();
qmlRegisterType<QReflect_ModularEmitter>("pmoc.osgParticle",1,0,"QReflect_ModularEmitter");
           qmlRegisterType<QMLModularEmitter>("pmoc.osgParticle",1,0,"QMLModularEmitter");
       PMOCACTION("getCounter","setCounter","unsetCounter");
       PMOCACTION("getPlacer","setPlacer","unsetPlacer");
       PMOCACTION("getShooter","setShooter","unsetShooter");
};
const std::string osgParticle::MetaQReflect_ModularEmitter::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgParticle::MetaQReflect_ModularEmitter::PREcompoQML()const{return std::string("");}
const std::string osgParticle::MetaQReflect_ModularEmitter::POSTcompoQML()const{return std::string("");}
QQModel* osgParticle::MetaQReflect_ModularEmitter::createQQModel(Instance*i){ //return new MetaQReflect_ModularEmitter_QModel(i);}
QMLModularEmitter *ret =new QMLModularEmitter(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osgParticle::Emitter *mother =dynamic_cast<osgParticle::Emitter*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osgParticle::Emitter");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osgParticle::Emitter model for osgParticle::ModularEmitteris invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osgParticle::Emitter");
if(!cl){std::cerr<<"osgParticle::Emitter QQModel for osgParticle::ModularEmitteris not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ModularEmitter_pmoc.cpp"
#endif




