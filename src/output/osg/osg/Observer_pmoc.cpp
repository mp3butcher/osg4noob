#include <osg/Observer>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Observer_pmoc.hpp>
#include <customCode/osg/Observer_pmoc.hpp>
using namespace pmoc;

///DefaultConstructor////////////////
osg::QReflect_Observer::QReflect_Observer(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Observer*>(i->ptr);
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Observer::~QReflect_Observer( ){
 }
///update this according _model new state
void osg::QReflect_Observer::updateModel(){
}
Instance osg::MetaQReflect_Observer::createInstance( ){
osg::Observer* osg_Observer_ptr	;
osg_Observer_ptr= new osg::Observer()	;
Instance o(PMOCGETMETACLASS("osg::Observer"),(void*)osg_Observer_ptr	,true);
_managedinstances.insert(osg_Observer_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Observer::MetaQReflect_Observer():MetaQQuickClass( "osg::Observer"){
_typeid=&typeid(osg::Observer );           qRegisterMetaType<QMLObserver>();
qmlRegisterType<QReflect_Observer>("pmoc.osg",1,0,"QReflect_Observer");
           qmlRegisterType<QMLObserver>("pmoc.osg",1,0,"QMLObserver");
};
const std::string osg::MetaQReflect_Observer::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Observer::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Observer::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Observer::createQQModel(Instance*i){ //return new MetaQReflect_Observer_QModel(i);}
QMLObserver *ret =new QMLObserver(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Observer_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Observer_pmoc.hpp>
#include <customCode/osg/Observer_pmoc.hpp>
#include <customCode/osg/Referenced_pmoc.hpp>
#include <customCode/osg/Observer_pmoc.hpp>
#include <osg/Observer>
using namespace pmoc;
osg::QReflect_Referenced*osg::QReflect_ObserverSet::addRefLock(){
PMOCSAFEADDOBJECT(*_model->addRefLock(),inst);
return inst.isValid()?((osg::QReflect_Referenced * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Referenced*osg::QReflect_ObserverSet::getObserverdObject()const{
PMOCSAFEADDOBJECT(*_model->getObserverdObject(),inst);
return inst.isValid()?((osg::QReflect_Referenced * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Referenced*osg::QReflect_ObserverSet::getObserverdObject(){
PMOCSAFEADDOBJECT(*_model->getObserverdObject(),inst);
return inst.isValid()?((osg::QReflect_Referenced * )inst.model->createQQModel(&inst)):NULL;
}
void   osg::QReflect_ObserverSet::addObserver( osg::QReflect_Observer *par){
_model->addObserver(par->_model);
}
void   osg::QReflect_ObserverSet::pmoc_reverse_addObserver( osg::QReflect_Observer *par){
_model->removeObserver(par->_model);
emit ObserverCollectionChanged();
}

///DefaultConstructor////////////////
osg::QReflect_ObserverSet::QReflect_ObserverSet(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::ObserverSet*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_ObserverSet::~QReflect_ObserverSet( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_ObserverSet::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_ObserverSet::createInstance( ){
std::cerr<<"osg::ObserverSet is not instanciable"<<std::endl;return Instance();


}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_ObserverSet::MetaQReflect_ObserverSet():MetaQQuickClass( "osg::ObserverSet"){
_typeid=&typeid(osg::ObserverSet );           qRegisterMetaType<QMLObserverSet>();
qmlRegisterType<QReflect_ObserverSet>("pmoc.osg",1,0,"QReflect_ObserverSet");
           qmlRegisterType<QMLObserverSet>("pmoc.osg",1,0,"QMLObserverSet");
       PMOCACTION("getObserver","addObserver","removeObserver");
};
const std::string osg::MetaQReflect_ObserverSet::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_ObserverSet::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_ObserverSet::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_ObserverSet::createQQModel(Instance*i){ //return new MetaQReflect_ObserverSet_QModel(i);}
QMLObserverSet *ret =new QMLObserverSet(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Referenced *mother =dynamic_cast<osg::Referenced*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Referenced");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Referenced model for osg::ObserverSetis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Referenced");
if(!cl){std::cerr<<"osg::Referenced QQModel for osg::ObserverSetis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Observer_pmoc.cpp"
#endif


