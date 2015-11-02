#include <osg/Vec3s>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Vec3s_pmoc.hpp>
#include <customCode/osg/Vec3s_pmoc.hpp>
#include <customCode/osg/Vec3s_pmoc.hpp>
using namespace pmoc;
 short  osg::QReflect_Vec3s::b()const{
return _model->b();

}
 short  osg::QReflect_Vec3s::g()const{
return _model->g();

}
 short  osg::QReflect_Vec3s::r()const{
return _model->r();

}
 short  osg::QReflect_Vec3s::x()const{
return _model->x();

}
 short  osg::QReflect_Vec3s::y()const{
return _model->y();

}
 short  osg::QReflect_Vec3s::z()const{
return _model->z();

}
 short&  osg::QReflect_Vec3s::b(){
return _model->b();

}
 short&  osg::QReflect_Vec3s::g(){
return _model->g();

}
 short&  osg::QReflect_Vec3s::r(){
return _model->r();

}
 short&  osg::QReflect_Vec3s::x(){
return _model->x();

}
 short&  osg::QReflect_Vec3s::y(){
return _model->y();

}
 short&  osg::QReflect_Vec3s::z(){
return _model->z();

}
 short*  osg::QReflect_Vec3s::ptr(){
return _model->ptr();

}
 void osg::QReflect_Vec3s::set( short p0 , short p1 , short p2){
 _model->set(p0 ,p1 ,p2);

}
 void osg::QReflect_Vec3s::set(osg::QReflect_Vec3s *p0){
 _model->set(*p0->_model);

}
const  short*  osg::QReflect_Vec3s::ptr()const{
return _model->ptr();

}

///DefaultConstructor////////////////
osg::QReflect_Vec3s::QReflect_Vec3s(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Vec3s*>(i->ptr);
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Vec3s::~QReflect_Vec3s( ){
 }
///update this according _model new state
void osg::QReflect_Vec3s::updateModel(){
}
Instance osg::MetaQReflect_Vec3s::createInstance( ){
osg::Vec3s* osg_Vec3s_ptr	;
osg_Vec3s_ptr= new osg::Vec3s()	;
Instance o(PMOCGETMETACLASS("osg::Vec3s"),(void*)osg_Vec3s_ptr	,true);
_managedinstances.insert(osg_Vec3s_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Vec3s::MetaQReflect_Vec3s():MetaQQuickClass( "osg::Vec3s"){
_typeid=&typeid(osg::Vec3s );           qRegisterMetaType<QMLVec3s>();
qmlRegisterType<QReflect_Vec3s>("pmoc.osg",1,0,"QReflect_Vec3s");
           qmlRegisterType<QMLVec3s>("pmoc.osg",1,0,"QMLVec3s");
};
const std::string osg::MetaQReflect_Vec3s::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Vec3s::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Vec3s::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Vec3s::createQQModel(Instance*i){ //return new MetaQReflect_Vec3s_QModel(i);}
QMLVec3s *ret =new QMLVec3s(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Vec3s_pmoc.cpp"
#endif


