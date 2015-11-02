#include <osgParticle/OrbitOperator>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osgParticle/OrbitOperator_pmoc.hpp>
#include <customCode/osgParticle/OrbitOperator_pmoc.hpp>
#include <customCode/osgParticle/Operator_pmoc.hpp>
#include <customCode/osg/Vec3f_pmoc.hpp>
#include <customCode/osgParticle/Particle_pmoc.hpp>
#include <customCode/osgParticle/Program_pmoc.hpp>
using namespace pmoc;
 void osgParticle::QReflect_OrbitOperator::beginOperate(osgParticle::QReflect_Program *p0){
 _model->beginOperate(p0->_model);

}
 void osgParticle::QReflect_OrbitOperator::operate(osgParticle::QReflect_Particle *p0 , double p1){
 _model->operate(p0->_model ,p1);

}
 void osgParticle::QReflect_OrbitOperator::setCenter(osg::QReflect_Vec3f *p0){
 _model->setCenter(*p0->_model);

}
const float osgParticle::QReflect_OrbitOperator::getEpsilon()const{return _model->getEpsilon();}
const float osgParticle::QReflect_OrbitOperator::getMagnitude()const{return _model->getMagnitude();}
const float osgParticle::QReflect_OrbitOperator::getMaxRadius()const{return _model->getMaxRadius();}
void  osgParticle::QReflect_OrbitOperator::setEpsilon(const float &par){_model->setEpsilon(par);emit EpsilonChanged(par);}
void  osgParticle::QReflect_OrbitOperator::setMagnitude(const float &par){_model->setMagnitude(par);emit MagnitudeChanged(par);}
void  osgParticle::QReflect_OrbitOperator::setMaxRadius(const float &par){_model->setMaxRadius(par);emit MaxRadiusChanged(par);}

///DefaultConstructor////////////////
osgParticle::QReflect_OrbitOperator::QReflect_OrbitOperator(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osgParticle::OrbitOperator*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osgParticle::QReflect_OrbitOperator::~QReflect_OrbitOperator( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osgParticle::QReflect_OrbitOperator::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osgParticle::MetaQReflect_OrbitOperator::createInstance( ){
osg::ref_ptr<osgParticle::OrbitOperator> osgParticle_OrbitOperator_ptr	;
osgParticle_OrbitOperator_ptr = new osgParticle::OrbitOperator ()	;
Instance o(PMOCGETMETACLASS("osgParticle::OrbitOperator"),(void*)osgParticle_OrbitOperator_ptr.get()		,true);
_managedinstances.insert(osgParticle_OrbitOperator_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osgParticle::MetaQReflect_OrbitOperator::MetaQReflect_OrbitOperator():MetaQQuickClass( "osgParticle::OrbitOperator"){
_typeid=&typeid(osgParticle::OrbitOperator );           qRegisterMetaType<QMLOrbitOperator>();
qmlRegisterType<QReflect_OrbitOperator>("pmoc.osgParticle",1,0,"QReflect_OrbitOperator");
           qmlRegisterType<QMLOrbitOperator>("pmoc.osgParticle",1,0,"QMLOrbitOperator");
};
const std::string osgParticle::MetaQReflect_OrbitOperator::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgParticle::MetaQReflect_OrbitOperator::PREcompoQML()const{return std::string("");}
const std::string osgParticle::MetaQReflect_OrbitOperator::POSTcompoQML()const{return std::string("");}
QQModel* osgParticle::MetaQReflect_OrbitOperator::createQQModel(Instance*i){ //return new MetaQReflect_OrbitOperator_QModel(i);}
QMLOrbitOperator *ret =new QMLOrbitOperator(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osgParticle::Operator *mother =dynamic_cast<osgParticle::Operator*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osgParticle::Operator");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osgParticle::Operator model for osgParticle::OrbitOperatoris invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osgParticle::Operator");
if(!cl){std::cerr<<"osgParticle::Operator QQModel for osgParticle::OrbitOperatoris not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_OrbitOperator_pmoc.cpp"
#endif




