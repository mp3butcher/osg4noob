#include <osg/Referenced>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Referenced_pmoc.hpp>
#include <customCode/osg/Referenced_pmoc.hpp>
#include <customCode/osg/DeleteHandler_pmoc.hpp>
#include <customCode/osg/Observer_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_Referenced:: getThreadSafeRefUnref()const{
//params checking
return _model->getThreadSafeRefUnref();

}
 bool  osg::QReflect_Referenced:: getThreadSafeReferenceCounting(){
//params checking
return _model->getThreadSafeReferenceCounting();

}
 int  osg::QReflect_Referenced:: ref()const{
//params checking
return _model->ref();

}
 int  osg::QReflect_Referenced:: referenceCount()const{
//params checking
return _model->referenceCount();

}
 int  osg::QReflect_Referenced:: unref()const{
//params checking
return _model->unref();

}
 int  osg::QReflect_Referenced:: unref_nodelete()const{
//params checking
return _model->unref_nodelete();

}
 void osg::QReflect_Referenced::addObserver(osg::QReflect_Observer  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Referenced::addObserver : parameter n.0 is NULL\n"<<endl;return;}
 _model->addObserver(p0->_model);

}
 void osg::QReflect_Referenced::removeObserver(osg::QReflect_Observer  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Referenced::removeObserver : parameter n.0 is NULL\n"<<endl;return;}
 _model->removeObserver(p0->_model);

}
 void osg::QReflect_Referenced::setDeleteHandler(osg::QReflect_DeleteHandler  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Referenced::setDeleteHandler : parameter n.0 is NULL\n"<<endl;return;}
 _model->setDeleteHandler(p0->_model);
emit DeleteHandlerChanged();

}
 void osg::QReflect_Referenced::setThreadSafeRefUnref( bool  p0){
//params checking
 _model->setThreadSafeRefUnref(p0);
emit ThreadSafeRefUnrefChanged();

}
 void osg::QReflect_Referenced::setThreadSafeReferenceCounting( bool  p0){
//params checking
 _model->setThreadSafeReferenceCounting(p0);
emit ThreadSafeReferenceCountingChanged();

}
osg::QReflect_DeleteHandler*osg::QReflect_Referenced::getDeleteHandler(){
//params checking
PMOCSAFEADDOBJECT(*_model->getDeleteHandler(),inst);
return inst.isValid()?((osg::QReflect_DeleteHandler * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_ObserverSet*osg::QReflect_Referenced::getObserverSet()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getObserverSet(),inst);
return inst.isValid()?((osg::QReflect_ObserverSet * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_ObserverSet*osg::QReflect_Referenced::getOrCreateObserverSet()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getOrCreateObserverSet(),inst);
return inst.isValid()?((osg::QReflect_ObserverSet * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osg::QReflect_Referenced::QReflect_Referenced(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osg::Referenced );
           qRegisterMetaType<osg::QMLReferenced>();
           qRegisterMetaType<osg::QMLReferenced*>("pmoc.osg.QMLReferenced");
qmlRegisterType<osg::QReflect_Referenced>("pmoc.osg",1,0,"QReflect_Referenced");
           qmlRegisterType<osg::QMLReferenced>("pmoc.osg",1,0,"QMLReferenced");
};
const std::string osg::MetaQReflect_Referenced::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Referenced::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Referenced::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Referenced::createQQModel(const Instance*i){ //return new MetaQReflect_Referenced_QModel(i);}
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




