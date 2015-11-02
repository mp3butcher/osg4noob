#include <osg/Vec4i>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Vec4i_pmoc.hpp>
#include <customCode/osg/Vec4i_pmoc.hpp>
using namespace pmoc;
 int  osg::QReflect_Vec4i::a()const{
return _model->a();

}
 int  osg::QReflect_Vec4i::b()const{
return _model->b();

}
 int  osg::QReflect_Vec4i::g()const{
return _model->g();

}
 int  osg::QReflect_Vec4i::r()const{
return _model->r();

}
 int  osg::QReflect_Vec4i::w()const{
return _model->w();

}
 int  osg::QReflect_Vec4i::x()const{
return _model->x();

}
 int  osg::QReflect_Vec4i::y()const{
return _model->y();

}
 int  osg::QReflect_Vec4i::z()const{
return _model->z();

}
 int&  osg::QReflect_Vec4i::a(){
return _model->a();

}
 int&  osg::QReflect_Vec4i::b(){
return _model->b();

}
 int&  osg::QReflect_Vec4i::g(){
return _model->g();

}
 int&  osg::QReflect_Vec4i::r(){
return _model->r();

}
 int&  osg::QReflect_Vec4i::w(){
return _model->w();

}
 int&  osg::QReflect_Vec4i::x(){
return _model->x();

}
 int&  osg::QReflect_Vec4i::y(){
return _model->y();

}
 int&  osg::QReflect_Vec4i::z(){
return _model->z();

}
 int*  osg::QReflect_Vec4i::ptr(){
return _model->ptr();

}
 void osg::QReflect_Vec4i::set( int p0 , int p1 , int p2 , int p3){
 _model->set(p0 ,p1 ,p2 ,p3);

}
const  int*  osg::QReflect_Vec4i::ptr()const{
return _model->ptr();

}

///DefaultConstructor////////////////
osg::QReflect_Vec4i::QReflect_Vec4i(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Vec4i*>(i->ptr);
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Vec4i::~QReflect_Vec4i( ){
 }
///update this according _model new state
void osg::QReflect_Vec4i::updateModel(){
}
Instance osg::MetaQReflect_Vec4i::createInstance( ){
osg::Vec4i* osg_Vec4i_ptr	;
osg_Vec4i_ptr= new osg::Vec4i()	;
Instance o(PMOCGETMETACLASS("osg::Vec4i"),(void*)osg_Vec4i_ptr	,true);
_managedinstances.insert(osg_Vec4i_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Vec4i::MetaQReflect_Vec4i():MetaQQuickClass( "osg::Vec4i"){
_typeid=&typeid(osg::Vec4i );           qRegisterMetaType<QMLVec4i>();
qmlRegisterType<QReflect_Vec4i>("pmoc.osg",1,0,"QReflect_Vec4i");
           qmlRegisterType<QMLVec4i>("pmoc.osg",1,0,"QMLVec4i");
};
const std::string osg::MetaQReflect_Vec4i::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Vec4i::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Vec4i::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Vec4i::createQQModel(Instance*i){ //return new MetaQReflect_Vec4i_QModel(i);}
QMLVec4i *ret =new QMLVec4i(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Vec4i_pmoc.cpp"
#endif


