#include <osgParticle/DomainOperator>
//includes


#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osgParticle/DomainOperator_pmoc.hpp>
#include <customCode/osgParticle/DomainOperator_pmoc.hpp>
#include <customCode/osgParticle/Operator_pmoc.hpp>
#include <customCode/osg/Plane_pmoc.hpp>
#include <customCode/osg/Vec3f_pmoc.hpp>
#include <customCode/osgParticle/Particle_pmoc.hpp>
#include <customCode/osgParticle/Program_pmoc.hpp>
using namespace pmoc;
 unsigned int  osgParticle::QReflect_DomainOperator:: getNumDomains()const{
//params checking
return _model->getNumDomains();

}
 void osgParticle::QReflect_DomainOperator::addBoxDomain(osg::QReflect_Vec3f  *p0 ,osg::QReflect_Vec3f  *p1){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_DomainOperator::addBoxDomain : parameter n.0 is NULL\n"<<endl;return;}
if(! p1) {std::cerr<<"PMOC: osgParticle::QReflect_DomainOperator::addBoxDomain : parameter n.1 is NULL\n"<<endl;return;}
 _model->addBoxDomain(*p0->_model ,*p1->_model);

}
 void osgParticle::QReflect_DomainOperator::addDiskDomain(osg::QReflect_Vec3f  *p0 ,osg::QReflect_Vec3f  *p1 , float  p2 , float  p3){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_DomainOperator::addDiskDomain : parameter n.0 is NULL\n"<<endl;return;}
if(! p1) {std::cerr<<"PMOC: osgParticle::QReflect_DomainOperator::addDiskDomain : parameter n.1 is NULL\n"<<endl;return;}
 _model->addDiskDomain(*p0->_model ,*p1->_model ,p2 ,p3);

}
 void osgParticle::QReflect_DomainOperator::addLineSegmentDomain(osg::QReflect_Vec3f  *p0 ,osg::QReflect_Vec3f  *p1){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_DomainOperator::addLineSegmentDomain : parameter n.0 is NULL\n"<<endl;return;}
if(! p1) {std::cerr<<"PMOC: osgParticle::QReflect_DomainOperator::addLineSegmentDomain : parameter n.1 is NULL\n"<<endl;return;}
 _model->addLineSegmentDomain(*p0->_model ,*p1->_model);

}
 void osgParticle::QReflect_DomainOperator::addPlaneDomain(osg::QReflect_Plane  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_DomainOperator::addPlaneDomain : parameter n.0 is NULL\n"<<endl;return;}
 _model->addPlaneDomain(*p0->_model);

}
 void osgParticle::QReflect_DomainOperator::addPointDomain(osg::QReflect_Vec3f  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_DomainOperator::addPointDomain : parameter n.0 is NULL\n"<<endl;return;}
 _model->addPointDomain(*p0->_model);

}
 void osgParticle::QReflect_DomainOperator::addRectangleDomain(osg::QReflect_Vec3f  *p0 ,osg::QReflect_Vec3f  *p1 ,osg::QReflect_Vec3f  *p2){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_DomainOperator::addRectangleDomain : parameter n.0 is NULL\n"<<endl;return;}
if(! p1) {std::cerr<<"PMOC: osgParticle::QReflect_DomainOperator::addRectangleDomain : parameter n.1 is NULL\n"<<endl;return;}
if(! p2) {std::cerr<<"PMOC: osgParticle::QReflect_DomainOperator::addRectangleDomain : parameter n.2 is NULL\n"<<endl;return;}
 _model->addRectangleDomain(*p0->_model ,*p1->_model ,*p2->_model);

}
 void osgParticle::QReflect_DomainOperator::addSphereDomain(osg::QReflect_Vec3f  *p0 , float  p1){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_DomainOperator::addSphereDomain : parameter n.0 is NULL\n"<<endl;return;}
 _model->addSphereDomain(*p0->_model ,p1);

}
 void osgParticle::QReflect_DomainOperator::addTriangleDomain(osg::QReflect_Vec3f  *p0 ,osg::QReflect_Vec3f  *p1 ,osg::QReflect_Vec3f  *p2){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_DomainOperator::addTriangleDomain : parameter n.0 is NULL\n"<<endl;return;}
if(! p1) {std::cerr<<"PMOC: osgParticle::QReflect_DomainOperator::addTriangleDomain : parameter n.1 is NULL\n"<<endl;return;}
if(! p2) {std::cerr<<"PMOC: osgParticle::QReflect_DomainOperator::addTriangleDomain : parameter n.2 is NULL\n"<<endl;return;}
 _model->addTriangleDomain(*p0->_model ,*p1->_model ,*p2->_model);

}
 void osgParticle::QReflect_DomainOperator::beginOperate(osgParticle::QReflect_Program  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_DomainOperator::beginOperate : parameter n.0 is NULL\n"<<endl;return;}
 _model->beginOperate(p0->_model);

}
 void osgParticle::QReflect_DomainOperator::endOperate(){
//params checking
 _model->endOperate();

}
 void osgParticle::QReflect_DomainOperator::operate(osgParticle::QReflect_Particle  *p0 , double  p1){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_DomainOperator::operate : parameter n.0 is NULL\n"<<endl;return;}
 _model->operate(p0->_model ,p1);

}
 void osgParticle::QReflect_DomainOperator::removeAllDomains(){
//params checking
 _model->removeAllDomains();

}
 void osgParticle::QReflect_DomainOperator::removeDomain( unsigned int  p0){
//params checking
 _model->removeDomain(p0);

}

