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
using namespace pmoc;
 float  osgParticle::QReflect_ModularEmitter:: getNumParticlesToCreateMovementCompensationRatio()const{
//params checking
return _model->getNumParticlesToCreateMovementCompensationRatio();

}
 void osgParticle::QReflect_ModularEmitter::setCounter(osgParticle::QReflect_Counter  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_ModularEmitter::setCounter : parameter n.0 is NULL\n"<<endl;return;}
 _model->setCounter(p0->_model);
emit CounterChanged();

}
 void osgParticle::QReflect_ModularEmitter::setNumParticlesToCreateMovementCompensationRatio( float  p0){
//params checking
 _model->setNumParticlesToCreateMovementCompensationRatio(p0);
emit NumParticlesToCreateMovementCompensationRatioChanged();

}
 void osgParticle::QReflect_ModularEmitter::setPlacer(osgParticle::QReflect_Placer  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_ModularEmitter::setPlacer : parameter n.0 is NULL\n"<<endl;return;}
 _model->setPlacer(p0->_model);
emit PlacerChanged();

}
 void osgParticle::QReflect_ModularEmitter::setShooter(osgParticle::QReflect_Shooter  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_ModularEmitter::setShooter : parameter n.0 is NULL\n"<<endl;return;}
 _model->setShooter(p0->_model);
emit ShooterChanged();

}
osgParticle::QReflect_Counter*osgParticle::QReflect_ModularEmitter::getCounter()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getCounter(),inst);
return inst.isValid()?((osgParticle::QReflect_Counter * )inst.model->createQQModel(&inst)):NULL;
}
osgParticle::QReflect_Counter*osgParticle::QReflect_ModularEmitter::getCounter(){
//params checking
PMOCSAFEADDOBJECT(*_model->getCounter(),inst);
return inst.isValid()?((osgParticle::QReflect_Counter * )inst.model->createQQModel(&inst)):NULL;
}
osgParticle::QReflect_Placer*osgParticle::QReflect_ModularEmitter::getPlacer()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getPlacer(),inst);
return inst.isValid()?((osgParticle::QReflect_Placer * )inst.model->createQQModel(&inst)):NULL;
}
osgParticle::QReflect_Placer*osgParticle::QReflect_ModularEmitter::getPlacer(){
//params checking
PMOCSAFEADDOBJECT(*_model->getPlacer(),inst);
return inst.isValid()?((osgParticle::QReflect_Placer * )inst.model->createQQModel(&inst)):NULL;
}
osgParticle::QReflect_Shooter*osgParticle::QReflect_ModularEmitter::getShooter()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getShooter(),inst);
return inst.isValid()?((osgParticle::QReflect_Shooter * )inst.model->createQQModel(&inst)):NULL;
}
osgParticle::QReflect_Shooter*osgParticle::QReflect_ModularEmitter::getShooter(){
//params checking
PMOCSAFEADDOBJECT(*_model->getShooter(),inst);
return inst.isValid()?((osgParticle::QReflect_Shooter * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osgParticle::QReflect_ModularEmitter::QReflect_ModularEmitter(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osgParticle::ModularEmitter );
           qRegisterMetaType<osgParticle::QMLModularEmitter>();
           qRegisterMetaType<osgParticle::QMLModularEmitter*>("pmoc.osgParticle.QMLModularEmitter");
qmlRegisterType<osgParticle::QReflect_ModularEmitter>("pmoc.osgParticle",1,0,"QReflect_ModularEmitter");
           qmlRegisterType<osgParticle::QMLModularEmitter>("pmoc.osgParticle",1,0,"QMLModularEmitter");
};
const std::string osgParticle::MetaQReflect_ModularEmitter::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgParticle::MetaQReflect_ModularEmitter::PREcompoQML()const{return std::string("");}
const std::string osgParticle::MetaQReflect_ModularEmitter::POSTcompoQML()const{return std::string("");}
QQModel* osgParticle::MetaQReflect_ModularEmitter::createQQModel(const Instance*i){ //return new MetaQReflect_ModularEmitter_QModel(i);}
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




