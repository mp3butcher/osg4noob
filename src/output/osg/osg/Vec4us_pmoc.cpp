#include <osg/Vec4us>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Vec4us_pmoc.hpp>
#include <customCode/osg/Vec4us_pmoc.hpp>
using namespace pmoc;

///DefaultConstructor////////////////
osg::QReflect_Vec4us::QReflect_Vec4us(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Vec4us*>(i->ptr);
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Vec4us::~QReflect_Vec4us( ){
 }
///update this according _model new state
void osg::QReflect_Vec4us::updateModel(){
}
Instance osg::MetaQReflect_Vec4us::createInstance( ){
osg::Vec4us* osg_Vec4us_ptr	;
osg_Vec4us_ptr= new osg::Vec4us()	;
Instance o(PMOCGETMETACLASS("osg::Vec4us"),(void*)osg_Vec4us_ptr	,true);
_managedinstances.insert(osg_Vec4us_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Vec4us::MetaQReflect_Vec4us():MetaQQuickClass( "osg::Vec4us"){
_typeid=&typeid(osg::Vec4us );           qRegisterMetaType<QMLVec4us>();
qmlRegisterType<QReflect_Vec4us>("pmoc.osg",1,0,"QReflect_Vec4us");
           qmlRegisterType<QMLVec4us>("pmoc.osg",1,0,"QMLVec4us");
};
const std::string osg::MetaQReflect_Vec4us::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Vec4us::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Vec4us::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Vec4us::createQQModel(Instance*i){ //return new MetaQReflect_Vec4us_QModel(i);}
QMLVec4us *ret =new QMLVec4us(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Vec4us_pmoc.cpp"
#endif