///DefaultConstructor////////////////
osgParticle::QReflect_DomainOperator::QReflect_DomainOperator(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osgParticle::DomainOperator*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osgParticle::QReflect_DomainOperator::~QReflect_DomainOperator( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osgParticle::QReflect_DomainOperator::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osgParticle::MetaQReflect_DomainOperator::createInstance( ){
osg::ref_ptr<osgParticle::DomainOperator> osgParticle_DomainOperator_ptr	;
osgParticle_DomainOperator_ptr = new osgParticle::DomainOperator ()	;
Instance o(PMOCGETMETACLASS("osgParticle::DomainOperator"),(void*)osgParticle_DomainOperator_ptr.get()		,true);
_managedinstances.insert(osgParticle_DomainOperator_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osgParticle::MetaQReflect_DomainOperator::MetaQReflect_DomainOperator():MetaQQuickClass( "osgParticle::DomainOperator"){
_typeid=&typeid(osgParticle::DomainOperator );
           qRegisterMetaType<osgParticle::QMLDomainOperator>();
           qRegisterMetaType<osgParticle::QMLDomainOperator*>("pmoc.osgParticle.QMLDomainOperator");
qmlRegisterType<osgParticle::QReflect_DomainOperator>("pmoc.osgParticle",1,0,"QReflect_DomainOperator");
           qmlRegisterType<osgParticle::QMLDomainOperator>("pmoc.osgParticle",1,0,"QMLDomainOperator");
};
const std::string osgParticle::MetaQReflect_DomainOperator::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgParticle::MetaQReflect_DomainOperator::PREcompoQML()const{return std::string("");}
const std::string osgParticle::MetaQReflect_DomainOperator::POSTcompoQML()const{return std::string("");}
QQModel* osgParticle::MetaQReflect_DomainOperator::createQQModel(const Instance*i){ //return new MetaQReflect_DomainOperator_QModel(i);}
QMLDomainOperator *ret =new QMLDomainOperator(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osgParticle::Operator *mother =dynamic_cast<osgParticle::Operator*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osgParticle::Operator");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osgParticle::Operator model for osgParticle::DomainOperatoris invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osgParticle::Operator");
if(!cl){std::cerr<<"osgParticle::Operator QQModel for osgParticle::DomainOperatoris not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_DomainOperator_pmoc.cpp"
#endif




