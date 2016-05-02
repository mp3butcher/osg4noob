#include <osg/Observer>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Observer_pmoc.hpp>
#include <customCode/osg/Observer_pmoc.hpp>
using namespace pmoc;

///DefaultConstructor////////////////
osg::QReflect_Observer::QReflect_Observer(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osg::Observer );
           qRegisterMetaType<osg::QMLObserver>();
           qRegisterMetaType<osg::QMLObserver*>("pmoc.osg.QMLObserver");
qmlRegisterType<osg::QReflect_Observer>("pmoc.osg",1,0,"QReflect_Observer");
           qmlRegisterType<osg::QMLObserver>("pmoc.osg",1,0,"QMLObserver");
};
const std::string osg::MetaQReflect_Observer::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Observer::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Observer::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Observer::createQQModel(const Instance*i){ //return new MetaQReflect_Observer_QModel(i);}
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
#include <customCode/osg/Referenced_pmoc.hpp>
using namespace pmoc;
 void osg::QReflect_ObserverSet::addObserver(osg::QReflect_Observer  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ObserverSet::addObserver : parameter n.0 is NULL\n"<<endl;return;}
 _model->addObserver(p0->_model);
emit ObserverCollectionChanged();

}
 void osg::QReflect_ObserverSet::removeObserver(osg::QReflect_Observer  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ObserverSet::removeObserver : parameter n.0 is NULL\n"<<endl;return;}
 _model->removeObserver(p0->_model);
emit ObserverCollectionChanged();

}
osg::QReflect_Referenced*osg::QReflect_ObserverSet::addRefLock(){
//params checking
PMOCSAFEADDOBJECT(*_model->addRefLock(),inst);
return inst.isValid()?((osg::QReflect_Referenced * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Referenced*osg::QReflect_ObserverSet::getObserverdObject()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getObserverdObject(),inst);
return inst.isValid()?((osg::QReflect_Referenced * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Referenced*osg::QReflect_ObserverSet::getObserverdObject(){
//params checking
PMOCSAFEADDOBJECT(*_model->getObserverdObject(),inst);
return inst.isValid()?((osg::QReflect_Referenced * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osg::QReflect_ObserverSet::QReflect_ObserverSet(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osg::ObserverSet );
           qRegisterMetaType<osg::QMLObserverSet>();
           qRegisterMetaType<osg::QMLObserverSet*>("pmoc.osg.QMLObserverSet");
qmlRegisterType<osg::QReflect_ObserverSet>("pmoc.osg",1,0,"QReflect_ObserverSet");
           qmlRegisterType<osg::QMLObserverSet>("pmoc.osg",1,0,"QMLObserverSet");
};
const std::string osg::MetaQReflect_ObserverSet::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_ObserverSet::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_ObserverSet::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_ObserverSet::createQQModel(const Instance*i){ //return new MetaQReflect_ObserverSet_QModel(i);}
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




