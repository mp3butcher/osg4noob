#include <osg/Vec2us>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Vec2us_pmoc.hpp>
#include <customCode/osg/Vec2us_pmoc.hpp>
#include <customCode/osg/Vec2us_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_Vec2us:: operator!=(osg::QReflect_Vec2us  &p0)const{
//params checking
return _model->operator!=(*p0._model);

}
 bool  osg::QReflect_Vec2us:: operator<(osg::QReflect_Vec2us  &p0)const{
//params checking
return _model->operator<(*p0._model);

}
 bool  osg::QReflect_Vec2us:: operator==(osg::QReflect_Vec2us  &p0)const{
//params checking
return _model->operator==(*p0._model);

}
 void osg::QReflect_Vec2us::set(osg::QReflect_Vec2us  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Vec2us::set : parameter n.0 is NULL\n"<<endl;return;}
 _model->set(*p0->_model);

}

///DefaultConstructor////////////////
osg::QReflect_Vec2us::QReflect_Vec2us(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Vec2us*>(i->ptr);
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Vec2us::~QReflect_Vec2us( ){
 }
///update this according _model new state
void osg::QReflect_Vec2us::updateModel(){
}
Instance osg::MetaQReflect_Vec2us::createInstance( ){
osg::Vec2us* osg_Vec2us_ptr	;
osg_Vec2us_ptr= new osg::Vec2us()	;
Instance o(PMOCGETMETACLASS("osg::Vec2us"),(void*)osg_Vec2us_ptr	,true);
_managedinstances.insert(osg_Vec2us_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Vec2us::MetaQReflect_Vec2us():MetaQQuickClass( "osg::Vec2us"){
_typeid=&typeid(osg::Vec2us );
           qRegisterMetaType<osg::QMLVec2us>();
           qRegisterMetaType<osg::QMLVec2us*>("pmoc.osg.QMLVec2us");
qmlRegisterType<osg::QReflect_Vec2us>("pmoc.osg",1,0,"QReflect_Vec2us");
           qmlRegisterType<osg::QMLVec2us>("pmoc.osg",1,0,"QMLVec2us");
};
const std::string osg::MetaQReflect_Vec2us::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Vec2us::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Vec2us::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Vec2us::createQQModel(const Instance*i){ //return new MetaQReflect_Vec2us_QModel(i);}
QMLVec2us *ret =new QMLVec2us(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Vec2us_pmoc.cpp"
#endif




