#include <osg/Vec4f>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Vec4f_pmoc.hpp>
#include <customCode/osg/Vec4f_pmoc.hpp>
#include <customCode/osg/Vec4f_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_Vec4f:: isNaN()const{
//params checking
return _model->isNaN();

}
 bool  osg::QReflect_Vec4f:: operator!=(osg::QReflect_Vec4f  &p0)const{
//params checking
return _model->operator!=(*p0._model);

}
 bool  osg::QReflect_Vec4f:: operator<(osg::QReflect_Vec4f  &p0)const{
//params checking
return _model->operator<(*p0._model);

}
 bool  osg::QReflect_Vec4f:: operator==(osg::QReflect_Vec4f  &p0)const{
//params checking
return _model->operator==(*p0._model);

}
 bool  osg::QReflect_Vec4f:: valid()const{
//params checking
return _model->valid();

}
 float  osg::QReflect_Vec4f:: a()const{
//params checking
return _model->a();

}
 float  osg::QReflect_Vec4f:: b()const{
//params checking
return _model->b();

}
 float  osg::QReflect_Vec4f:: g()const{
//params checking
return _model->g();

}
 float  osg::QReflect_Vec4f:: length()const{
//params checking
return _model->length();

}
 float  osg::QReflect_Vec4f:: length2()const{
//params checking
return _model->length2();

}
 float  osg::QReflect_Vec4f:: normalize(){
//params checking
return _model->normalize();

}
 float  osg::QReflect_Vec4f:: operator*(osg::QReflect_Vec4f  &p0)const{
//params checking
return _model->operator*(*p0._model);

}
 float  osg::QReflect_Vec4f:: operator[]( unsigned int  p0)const{
//params checking
return _model->operator[](p0);

}
 float  osg::QReflect_Vec4f:: r()const{
//params checking
return _model->r();

}
 float  osg::QReflect_Vec4f:: w()const{
//params checking
return _model->w();

}
 float  osg::QReflect_Vec4f:: x()const{
//params checking
return _model->x();

}
 float  osg::QReflect_Vec4f:: y()const{
//params checking
return _model->y();

}
 float  osg::QReflect_Vec4f:: z()const{
//params checking
return _model->z();

}
 float&  osg::QReflect_Vec4f:: a(){
//params checking
return _model->a();

}
 float&  osg::QReflect_Vec4f:: b(){
//params checking
return _model->b();

}
 float&  osg::QReflect_Vec4f:: g(){
//params checking
return _model->g();

}
 float&  osg::QReflect_Vec4f:: operator[]( unsigned int  p0){
//params checking
return _model->operator[](p0);

}
 float&  osg::QReflect_Vec4f:: r(){
//params checking
return _model->r();

}
 float&  osg::QReflect_Vec4f:: w(){
//params checking
return _model->w();

}
 float&  osg::QReflect_Vec4f:: x(){
//params checking
return _model->x();

}
 float&  osg::QReflect_Vec4f:: y(){
//params checking
return _model->y();

}
 float&  osg::QReflect_Vec4f:: z(){
//params checking
return _model->z();

}
 float*  osg::QReflect_Vec4f:: ptr(){
//params checking
return _model->ptr();

}
 unsigned int  osg::QReflect_Vec4f:: asABGR()const{
//params checking
return _model->asABGR();

}
 unsigned int  osg::QReflect_Vec4f:: asRGBA()const{
//params checking
return _model->asRGBA();

}
 void osg::QReflect_Vec4f::set( float  p0 , float  p1 , float  p2 , float  p3){
//params checking
 _model->set(p0 ,p1 ,p2 ,p3);

}
const  float*  osg::QReflect_Vec4f:: ptr()const{
//params checking
return _model->ptr();

}

///DefaultConstructor////////////////
osg::QReflect_Vec4f::QReflect_Vec4f(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Vec4f*>(i->ptr);
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Vec4f::~QReflect_Vec4f( ){
 }
///update this according _model new state
void osg::QReflect_Vec4f::updateModel(){
}
Instance osg::MetaQReflect_Vec4f::createInstance( ){
osg::Vec4f* osg_Vec4f_ptr	;
osg_Vec4f_ptr= new osg::Vec4f()	;
Instance o(PMOCGETMETACLASS("osg::Vec4f"),(void*)osg_Vec4f_ptr	,true);
_managedinstances.insert(osg_Vec4f_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Vec4f::MetaQReflect_Vec4f():MetaQQuickClass( "osg::Vec4f"){
_typeid=&typeid(osg::Vec4f );
           qRegisterMetaType<osg::QMLVec4f>();
           qRegisterMetaType<osg::QMLVec4f*>("pmoc.osg.QMLVec4f");
qmlRegisterType<osg::QReflect_Vec4f>("pmoc.osg",1,0,"QReflect_Vec4f");
           qmlRegisterType<osg::QMLVec4f>("pmoc.osg",1,0,"QMLVec4f");
};
const std::string osg::MetaQReflect_Vec4f::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Vec4f::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Vec4f::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Vec4f::createQQModel(const Instance*i){ //return new MetaQReflect_Vec4f_QModel(i);}
QMLVec4f *ret =new QMLVec4f(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Vec4f_pmoc.cpp"
#endif




