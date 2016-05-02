#include <osg/Vec3s>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Vec3s_pmoc.hpp>
#include <customCode/osg/Vec3s_pmoc.hpp>
#include <customCode/osg/Vec3s_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_Vec3s:: operator!=(osg::QReflect_Vec3s  &p0)const{
//params checking
return _model->operator!=(*p0._model);

}
 bool  osg::QReflect_Vec3s:: operator<(osg::QReflect_Vec3s  &p0)const{
//params checking
return _model->operator<(*p0._model);

}
 bool  osg::QReflect_Vec3s:: operator==(osg::QReflect_Vec3s  &p0)const{
//params checking
return _model->operator==(*p0._model);

}
 short  osg::QReflect_Vec3s:: b()const{
//params checking
return _model->b();

}
 short  osg::QReflect_Vec3s:: g()const{
//params checking
return _model->g();

}
 short  osg::QReflect_Vec3s:: operator[]( unsigned int  p0)const{
//params checking
return _model->operator[](p0);

}
 short  osg::QReflect_Vec3s:: r()const{
//params checking
return _model->r();

}
 short  osg::QReflect_Vec3s:: x()const{
//params checking
return _model->x();

}
 short  osg::QReflect_Vec3s:: y()const{
//params checking
return _model->y();

}
 short  osg::QReflect_Vec3s:: z()const{
//params checking
return _model->z();

}
 short&  osg::QReflect_Vec3s:: b(){
//params checking
return _model->b();

}
 short&  osg::QReflect_Vec3s:: g(){
//params checking
return _model->g();

}
 short&  osg::QReflect_Vec3s:: operator[]( unsigned int  p0){
//params checking
return _model->operator[](p0);

}
 short&  osg::QReflect_Vec3s:: r(){
//params checking
return _model->r();

}
 short&  osg::QReflect_Vec3s:: x(){
//params checking
return _model->x();

}
 short&  osg::QReflect_Vec3s:: y(){
//params checking
return _model->y();

}
 short&  osg::QReflect_Vec3s:: z(){
//params checking
return _model->z();

}
 short*  osg::QReflect_Vec3s:: ptr(){
//params checking
return _model->ptr();

}
 void osg::QReflect_Vec3s::set( short  p0 , short  p1 , short  p2){
//params checking
 _model->set(p0 ,p1 ,p2);

}
 void osg::QReflect_Vec3s::set(osg::QReflect_Vec3s  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Vec3s::set : parameter n.0 is NULL\n"<<endl;return;}
 _model->set(*p0->_model);

}
const  short*  osg::QReflect_Vec3s:: ptr()const{
//params checking
return _model->ptr();

}

///DefaultConstructor////////////////
osg::QReflect_Vec3s::QReflect_Vec3s(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osg::Vec3s );
           qRegisterMetaType<osg::QMLVec3s>();
           qRegisterMetaType<osg::QMLVec3s*>("pmoc.osg.QMLVec3s");
qmlRegisterType<osg::QReflect_Vec3s>("pmoc.osg",1,0,"QReflect_Vec3s");
           qmlRegisterType<osg::QMLVec3s>("pmoc.osg",1,0,"QMLVec3s");
};
const std::string osg::MetaQReflect_Vec3s::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Vec3s::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Vec3s::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Vec3s::createQQModel(const Instance*i){ //return new MetaQReflect_Vec3s_QModel(i);}
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




