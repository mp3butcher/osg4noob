#include <osg/Vec3us>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Vec3us_pmoc.hpp>
#include <customCode/osg/Vec3us_pmoc.hpp>
#include <customCode/osg/Vec3us_pmoc.hpp>
using namespace pmoc;
 void osg::QReflect_Vec3us::set(osg::QReflect_Vec3us *p0){
 _model->set(*p0->_model);

}

///DefaultConstructor////////////////
osg::QReflect_Vec3us::QReflect_Vec3us(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Vec3us*>(i->ptr);
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Vec3us::~QReflect_Vec3us( ){
 }
///update this according _model new state
void osg::QReflect_Vec3us::updateModel(){
}
Instance osg::MetaQReflect_Vec3us::createInstance( ){
osg::Vec3us* osg_Vec3us_ptr	;
osg_Vec3us_ptr= new osg::Vec3us()	;
Instance o(PMOCGETMETACLASS("osg::Vec3us"),(void*)osg_Vec3us_ptr	,true);
_managedinstances.insert(osg_Vec3us_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Vec3us::MetaQReflect_Vec3us():MetaQQuickClass( "osg::Vec3us"){
_typeid=&typeid(osg::Vec3us );           qRegisterMetaType<QMLVec3us>();
qmlRegisterType<QReflect_Vec3us>("pmoc.osg",1,0,"QReflect_Vec3us");
           qmlRegisterType<QMLVec3us>("pmoc.osg",1,0,"QMLVec3us");
};
const std::string osg::MetaQReflect_Vec3us::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Vec3us::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Vec3us::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Vec3us::createQQModel(Instance*i){ //return new MetaQReflect_Vec3us_QModel(i);}
QMLVec3us *ret =new QMLVec3us(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Vec3us_pmoc.cpp"
#endif


