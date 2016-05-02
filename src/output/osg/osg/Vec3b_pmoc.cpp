#include <osg/Vec3b>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Vec3b_pmoc.hpp>
#include <customCode/osg/Vec3b_pmoc.hpp>
#include <customCode/osg/Vec3b_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_Vec3b:: operator!=(osg::QReflect_Vec3b  &p0)const{
//params checking
return _model->operator!=(*p0._model);

}
 bool  osg::QReflect_Vec3b:: operator<(osg::QReflect_Vec3b  &p0)const{
//params checking
return _model->operator<(*p0._model);

}
 bool  osg::QReflect_Vec3b:: operator==(osg::QReflect_Vec3b  &p0)const{
//params checking
return _model->operator==(*p0._model);

}
 void osg::QReflect_Vec3b::set(osg::QReflect_Vec3b  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Vec3b::set : parameter n.0 is NULL\n"<<endl;return;}
 _model->set(*p0->_model);

}

///DefaultConstructor////////////////
osg::QReflect_Vec3b::QReflect_Vec3b(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Vec3b*>(i->ptr);
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Vec3b::~QReflect_Vec3b( ){
 }
///update this according _model new state
void osg::QReflect_Vec3b::updateModel(){
}
Instance osg::MetaQReflect_Vec3b::createInstance( ){
osg::Vec3b* osg_Vec3b_ptr	;
osg_Vec3b_ptr= new osg::Vec3b()	;
Instance o(PMOCGETMETACLASS("osg::Vec3b"),(void*)osg_Vec3b_ptr	,true);
_managedinstances.insert(osg_Vec3b_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Vec3b::MetaQReflect_Vec3b():MetaQQuickClass( "osg::Vec3b"){
_typeid=&typeid(osg::Vec3b );
           qRegisterMetaType<osg::QMLVec3b>();
           qRegisterMetaType<osg::QMLVec3b*>("pmoc.osg.QMLVec3b");
qmlRegisterType<osg::QReflect_Vec3b>("pmoc.osg",1,0,"QReflect_Vec3b");
           qmlRegisterType<osg::QMLVec3b>("pmoc.osg",1,0,"QMLVec3b");
};
const std::string osg::MetaQReflect_Vec3b::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Vec3b::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Vec3b::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Vec3b::createQQModel(const Instance*i){ //return new MetaQReflect_Vec3b_QModel(i);}
QMLVec3b *ret =new QMLVec3b(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Vec3b_pmoc.cpp"
#endif




