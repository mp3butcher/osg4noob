#include <osg/Vec4b>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Vec4b_pmoc.hpp>
#include <customCode/osg/Vec4b_pmoc.hpp>
#include <customCode/osg/Vec4b_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_Vec4b:: operator!=(osg::QReflect_Vec4b  &p0)const{
//params checking
return _model->operator!=(*p0._model);

}
 bool  osg::QReflect_Vec4b:: operator<(osg::QReflect_Vec4b  &p0)const{
//params checking
return _model->operator<(*p0._model);

}
 bool  osg::QReflect_Vec4b:: operator==(osg::QReflect_Vec4b  &p0)const{
//params checking
return _model->operator==(*p0._model);

}

///DefaultConstructor////////////////
osg::QReflect_Vec4b::QReflect_Vec4b(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Vec4b*>(i->ptr);
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Vec4b::~QReflect_Vec4b( ){
 }
///update this according _model new state
void osg::QReflect_Vec4b::updateModel(){
}
Instance osg::MetaQReflect_Vec4b::createInstance( ){
osg::Vec4b* osg_Vec4b_ptr	;
osg_Vec4b_ptr= new osg::Vec4b()	;
Instance o(PMOCGETMETACLASS("osg::Vec4b"),(void*)osg_Vec4b_ptr	,true);
_managedinstances.insert(osg_Vec4b_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Vec4b::MetaQReflect_Vec4b():MetaQQuickClass( "osg::Vec4b"){
_typeid=&typeid(osg::Vec4b );
           qRegisterMetaType<osg::QMLVec4b>();
           qRegisterMetaType<osg::QMLVec4b*>("pmoc.osg.QMLVec4b");
qmlRegisterType<osg::QReflect_Vec4b>("pmoc.osg",1,0,"QReflect_Vec4b");
           qmlRegisterType<osg::QMLVec4b>("pmoc.osg",1,0,"QMLVec4b");
};
const std::string osg::MetaQReflect_Vec4b::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Vec4b::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Vec4b::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Vec4b::createQQModel(const Instance*i){ //return new MetaQReflect_Vec4b_QModel(i);}
QMLVec4b *ret =new QMLVec4b(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Vec4b_pmoc.cpp"
#endif




