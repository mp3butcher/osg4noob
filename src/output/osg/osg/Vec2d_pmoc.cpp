#include <osg/Vec2d>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Vec2d_pmoc.hpp>
#include <customCode/osg/Vec2d_pmoc.hpp>
#include <customCode/osg/Vec2d_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_Vec2d:: isNaN()const{
//params checking
return _model->isNaN();

}
 bool  osg::QReflect_Vec2d:: operator!=(osg::QReflect_Vec2d  &p0)const{
//params checking
return _model->operator!=(*p0._model);

}
 bool  osg::QReflect_Vec2d:: operator<(osg::QReflect_Vec2d  &p0)const{
//params checking
return _model->operator<(*p0._model);

}
 bool  osg::QReflect_Vec2d:: operator==(osg::QReflect_Vec2d  &p0)const{
//params checking
return _model->operator==(*p0._model);

}
 bool  osg::QReflect_Vec2d:: valid()const{
//params checking
return _model->valid();

}
 double  osg::QReflect_Vec2d:: length()const{
//params checking
return _model->length();

}
 double  osg::QReflect_Vec2d:: length2()const{
//params checking
return _model->length2();

}
 double  osg::QReflect_Vec2d:: normalize(){
//params checking
return _model->normalize();

}
 double  osg::QReflect_Vec2d:: operator*(osg::QReflect_Vec2d  &p0)const{
//params checking
return _model->operator*(*p0._model);

}
 double  osg::QReflect_Vec2d:: operator[]( int  p0)const{
//params checking
return _model->operator[](p0);

}
 double  osg::QReflect_Vec2d:: x()const{
//params checking
return _model->x();

}
 double  osg::QReflect_Vec2d:: y()const{
//params checking
return _model->y();

}
 double&  osg::QReflect_Vec2d:: operator[]( int  p0){
//params checking
return _model->operator[](p0);

}
 double&  osg::QReflect_Vec2d:: x(){
//params checking
return _model->x();

}
 double&  osg::QReflect_Vec2d:: y(){
//params checking
return _model->y();

}
 double*  osg::QReflect_Vec2d:: ptr(){
//params checking
return _model->ptr();

}
 void osg::QReflect_Vec2d::set( double  p0 , double  p1){
//params checking
 _model->set(p0 ,p1);

}
const  double*  osg::QReflect_Vec2d:: ptr()const{
//params checking
return _model->ptr();

}

///DefaultConstructor////////////////
osg::QReflect_Vec2d::QReflect_Vec2d(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Vec2d*>(i->ptr);
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Vec2d::~QReflect_Vec2d( ){
 }
///update this according _model new state
void osg::QReflect_Vec2d::updateModel(){
}
Instance osg::MetaQReflect_Vec2d::createInstance( ){
osg::Vec2d* osg_Vec2d_ptr	;
osg_Vec2d_ptr= new osg::Vec2d()	;
Instance o(PMOCGETMETACLASS("osg::Vec2d"),(void*)osg_Vec2d_ptr	,true);
_managedinstances.insert(osg_Vec2d_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Vec2d::MetaQReflect_Vec2d():MetaQQuickClass( "osg::Vec2d"){
_typeid=&typeid(osg::Vec2d );
           qRegisterMetaType<osg::QMLVec2d>();
           qRegisterMetaType<osg::QMLVec2d*>("pmoc.osg.QMLVec2d");
qmlRegisterType<osg::QReflect_Vec2d>("pmoc.osg",1,0,"QReflect_Vec2d");
           qmlRegisterType<osg::QMLVec2d>("pmoc.osg",1,0,"QMLVec2d");
};
const std::string osg::MetaQReflect_Vec2d::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Vec2d::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Vec2d::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Vec2d::createQQModel(const Instance*i){ //return new MetaQReflect_Vec2d_QModel(i);}
QMLVec2d *ret =new QMLVec2d(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Vec2d_pmoc.cpp"
#endif




