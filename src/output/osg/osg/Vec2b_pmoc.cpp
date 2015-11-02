#include <osg/Vec2b>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Vec2b_pmoc.hpp>
#include <customCode/osg/Vec2b_pmoc.hpp>
#include <customCode/osg/Vec2b_pmoc.hpp>
using namespace pmoc;
 void osg::QReflect_Vec2b::set(osg::QReflect_Vec2b *p0){
 _model->set(*p0->_model);

}

///DefaultConstructor////////////////
osg::QReflect_Vec2b::QReflect_Vec2b(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Vec2b*>(i->ptr);
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Vec2b::~QReflect_Vec2b( ){
 }
///update this according _model new state
void osg::QReflect_Vec2b::updateModel(){
}
Instance osg::MetaQReflect_Vec2b::createInstance( ){
osg::Vec2b* osg_Vec2b_ptr	;
osg_Vec2b_ptr= new osg::Vec2b()	;
Instance o(PMOCGETMETACLASS("osg::Vec2b"),(void*)osg_Vec2b_ptr	,true);
_managedinstances.insert(osg_Vec2b_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Vec2b::MetaQReflect_Vec2b():MetaQQuickClass( "osg::Vec2b"){
_typeid=&typeid(osg::Vec2b );           qRegisterMetaType<QMLVec2b>();
qmlRegisterType<QReflect_Vec2b>("pmoc.osg",1,0,"QReflect_Vec2b");
           qmlRegisterType<QMLVec2b>("pmoc.osg",1,0,"QMLVec2b");
};
const std::string osg::MetaQReflect_Vec2b::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Vec2b::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Vec2b::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Vec2b::createQQModel(Instance*i){ //return new MetaQReflect_Vec2b_QModel(i);}
QMLVec2b *ret =new QMLVec2b(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Vec2b_pmoc.cpp"
#endif


