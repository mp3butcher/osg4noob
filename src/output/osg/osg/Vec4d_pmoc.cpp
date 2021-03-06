#include <osg/Vec4d>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Vec4d_pmoc.hpp>
#include <customCode/osg/Vec4d_pmoc.hpp>
#include <customCode/osg/Vec4d_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_Vec4d:: isNaN()const{
//params checking
return _model->isNaN();

}
 bool  osg::QReflect_Vec4d:: operator!=(osg::QReflect_Vec4d  &p0)const{
//params checking
return _model->operator!=(*p0._model);

}
 bool  osg::QReflect_Vec4d:: operator<(osg::QReflect_Vec4d  &p0)const{
//params checking
return _model->operator<(*p0._model);

}
 bool  osg::QReflect_Vec4d:: operator==(osg::QReflect_Vec4d  &p0)const{
//params checking
return _model->operator==(*p0._model);

}
 bool  osg::QReflect_Vec4d:: valid()const{
//params checking
return _model->valid();

}
 double  osg::QReflect_Vec4d:: a()const{
//params checking
return _model->a();

}
 double  osg::QReflect_Vec4d:: b()const{
//params checking
return _model->b();

}
 double  osg::QReflect_Vec4d:: g()const{
//params checking
return _model->g();

}
 double  osg::QReflect_Vec4d:: length()const{
//params checking
return _model->length();

}
 double  osg::QReflect_Vec4d:: length2()const{
//params checking
return _model->length2();

}
 double  osg::QReflect_Vec4d:: normalize(){
//params checking
return _model->normalize();

}
 double  osg::QReflect_Vec4d:: operator*(osg::QReflect_Vec4d  &p0)const{
//params checking
return _model->operator*(*p0._model);

}
 double  osg::QReflect_Vec4d:: operator[]( unsigned int  p0)const{
//params checking
return _model->operator[](p0);

}
 double  osg::QReflect_Vec4d:: r()const{
//params checking
return _model->r();

}
 double  osg::QReflect_Vec4d:: w()const{
//params checking
return _model->w();

}
 double  osg::QReflect_Vec4d:: x()const{
//params checking
return _model->x();

}
 double  osg::QReflect_Vec4d:: y()const{
//params checking
return _model->y();

}
 double  osg::QReflect_Vec4d:: z()const{
//params checking
return _model->z();

}
 double&  osg::QReflect_Vec4d:: a(){
//params checking
return _model->a();

}
 double&  osg::QReflect_Vec4d:: b(){
//params checking
return _model->b();

}
 double&  osg::QReflect_Vec4d:: g(){
//params checking
return _model->g();

}
 double&  osg::QReflect_Vec4d:: operator[]( unsigned int  p0){
//params checking
return _model->operator[](p0);

}
 double&  osg::QReflect_Vec4d:: r(){
//params checking
return _model->r();

}
 double&  osg::QReflect_Vec4d:: w(){
//params checking
return _model->w();

}
 double&  osg::QReflect_Vec4d:: x(){
//params checking
return _model->x();

}
 double&  osg::QReflect_Vec4d:: y(){
//params checking
return _model->y();

}
 double&  osg::QReflect_Vec4d:: z(){
//params checking
return _model->z();

}
 double*  osg::QReflect_Vec4d:: ptr(){
//params checking
return _model->ptr();

}
 unsigned int  osg::QReflect_Vec4d:: asABGR()const{
//params checking
return _model->asABGR();

}
 unsigned int  osg::QReflect_Vec4d:: asRGBA()const{
//params checking
return _model->asRGBA();

}
 void osg::QReflect_Vec4d::set( double  p0 , double  p1 , double  p2 , double  p3){
//params checking
 _model->set(p0 ,p1 ,p2 ,p3);

}
const  double*  osg::QReflect_Vec4d:: ptr()const{
//params checking
return _model->ptr();

}

///DefaultConstructor////////////////
osg::QReflect_Vec4d::QReflect_Vec4d(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Vec4d*>(i->ptr);
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Vec4d::~QReflect_Vec4d( ){
 }
///update this according _model new state
void osg::QReflect_Vec4d::updateModel(){
}
Instance osg::MetaQReflect_Vec4d::createInstance( ){
osg::Vec4d* osg_Vec4d_ptr	;
osg_Vec4d_ptr= new osg::Vec4d()	;
Instance o(PMOCGETMETACLASS("osg::Vec4d"),(void*)osg_Vec4d_ptr	,true);
_managedinstances.insert(osg_Vec4d_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Vec4d::MetaQReflect_Vec4d():MetaQQuickClass( "osg::Vec4d"){
_typeid=&typeid(osg::Vec4d );
           qRegisterMetaType<osg::QMLVec4d>();
           qRegisterMetaType<osg::QMLVec4d*>("pmoc.osg.QMLVec4d");
qmlRegisterType<osg::QReflect_Vec4d>("pmoc.osg",1,0,"QReflect_Vec4d");
           qmlRegisterType<osg::QMLVec4d>("pmoc.osg",1,0,"QMLVec4d");
};
const std::string osg::MetaQReflect_Vec4d::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Vec4d::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Vec4d::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Vec4d::createQQModel(const Instance*i){ //return new MetaQReflect_Vec4d_QModel(i);}
QMLVec4d *ret =new QMLVec4d(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Vec4d_pmoc.cpp"
#endif




