#include <osg/Vec4ub>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Vec4ub_pmoc.hpp>
#include <customCode/osg/Vec4ub_pmoc.hpp>
using namespace pmoc;

///DefaultConstructor////////////////
osg::QReflect_Vec4ub::QReflect_Vec4ub(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Vec4ub*>(i->ptr);
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Vec4ub::~QReflect_Vec4ub( ){
 }
///update this according _model new state
void osg::QReflect_Vec4ub::updateModel(){
}
Instance osg::MetaQReflect_Vec4ub::createInstance( ){
osg::Vec4ub* osg_Vec4ub_ptr	;
osg_Vec4ub_ptr= new osg::Vec4ub()	;
Instance o(PMOCGETMETACLASS("osg::Vec4ub"),(void*)osg_Vec4ub_ptr	,true);
_managedinstances.insert(osg_Vec4ub_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Vec4ub::MetaQReflect_Vec4ub():MetaQQuickClass( "osg::Vec4ub"){
_typeid=&typeid(osg::Vec4ub );           qRegisterMetaType<QMLVec4ub>();
qmlRegisterType<QReflect_Vec4ub>("pmoc.osg",1,0,"QReflect_Vec4ub");
           qmlRegisterType<QMLVec4ub>("pmoc.osg",1,0,"QMLVec4ub");
};
const std::string osg::MetaQReflect_Vec4ub::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Vec4ub::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Vec4ub::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Vec4ub::createQQModel(Instance*i){ //return new MetaQReflect_Vec4ub_QModel(i);}
QMLVec4ub *ret =new QMLVec4ub(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Vec4ub_pmoc.cpp"
#endif


