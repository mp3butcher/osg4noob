#include <osg/ImageUtils>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/ImageUtils_pmoc.hpp>
#include <customCode/osg/ImageUtils_pmoc.hpp>
using namespace pmoc;

///DefaultConstructor////////////////
osg::QReflect_CastAndScaleToFloatOperation::QReflect_CastAndScaleToFloatOperation(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::CastAndScaleToFloatOperation*>(i->ptr);
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_CastAndScaleToFloatOperation::~QReflect_CastAndScaleToFloatOperation( ){
 }
///update this according _model new state
void osg::QReflect_CastAndScaleToFloatOperation::updateModel(){
}
Instance osg::MetaQReflect_CastAndScaleToFloatOperation::createInstance( ){
std::cerr<<"osg::CastAndScaleToFloatOperation is not instanciable"<<std::endl;return Instance();


}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_CastAndScaleToFloatOperation::MetaQReflect_CastAndScaleToFloatOperation():MetaQQuickClass( "osg::CastAndScaleToFloatOperation"){
_typeid=&typeid(osg::CastAndScaleToFloatOperation );
           qRegisterMetaType<osg::QMLCastAndScaleToFloatOperation>();
           qRegisterMetaType<osg::QMLCastAndScaleToFloatOperation*>("pmoc.osg.QMLCastAndScaleToFloatOperation");
qmlRegisterType<osg::QReflect_CastAndScaleToFloatOperation>("pmoc.osg",1,0,"QReflect_CastAndScaleToFloatOperation");
           qmlRegisterType<osg::QMLCastAndScaleToFloatOperation>("pmoc.osg",1,0,"QMLCastAndScaleToFloatOperation");
};
const std::string osg::MetaQReflect_CastAndScaleToFloatOperation::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_CastAndScaleToFloatOperation::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_CastAndScaleToFloatOperation::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_CastAndScaleToFloatOperation::createQQModel(const Instance*i){ //return new MetaQReflect_CastAndScaleToFloatOperation_QModel(i);}
QMLCastAndScaleToFloatOperation *ret =new QMLCastAndScaleToFloatOperation(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ImageUtils_pmoc.cpp"
#endif




