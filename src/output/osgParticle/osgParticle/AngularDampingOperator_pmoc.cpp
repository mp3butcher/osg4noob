#include <osgParticle/AngularDampingOperator>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osgParticle/AngularDampingOperator_pmoc.hpp>
#include <customCode/osgParticle/AngularDampingOperator_pmoc.hpp>
#include <customCode/osgParticle/Operator_pmoc.hpp>
#include <customCode/osg/Vec3f_pmoc.hpp>
#include <customCode/osgParticle/Particle_pmoc.hpp>
using namespace pmoc;
 void osgParticle::QReflect_AngularDampingOperator::operate(osgParticle::QReflect_Particle *p0 , double p1){
 _model->operate(p0->_model ,p1);

}
 void osgParticle::QReflect_AngularDampingOperator::setCutoff( float p0 , float p1){
 _model->setCutoff(p0 ,p1);

}
 void osgParticle::QReflect_AngularDampingOperator::setDamping( float p0 , float p1 , float p2){
 _model->setDamping(p0 ,p1 ,p2);

}
 void osgParticle::QReflect_AngularDampingOperator::setDamping( float p0){
 _model->setDamping(p0);

}
 void osgParticle::QReflect_AngularDampingOperator::setDamping(osg::QReflect_Vec3f *p0){
 _model->setDamping(*p0->_model);

}
const float osgParticle::QReflect_AngularDampingOperator::getCutoffHigh()const{return _model->getCutoffHigh();}
const float osgParticle::QReflect_AngularDampingOperator::getCutoffLow()const{return _model->getCutoffLow();}
void  osgParticle::QReflect_AngularDampingOperator::setCutoffHigh(const float &par){_model->setCutoffHigh(par);emit CutoffHighChanged(par);}
void  osgParticle::QReflect_AngularDampingOperator::setCutoffLow(const float &par){_model->setCutoffLow(par);emit CutoffLowChanged(par);}

///DefaultConstructor////////////////
osgParticle::QReflect_AngularDampingOperator::QReflect_AngularDampingOperator(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osgParticle::AngularDampingOperator*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osgParticle::QReflect_AngularDampingOperator::~QReflect_AngularDampingOperator( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osgParticle::QReflect_AngularDampingOperator::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osgParticle::MetaQReflect_AngularDampingOperator::createInstance( ){
osg::ref_ptr<osgParticle::AngularDampingOperator> osgParticle_AngularDampingOperator_ptr	;
osgParticle_AngularDampingOperator_ptr = new osgParticle::AngularDampingOperator ()	;
Instance o(PMOCGETMETACLASS("osgParticle::AngularDampingOperator"),(void*)osgParticle_AngularDampingOperator_ptr.get()		,true);
_managedinstances.insert(osgParticle_AngularDampingOperator_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osgParticle::MetaQReflect_AngularDampingOperator::MetaQReflect_AngularDampingOperator():MetaQQuickClass( "osgParticle::AngularDampingOperator"){
_typeid=&typeid(osgParticle::AngularDampingOperator );           qRegisterMetaType<QMLAngularDampingOperator>();
qmlRegisterType<QReflect_AngularDampingOperator>("pmoc.osgParticle",1,0,"QReflect_AngularDampingOperator");
           qmlRegisterType<QMLAngularDampingOperator>("pmoc.osgParticle",1,0,"QMLAngularDampingOperator");
};
const std::string osgParticle::MetaQReflect_AngularDampingOperator::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgParticle::MetaQReflect_AngularDampingOperator::PREcompoQML()const{return std::string("");}
const std::string osgParticle::MetaQReflect_AngularDampingOperator::POSTcompoQML()const{return std::string("");}
QQModel* osgParticle::MetaQReflect_AngularDampingOperator::createQQModel(Instance*i){ //return new MetaQReflect_AngularDampingOperator_QModel(i);}
QMLAngularDampingOperator *ret =new QMLAngularDampingOperator(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osgParticle::Operator *mother =dynamic_cast<osgParticle::Operator*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osgParticle::Operator");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osgParticle::Operator model for osgParticle::AngularDampingOperatoris invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osgParticle::Operator");
if(!cl){std::cerr<<"osgParticle::Operator QQModel for osgParticle::AngularDampingOperatoris not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_AngularDampingOperator_pmoc.cpp"
#endif




