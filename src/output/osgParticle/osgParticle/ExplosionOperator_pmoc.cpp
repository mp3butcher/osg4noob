#include <osgParticle/ExplosionOperator>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osgParticle/ExplosionOperator_pmoc.hpp>
#include <customCode/osgParticle/ExplosionOperator_pmoc.hpp>
#include <customCode/osgParticle/Operator_pmoc.hpp>
#include <customCode/osg/Vec3f_pmoc.hpp>
#include <customCode/osgParticle/Particle_pmoc.hpp>
#include <customCode/osgParticle/Program_pmoc.hpp>
using namespace pmoc;
 void osgParticle::QReflect_ExplosionOperator::beginOperate(osgParticle::QReflect_Program *p0){
 _model->beginOperate(p0->_model);

}
 void osgParticle::QReflect_ExplosionOperator::operate(osgParticle::QReflect_Particle *p0 , double p1){
 _model->operate(p0->_model ,p1);

}
 void osgParticle::QReflect_ExplosionOperator::setCenter(osg::QReflect_Vec3f *p0){
 _model->setCenter(*p0->_model);

}
const float osgParticle::QReflect_ExplosionOperator::getEpsilon()const{return _model->getEpsilon();}
const float osgParticle::QReflect_ExplosionOperator::getMagnitude()const{return _model->getMagnitude();}
const float osgParticle::QReflect_ExplosionOperator::getRadius()const{return _model->getRadius();}
const float osgParticle::QReflect_ExplosionOperator::getSigma()const{return _model->getSigma();}
void  osgParticle::QReflect_ExplosionOperator::setEpsilon(const float &par){_model->setEpsilon(par);emit EpsilonChanged(par);}
void  osgParticle::QReflect_ExplosionOperator::setMagnitude(const float &par){_model->setMagnitude(par);emit MagnitudeChanged(par);}
void  osgParticle::QReflect_ExplosionOperator::setRadius(const float &par){_model->setRadius(par);emit RadiusChanged(par);}
void  osgParticle::QReflect_ExplosionOperator::setSigma(const float &par){_model->setSigma(par);emit SigmaChanged(par);}

///DefaultConstructor////////////////
osgParticle::QReflect_ExplosionOperator::QReflect_ExplosionOperator(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osgParticle::ExplosionOperator*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osgParticle::QReflect_ExplosionOperator::~QReflect_ExplosionOperator( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osgParticle::QReflect_ExplosionOperator::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osgParticle::MetaQReflect_ExplosionOperator::createInstance( ){
osg::ref_ptr<osgParticle::ExplosionOperator> osgParticle_ExplosionOperator_ptr	;
osgParticle_ExplosionOperator_ptr = new osgParticle::ExplosionOperator ()	;
Instance o(PMOCGETMETACLASS("osgParticle::ExplosionOperator"),(void*)osgParticle_ExplosionOperator_ptr.get()		,true);
_managedinstances.insert(osgParticle_ExplosionOperator_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osgParticle::MetaQReflect_ExplosionOperator::MetaQReflect_ExplosionOperator():MetaQQuickClass( "osgParticle::ExplosionOperator"){
_typeid=&typeid(osgParticle::ExplosionOperator );           qRegisterMetaType<QMLExplosionOperator>();
qmlRegisterType<QReflect_ExplosionOperator>("pmoc.osgParticle",1,0,"QReflect_ExplosionOperator");
           qmlRegisterType<QMLExplosionOperator>("pmoc.osgParticle",1,0,"QMLExplosionOperator");
};
const std::string osgParticle::MetaQReflect_ExplosionOperator::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgParticle::MetaQReflect_ExplosionOperator::PREcompoQML()const{return std::string("");}
const std::string osgParticle::MetaQReflect_ExplosionOperator::POSTcompoQML()const{return std::string("");}
QQModel* osgParticle::MetaQReflect_ExplosionOperator::createQQModel(Instance*i){ //return new MetaQReflect_ExplosionOperator_QModel(i);}
QMLExplosionOperator *ret =new QMLExplosionOperator(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osgParticle::Operator *mother =dynamic_cast<osgParticle::Operator*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osgParticle::Operator");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osgParticle::Operator model for osgParticle::ExplosionOperatoris invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osgParticle::Operator");
if(!cl){std::cerr<<"osgParticle::Operator QQModel for osgParticle::ExplosionOperatoris not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ExplosionOperator_pmoc.cpp"
#endif




