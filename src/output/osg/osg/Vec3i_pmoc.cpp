#include <osg/Vec3i>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Vec3i_pmoc.hpp>
#include <customCode/osg/Vec3i_pmoc.hpp>
#include <customCode/osg/Vec3i_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_Vec3i:: operator!=(osg::QReflect_Vec3i  &p0)const{
//params checking
return _model->operator!=(*p0._model);

}
 bool  osg::QReflect_Vec3i:: operator<(osg::QReflect_Vec3i  &p0)const{
//params checking
return _model->operator<(*p0._model);

}
 bool  osg::QReflect_Vec3i:: operator==(osg::QReflect_Vec3i  &p0)const{
//params checking
return _model->operator==(*p0._model);

}
 int  osg::QReflect_Vec3i:: b()const{
//params checking
return _model->b();

}
 int  osg::QReflect_Vec3i:: g()const{
//params checking
return _model->g();

}
 int  osg::QReflect_Vec3i:: operator[]( unsigned int  p0)const{
//params checking
return _model->operator[](p0);

}
 int  osg::QReflect_Vec3i:: r()const{
//params checking
return _model->r();

}
 int  osg::QReflect_Vec3i:: x()const{
//params checking
return _model->x();

}
 int  osg::QReflect_Vec3i:: y()const{
//params checking
return _model->y();

}
 int  osg::QReflect_Vec3i:: z()const{
//params checking
return _model->z();

}
 int&  osg::QReflect_Vec3i:: b(){
//params checking
return _model->b();

}
 int&  osg::QReflect_Vec3i:: g(){
//params checking
return _model->g();

}
 int&  osg::QReflect_Vec3i:: operator[]( unsigned int  p0){
//params checking
return _model->operator[](p0);

}
 int&  osg::QReflect_Vec3i:: r(){
//params checking
return _model->r();

}
 int&  osg::QReflect_Vec3i:: x(){
//params checking
return _model->x();

}
 int&  osg::QReflect_Vec3i:: y(){
//params checking
return _model->y();

}
 int&  osg::QReflect_Vec3i:: z(){
//params checking
return _model->z();

}
 int*  osg::QReflect_Vec3i:: ptr(){
//params checking
return _model->ptr();

}
 void osg::QReflect_Vec3i::set( int  p0 , int  p1 , int  p2){
//params checking
 _model->set(p0 ,p1 ,p2);

}
 void osg::QReflect_Vec3i::set(osg::QReflect_Vec3i  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Vec3i::set : parameter n.0 is NULL\n"<<endl;return;}
 _model->set(*p0->_model);

}
const  int*  osg::QReflect_Vec3i:: ptr()const{
//params checking
return _model->ptr();

}

///DefaultConstructor////////////////
osg::QReflect_Vec3i::QReflect_Vec3i(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Vec3i*>(i->ptr);
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Vec3i::~QReflect_Vec3i( ){
 }
///update this according _model new state
void osg::QReflect_Vec3i::updateModel(){
}
Instance osg::MetaQReflect_Vec3i::createInstance( ){
osg::Vec3i* osg_Vec3i_ptr	;
osg_Vec3i_ptr= new osg::Vec3i()	;
Instance o(PMOCGETMETACLASS("osg::Vec3i"),(void*)osg_Vec3i_ptr	,true);
_managedinstances.insert(osg_Vec3i_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Vec3i::MetaQReflect_Vec3i():MetaQQuickClass( "osg::Vec3i"){
_typeid=&typeid(osg::Vec3i );
           qRegisterMetaType<osg::QMLVec3i>();
           qRegisterMetaType<osg::QMLVec3i*>("pmoc.osg.QMLVec3i");
qmlRegisterType<osg::QReflect_Vec3i>("pmoc.osg",1,0,"QReflect_Vec3i");
           qmlRegisterType<osg::QMLVec3i>("pmoc.osg",1,0,"QMLVec3i");
};
const std::string osg::MetaQReflect_Vec3i::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Vec3i::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Vec3i::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Vec3i::createQQModel(const Instance*i){ //return new MetaQReflect_Vec3i_QModel(i);}
QMLVec3i *ret =new QMLVec3i(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Vec3i_pmoc.cpp"
#endif




