#include <osgParticle/ForceOperator>
//includes


#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osgParticle/ForceOperator_pmoc.hpp>
#include <customCode/osgParticle/ForceOperator_pmoc.hpp>
#include <customCode/osgParticle/Operator_pmoc.hpp>
#include <customCode/osg/Vec3f_pmoc.hpp>
#include <customCode/osgParticle/Particle_pmoc.hpp>
#include <customCode/osgParticle/Program_pmoc.hpp>
using namespace pmoc;
 void osgParticle::QReflect_ForceOperator::beginOperate(osgParticle::QReflect_Program  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_ForceOperator::beginOperate : parameter n.0 is NULL\n"<<endl;return;}
 _model->beginOperate(p0->_model);

}
 void osgParticle::QReflect_ForceOperator::operate(osgParticle::QReflect_Particle  *p0 , double  p1){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_ForceOperator::operate : parameter n.0 is NULL\n"<<endl;return;}
 _model->operate(p0->_model ,p1);

}
 void osgParticle::QReflect_ForceOperator::setForce(osg::QReflect_Vec3f  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_ForceOperator::setForce : parameter n.0 is NULL\n"<<endl;return;}
 _model->setForce(*p0->_model);

}

///DefaultConstructor////////////////
osgParticle::QReflect_ForceOperator::QReflect_ForceOperator(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osgParticle::ForceOperator*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osgParticle::QReflect_ForceOperator::~QReflect_ForceOperator( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osgParticle::QReflect_ForceOperator::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osgParticle::MetaQReflect_ForceOperator::createInstance( ){
osg::ref_ptr<osgParticle::ForceOperator> osgParticle_ForceOperator_ptr	;
osgParticle_ForceOperator_ptr = new osgParticle::ForceOperator ()	;
Instance o(PMOCGETMETACLASS("osgParticle::ForceOperator"),(void*)osgParticle_ForceOperator_ptr.get()		,true);
_managedinstances.insert(osgParticle_ForceOperator_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osgParticle::MetaQReflect_ForceOperator::MetaQReflect_ForceOperator():MetaQQuickClass( "osgParticle::ForceOperator"){
_typeid=&typeid(osgParticle::ForceOperator );
           qRegisterMetaType<osgParticle::QMLForceOperator>();
           qRegisterMetaType<osgParticle::QMLForceOperator*>("pmoc.osgParticle.QMLForceOperator");
qmlRegisterType<osgParticle::QReflect_ForceOperator>("pmoc.osgParticle",1,0,"QReflect_ForceOperator");
           qmlRegisterType<osgParticle::QMLForceOperator>("pmoc.osgParticle",1,0,"QMLForceOperator");
};
const std::string osgParticle::MetaQReflect_ForceOperator::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgParticle::MetaQReflect_ForceOperator::PREcompoQML()const{return std::string("");}
const std::string osgParticle::MetaQReflect_ForceOperator::POSTcompoQML()const{return std::string("");}
QQModel* osgParticle::MetaQReflect_ForceOperator::createQQModel(const Instance*i){ //return new MetaQReflect_ForceOperator_QModel(i);}
QMLForceOperator *ret =new QMLForceOperator(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osgParticle::Operator *mother =dynamic_cast<osgParticle::Operator*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osgParticle::Operator");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osgParticle::Operator model for osgParticle::ForceOperatoris invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osgParticle::Operator");
if(!cl){std::cerr<<"osgParticle::Operator QQModel for osgParticle::ForceOperatoris not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ForceOperator_pmoc.cpp"
#endif




