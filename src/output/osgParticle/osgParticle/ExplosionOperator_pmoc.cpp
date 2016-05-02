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
 float  osgParticle::QReflect_ExplosionOperator:: getEpsilon()const{
//params checking
return _model->getEpsilon();

}
 float  osgParticle::QReflect_ExplosionOperator:: getMagnitude()const{
//params checking
return _model->getMagnitude();

}
 float  osgParticle::QReflect_ExplosionOperator:: getRadius()const{
//params checking
return _model->getRadius();

}
 float  osgParticle::QReflect_ExplosionOperator:: getSigma()const{
//params checking
return _model->getSigma();

}
 void osgParticle::QReflect_ExplosionOperator::beginOperate(osgParticle::QReflect_Program  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_ExplosionOperator::beginOperate : parameter n.0 is NULL\n"<<endl;return;}
 _model->beginOperate(p0->_model);

}
 void osgParticle::QReflect_ExplosionOperator::operate(osgParticle::QReflect_Particle  *p0 , double  p1){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_ExplosionOperator::operate : parameter n.0 is NULL\n"<<endl;return;}
 _model->operate(p0->_model ,p1);

}
 void osgParticle::QReflect_ExplosionOperator::setCenter(osg::QReflect_Vec3f  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_ExplosionOperator::setCenter : parameter n.0 is NULL\n"<<endl;return;}
 _model->setCenter(*p0->_model);

}
 void osgParticle::QReflect_ExplosionOperator::setEpsilon( float  p0){
//params checking
 _model->setEpsilon(p0);
emit EpsilonChanged();

}
 void osgParticle::QReflect_ExplosionOperator::setMagnitude( float  p0){
//params checking
 _model->setMagnitude(p0);
emit MagnitudeChanged();

}
 void osgParticle::QReflect_ExplosionOperator::setRadius( float  p0){
//params checking
 _model->setRadius(p0);
emit RadiusChanged();

}
 void osgParticle::QReflect_ExplosionOperator::setSigma( float  p0){
//params checking
 _model->setSigma(p0);
emit SigmaChanged();

}

///DefaultConstructor////////////////
osgParticle::QReflect_ExplosionOperator::QReflect_ExplosionOperator(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osgParticle::ExplosionOperator );
           qRegisterMetaType<osgParticle::QMLExplosionOperator>();
           qRegisterMetaType<osgParticle::QMLExplosionOperator*>("pmoc.osgParticle.QMLExplosionOperator");
qmlRegisterType<osgParticle::QReflect_ExplosionOperator>("pmoc.osgParticle",1,0,"QReflect_ExplosionOperator");
           qmlRegisterType<osgParticle::QMLExplosionOperator>("pmoc.osgParticle",1,0,"QMLExplosionOperator");
};
const std::string osgParticle::MetaQReflect_ExplosionOperator::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgParticle::MetaQReflect_ExplosionOperator::PREcompoQML()const{return std::string("");}
const std::string osgParticle::MetaQReflect_ExplosionOperator::POSTcompoQML()const{return std::string("");}
QQModel* osgParticle::MetaQReflect_ExplosionOperator::createQQModel(const Instance*i){ //return new MetaQReflect_ExplosionOperator_QModel(i);}
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




