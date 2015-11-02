#include <osg/OperationThread>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/OperationThread_pmoc.hpp>
#include <customCode/osg/OperationThread_pmoc.hpp>
#include <customCode/osg/Referenced_pmoc.hpp>
using namespace pmoc;
 void osg::QReflect_Operation::release(){
 _model->release();

}
const QString osg::QReflect_Operation::getName()const{return QString(_model->getName().c_str());}
const bool osg::QReflect_Operation::getKeep()const{return _model->getKeep();}
void  osg::QReflect_Operation::setKeep(const bool &par){_model->setKeep(par);emit KeepChanged(par);}
void osg::QReflect_Operation::setName(const QString &par){_model->setName(par.toStdString());emit NameChanged(par);}

///DefaultConstructor////////////////
osg::QReflect_Operation::QReflect_Operation(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Operation*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Operation::~QReflect_Operation( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_Operation::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_Operation::createInstance( ){
std::cerr<<"osg::Operation is not instanciable"<<std::endl;return Instance();


}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Operation::MetaQReflect_Operation():MetaQQuickClass( "osg::Operation"){
_typeid=&typeid(osg::Operation );           qRegisterMetaType<QMLOperation>();
qmlRegisterType<QReflect_Operation>("pmoc.osg",1,0,"QReflect_Operation");
           qmlRegisterType<QMLOperation>("pmoc.osg",1,0,"QMLOperation");
};
const std::string osg::MetaQReflect_Operation::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Operation::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Operation::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Operation::createQQModel(Instance*i){ //return new MetaQReflect_Operation_QModel(i);}
QMLOperation *ret =new QMLOperation(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Referenced *mother =dynamic_cast<osg::Referenced*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Referenced");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Referenced model for osg::Operationis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Referenced");
if(!cl){std::cerr<<"osg::Referenced QQModel for osg::Operationis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_OperationThread_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/OperationThread_pmoc.hpp>
#include <customCode/osg/OperationThread_pmoc.hpp>
#include <customCode/osg/Referenced_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osg/OperationThread_pmoc.hpp>
#include <osg/OperationThread>
using namespace pmoc;
 bool  osg::QReflect_OperationQueue::empty(){
return _model->empty();

}
 unsigned int  osg::QReflect_OperationQueue::getNumOperationsInQueue(){
return _model->getNumOperationsInQueue();

}
 void osg::QReflect_OperationQueue::releaseAllOperations(){
 _model->releaseAllOperations();

}
 void osg::QReflect_OperationQueue::releaseOperationsBlock(){
 _model->releaseOperationsBlock();

}
 void osg::QReflect_OperationQueue::remove(const  QString &p0){
 _model->remove(std::string(p0.toStdString()));

}
 void osg::QReflect_OperationQueue::removeAllOperations(){
 _model->removeAllOperations();

}
 void osg::QReflect_OperationQueue::runOperations(osg::QReflect_Object *p0){
 _model->runOperations(p0->_model);

}
void   osg::QReflect_OperationQueue::add( osg::QReflect_Operation *par){
_model->add(par->_model);
}
void   osg::QReflect_OperationQueue::pmoc_reverse_add( osg::QReflect_Operation *par){
_model->remove(par->_model);
emit CollectionChanged();
}

///DefaultConstructor////////////////
osg::QReflect_OperationQueue::QReflect_OperationQueue(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::OperationQueue*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_OperationQueue::~QReflect_OperationQueue( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_OperationQueue::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_OperationQueue::createInstance( ){
osg::ref_ptr<osg::OperationQueue> osg_OperationQueue_ptr	;
osg_OperationQueue_ptr = new osg::OperationQueue ()	;
Instance o(PMOCGETMETACLASS("osg::OperationQueue"),(void*)osg_OperationQueue_ptr.get()		,true);
_managedinstances.insert(osg_OperationQueue_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_OperationQueue::MetaQReflect_OperationQueue():MetaQQuickClass( "osg::OperationQueue"){
_typeid=&typeid(osg::OperationQueue );           qRegisterMetaType<QMLOperationQueue>();
qmlRegisterType<QReflect_OperationQueue>("pmoc.osg",1,0,"QReflect_OperationQueue");
           qmlRegisterType<QMLOperationQueue>("pmoc.osg",1,0,"QMLOperationQueue");
       PMOCACTION("get","add","remove");
};
const std::string osg::MetaQReflect_OperationQueue::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_OperationQueue::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_OperationQueue::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_OperationQueue::createQQModel(Instance*i){ //return new MetaQReflect_OperationQueue_QModel(i);}
QMLOperationQueue *ret =new QMLOperationQueue(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Referenced *mother =dynamic_cast<osg::Referenced*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Referenced");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Referenced model for osg::OperationQueueis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Referenced");
if(!cl){std::cerr<<"osg::Referenced QQModel for osg::OperationQueueis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_OperationThread_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/OperationThread_pmoc.hpp>
#include <customCode/osg/OperationThread_pmoc.hpp>
#include <customCode/osg/Referenced_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osg/OperationThread_pmoc.hpp>
#include <osg/Object>
#include <osg/Object_pmoc.hpp>
#include <osg/OperationThread>
#include <osg/OperationThread_pmoc.hpp>
using namespace pmoc;
 int  osg::QReflect_OperationThread::cancel(){
return _model->cancel();

}
 void osg::QReflect_OperationThread::remove(const  QString &p0){
 _model->remove(std::string(p0.toStdString()));

}
 void osg::QReflect_OperationThread::removeAllOperations(){
 _model->removeAllOperations();

}
 void osg::QReflect_OperationThread::run(){
 _model->run();

}
const bool osg::QReflect_OperationThread::getDone()const{return _model->getDone();}
osg::QReflect_Object * osg::QReflect_OperationThread::getParent()const{
PMOCSAFEADDOBJECT(*_model->getParent(),inst);
return inst.isValid()?((osg::QReflect_Object * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_OperationQueue * osg::QReflect_OperationThread::getOperationQueue()const{
PMOCSAFEADDOBJECT(*_model->getOperationQueue(),inst);
return inst.isValid()?((osg::QReflect_OperationQueue * )inst.model->createQQModel(&inst)):NULL;
}
void   osg::QReflect_OperationThread::add( osg::QReflect_Operation *par){
_model->add(par->_model);
}
void   osg::QReflect_OperationThread::pmoc_reverse_add( osg::QReflect_Operation *par){
_model->remove(par->_model);
emit CollectionChanged();
}
void  osg::QReflect_OperationThread::setDone(const bool &par){_model->setDone(par);emit DoneChanged(par);}
void osg::QReflect_OperationThread::pmoc_reverse_setOperationQueue( osg::QReflect_OperationQueue *par){_model->setOperationQueue(NULL);
emit OperationQueueChanged(NULL);
}
void osg::QReflect_OperationThread::pmoc_reverse_setParent( osg::QReflect_Object *par){_model->setParent(NULL);
emit ParentChanged(NULL);
}
void osg::QReflect_OperationThread::setOperationQueue( osg::QReflect_OperationQueue *par){_model->setOperationQueue(par->_model);
emit OperationQueueChanged(par);
}
void osg::QReflect_OperationThread::setParent( osg::QReflect_Object *par){_model->setParent(par->_model);
emit ParentChanged(par);
}

///DefaultConstructor////////////////
osg::QReflect_OperationThread::QReflect_OperationThread(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::OperationThread*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_OperationThread::~QReflect_OperationThread( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_OperationThread::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_OperationThread::createInstance( ){
osg::ref_ptr<osg::OperationThread> osg_OperationThread_ptr	;
osg_OperationThread_ptr = new osg::OperationThread ()	;
Instance o(PMOCGETMETACLASS("osg::OperationThread"),(void*)osg_OperationThread_ptr.get()		,true);
_managedinstances.insert(osg_OperationThread_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_OperationThread::MetaQReflect_OperationThread():MetaQQuickClass( "osg::OperationThread"){
_typeid=&typeid(osg::OperationThread );           qRegisterMetaType<QMLOperationThread>();
qmlRegisterType<QReflect_OperationThread>("pmoc.osg",1,0,"QReflect_OperationThread");
           qmlRegisterType<QMLOperationThread>("pmoc.osg",1,0,"QMLOperationThread");
       PMOCACTION("get","add","remove");
       PMOCACTION("getOperationQueue","setOperationQueue","unsetOperationQueue");
       PMOCACTION("getParent","setParent","unsetParent");
};
const std::string osg::MetaQReflect_OperationThread::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_OperationThread::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_OperationThread::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_OperationThread::createQQModel(Instance*i){ //return new MetaQReflect_OperationThread_QModel(i);}
QMLOperationThread *ret =new QMLOperationThread(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Referenced *mother =dynamic_cast<osg::Referenced*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Referenced");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Referenced model for osg::OperationThreadis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Referenced");
if(!cl){std::cerr<<"osg::Referenced QQModel for osg::OperationThreadis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_OperationThread_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/OperationThread_pmoc.hpp>
#include <customCode/osg/OperationThread_pmoc.hpp>
#include <customCode/osg/Referenced_pmoc.hpp>
using namespace pmoc;

///DefaultConstructor////////////////
osg::QReflect_RefBlock::QReflect_RefBlock(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::RefBlock*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_RefBlock::~QReflect_RefBlock( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_RefBlock::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_RefBlock::createInstance( ){
osg::ref_ptr<osg::RefBlock> osg_RefBlock_ptr	;
osg_RefBlock_ptr = new osg::RefBlock ()	;
Instance o(PMOCGETMETACLASS("osg::RefBlock"),(void*)osg_RefBlock_ptr.get()		,true);
_managedinstances.insert(osg_RefBlock_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_RefBlock::MetaQReflect_RefBlock():MetaQQuickClass( "osg::RefBlock"){
_typeid=&typeid(osg::RefBlock );           qRegisterMetaType<QMLRefBlock>();
qmlRegisterType<QReflect_RefBlock>("pmoc.osg",1,0,"QReflect_RefBlock");
           qmlRegisterType<QMLRefBlock>("pmoc.osg",1,0,"QMLRefBlock");
};
const std::string osg::MetaQReflect_RefBlock::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_RefBlock::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_RefBlock::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_RefBlock::createQQModel(Instance*i){ //return new MetaQReflect_RefBlock_QModel(i);}
QMLRefBlock *ret =new QMLRefBlock(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Referenced *mother =dynamic_cast<osg::Referenced*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Referenced");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Referenced model for osg::RefBlockis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Referenced");
if(!cl){std::cerr<<"osg::Referenced QQModel for osg::RefBlockis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_OperationThread_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/OperationThread_pmoc.hpp>
#include <customCode/osg/OperationThread_pmoc.hpp>
#include <customCode/osg/Referenced_pmoc.hpp>
using namespace pmoc;

///DefaultConstructor////////////////
osg::QReflect_RefBlockCount::QReflect_RefBlockCount(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::RefBlockCount*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_RefBlockCount::~QReflect_RefBlockCount( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_RefBlockCount::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_RefBlockCount::createInstance( ){
std::cerr<<"osg::RefBlockCount is not instanciable"<<std::endl;return Instance();


}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_RefBlockCount::MetaQReflect_RefBlockCount():MetaQQuickClass( "osg::RefBlockCount"){
_typeid=&typeid(osg::RefBlockCount );           qRegisterMetaType<QMLRefBlockCount>();
qmlRegisterType<QReflect_RefBlockCount>("pmoc.osg",1,0,"QReflect_RefBlockCount");
           qmlRegisterType<QMLRefBlockCount>("pmoc.osg",1,0,"QMLRefBlockCount");
};
const std::string osg::MetaQReflect_RefBlockCount::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_RefBlockCount::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_RefBlockCount::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_RefBlockCount::createQQModel(Instance*i){ //return new MetaQReflect_RefBlockCount_QModel(i);}
QMLRefBlockCount *ret =new QMLRefBlockCount(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Referenced *mother =dynamic_cast<osg::Referenced*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Referenced");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Referenced model for osg::RefBlockCountis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Referenced");
if(!cl){std::cerr<<"osg::Referenced QQModel for osg::RefBlockCountis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_OperationThread_pmoc.cpp"
#endif


