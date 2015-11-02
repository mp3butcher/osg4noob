#include <osg/Plane>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Plane_pmoc.hpp>
#include <customCode/osg/Plane_pmoc.hpp>
#include <customCode/osg/Matrixd_pmoc.hpp>
#include <customCode/osg/Plane_pmoc.hpp>
#include <customCode/osg/Vec3d_pmoc.hpp>
#include <customCode/osg/Vec3f_pmoc.hpp>
#include <customCode/osg/Vec4d_pmoc.hpp>
#include <customCode/osg/Vec4f_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_Plane::isNaN()const{
return _model->isNaN();

}
 bool  osg::QReflect_Plane::valid()const{
return _model->valid();

}
 double  osg::QReflect_Plane::distance(osg::QReflect_Vec3d *p0)const{
return _model->distance(*p0->_model);

}
 double  osg::QReflect_Plane::dotProductNormal(osg::QReflect_Vec3d *p0)const{
return _model->dotProductNormal(*p0->_model);

}
 double*  osg::QReflect_Plane::ptr(){
return _model->ptr();

}
 float  osg::QReflect_Plane::distance(osg::QReflect_Vec3f *p0)const{
return _model->distance(*p0->_model);

}
 float  osg::QReflect_Plane::dotProductNormal(osg::QReflect_Vec3f *p0)const{
return _model->dotProductNormal(*p0->_model);

}
 void osg::QReflect_Plane::calculateUpperLowerBBCorners(){
 _model->calculateUpperLowerBBCorners();

}
 void osg::QReflect_Plane::flip(){
 _model->flip();

}
 void osg::QReflect_Plane::makeUnitLength(){
 _model->makeUnitLength();

}
 void osg::QReflect_Plane::set( double p0 , double p1 , double p2 , double p3){
 _model->set(p0 ,p1 ,p2 ,p3);

}
 void osg::QReflect_Plane::set(osg::QReflect_Plane *p0){
 _model->set(*p0->_model);

}
 void osg::QReflect_Plane::set(osg::QReflect_Vec4d *p0){
 _model->set(*p0->_model);

}
 void osg::QReflect_Plane::set(osg::QReflect_Vec4f *p0){
 _model->set(*p0->_model);

}
 void osg::QReflect_Plane::transform(osg::QReflect_Matrixd *p0){
 _model->transform(*p0->_model);

}
 void osg::QReflect_Plane::transformProvidingInverse(osg::QReflect_Matrixd *p0){
 _model->transformProvidingInverse(*p0->_model);

}
const  double*  osg::QReflect_Plane::ptr()const{
return _model->ptr();

}

///DefaultConstructor////////////////
osg::QReflect_Plane::QReflect_Plane(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Plane*>(i->ptr);
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Plane::~QReflect_Plane( ){
 }
///update this according _model new state
void osg::QReflect_Plane::updateModel(){
}
Instance osg::MetaQReflect_Plane::createInstance( ){
osg::Plane* osg_Plane_ptr	;
osg_Plane_ptr= new osg::Plane()	;
Instance o(PMOCGETMETACLASS("osg::Plane"),(void*)osg_Plane_ptr	,true);
_managedinstances.insert(osg_Plane_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Plane::MetaQReflect_Plane():MetaQQuickClass( "osg::Plane"){
_typeid=&typeid(osg::Plane );           qRegisterMetaType<QMLPlane>();
qmlRegisterType<QReflect_Plane>("pmoc.osg",1,0,"QReflect_Plane");
           qmlRegisterType<QMLPlane>("pmoc.osg",1,0,"QMLPlane");
};
const std::string osg::MetaQReflect_Plane::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Plane::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Plane::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Plane::createQQModel(Instance*i){ //return new MetaQReflect_Plane_QModel(i);}
QMLPlane *ret =new QMLPlane(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Plane_pmoc.cpp"
#endif


