#include <osg/Vec4ui>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Vec4ui_pmoc.hpp>
#include <customCode/osg/Vec4ui_pmoc.hpp>
#include <customCode/osg/Vec4ui_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_Vec4ui:: operator!=(osg::QReflect_Vec4ui  &p0)const{
//params checking
return _model->operator!=(*p0._model);

}
 bool  osg::QReflect_Vec4ui:: operator<(osg::QReflect_Vec4ui  &p0)const{
//params checking
return _model->operator<(*p0._model);

}
 bool  osg::QReflect_Vec4ui:: operator==(osg::QReflect_Vec4ui  &p0)const{
//params checking
return _model->operator==(*p0._model);

}
 unsigned int  osg::QReflect_Vec4ui:: a()const{
//params checking
return _model->a();

}
 unsigned int  osg::QReflect_Vec4ui:: b()const{
//params checking
return _model->b();

}
 unsigned int  osg::QReflect_Vec4ui:: g()const{
//params checking
return _model->g();

}
 unsigned int  osg::QReflect_Vec4ui:: operator[]( unsigned int  p0)const{
//params checking
return _model->operator[](p0);

}
 unsigned int  osg::QReflect_Vec4ui:: r()const{
//params checking
return _model->r();

}
 unsigned int  osg::QReflect_Vec4ui:: w()const{
//params checking
return _model->w();

}
 unsigned int  osg::QReflect_Vec4ui:: x()const{
//params checking
return _model->x();

}
 unsigned int  osg::QReflect_Vec4ui:: y()const{
//params checking
return _model->y();

}
 unsigned int  osg::QReflect_Vec4ui:: z()const{
//params checking
return _model->z();

}
 unsigned int&  osg::QReflect_Vec4ui:: a(){
//params checking
return _model->a();

}
 unsigned int&  osg::QReflect_Vec4ui:: b(){
//params checking
return _model->b();

}
 unsigned int&  osg::QReflect_Vec4ui:: g(){
//params checking
return _model->g();

}
 unsigned int&  osg::QReflect_Vec4ui:: operator[]( unsigned int  p0){
//params checking
return _model->operator[](p0);

}
 unsigned int&  osg::QReflect_Vec4ui:: r(){
//params checking
return _model->r();

}
 unsigned int&  osg::QReflect_Vec4ui:: w(){
//params checking
return _model->w();

}
 unsigned int&  osg::QReflect_Vec4ui:: x(){
//params checking
return _model->x();

}
 unsigned int&  osg::QReflect_Vec4ui:: y(){
//params checking
return _model->y();

}
 unsigned int&  osg::QReflect_Vec4ui:: z(){
//params checking
return _model->z();

}
 unsigned int*  osg::QReflect_Vec4ui:: ptr(){
//params checking
return _model->ptr();

}
 void osg::QReflect_Vec4ui::set( unsigned int  p0 , unsigned int  p1 , unsigned int  p2 , unsigned int  p3){
//params checking
 _model->set(p0 ,p1 ,p2 ,p3);

}
const  unsigned int*  osg::QReflect_Vec4ui:: ptr()const{
//params checking
return _model->ptr();

}

///DefaultConstructor////////////////
osg::QReflect_Vec4ui::QReflect_Vec4ui(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Vec4ui*>(i->ptr);
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Vec4ui::~QReflect_Vec4ui( ){
 }
///update this according _model new state
void osg::QReflect_Vec4ui::updateModel(){
}
Instance osg::MetaQReflect_Vec4ui::createInstance( ){
osg::Vec4ui* osg_Vec4ui_ptr	;
osg_Vec4ui_ptr= new osg::Vec4ui()	;
Instance o(PMOCGETMETACLASS("osg::Vec4ui"),(void*)osg_Vec4ui_ptr	,true);
_managedinstances.insert(osg_Vec4ui_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Vec4ui::MetaQReflect_Vec4ui():MetaQQuickClass( "osg::Vec4ui"){
_typeid=&typeid(osg::Vec4ui );
           qRegisterMetaType<osg::QMLVec4ui>();
           qRegisterMetaType<osg::QMLVec4ui*>("pmoc.osg.QMLVec4ui");
qmlRegisterType<osg::QReflect_Vec4ui>("pmoc.osg",1,0,"QReflect_Vec4ui");
           qmlRegisterType<osg::QMLVec4ui>("pmoc.osg",1,0,"QMLVec4ui");
};
const std::string osg::MetaQReflect_Vec4ui::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Vec4ui::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Vec4ui::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Vec4ui::createQQModel(const Instance*i){ //return new MetaQReflect_Vec4ui_QModel(i);}
QMLVec4ui *ret =new QMLVec4ui(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Vec4ui_pmoc.cpp"
#endif




