#include <osg/Vec2ui>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Vec2ui_pmoc.hpp>
#include <customCode/osg/Vec2ui_pmoc.hpp>
#include <customCode/osg/Vec2ui_pmoc.hpp>
using namespace pmoc;
 unsigned int  osg::QReflect_Vec2ui::g()const{
return _model->g();

}
 unsigned int  osg::QReflect_Vec2ui::r()const{
return _model->r();

}
 unsigned int  osg::QReflect_Vec2ui::x()const{
return _model->x();

}
 unsigned int  osg::QReflect_Vec2ui::y()const{
return _model->y();

}
 unsigned int&  osg::QReflect_Vec2ui::g(){
return _model->g();

}
 unsigned int&  osg::QReflect_Vec2ui::r(){
return _model->r();

}
 unsigned int&  osg::QReflect_Vec2ui::x(){
return _model->x();

}
 unsigned int&  osg::QReflect_Vec2ui::y(){
return _model->y();

}
 unsigned int*  osg::QReflect_Vec2ui::ptr(){
return _model->ptr();

}
 void osg::QReflect_Vec2ui::set( unsigned int p0 , unsigned int p1){
 _model->set(p0 ,p1);

}
 void osg::QReflect_Vec2ui::set(osg::QReflect_Vec2ui *p0){
 _model->set(*p0->_model);

}
const  unsigned int*  osg::QReflect_Vec2ui::ptr()const{
return _model->ptr();

}

///DefaultConstructor////////////////
osg::QReflect_Vec2ui::QReflect_Vec2ui(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osg::Vec2ui );           qRegisterMetaType<QMLVec2ui>();
qmlRegisterType<QReflect_Vec2ui>("pmoc.osg",1,0,"QReflect_Vec2ui");
           qmlRegisterType<QMLVec2ui>("pmoc.osg",1,0,"QMLVec2ui");
};
const std::string osg::MetaQReflect_Vec2ui::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Vec2ui::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Vec2ui::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Vec2ui::createQQModel(Instance*i){ //return new MetaQReflect_Vec2ui_QModel(i);}
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


