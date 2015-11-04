#include <osgParticle/DampingOperator>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osgParticle/DampingOperator_pmoc.hpp>
#include <customCode/osgParticle/DampingOperator_pmoc.hpp>
#include <customCode/osgParticle/Operator_pmoc.hpp>
#include <customCode/osg/Vec3f_pmoc.hpp>
#include <customCode/osgParticle/Particle_pmoc.hpp>
using namespace pmoc;
 void osgParticle::QReflect_DampingOperator::operate(osgParticle::QReflect_Particle *p0 , double p1){
 _model->operate(p0->_model ,p1);

}
 void osgParticle::QReflect_DampingOperator::setCutoff( float p0 , float p1){
 _model->setCutoff(p0 ,p1);

}
 void osgParticle::QReflect_DampingOperator::setDamping( float p0 , float p1 , float p2){
 _model->setDamping(p0 ,p1 ,p2);

}
 void osgParticle::QReflect_DampingOperator::setDamping( float p0){
 _model->setDamping(p0);

}
 void osgParticle::QReflect_DampingOperator::setDamping(osg::QReflect_Vec3f *p0){
 _model->setDamping(*p0->_model);

}
const float osgParticle::QReflect_DampingOperator::getCutoffHigh()const{return _model->getCutoffHigh();}
const float osgParticle::QReflect_DampingOperator::getCutoffLow()const{return _model->getCutoffLow();}
void  osgParticle::QReflect_DampingOperator::setCutoffHigh(const float &par){_model->setCutoffHigh(par);emit CutoffHighChanged(par);}
void  osgParticle::QReflect_DampingOperator::setCutoffLow(const float &par){_model->setCutoffLow(par);emit CutoffLowChanged(par);}

///DefaultConstructor////////////////
osgParticle::QReflect_DampingOperator::QReflect_DampingOperator(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osgParticle::DampingOperator*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osgParticle::QReflect_DampingOperator::~QReflect_DampingOperator( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osgParticle::QReflect_DampingOperator::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osgParticle::MetaQReflect_DampingOperator::createInstance( ){
osg::ref_ptr<osgParticle::DampingOperator> osgParticle_DampingOperator_ptr	;
osgParticle_DampingOperator_ptr = new osgParticle::DampingOperator ()	;
Instance o(PMOCGETMETACLASS("osgParticle::DampingOperator"),(void*)osgParticle_DampingOperator_ptr.get()		,true);
_managedinstances.insert(osgParticle_DampingOperator_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osgParticle::MetaQReflect_DampingOperator::MetaQReflect_DampingOperator():MetaQQuickClass( "osgParticle::DampingOperator"){
_typeid=&typeid(osgParticle::DampingOperator );           qRegisterMetaType<QMLDampingOperator>();
qmlRegisterType<QReflect_DampingOperator>("pmoc.osgParticle",1,0,"QReflect_DampingOperator");
           qmlRegisterType<QMLDampingOperator>("pmoc.osgParticle",1,0,"QMLDampingOperator");
};
const std::string osgParticle::MetaQReflect_DampingOperator::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgParticle::MetaQReflect_DampingOperator::PREcompoQML()const{return std::string("");}
const std::string osgParticle::MetaQReflect_DampingOperator::POSTcompoQML()const{return std::string("");}
QQModel* osgParticle::MetaQReflect_DampingOperator::createQQModel(Instance*i){ //return new MetaQReflect_DampingOperator_QModel(i);}
QMLDampingOperator *ret =new QMLDampingOperator(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osgParticle::Operator *mother =dynamic_cast<osgParticle::Operator*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osgParticle::Operator");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osgParticle::Operator model for osgParticle::DampingOperatoris invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osgParticle::Operator");
if(!cl){std::cerr<<"osgParticle::Operator QQModel for osgParticle::DampingOperatoris not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_DampingOperator_pmoc.cpp"
#endif




