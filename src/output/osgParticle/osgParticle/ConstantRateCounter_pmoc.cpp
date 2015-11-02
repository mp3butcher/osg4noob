#include <osgParticle/ConstantRateCounter>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osgParticle/ConstantRateCounter_pmoc.hpp>
#include <customCode/osgParticle/ConstantRateCounter_pmoc.hpp>
#include <customCode/osgParticle/Counter_pmoc.hpp>
using namespace pmoc;
 int  osgParticle::QReflect_ConstantRateCounter::numParticlesToCreate( double p0)const{
return _model->numParticlesToCreate(p0);

}
const double osgParticle::QReflect_ConstantRateCounter::getNumberOfParticlesPerSecondToCreate()const{return _model->getNumberOfParticlesPerSecondToCreate();}
const int osgParticle::QReflect_ConstantRateCounter::getMinimumNumberOfParticlesToCreate()const{return _model->getMinimumNumberOfParticlesToCreate();}
void  osgParticle::QReflect_ConstantRateCounter::setMinimumNumberOfParticlesToCreate(const int &par){_model->setMinimumNumberOfParticlesToCreate(par);emit MinimumNumberOfParticlesToCreateChanged(par);}
void  osgParticle::QReflect_ConstantRateCounter::setNumberOfParticlesPerSecondToCreate(const double &par){_model->setNumberOfParticlesPerSecondToCreate(par);emit NumberOfParticlesPerSecondToCreateChanged(par);}

///DefaultConstructor////////////////
osgParticle::QReflect_ConstantRateCounter::QReflect_ConstantRateCounter(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osgParticle::ConstantRateCounter*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osgParticle::QReflect_ConstantRateCounter::~QReflect_ConstantRateCounter( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osgParticle::QReflect_ConstantRateCounter::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osgParticle::MetaQReflect_ConstantRateCounter::createInstance( ){
osg::ref_ptr<osgParticle::ConstantRateCounter> osgParticle_ConstantRateCounter_ptr	;
osgParticle_ConstantRateCounter_ptr = new osgParticle::ConstantRateCounter ()	;
Instance o(PMOCGETMETACLASS("osgParticle::ConstantRateCounter"),(void*)osgParticle_ConstantRateCounter_ptr.get()		,true);
_managedinstances.insert(osgParticle_ConstantRateCounter_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osgParticle::MetaQReflect_ConstantRateCounter::MetaQReflect_ConstantRateCounter():MetaQQuickClass( "osgParticle::ConstantRateCounter"){
_typeid=&typeid(osgParticle::ConstantRateCounter );           qRegisterMetaType<QMLConstantRateCounter>();
qmlRegisterType<QReflect_ConstantRateCounter>("pmoc.osgParticle",1,0,"QReflect_ConstantRateCounter");
           qmlRegisterType<QMLConstantRateCounter>("pmoc.osgParticle",1,0,"QMLConstantRateCounter");
};
const std::string osgParticle::MetaQReflect_ConstantRateCounter::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgParticle::MetaQReflect_ConstantRateCounter::PREcompoQML()const{return std::string("");}
const std::string osgParticle::MetaQReflect_ConstantRateCounter::POSTcompoQML()const{return std::string("");}
QQModel* osgParticle::MetaQReflect_ConstantRateCounter::createQQModel(Instance*i){ //return new MetaQReflect_ConstantRateCounter_QModel(i);}
QMLConstantRateCounter *ret =new QMLConstantRateCounter(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osgParticle::Counter *mother =dynamic_cast<osgParticle::Counter*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osgParticle::Counter");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osgParticle::Counter model for osgParticle::ConstantRateCounteris invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osgParticle::Counter");
if(!cl){std::cerr<<"osgParticle::Counter QQModel for osgParticle::ConstantRateCounteris not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ConstantRateCounter_pmoc.cpp"
#endif


