#include <osg/Polytope>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Polytope_pmoc.hpp>
#include <customCode/osg/Polytope_pmoc.hpp>
#include <customCode/osg/Matrixd_pmoc.hpp>
#include <customCode/osg/Plane_pmoc.hpp>
#include <customCode/osg/Polytope_pmoc.hpp>
#include <customCode/osg/Vec3f_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_Polytope::contains(osg::QReflect_Vec3f *p0)const{
return _model->contains(*p0->_model);

}
 bool  osg::QReflect_Polytope::empty()const{
return _model->empty();

}
 unsigned int  osg::QReflect_Polytope::getCurrentMask()const{
return _model->getCurrentMask();

}
 unsigned int  osg::QReflect_Polytope::getResultMask()const{
return _model->getResultMask();

}
 unsigned int&  osg::QReflect_Polytope::getCurrentMask(){
return _model->getCurrentMask();

}
 void osg::QReflect_Polytope::add(osg::QReflect_Plane *p0){
 _model->add(*p0->_model);

}
 void osg::QReflect_Polytope::clear(){
 _model->clear();

}
 void osg::QReflect_Polytope::flip(){
 _model->flip();

}
 void osg::QReflect_Polytope::popCurrentMask(){
 _model->popCurrentMask();

}
 void osg::QReflect_Polytope::pushCurrentMask(){
 _model->pushCurrentMask();

}
 void osg::QReflect_Polytope::setAndTransformProvidingInverse(osg::QReflect_Polytope *p0 ,osg::QReflect_Matrixd *p1){
 _model->setAndTransformProvidingInverse(*p0->_model ,*p1->_model);

}
 void osg::QReflect_Polytope::setResultMask( unsigned int p0){
 _model->setResultMask(p0);

}
 void osg::QReflect_Polytope::setToUnitFrustum( bool p0 , bool p1){
 _model->setToUnitFrustum(p0 ,p1);

}
 void osg::QReflect_Polytope::setupMask(){
 _model->setupMask();

}
 void osg::QReflect_Polytope::transform(osg::QReflect_Matrixd *p0){
 _model->transform(*p0->_model);

}
 void osg::QReflect_Polytope::transformProvidingInverse(osg::QReflect_Matrixd *p0){
 _model->transformProvidingInverse(*p0->_model);

}

///DefaultConstructor////////////////
osg::QReflect_Polytope::QReflect_Polytope(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Polytope*>(i->ptr);
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Polytope::~QReflect_Polytope( ){
 }
///update this according _model new state
void osg::QReflect_Polytope::updateModel(){
}
Instance osg::MetaQReflect_Polytope::createInstance( ){
osg::Polytope* osg_Polytope_ptr	;
osg_Polytope_ptr= new osg::Polytope()	;
Instance o(PMOCGETMETACLASS("osg::Polytope"),(void*)osg_Polytope_ptr	,true);
_managedinstances.insert(osg_Polytope_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Polytope::MetaQReflect_Polytope():MetaQQuickClass( "osg::Polytope"){
_typeid=&typeid(osg::Polytope );           qRegisterMetaType<QMLPolytope>();
qmlRegisterType<QReflect_Polytope>("pmoc.osg",1,0,"QReflect_Polytope");
           qmlRegisterType<QMLPolytope>("pmoc.osg",1,0,"QMLPolytope");
};
const std::string osg::MetaQReflect_Polytope::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Polytope::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Polytope::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Polytope::createQQModel(Instance*i){ //return new MetaQReflect_Polytope_QModel(i);}
QMLPolytope *ret =new QMLPolytope(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Polytope_pmoc.cpp"
#endif


