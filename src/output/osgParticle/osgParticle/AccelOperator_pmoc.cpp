#include <osgParticle/AccelOperator>
//includes


#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osgParticle/AccelOperator_pmoc.hpp>
#include <customCode/osgParticle/AccelOperator_pmoc.hpp>
#include <customCode/osgParticle/Operator_pmoc.hpp>
#include <customCode/osg/Vec3f_pmoc.hpp>
#include <customCode/osgParticle/Particle_pmoc.hpp>
#include <customCode/osgParticle/Program_pmoc.hpp>
using namespace pmoc;
 void osgParticle::QReflect_AccelOperator::beginOperate(osgParticle::QReflect_Program  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_AccelOperator::beginOperate : parameter n.0 is NULL\n"<<endl;return;}
 _model->beginOperate(p0->_model);

}
 void osgParticle::QReflect_AccelOperator::operate(osgParticle::QReflect_Particle  *p0 , double  p1){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_AccelOperator::operate : parameter n.0 is NULL\n"<<endl;return;}
 _model->operate(p0->_model ,p1);

}
 void osgParticle::QReflect_AccelOperator::setAcceleration(osg::QReflect_Vec3f  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_AccelOperator::setAcceleration : parameter n.0 is NULL\n"<<endl;return;}
 _model->setAcceleration(*p0->_model);

}
 void osgParticle::QReflect_AccelOperator::setToGravity( float  p0){
//params checking
 _model->setToGravity(p0);

}

///DefaultConstructor////////////////
osgParticle::QReflect_AccelOperator::QReflect_AccelOperator(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osgParticle::AccelOperator*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osgParticle::QReflect_AccelOperator::~QReflect_AccelOperator( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osgParticle::QReflect_AccelOperator::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osgParticle::MetaQReflect_AccelOperator::createInstance( ){
osg::ref_ptr<osgParticle::AccelOperator> osgParticle_AccelOperator_ptr	;
osgParticle_AccelOperator_ptr = new osgParticle::AccelOperator ()	;
Instance o(PMOCGETMETACLASS("osgParticle::AccelOperator"),(void*)osgParticle_AccelOperator_ptr.get()		,true);
_managedinstances.insert(osgParticle_AccelOperator_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osgParticle::MetaQReflect_AccelOperator::MetaQReflect_AccelOperator():MetaQQuickClass( "osgParticle::AccelOperator"){
_typeid=&typeid(osgParticle::AccelOperator );
           qRegisterMetaType<osgParticle::QMLAccelOperator>();
           qRegisterMetaType<osgParticle::QMLAccelOperator*>("pmoc.osgParticle.QMLAccelOperator");
qmlRegisterType<osgParticle::QReflect_AccelOperator>("pmoc.osgParticle",1,0,"QReflect_AccelOperator");
           qmlRegisterType<osgParticle::QMLAccelOperator>("pmoc.osgParticle",1,0,"QMLAccelOperator");
};
const std::string osgParticle::MetaQReflect_AccelOperator::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgParticle::MetaQReflect_AccelOperator::PREcompoQML()const{return std::string("");}
const std::string osgParticle::MetaQReflect_AccelOperator::POSTcompoQML()const{return std::string("");}
QQModel* osgParticle::MetaQReflect_AccelOperator::createQQModel(const Instance*i){ //return new MetaQReflect_AccelOperator_QModel(i);}
QMLAccelOperator *ret =new QMLAccelOperator(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osgParticle::Operator *mother =dynamic_cast<osgParticle::Operator*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osgParticle::Operator");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osgParticle::Operator model for osgParticle::AccelOperatoris invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osgParticle::Operator");
if(!cl){std::cerr<<"osgParticle::Operator QQModel for osgParticle::AccelOperatoris not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_AccelOperator_pmoc.cpp"
#endif




