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
 float  osgParticle::QReflect_OrbitOperator:: getEpsilon()const{
//params checking
return _model->getEpsilon();

}
 float  osgParticle::QReflect_OrbitOperator:: getMagnitude()const{
//params checking
return _model->getMagnitude();

}
 float  osgParticle::QReflect_OrbitOperator:: getMaxRadius()const{
//params checking
return _model->getMaxRadius();

}
 void osgParticle::QReflect_OrbitOperator::beginOperate(osgParticle::QReflect_Program  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_OrbitOperator::beginOperate : parameter n.0 is NULL\n"<<endl;return;}
 _model->beginOperate(p0->_model);

}
 void osgParticle::QReflect_OrbitOperator::operate(osgParticle::QReflect_Particle  *p0 , double  p1){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_OrbitOperator::operate : parameter n.0 is NULL\n"<<endl;return;}
 _model->operate(p0->_model ,p1);

}
 void osgParticle::QReflect_OrbitOperator::setCenter(osg::QReflect_Vec3f  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_OrbitOperator::setCenter : parameter n.0 is NULL\n"<<endl;return;}
 _model->setCenter(*p0->_model);

}
 void osgParticle::QReflect_OrbitOperator::setEpsilon( float  p0){
//params checking
 _model->setEpsilon(p0);
emit EpsilonChanged();

}
 void osgParticle::QReflect_OrbitOperator::setMagnitude( float  p0){
//params checking
 _model->setMagnitude(p0);
emit MagnitudeChanged();

}
 void osgParticle::QReflect_OrbitOperator::setMaxRadius( float  p0){
//params checking
 _model->setMaxRadius(p0);
emit MaxRadiusChanged();

}

///DefaultConstructor////////////////
osgParticle::QReflect_OrbitOperator::QReflect_OrbitOperator(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osgParticle::OrbitOperator );
           qRegisterMetaType<osgParticle::QMLOrbitOperator>();
           qRegisterMetaType<osgParticle::QMLOrbitOperator*>("pmoc.osgParticle.QMLOrbitOperator");
qmlRegisterType<osgParticle::QReflect_OrbitOperator>("pmoc.osgParticle",1,0,"QReflect_OrbitOperator");
           qmlRegisterType<osgParticle::QMLOrbitOperator>("pmoc.osgParticle",1,0,"QMLOrbitOperator");
};
const std::string osgParticle::MetaQReflect_OrbitOperator::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgParticle::MetaQReflect_OrbitOperator::PREcompoQML()const{return std::string("");}
const std::string osgParticle::MetaQReflect_OrbitOperator::POSTcompoQML()const{return std::string("");}
QQModel* osgParticle::MetaQReflect_OrbitOperator::createQQModel(const Instance*i){ //return new MetaQReflect_OrbitOperator_QModel(i);}
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




