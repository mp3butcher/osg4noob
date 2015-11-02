#include <osg/CopyOp>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/CopyOp_pmoc.hpp>
#include <customCode/osg/CopyOp_pmoc.hpp>
using namespace pmoc;
 unsigned int  osg::QReflect_CopyOp::getCopyFlags()const{
return _model->getCopyFlags();

}
 void osg::QReflect_CopyOp::setCopyFlags( unsigned int p0){
 _model->setCopyFlags(p0);

}

///DefaultConstructor////////////////
osg::QReflect_CopyOp::QReflect_CopyOp(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::CopyOp*>(i->ptr);
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_CopyOp::~QReflect_CopyOp( ){
 }
///update this according _model new state
void osg::QReflect_CopyOp::updateModel(){
}
Instance osg::MetaQReflect_CopyOp::createInstance( ){
osg::CopyOp* osg_CopyOp_ptr	;
osg_CopyOp_ptr= new osg::CopyOp()	;
Instance o(PMOCGETMETACLASS("osg::CopyOp"),(void*)osg_CopyOp_ptr	,true);
_managedinstances.insert(osg_CopyOp_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_CopyOp::MetaQReflect_CopyOp():MetaQQuickClass( "osg::CopyOp"){
_typeid=&typeid(osg::CopyOp );           qRegisterMetaType<QMLCopyOp>();
qmlRegisterType<QReflect_CopyOp>("pmoc.osg",1,0,"QReflect_CopyOp");
           qmlRegisterType<QMLCopyOp>("pmoc.osg",1,0,"QMLCopyOp");
};
const std::string osg::MetaQReflect_CopyOp::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_CopyOp::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_CopyOp::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_CopyOp::createQQModel(Instance*i){ //return new MetaQReflect_CopyOp_QModel(i);}
QMLCopyOp *ret =new QMLCopyOp(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_CopyOp_pmoc.cpp"
#endif


