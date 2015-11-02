#include <osg/Referenced>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Referenced_pmoc.hpp>
#include <customCode/osg/Referenced_pmoc.hpp>
using namespace pmoc;
 int  osg::QReflect_Referenced::ref()const{
return _model->ref();

}
 int  osg::QReflect_Referenced::referenceCount()const{
return _model->referenceCount();

}
 int  osg::QReflect_Referenced::unref()const{
return _model->unref();

}
 int  osg::QReflect_Referenced::unref_nodelete()const{
return _model->unref_nodelete();

}
const bool osg::QReflect_Referenced::getThreadSafeRefUnref()const{return _model->getThreadSafeRefUnref();}
const bool osg::QReflect_Referenced::getThreadSafeReferenceCounting()const{return _model->getThreadSafeReferenceCounting();}
void  osg::QReflect_Referenced::setThreadSafeRefUnref(const bool &par){_model->setThreadSafeRefUnref(par);emit ThreadSafeRefUnrefChanged(par);}
void  osg::QReflect_Referenced::setThreadSafeReferenceCounting(const bool &par){_model->setThreadSafeReferenceCounting(par);emit ThreadSafeReferenceCountingChanged(par);}

///DefaultConstructor////////////////
osg::QReflect_Referenced::QReflect_Referenced(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Referenced*>(i->ptr);
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Referenced::~QReflect_Referenced( ){
 }
///update this according _model new state
void osg::QReflect_Referenced::updateModel(){
}
Instance osg::MetaQReflect_Referenced::createInstance( ){
osg::ref_ptr<osg::Referenced> osg_Referenced_ptr	;
osg_Referenced_ptr = new osg::Referenced ()	;
Instance o(PMOCGETMETACLASS("osg::Referenced"),(void*)osg_Referenced_ptr.get()		,true);
_managedinstances.insert(osg_Referenced_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Referenced::MetaQReflect_Referenced():MetaQQuickClass( "osg::Referenced"){
_typeid=&typeid(osg::Referenced );           qRegisterMetaType<QMLReferenced>();
qmlRegisterType<QReflect_Referenced>("pmoc.osg",1,0,"QReflect_Referenced");
           qmlRegisterType<QMLReferenced>("pmoc.osg",1,0,"QMLReferenced");
};
const std::string osg::MetaQReflect_Referenced::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Referenced::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Referenced::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Referenced::createQQModel(Instance*i){ //return new MetaQReflect_Referenced_QModel(i);}
QMLReferenced *ret =new QMLReferenced(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Referenced_pmoc.cpp"
#endif


