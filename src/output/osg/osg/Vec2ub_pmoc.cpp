#include <osg/Vec2ub>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Vec2ub_pmoc.hpp>
#include <customCode/osg/Vec2ub_pmoc.hpp>
#include <customCode/osg/Vec2ub_pmoc.hpp>
using namespace pmoc;
 void osg::QReflect_Vec2ub::set(osg::QReflect_Vec2ub *p0){
 _model->set(*p0->_model);

}

///DefaultConstructor////////////////
osg::QReflect_Vec2ub::QReflect_Vec2ub(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Vec2ub*>(i->ptr);
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Vec2ub::~QReflect_Vec2ub( ){
 }
///update this according _model new state
void osg::QReflect_Vec2ub::updateModel(){
}
Instance osg::MetaQReflect_Vec2ub::createInstance( ){
osg::Vec2ub* osg_Vec2ub_ptr	;
osg_Vec2ub_ptr= new osg::Vec2ub()	;
Instance o(PMOCGETMETACLASS("osg::Vec2ub"),(void*)osg_Vec2ub_ptr	,true);
_managedinstances.insert(osg_Vec2ub_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Vec2ub::MetaQReflect_Vec2ub():MetaQQuickClass( "osg::Vec2ub"){
_typeid=&typeid(osg::Vec2ub );           qRegisterMetaType<QMLVec2ub>();
qmlRegisterType<QReflect_Vec2ub>("pmoc.osg",1,0,"QReflect_Vec2ub");
           qmlRegisterType<QMLVec2ub>("pmoc.osg",1,0,"QMLVec2ub");
};
const std::string osg::MetaQReflect_Vec2ub::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Vec2ub::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Vec2ub::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Vec2ub::createQQModel(Instance*i){ //return new MetaQReflect_Vec2ub_QModel(i);}
QMLVec2ub *ret =new QMLVec2ub(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Vec2ub_pmoc.cpp"
#endif


