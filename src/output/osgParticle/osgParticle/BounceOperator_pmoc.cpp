#include <osgParticle/BounceOperator>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osgParticle/BounceOperator_pmoc.hpp>
#include <customCode/osgParticle/BounceOperator_pmoc.hpp>
#include <customCode/osgParticle/DomainOperator_pmoc.hpp>
using namespace pmoc;
const float osgParticle::QReflect_BounceOperator::getCutoff()const{return _model->getCutoff();}
const float osgParticle::QReflect_BounceOperator::getFriction()const{return _model->getFriction();}
const float osgParticle::QReflect_BounceOperator::getResilience()const{return _model->getResilience();}
void  osgParticle::QReflect_BounceOperator::setCutoff(const float &par){_model->setCutoff(par);emit CutoffChanged(par);}
void  osgParticle::QReflect_BounceOperator::setFriction(const float &par){_model->setFriction(par);emit FrictionChanged(par);}
void  osgParticle::QReflect_BounceOperator::setResilience(const float &par){_model->setResilience(par);emit ResilienceChanged(par);}

///DefaultConstructor////////////////
osgParticle::QReflect_BounceOperator::QReflect_BounceOperator(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osgParticle::BounceOperator*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osgParticle::QReflect_BounceOperator::~QReflect_BounceOperator( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osgParticle::QReflect_BounceOperator::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osgParticle::MetaQReflect_BounceOperator::createInstance( ){
osg::ref_ptr<osgParticle::BounceOperator> osgParticle_BounceOperator_ptr	;
osgParticle_BounceOperator_ptr = new osgParticle::BounceOperator ()	;
Instance o(PMOCGETMETACLASS("osgParticle::BounceOperator"),(void*)osgParticle_BounceOperator_ptr.get()		,true);
_managedinstances.insert(osgParticle_BounceOperator_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osgParticle::MetaQReflect_BounceOperator::MetaQReflect_BounceOperator():MetaQQuickClass( "osgParticle::BounceOperator"){
_typeid=&typeid(osgParticle::BounceOperator );           qRegisterMetaType<QMLBounceOperator>();
qmlRegisterType<QReflect_BounceOperator>("pmoc.osgParticle",1,0,"QReflect_BounceOperator");
           qmlRegisterType<QMLBounceOperator>("pmoc.osgParticle",1,0,"QMLBounceOperator");
};
const std::string osgParticle::MetaQReflect_BounceOperator::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgParticle::MetaQReflect_BounceOperator::PREcompoQML()const{return std::string("");}
const std::string osgParticle::MetaQReflect_BounceOperator::POSTcompoQML()const{return std::string("");}
QQModel* osgParticle::MetaQReflect_BounceOperator::createQQModel(Instance*i){ //return new MetaQReflect_BounceOperator_QModel(i);}
QMLBounceOperator *ret =new QMLBounceOperator(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osgParticle::DomainOperator *mother =dynamic_cast<osgParticle::DomainOperator*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osgParticle::DomainOperator");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osgParticle::DomainOperator model for osgParticle::BounceOperatoris invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osgParticle::DomainOperator");
if(!cl){std::cerr<<"osgParticle::DomainOperator QQModel for osgParticle::BounceOperatoris not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_BounceOperator_pmoc.cpp"
#endif




