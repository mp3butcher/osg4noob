#include <osg/Vec3f>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Vec3f_pmoc.hpp>
#include <customCode/osg/Vec3f_pmoc.hpp>
#include <customCode/osg/Vec3f_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_Vec3f:: isNaN()const{
//params checking
return _model->isNaN();

}
 bool  osg::QReflect_Vec3f:: operator!=(osg::QReflect_Vec3f  &p0)const{
//params checking
return _model->operator!=(*p0._model);

}
 bool  osg::QReflect_Vec3f:: operator<(osg::QReflect_Vec3f  &p0)const{
//params checking
return _model->operator<(*p0._model);

}
 bool  osg::QReflect_Vec3f:: operator==(osg::QReflect_Vec3f  &p0)const{
//params checking
return _model->operator==(*p0._model);

}
 bool  osg::QReflect_Vec3f:: valid()const{
//params checking
return _model->valid();

}
 float  osg::QReflect_Vec3f:: length()const{
//params checking
return _model->length();

}
 float  osg::QReflect_Vec3f:: length2()const{
//params checking
return _model->length2();

}
 float  osg::QReflect_Vec3f:: normalize(){
//params checking
return _model->normalize();

}
 float  osg::QReflect_Vec3f:: operator*(osg::QReflect_Vec3f  &p0)const{
//params checking
return _model->operator*(*p0._model);

}
 float  osg::QReflect_Vec3f:: operator[]( int  p0)const{
//params checking
return _model->operator[](p0);

}
 float  osg::QReflect_Vec3f:: x()const{
//params checking
return _model->x();

}
 float  osg::QReflect_Vec3f:: y()const{
//params checking
return _model->y();

}
 float  osg::QReflect_Vec3f:: z()const{
//params checking
return _model->z();

}
 float&  osg::QReflect_Vec3f:: operator[]( int  p0){
//params checking
return _model->operator[](p0);

}
 float&  osg::QReflect_Vec3f:: x(){
//params checking
return _model->x();

}
 float&  osg::QReflect_Vec3f:: y(){
//params checking
return _model->y();

}
 float&  osg::QReflect_Vec3f:: z(){
//params checking
return _model->z();

}
 float*  osg::QReflect_Vec3f:: ptr(){
//params checking
return _model->ptr();

}
 void osg::QReflect_Vec3f::set( float  p0 , float  p1 , float  p2){
//params checking
 _model->set(p0 ,p1 ,p2);

}
 void osg::QReflect_Vec3f::set(osg::QReflect_Vec3f  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Vec3f::set : parameter n.0 is NULL\n"<<endl;return;}
 _model->set(*p0->_model);

}
const  float*  osg::QReflect_Vec3f:: ptr()const{
//params checking
return _model->ptr();

}

///DefaultConstructor////////////////
osg::QReflect_Vec3f::QReflect_Vec3f(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Vec3f*>(i->ptr);
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Vec3f::~QReflect_Vec3f( ){
 }
///update this according _model new state
void osg::QReflect_Vec3f::updateModel(){
}
Instance osg::MetaQReflect_Vec3f::createInstance( ){
osg::Vec3f* osg_Vec3f_ptr	;
osg_Vec3f_ptr= new osg::Vec3f()	;
Instance o(PMOCGETMETACLASS("osg::Vec3f"),(void*)osg_Vec3f_ptr	,true);
_managedinstances.insert(osg_Vec3f_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Vec3f::MetaQReflect_Vec3f():MetaQQuickClass( "osg::Vec3f"){
_typeid=&typeid(osg::Vec3f );
           qRegisterMetaType<osg::QMLVec3f>();
           qRegisterMetaType<osg::QMLVec3f*>("pmoc.osg.QMLVec3f");
qmlRegisterType<osg::QReflect_Vec3f>("pmoc.osg",1,0,"QReflect_Vec3f");
           qmlRegisterType<osg::QMLVec3f>("pmoc.osg",1,0,"QMLVec3f");
};
const std::string osg::MetaQReflect_Vec3f::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Vec3f::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Vec3f::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Vec3f::createQQModel(const Instance*i){ //return new MetaQReflect_Vec3f_QModel(i);}
QMLVec3f *ret =new QMLVec3f(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Vec3f_pmoc.cpp"
#endif




