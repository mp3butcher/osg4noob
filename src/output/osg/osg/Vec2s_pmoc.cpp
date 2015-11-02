#include <osg/Vec2s>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Vec2s_pmoc.hpp>
#include <customCode/osg/Vec2s_pmoc.hpp>
#include <customCode/osg/Vec2s_pmoc.hpp>
using namespace pmoc;
 short  osg::QReflect_Vec2s::g()const{
return _model->g();

}
 short  osg::QReflect_Vec2s::r()const{
return _model->r();

}
 short  osg::QReflect_Vec2s::x()const{
return _model->x();

}
 short  osg::QReflect_Vec2s::y()const{
return _model->y();

}
 short&  osg::QReflect_Vec2s::g(){
return _model->g();

}
 short&  osg::QReflect_Vec2s::r(){
return _model->r();

}
 short&  osg::QReflect_Vec2s::x(){
return _model->x();

}
 short&  osg::QReflect_Vec2s::y(){
return _model->y();

}
 short*  osg::QReflect_Vec2s::ptr(){
return _model->ptr();

}
 void osg::QReflect_Vec2s::set( short p0 , short p1){
 _model->set(p0 ,p1);

}
 void osg::QReflect_Vec2s::set(osg::QReflect_Vec2s *p0){
 _model->set(*p0->_model);

}
const  short*  osg::QReflect_Vec2s::ptr()const{
return _model->ptr();

}

///DefaultConstructor////////////////
osg::QReflect_Vec2s::QReflect_Vec2s(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Vec2s*>(i->ptr);
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Vec2s::~QReflect_Vec2s( ){
 }
///update this according _model new state
void osg::QReflect_Vec2s::updateModel(){
}
Instance osg::MetaQReflect_Vec2s::createInstance( ){
osg::Vec2s* osg_Vec2s_ptr	;
osg_Vec2s_ptr= new osg::Vec2s()	;
Instance o(PMOCGETMETACLASS("osg::Vec2s"),(void*)osg_Vec2s_ptr	,true);
_managedinstances.insert(osg_Vec2s_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Vec2s::MetaQReflect_Vec2s():MetaQQuickClass( "osg::Vec2s"){
_typeid=&typeid(osg::Vec2s );           qRegisterMetaType<QMLVec2s>();
qmlRegisterType<QReflect_Vec2s>("pmoc.osg",1,0,"QReflect_Vec2s");
           qmlRegisterType<QMLVec2s>("pmoc.osg",1,0,"QMLVec2s");
};
const std::string osg::MetaQReflect_Vec2s::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Vec2s::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Vec2s::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Vec2s::createQQModel(Instance*i){ //return new MetaQReflect_Vec2s_QModel(i);}
QMLVec2s *ret =new QMLVec2s(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Vec2s_pmoc.cpp"
#endif


