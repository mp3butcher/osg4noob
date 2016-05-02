#include <osg/Vec3ub>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Vec3ub_pmoc.hpp>
#include <customCode/osg/Vec3ub_pmoc.hpp>
#include <customCode/osg/Vec3ub_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_Vec3ub:: operator!=(osg::QReflect_Vec3ub  &p0)const{
//params checking
return _model->operator!=(*p0._model);

}
 bool  osg::QReflect_Vec3ub:: operator<(osg::QReflect_Vec3ub  &p0)const{
//params checking
return _model->operator<(*p0._model);

}
 bool  osg::QReflect_Vec3ub:: operator==(osg::QReflect_Vec3ub  &p0)const{
//params checking
return _model->operator==(*p0._model);

}
 void osg::QReflect_Vec3ub::set(osg::QReflect_Vec3ub  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Vec3ub::set : parameter n.0 is NULL\n"<<endl;return;}
 _model->set(*p0->_model);

}

///DefaultConstructor////////////////
osg::QReflect_Vec3ub::QReflect_Vec3ub(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Vec3ub*>(i->ptr);
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Vec3ub::~QReflect_Vec3ub( ){
 }
///update this according _model new state
void osg::QReflect_Vec3ub::updateModel(){
}
Instance osg::MetaQReflect_Vec3ub::createInstance( ){
osg::Vec3ub* osg_Vec3ub_ptr	;
osg_Vec3ub_ptr= new osg::Vec3ub()	;
Instance o(PMOCGETMETACLASS("osg::Vec3ub"),(void*)osg_Vec3ub_ptr	,true);
_managedinstances.insert(osg_Vec3ub_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Vec3ub::MetaQReflect_Vec3ub():MetaQQuickClass( "osg::Vec3ub"){
_typeid=&typeid(osg::Vec3ub );
           qRegisterMetaType<osg::QMLVec3ub>();
           qRegisterMetaType<osg::QMLVec3ub*>("pmoc.osg.QMLVec3ub");
qmlRegisterType<osg::QReflect_Vec3ub>("pmoc.osg",1,0,"QReflect_Vec3ub");
           qmlRegisterType<osg::QMLVec3ub>("pmoc.osg",1,0,"QMLVec3ub");
};
const std::string osg::MetaQReflect_Vec3ub::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Vec3ub::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Vec3ub::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Vec3ub::createQQModel(const Instance*i){ //return new MetaQReflect_Vec3ub_QModel(i);}
QMLVec3ub *ret =new QMLVec3ub(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Vec3ub_pmoc.cpp"
#endif




