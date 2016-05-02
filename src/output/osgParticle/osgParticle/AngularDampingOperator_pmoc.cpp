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
 float  osgParticle::QReflect_AngularDampingOperator:: getCutoffHigh()const{
//params checking
return _model->getCutoffHigh();

}
 float  osgParticle::QReflect_AngularDampingOperator:: getCutoffLow()const{
//params checking
return _model->getCutoffLow();

}
 void osgParticle::QReflect_AngularDampingOperator::getCutoff( float  &p0 , float  &p1)const{
//params checking
 _model->getCutoff(p0 ,p1);

}
 void osgParticle::QReflect_AngularDampingOperator::getDamping( float  &p0 , float  &p1 , float  &p2)const{
//params checking
 _model->getDamping(p0 ,p1 ,p2);

}
 void osgParticle::QReflect_AngularDampingOperator::operate(osgParticle::QReflect_Particle  *p0 , double  p1){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_AngularDampingOperator::operate : parameter n.0 is NULL\n"<<endl;return;}
 _model->operate(p0->_model ,p1);

}
 void osgParticle::QReflect_AngularDampingOperator::setCutoff( float  p0 , float  p1){
//params checking
 _model->setCutoff(p0 ,p1);

}
 void osgParticle::QReflect_AngularDampingOperator::setCutoffHigh( float  p0){
//params checking
 _model->setCutoffHigh(p0);
emit CutoffHighChanged();

}
 void osgParticle::QReflect_AngularDampingOperator::setCutoffLow( float  p0){
//params checking
 _model->setCutoffLow(p0);
emit CutoffLowChanged();

}
 void osgParticle::QReflect_AngularDampingOperator::setDamping( float  p0 , float  p1 , float  p2){
//params checking
 _model->setDamping(p0 ,p1 ,p2);

}
 void osgParticle::QReflect_AngularDampingOperator::setDamping( float  p0){
//params checking
 _model->setDamping(p0);

}
 void osgParticle::QReflect_AngularDampingOperator::setDamping(osg::QReflect_Vec3f  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_AngularDampingOperator::setDamping : parameter n.0 is NULL\n"<<endl;return;}
 _model->setDamping(*p0->_model);

}

///DefaultConstructor////////////////
osgParticle::QReflect_AngularDampingOperator::QReflect_AngularDampingOperator(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osgParticle::AngularDampingOperator );
           qRegisterMetaType<osgParticle::QMLAngularDampingOperator>();
           qRegisterMetaType<osgParticle::QMLAngularDampingOperator*>("pmoc.osgParticle.QMLAngularDampingOperator");
qmlRegisterType<osgParticle::QReflect_AngularDampingOperator>("pmoc.osgParticle",1,0,"QReflect_AngularDampingOperator");
           qmlRegisterType<osgParticle::QMLAngularDampingOperator>("pmoc.osgParticle",1,0,"QMLAngularDampingOperator");
};
const std::string osgParticle::MetaQReflect_AngularDampingOperator::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgParticle::MetaQReflect_AngularDampingOperator::PREcompoQML()const{return std::string("");}
const std::string osgParticle::MetaQReflect_AngularDampingOperator::POSTcompoQML()const{return std::string("");}
QQModel* osgParticle::MetaQReflect_AngularDampingOperator::createQQModel(const Instance*i){ //return new MetaQReflect_AngularDampingOperator_QModel(i);}
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




