#include <osg/Vec3d>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Vec3d_pmoc.hpp>
#include <customCode/osg/Vec3d_pmoc.hpp>
#include <customCode/osg/Vec3d_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_Vec3d::isNaN()const{
return _model->isNaN();

}
 bool  osg::QReflect_Vec3d::valid()const{
return _model->valid();

}
 double  osg::QReflect_Vec3d::length()const{
return _model->length();

}
 double  osg::QReflect_Vec3d::length2()const{
return _model->length2();

}
 double  osg::QReflect_Vec3d::normalize(){
return _model->normalize();

}
 double  osg::QReflect_Vec3d::x()const{
return _model->x();

}
 double  osg::QReflect_Vec3d::y()const{
return _model->y();

}
 double  osg::QReflect_Vec3d::z()const{
return _model->z();

}
 double&  osg::QReflect_Vec3d::x(){
return _model->x();

}
 double&  osg::QReflect_Vec3d::y(){
return _model->y();

}
 double&  osg::QReflect_Vec3d::z(){
return _model->z();

}
 double*  osg::QReflect_Vec3d::ptr(){
return _model->ptr();

}
 void osg::QReflect_Vec3d::set( double p0 , double p1 , double p2){
 _model->set(p0 ,p1 ,p2);

}
 void osg::QReflect_Vec3d::set(osg::QReflect_Vec3d *p0){
 _model->set(*p0->_model);

}
const  double*  osg::QReflect_Vec3d::ptr()const{
return _model->ptr();

}

///DefaultConstructor////////////////
osg::QReflect_Vec3d::QReflect_Vec3d(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Vec3d*>(i->ptr);
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Vec3d::~QReflect_Vec3d( ){
 }
///update this according _model new state
void osg::QReflect_Vec3d::updateModel(){
}
Instance osg::MetaQReflect_Vec3d::createInstance( ){
osg::Vec3d* osg_Vec3d_ptr	;
osg_Vec3d_ptr= new osg::Vec3d()	;
Instance o(PMOCGETMETACLASS("osg::Vec3d"),(void*)osg_Vec3d_ptr	,true);
_managedinstances.insert(osg_Vec3d_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Vec3d::MetaQReflect_Vec3d():MetaQQuickClass( "osg::Vec3d"){
_typeid=&typeid(osg::Vec3d );           qRegisterMetaType<QMLVec3d>();
qmlRegisterType<QReflect_Vec3d>("pmoc.osg",1,0,"QReflect_Vec3d");
           qmlRegisterType<QMLVec3d>("pmoc.osg",1,0,"QMLVec3d");
};
const std::string osg::MetaQReflect_Vec3d::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Vec3d::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Vec3d::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Vec3d::createQQModel(Instance*i){ //return new MetaQReflect_Vec3d_QModel(i);}
QMLVec3d *ret =new QMLVec3d(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Vec3d_pmoc.cpp"
#endif


