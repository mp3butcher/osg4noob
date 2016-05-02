#include <osg/ConvexPlanarPolygon>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/ConvexPlanarPolygon_pmoc.hpp>
#include <customCode/osg/ConvexPlanarPolygon_pmoc.hpp>
#include <customCode/osg/Vec3f_pmoc.hpp>
using namespace pmoc;
 void osg::QReflect_ConvexPlanarPolygon::add(osg::QReflect_Vec3f  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ConvexPlanarPolygon::add : parameter n.0 is NULL\n"<<endl;return;}
 _model->add(*p0->_model);

}

///DefaultConstructor////////////////
osg::QReflect_ConvexPlanarPolygon::QReflect_ConvexPlanarPolygon(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::ConvexPlanarPolygon*>(i->ptr);
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_ConvexPlanarPolygon::~QReflect_ConvexPlanarPolygon( ){
 }
///update this according _model new state
void osg::QReflect_ConvexPlanarPolygon::updateModel(){
}
Instance osg::MetaQReflect_ConvexPlanarPolygon::createInstance( ){
osg::ConvexPlanarPolygon* osg_ConvexPlanarPolygon_ptr	;
osg_ConvexPlanarPolygon_ptr= new osg::ConvexPlanarPolygon()	;
Instance o(PMOCGETMETACLASS("osg::ConvexPlanarPolygon"),(void*)osg_ConvexPlanarPolygon_ptr	,true);
_managedinstances.insert(osg_ConvexPlanarPolygon_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_ConvexPlanarPolygon::MetaQReflect_ConvexPlanarPolygon():MetaQQuickClass( "osg::ConvexPlanarPolygon"){
_typeid=&typeid(osg::ConvexPlanarPolygon );
           qRegisterMetaType<osg::QMLConvexPlanarPolygon>();
           qRegisterMetaType<osg::QMLConvexPlanarPolygon*>("pmoc.osg.QMLConvexPlanarPolygon");
qmlRegisterType<osg::QReflect_ConvexPlanarPolygon>("pmoc.osg",1,0,"QReflect_ConvexPlanarPolygon");
           qmlRegisterType<osg::QMLConvexPlanarPolygon>("pmoc.osg",1,0,"QMLConvexPlanarPolygon");
};
const std::string osg::MetaQReflect_ConvexPlanarPolygon::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_ConvexPlanarPolygon::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_ConvexPlanarPolygon::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_ConvexPlanarPolygon::createQQModel(const Instance*i){ //return new MetaQReflect_ConvexPlanarPolygon_QModel(i);}
QMLConvexPlanarPolygon *ret =new QMLConvexPlanarPolygon(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ConvexPlanarPolygon_pmoc.cpp"
#endif




