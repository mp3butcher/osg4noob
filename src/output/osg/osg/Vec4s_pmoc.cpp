#include <osg/Vec4s>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Vec4s_pmoc.hpp>
#include <customCode/osg/Vec4s_pmoc.hpp>
#include <customCode/osg/Vec4s_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_Vec4s:: operator!=(osg::QReflect_Vec4s  &p0)const{
//params checking
return _model->operator!=(*p0._model);

}
 bool  osg::QReflect_Vec4s:: operator<(osg::QReflect_Vec4s  &p0)const{
//params checking
return _model->operator<(*p0._model);

}
 bool  osg::QReflect_Vec4s:: operator==(osg::QReflect_Vec4s  &p0)const{
//params checking
return _model->operator==(*p0._model);

}
 short  osg::QReflect_Vec4s:: a()const{
//params checking
return _model->a();

}
 short  osg::QReflect_Vec4s:: b()const{
//params checking
return _model->b();

}
 short  osg::QReflect_Vec4s:: g()const{
//params checking
return _model->g();

}
 short  osg::QReflect_Vec4s:: operator[]( unsigned int  p0)const{
//params checking
return _model->operator[](p0);

}
 short  osg::QReflect_Vec4s:: r()const{
//params checking
return _model->r();

}
 short  osg::QReflect_Vec4s:: w()const{
//params checking
return _model->w();

}
 short  osg::QReflect_Vec4s:: x()const{
//params checking
return _model->x();

}
 short  osg::QReflect_Vec4s:: y()const{
//params checking
return _model->y();

}
 short  osg::QReflect_Vec4s:: z()const{
//params checking
return _model->z();

}
 short&  osg::QReflect_Vec4s:: a(){
//params checking
return _model->a();

}
 short&  osg::QReflect_Vec4s:: b(){
//params checking
return _model->b();

}
 short&  osg::QReflect_Vec4s:: g(){
//params checking
return _model->g();

}
 short&  osg::QReflect_Vec4s:: operator[]( unsigned int  p0){
//params checking
return _model->operator[](p0);

}
 short&  osg::QReflect_Vec4s:: r(){
//params checking
return _model->r();

}
 short&  osg::QReflect_Vec4s:: w(){
//params checking
return _model->w();

}
 short&  osg::QReflect_Vec4s:: x(){
//params checking
return _model->x();

}
 short&  osg::QReflect_Vec4s:: y(){
//params checking
return _model->y();

}
 short&  osg::QReflect_Vec4s:: z(){
//params checking
return _model->z();

}
 short*  osg::QReflect_Vec4s:: ptr(){
//params checking
return _model->ptr();

}
 void osg::QReflect_Vec4s::set( short  p0 , short  p1 , short  p2 , short  p3){
//params checking
 _model->set(p0 ,p1 ,p2 ,p3);

}
const  short*  osg::QReflect_Vec4s:: ptr()const{
//params checking
return _model->ptr();

}

///DefaultConstructor////////////////
osg::QReflect_Vec4s::QReflect_Vec4s(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osg::Vec4s );
           qRegisterMetaType<osg::QMLVec4s>();
           qRegisterMetaType<osg::QMLVec4s*>("pmoc.osg.QMLVec4s");
qmlRegisterType<osg::QReflect_Vec4s>("pmoc.osg",1,0,"QReflect_Vec4s");
           qmlRegisterType<osg::QMLVec4s>("pmoc.osg",1,0,"QMLVec4s");
};
const std::string osg::MetaQReflect_Vec4s::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Vec4s::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Vec4s::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Vec4s::createQQModel(const Instance*i){ //return new MetaQReflect_Vec4s_QModel(i);}
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




