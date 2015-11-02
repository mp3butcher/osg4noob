#include <osg/GLU>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/GLU_pmoc.hpp>
#include <customCode/osg/GLU_pmoc.hpp>
using namespace pmoc;

///DefaultConstructor////////////////
osg::QReflect_PixelStorageModes::QReflect_PixelStorageModes(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::PixelStorageModes*>(i->ptr);
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_PixelStorageModes::~QReflect_PixelStorageModes( ){
 }
///update this according _model new state
void osg::QReflect_PixelStorageModes::updateModel(){
}
Instance osg::MetaQReflect_PixelStorageModes::createInstance( ){
std::cerr<<"osg::PixelStorageModes is not instanciable"<<std::endl;return Instance();


}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_PixelStorageModes::MetaQReflect_PixelStorageModes():MetaQQuickClass( "osg::PixelStorageModes"){
_typeid=&typeid(osg::PixelStorageModes );           qRegisterMetaType<QMLPixelStorageModes>();
qmlRegisterType<QReflect_PixelStorageModes>("pmoc.osg",1,0,"QReflect_PixelStorageModes");
           qmlRegisterType<QMLPixelStorageModes>("pmoc.osg",1,0,"QMLPixelStorageModes");
};
const std::string osg::MetaQReflect_PixelStorageModes::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_PixelStorageModes::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_PixelStorageModes::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_PixelStorageModes::createQQModel(Instance*i){ //return new MetaQReflect_PixelStorageModes_QModel(i);}
QMLPixelStorageModes *ret =new QMLPixelStorageModes(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_GLU_pmoc.cpp"
#endif


