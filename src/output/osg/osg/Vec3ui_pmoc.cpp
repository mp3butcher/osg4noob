#include <osg/Vec3ui>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Vec3ui_pmoc.hpp>
#include <customCode/osg/Vec3ui_pmoc.hpp>
#include <customCode/osg/Vec3ui_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_Vec3ui:: operator!=(osg::QReflect_Vec3ui  &p0)const{
//params checking
return _model->operator!=(*p0._model);

}
 bool  osg::QReflect_Vec3ui:: operator<(osg::QReflect_Vec3ui  &p0)const{
//params checking
return _model->operator<(*p0._model);

}
 bool  osg::QReflect_Vec3ui:: operator==(osg::QReflect_Vec3ui  &p0)const{
//params checking
return _model->operator==(*p0._model);

}
 unsigned int  osg::QReflect_Vec3ui:: b()const{
//params checking
return _model->b();

}
 unsigned int  osg::QReflect_Vec3ui:: g()const{
//params checking
return _model->g();

}
 unsigned int  osg::QReflect_Vec3ui:: operator[]( unsigned int  p0)const{
//params checking
return _model->operator[](p0);

}
 unsigned int  osg::QReflect_Vec3ui:: r()const{
//params checking
return _model->r();

}
 unsigned int  osg::QReflect_Vec3ui:: x()const{
//params checking
return _model->x();

}
 unsigned int  osg::QReflect_Vec3ui:: y()const{
//params checking
return _model->y();

}
 unsigned int  osg::QReflect_Vec3ui:: z()const{
//params checking
return _model->z();

}
 unsigned int&  osg::QReflect_Vec3ui:: b(){
//params checking
return _model->b();

}
 unsigned int&  osg::QReflect_Vec3ui:: g(){
//params checking
return _model->g();

}
 unsigned int&  osg::QReflect_Vec3ui:: operator[]( unsigned int  p0){
//params checking
return _model->operator[](p0);

}
 unsigned int&  osg::QReflect_Vec3ui:: r(){
//params checking
return _model->r();

}
 unsigned int&  osg::QReflect_Vec3ui:: x(){
//params checking
return _model->x();

}
 unsigned int&  osg::QReflect_Vec3ui:: y(){
//params checking
return _model->y();

}
 unsigned int&  osg::QReflect_Vec3ui:: z(){
//params checking
return _model->z();

}
 unsigned int*  osg::QReflect_Vec3ui:: ptr(){
//params checking
return _model->ptr();

}
 void osg::QReflect_Vec3ui::set( unsigned int  p0 , unsigned int  p1 , unsigned int  p2){
//params checking
 _model->set(p0 ,p1 ,p2);

}
 void osg::QReflect_Vec3ui::set(osg::QReflect_Vec3ui  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Vec3ui::set : parameter n.0 is NULL\n"<<endl;return;}
 _model->set(*p0->_model);

}
const  unsigned int*  osg::QReflect_Vec3ui:: ptr()const{
//params checking
return _model->ptr();

}

///DefaultConstructor////////////////
osg::QReflect_Vec3ui::QReflect_Vec3ui(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Vec3ui*>(i->ptr);
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Vec3ui::~QReflect_Vec3ui( ){
 }
///update this according _model new state
void osg::QReflect_Vec3ui::updateModel(){
}
Instance osg::MetaQReflect_Vec3ui::createInstance( ){
osg::Vec3ui* osg_Vec3ui_ptr	;
osg_Vec3ui_ptr= new osg::Vec3ui()	;
Instance o(PMOCGETMETACLASS("osg::Vec3ui"),(void*)osg_Vec3ui_ptr	,true);
_managedinstances.insert(osg_Vec3ui_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Vec3ui::MetaQReflect_Vec3ui():MetaQQuickClass( "osg::Vec3ui"){
_typeid=&typeid(osg::Vec3ui );
           qRegisterMetaType<osg::QMLVec3ui>();
           qRegisterMetaType<osg::QMLVec3ui*>("pmoc.osg.QMLVec3ui");
qmlRegisterType<osg::QReflect_Vec3ui>("pmoc.osg",1,0,"QReflect_Vec3ui");
           qmlRegisterType<osg::QMLVec3ui>("pmoc.osg",1,0,"QMLVec3ui");
};
const std::string osg::MetaQReflect_Vec3ui::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Vec3ui::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Vec3ui::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Vec3ui::createQQModel(const Instance*i){ //return new MetaQReflect_Vec3ui_QModel(i);}
QMLVec3ui *ret =new QMLVec3ui(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Vec3ui_pmoc.cpp"
#endif




