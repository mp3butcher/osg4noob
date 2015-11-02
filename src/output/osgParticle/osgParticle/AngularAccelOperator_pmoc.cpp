#include <osgParticle/AngularAccelOperator>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osgParticle/AngularAccelOperator_pmoc.hpp>
#include <customCode/osgParticle/AngularAccelOperator_pmoc.hpp>
#include <customCode/osgParticle/Operator_pmoc.hpp>
#include <customCode/osg/Vec3f_pmoc.hpp>
#include <customCode/osgParticle/Particle_pmoc.hpp>
#include <customCode/osgParticle/Program_pmoc.hpp>
using namespace pmoc;
 void osgParticle::QReflect_AngularAccelOperator::beginOperate(osgParticle::QReflect_Program *p0){
 _model->beginOperate(p0->_model);

}
 void osgParticle::QReflect_AngularAccelOperator::operate(osgParticle::QReflect_Particle *p0 , double p1){
 _model->operate(p0->_model ,p1);

}
 void osgParticle::QReflect_AngularAccelOperator::setAngularAcceleration(osg::QReflect_Vec3f *p0){
 _model->setAngularAcceleration(*p0->_model);

}

///DefaultConstructor////////////////
osgParticle::QReflect_AngularAccelOperator::QReflect_AngularAccelOperator(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osgParticle::AngularAccelOperator*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osgParticle::QReflect_AngularAccelOperator::~QReflect_AngularAccelOperator( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osgParticle::QReflect_AngularAccelOperator::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osgParticle::MetaQReflect_AngularAccelOperator::createInstance( ){
osg::ref_ptr<osgParticle::AngularAccelOperator> osgParticle_AngularAccelOperator_ptr	;
osgParticle_AngularAccelOperator_ptr = new osgParticle::AngularAccelOperator ()	;
Instance o(PMOCGETMETACLASS("osgParticle::AngularAccelOperator"),(void*)osgParticle_AngularAccelOperator_ptr.get()		,true);
_managedinstances.insert(osgParticle_AngularAccelOperator_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osgParticle::MetaQReflect_AngularAccelOperator::MetaQReflect_AngularAccelOperator():MetaQQuickClass( "osgParticle::AngularAccelOperator"){
_typeid=&typeid(osgParticle::AngularAccelOperator );           qRegisterMetaType<QMLAngularAccelOperator>();
qmlRegisterType<QReflect_AngularAccelOperator>("pmoc.osgParticle",1,0,"QReflect_AngularAccelOperator");
           qmlRegisterType<QMLAngularAccelOperator>("pmoc.osgParticle",1,0,"QMLAngularAccelOperator");
};
const std::string osgParticle::MetaQReflect_AngularAccelOperator::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgParticle::MetaQReflect_AngularAccelOperator::PREcompoQML()const{return std::string("");}
const std::string osgParticle::MetaQReflect_AngularAccelOperator::POSTcompoQML()const{return std::string("");}
QQModel* osgParticle::MetaQReflect_AngularAccelOperator::createQQModel(Instance*i){ //return new MetaQReflect_AngularAccelOperator_QModel(i);}
QMLAngularAccelOperator *ret =new QMLAngularAccelOperator(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osgParticle::Operator *mother =dynamic_cast<osgParticle::Operator*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osgParticle::Operator");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osgParticle::Operator model for osgParticle::AngularAccelOperatoris invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osgParticle::Operator");
if(!cl){std::cerr<<"osgParticle::Operator QQModel for osgParticle::AngularAccelOperatoris not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_AngularAccelOperator_pmoc.cpp"
#endif




