#include <osg/Vec2ui>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Vec2ui_pmoc.hpp>
#include <customCode/osg/Vec2ui_pmoc.hpp>
#include <customCode/osg/Vec2ui_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_Vec2ui:: operator!=(osg::QReflect_Vec2ui  &p0)const{
//params checking
return _model->operator!=(*p0._model);

}
 bool  osg::QReflect_Vec2ui:: operator<(osg::QReflect_Vec2ui  &p0)const{
//params checking
return _model->operator<(*p0._model);

}
 bool  osg::QReflect_Vec2ui:: operator==(osg::QReflect_Vec2ui  &p0)const{
//params checking
return _model->operator==(*p0._model);

}
 unsigned int  osg::QReflect_Vec2ui:: g()const{
//params checking
return _model->g();

}
 unsigned int  osg::QReflect_Vec2ui:: operator[]( int  p0)const{
//params checking
return _model->operator[](p0);

}
 unsigned int  osg::QReflect_Vec2ui:: r()const{
//params checking
return _model->r();

}
 unsigned int  osg::QReflect_Vec2ui:: x()const{
//params checking
return _model->x();

}
 unsigned int  osg::QReflect_Vec2ui:: y()const{
//params checking
return _model->y();

}
 unsigned int&  osg::QReflect_Vec2ui:: g(){
//params checking
return _model->g();

}
 unsigned int&  osg::QReflect_Vec2ui:: operator[]( int  p0){
//params checking
return _model->operator[](p0);

}
 unsigned int&  osg::QReflect_Vec2ui:: r(){
//params checking
return _model->r();

}
 unsigned int&  osg::QReflect_Vec2ui:: x(){
//params checking
return _model->x();

}
 unsigned int&  osg::QReflect_Vec2ui:: y(){
//params checking
return _model->y();

}
 unsigned int*  osg::QReflect_Vec2ui:: ptr(){
//params checking
return _model->ptr();

}
 void osg::QReflect_Vec2ui::set( unsigned int  p0 , unsigned int  p1){
//params checking
 _model->set(p0 ,p1);

}
 void osg::QReflect_Vec2ui::set(osg::QReflect_Vec2ui  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Vec2ui::set : parameter n.0 is NULL\n"<<endl;return;}
 _model->set(*p0->_model);

}
const  unsigned int*  osg::QReflect_Vec2ui:: ptr()const{
//params checking
return _model->ptr();

}

///DefaultConstructor////////////////
osg::QReflect_Vec2ui::QReflect_Vec2ui(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Vec2ui*>(i->ptr);
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Vec2ui::~QReflect_Vec2ui( ){
 }
///update this according _model new state
void osg::QReflect_Vec2ui::updateModel(){
}
Instance osg::MetaQReflect_Vec2ui::createInstance( ){
osg::Vec2ui* osg_Vec2ui_ptr	;
osg_Vec2ui_ptr= new osg::Vec2ui()	;
Instance o(PMOCGETMETACLASS("osg::Vec2ui"),(void*)osg_Vec2ui_ptr	,true);
_managedinstances.insert(osg_Vec2ui_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Vec2ui::MetaQReflect_Vec2ui():MetaQQuickClass( "osg::Vec2ui"){
_typeid=&typeid(osg::Vec2ui );
           qRegisterMetaType<osg::QMLVec2ui>();
           qRegisterMetaType<osg::QMLVec2ui*>("pmoc.osg.QMLVec2ui");
qmlRegisterType<osg::QReflect_Vec2ui>("pmoc.osg",1,0,"QReflect_Vec2ui");
           qmlRegisterType<osg::QMLVec2ui>("pmoc.osg",1,0,"QMLVec2ui");
};
const std::string osg::MetaQReflect_Vec2ui::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Vec2ui::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Vec2ui::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Vec2ui::createQQModel(const Instance*i){ //return new MetaQReflect_Vec2ui_QModel(i);}
QMLVec2ui *ret =new QMLVec2ui(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Vec2ui_pmoc.cpp"
#endif




