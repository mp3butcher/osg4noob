#include <osg/Vec4s>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Vec4s_pmoc.hpp>
#include <customCode/osg/Vec4s_pmoc.hpp>
using namespace pmoc;
 short  osg::QReflect_Vec4s::a()const{
return _model->a();

}
 short  osg::QReflect_Vec4s::b()const{
return _model->b();

}
 short  osg::QReflect_Vec4s::g()const{
return _model->g();

}
 short  osg::QReflect_Vec4s::r()const{
return _model->r();

}
 short  osg::QReflect_Vec4s::w()const{
return _model->w();

}
 short  osg::QReflect_Vec4s::x()const{
return _model->x();

}
 short  osg::QReflect_Vec4s::y()const{
return _model->y();

}
 short  osg::QReflect_Vec4s::z()const{
return _model->z();

}
 short&  osg::QReflect_Vec4s::a(){
return _model->a();

}
 short&  osg::QReflect_Vec4s::b(){
return _model->b();

}
 short&  osg::QReflect_Vec4s::g(){
return _model->g();

}
 short&  osg::QReflect_Vec4s::r(){
return _model->r();

}
 short&  osg::QReflect_Vec4s::w(){
return _model->w();

}
 short&  osg::QReflect_Vec4s::x(){
return _model->x();

}
 short&  osg::QReflect_Vec4s::y(){
return _model->y();

}
 short&  osg::QReflect_Vec4s::z(){
return _model->z();

}
 short*  osg::QReflect_Vec4s::ptr(){
return _model->ptr();

}
 void osg::QReflect_Vec4s::set( short p0 , short p1 , short p2 , short p3){
 _model->set(p0 ,p1 ,p2 ,p3);

}
const  short*  osg::QReflect_Vec4s::ptr()const{
return _model->ptr();

}

///DefaultConstructor////////////////
osg::QReflect_Vec4s::QReflect_Vec4s(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Vec4s*>(i->ptr);
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Vec4s::~QReflect_Vec4s( ){
 }
///update this according _model new state
void osg::QReflect_Vec4s::updateModel(){
}
Instance osg::MetaQReflect_Vec4s::createInstance( ){
osg::Vec4s* osg_Vec4s_ptr	;
osg_Vec4s_ptr= new osg::Vec4s()	;
Instance o(PMOCGETMETACLASS("osg::Vec4s"),(void*)osg_Vec4s_ptr	,true);
_managedinstances.insert(osg_Vec4s_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Vec4s::MetaQReflect_Vec4s():MetaQQuickClass( "osg::Vec4s"){
_typeid=&typeid(osg::Vec4s );           qRegisterMetaType<QMLVec4s>();
qmlRegisterType<QReflect_Vec4s>("pmoc.osg",1,0,"QReflect_Vec4s");
           qmlRegisterType<QMLVec4s>("pmoc.osg",1,0,"QMLVec4s");
};
const std::string osg::MetaQReflect_Vec4s::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Vec4s::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Vec4s::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Vec4s::createQQModel(Instance*i){ //return new MetaQReflect_Vec4s_QModel(i);}
QMLVec4s *ret =new QMLVec4s(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Vec4s_pmoc.cpp"
#endif


