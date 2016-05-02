#include <osg/GraphicsThread>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/GraphicsThread_pmoc.hpp>
#include <customCode/osg/GraphicsThread_pmoc.hpp>
#include <customCode/osg/OperationThread_pmoc.hpp>
using namespace pmoc;

///DefaultConstructor////////////////
osg::QReflect_BarrierOperation::QReflect_BarrierOperation(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::BarrierOperation*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_BarrierOperation::~QReflect_BarrierOperation( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_BarrierOperation::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_BarrierOperation::createInstance( ){
std::cerr<<"osg::BarrierOperation is not instanciable"<<std::endl;return Instance();


}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_BarrierOperation::MetaQReflect_BarrierOperation():MetaQQuickClass( "osg::BarrierOperation"){
_typeid=&typeid(osg::BarrierOperation );
           qRegisterMetaType<osg::QMLBarrierOperation>();
           qRegisterMetaType<osg::QMLBarrierOperation*>("pmoc.osg.QMLBarrierOperation");
qmlRegisterType<osg::QReflect_BarrierOperation>("pmoc.osg",1,0,"QReflect_BarrierOperation");
           qmlRegisterType<osg::QMLBarrierOperation>("pmoc.osg",1,0,"QMLBarrierOperation");
};
const std::string osg::MetaQReflect_BarrierOperation::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_BarrierOperation::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_BarrierOperation::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_BarrierOperation::createQQModel(const Instance*i){ //return new MetaQReflect_BarrierOperation_QModel(i);}
QMLBarrierOperation *ret =new QMLBarrierOperation(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Operation *mother =dynamic_cast<osg::Operation*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Operation");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Operation model for osg::BarrierOperationis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Operation");
if(!cl){std::cerr<<"osg::Operation QQModel for osg::BarrierOperationis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_GraphicsThread_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/GraphicsThread_pmoc.hpp>
#include <customCode/osg/GraphicsThread_pmoc.hpp>
#include <customCode/osg/GraphicsThread_pmoc.hpp>
using namespace pmoc;

///DefaultConstructor////////////////
osg::QReflect_BlockAndFlushOperation::QReflect_BlockAndFlushOperation(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::BlockAndFlushOperation*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_BlockAndFlushOperation::~QReflect_BlockAndFlushOperation( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_BlockAndFlushOperation::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_BlockAndFlushOperation::createInstance( ){
std::cerr<<"osg::BlockAndFlushOperation is not instanciable"<<std::endl;return Instance();


}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_BlockAndFlushOperation::MetaQReflect_BlockAndFlushOperation():MetaQQuickClass( "osg::BlockAndFlushOperation"){
_typeid=&typeid(osg::BlockAndFlushOperation );
           qRegisterMetaType<osg::QMLBlockAndFlushOperation>();
           qRegisterMetaType<osg::QMLBlockAndFlushOperation*>("pmoc.osg.QMLBlockAndFlushOperation");
qmlRegisterType<osg::QReflect_BlockAndFlushOperation>("pmoc.osg",1,0,"QReflect_BlockAndFlushOperation");
           qmlRegisterType<osg::QMLBlockAndFlushOperation>("pmoc.osg",1,0,"QMLBlockAndFlushOperation");
};
const std::string osg::MetaQReflect_BlockAndFlushOperation::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_BlockAndFlushOperation::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_BlockAndFlushOperation::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_BlockAndFlushOperation::createQQModel(const Instance*i){ //return new MetaQReflect_BlockAndFlushOperation_QModel(i);}
QMLBlockAndFlushOperation *ret =new QMLBlockAndFlushOperation(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::GraphicsOperation *mother =dynamic_cast<osg::GraphicsOperation*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::GraphicsOperation");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::GraphicsOperation model for osg::BlockAndFlushOperationis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::GraphicsOperation");
if(!cl){std::cerr<<"osg::GraphicsOperation QQModel for osg::BlockAndFlushOperationis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_GraphicsThread_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/GraphicsThread_pmoc.hpp>
#include <customCode/osg/GraphicsThread_pmoc.hpp>
#include <customCode/osg/State_pmoc.hpp>
using namespace pmoc;
 void osg::QReflect_EndOfDynamicDrawBlock::completed(osg::QReflect_State  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_EndOfDynamicDrawBlock::completed : parameter n.0 is NULL\n"<<endl;return;}
 _model->completed(p0->_model);

}

///DefaultConstructor////////////////
osg::QReflect_EndOfDynamicDrawBlock::QReflect_EndOfDynamicDrawBlock(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::EndOfDynamicDrawBlock*>(i->ptr);
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_EndOfDynamicDrawBlock::~QReflect_EndOfDynamicDrawBlock( ){
 }
///update this according _model new state
void osg::QReflect_EndOfDynamicDrawBlock::updateModel(){
}
Instance osg::MetaQReflect_EndOfDynamicDrawBlock::createInstance( ){
std::cerr<<"osg::EndOfDynamicDrawBlock is not instanciable"<<std::endl;return Instance();


}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_EndOfDynamicDrawBlock::MetaQReflect_EndOfDynamicDrawBlock():MetaQQuickClass( "osg::EndOfDynamicDrawBlock"){
_typeid=&typeid(osg::EndOfDynamicDrawBlock );
           qRegisterMetaType<osg::QMLEndOfDynamicDrawBlock>();
           qRegisterMetaType<osg::QMLEndOfDynamicDrawBlock*>("pmoc.osg.QMLEndOfDynamicDrawBlock");
qmlRegisterType<osg::QReflect_EndOfDynamicDrawBlock>("pmoc.osg",1,0,"QReflect_EndOfDynamicDrawBlock");
           qmlRegisterType<osg::QMLEndOfDynamicDrawBlock>("pmoc.osg",1,0,"QMLEndOfDynamicDrawBlock");
};
const std::string osg::MetaQReflect_EndOfDynamicDrawBlock::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_EndOfDynamicDrawBlock::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_EndOfDynamicDrawBlock::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_EndOfDynamicDrawBlock::createQQModel(const Instance*i){ //return new MetaQReflect_EndOfDynamicDrawBlock_QModel(i);}
QMLEndOfDynamicDrawBlock *ret =new QMLEndOfDynamicDrawBlock(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_GraphicsThread_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/GraphicsThread_pmoc.hpp>
#include <customCode/osg/GraphicsThread_pmoc.hpp>
#include <customCode/osg/GraphicsThread_pmoc.hpp>
using namespace pmoc;

///DefaultConstructor////////////////
osg::QReflect_FlushDeletedGLObjectsOperation::QReflect_FlushDeletedGLObjectsOperation(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::FlushDeletedGLObjectsOperation*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_FlushDeletedGLObjectsOperation::~QReflect_FlushDeletedGLObjectsOperation( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_FlushDeletedGLObjectsOperation::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_FlushDeletedGLObjectsOperation::createInstance( ){
std::cerr<<"osg::FlushDeletedGLObjectsOperation is not instanciable"<<std::endl;return Instance();


}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_FlushDeletedGLObjectsOperation::MetaQReflect_FlushDeletedGLObjectsOperation():MetaQQuickClass( "osg::FlushDeletedGLObjectsOperation"){
_typeid=&typeid(osg::FlushDeletedGLObjectsOperation );
           qRegisterMetaType<osg::QMLFlushDeletedGLObjectsOperation>();
           qRegisterMetaType<osg::QMLFlushDeletedGLObjectsOperation*>("pmoc.osg.QMLFlushDeletedGLObjectsOperation");
qmlRegisterType<osg::QReflect_FlushDeletedGLObjectsOperation>("pmoc.osg",1,0,"QReflect_FlushDeletedGLObjectsOperation");
           qmlRegisterType<osg::QMLFlushDeletedGLObjectsOperation>("pmoc.osg",1,0,"QMLFlushDeletedGLObjectsOperation");
};
const std::string osg::MetaQReflect_FlushDeletedGLObjectsOperation::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_FlushDeletedGLObjectsOperation::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_FlushDeletedGLObjectsOperation::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_FlushDeletedGLObjectsOperation::createQQModel(const Instance*i){ //return new MetaQReflect_FlushDeletedGLObjectsOperation_QModel(i);}
QMLFlushDeletedGLObjectsOperation *ret =new QMLFlushDeletedGLObjectsOperation(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::GraphicsOperation *mother =dynamic_cast<osg::GraphicsOperation*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::GraphicsOperation");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::GraphicsOperation model for osg::FlushDeletedGLObjectsOperationis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::GraphicsOperation");
if(!cl){std::cerr<<"osg::GraphicsOperation QQModel for osg::FlushDeletedGLObjectsOperationis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_GraphicsThread_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/GraphicsThread_pmoc.hpp>
#include <customCode/osg/GraphicsThread_pmoc.hpp>
#include <customCode/osg/OperationThread_pmoc.hpp>
using namespace pmoc;

///DefaultConstructor////////////////
osg::QReflect_GraphicsOperation::QReflect_GraphicsOperation(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::GraphicsOperation*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_GraphicsOperation::~QReflect_GraphicsOperation( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_GraphicsOperation::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_GraphicsOperation::createInstance( ){
std::cerr<<"osg::GraphicsOperation is not instanciable"<<std::endl;return Instance();


}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_GraphicsOperation::MetaQReflect_GraphicsOperation():MetaQQuickClass( "osg::GraphicsOperation"){
_typeid=&typeid(osg::GraphicsOperation );
           qRegisterMetaType<osg::QMLGraphicsOperation>();
           qRegisterMetaType<osg::QMLGraphicsOperation*>("pmoc.osg.QMLGraphicsOperation");
qmlRegisterType<osg::QReflect_GraphicsOperation>("pmoc.osg",1,0,"QReflect_GraphicsOperation");
           qmlRegisterType<osg::QMLGraphicsOperation>("pmoc.osg",1,0,"QMLGraphicsOperation");
};
const std::string osg::MetaQReflect_GraphicsOperation::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_GraphicsOperation::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_GraphicsOperation::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_GraphicsOperation::createQQModel(const Instance*i){ //return new MetaQReflect_GraphicsOperation_QModel(i);}
QMLGraphicsOperation *ret =new QMLGraphicsOperation(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Operation *mother =dynamic_cast<osg::Operation*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Operation");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Operation model for osg::GraphicsOperationis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Operation");
if(!cl){std::cerr<<"osg::Operation QQModel for osg::GraphicsOperationis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_GraphicsThread_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/GraphicsThread_pmoc.hpp>
#include <customCode/osg/GraphicsThread_pmoc.hpp>
#include <customCode/osg/OperationThread_pmoc.hpp>
using namespace pmoc;
 void osg::QReflect_GraphicsThread::run(){
//params checking
 _model->run();

}

///DefaultConstructor////////////////
osg::QReflect_GraphicsThread::QReflect_GraphicsThread(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::GraphicsThread*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_GraphicsThread::~QReflect_GraphicsThread( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_GraphicsThread::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_GraphicsThread::createInstance( ){
osg::ref_ptr<osg::GraphicsThread> osg_GraphicsThread_ptr	;
osg_GraphicsThread_ptr = new osg::GraphicsThread ()	;
Instance o(PMOCGETMETACLASS("osg::GraphicsThread"),(void*)osg_GraphicsThread_ptr.get()		,true);
_managedinstances.insert(osg_GraphicsThread_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_GraphicsThread::MetaQReflect_GraphicsThread():MetaQQuickClass( "osg::GraphicsThread"){
_typeid=&typeid(osg::GraphicsThread );
           qRegisterMetaType<osg::QMLGraphicsThread>();
           qRegisterMetaType<osg::QMLGraphicsThread*>("pmoc.osg.QMLGraphicsThread");
qmlRegisterType<osg::QReflect_GraphicsThread>("pmoc.osg",1,0,"QReflect_GraphicsThread");
           qmlRegisterType<osg::QMLGraphicsThread>("pmoc.osg",1,0,"QMLGraphicsThread");
};
const std::string osg::MetaQReflect_GraphicsThread::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_GraphicsThread::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_GraphicsThread::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_GraphicsThread::createQQModel(const Instance*i){ //return new MetaQReflect_GraphicsThread_QModel(i);}
QMLGraphicsThread *ret =new QMLGraphicsThread(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::OperationThread *mother =dynamic_cast<osg::OperationThread*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::OperationThread");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::OperationThread model for osg::GraphicsThreadis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::OperationThread");
if(!cl){std::cerr<<"osg::OperationThread QQModel for osg::GraphicsThreadis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_GraphicsThread_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/GraphicsThread_pmoc.hpp>
#include <customCode/osg/GraphicsThread_pmoc.hpp>
#include <customCode/osg/GraphicsThread_pmoc.hpp>
#include <customCode/osg/OperationThread_pmoc.hpp>
using namespace pmoc;

///DefaultConstructor////////////////
osg::QReflect_ReleaseContext_Block_MakeCurrentOperation::QReflect_ReleaseContext_Block_MakeCurrentOperation(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::ReleaseContext_Block_MakeCurrentOperation*>(i->ptr);
    _parentboxes[0]=0;
    _parentboxes[1]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_ReleaseContext_Block_MakeCurrentOperation::~QReflect_ReleaseContext_Block_MakeCurrentOperation( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
	if(_parentboxes[1])
delete _parentboxes[1];
}
///update this according _model new state
void osg::QReflect_ReleaseContext_Block_MakeCurrentOperation::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
	if(_parentboxes[1])
_parentboxes[1]->updateModel();
}
Instance osg::MetaQReflect_ReleaseContext_Block_MakeCurrentOperation::createInstance( ){
std::cerr<<"osg::ReleaseContext_Block_MakeCurrentOperation is not instanciable"<<std::endl;return Instance();


}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_ReleaseContext_Block_MakeCurrentOperation::MetaQReflect_ReleaseContext_Block_MakeCurrentOperation():MetaQQuickClass( "osg::ReleaseContext_Block_MakeCurrentOperation"){
_typeid=&typeid(osg::ReleaseContext_Block_MakeCurrentOperation );
           qRegisterMetaType<osg::QMLReleaseContext_Block_MakeCurrentOperation>();
           qRegisterMetaType<osg::QMLReleaseContext_Block_MakeCurrentOperation*>("pmoc.osg.QMLReleaseContext_Block_MakeCurrentOperation");
qmlRegisterType<osg::QReflect_ReleaseContext_Block_MakeCurrentOperation>("pmoc.osg",1,0,"QReflect_ReleaseContext_Block_MakeCurrentOperation");
           qmlRegisterType<osg::QMLReleaseContext_Block_MakeCurrentOperation>("pmoc.osg",1,0,"QMLReleaseContext_Block_MakeCurrentOperation");
};
const std::string osg::MetaQReflect_ReleaseContext_Block_MakeCurrentOperation::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_ReleaseContext_Block_MakeCurrentOperation::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_ReleaseContext_Block_MakeCurrentOperation::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_ReleaseContext_Block_MakeCurrentOperation::createQQModel(const Instance*i){ //return new MetaQReflect_ReleaseContext_Block_MakeCurrentOperation_QModel(i);}
QMLReleaseContext_Block_MakeCurrentOperation *ret =new QMLReleaseContext_Block_MakeCurrentOperation(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::GraphicsOperation *mother =dynamic_cast<osg::GraphicsOperation*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::GraphicsOperation");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::GraphicsOperation model for osg::ReleaseContext_Block_MakeCurrentOperationis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::GraphicsOperation");
if(!cl){std::cerr<<"osg::GraphicsOperation QQModel for osg::ReleaseContext_Block_MakeCurrentOperationis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
{
osg::RefBlock *mother =dynamic_cast<osg::RefBlock*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::RefBlock");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::RefBlock model for osg::ReleaseContext_Block_MakeCurrentOperationis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::RefBlock");
if(!cl){std::cerr<<"osg::RefBlock QQModel for osg::ReleaseContext_Block_MakeCurrentOperationis not found"<<std::endl;return ret;}
ret->_parentboxes[1]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_GraphicsThread_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/GraphicsThread_pmoc.hpp>
#include <customCode/osg/GraphicsThread_pmoc.hpp>
#include <customCode/osg/GraphicsThread_pmoc.hpp>
#include <customCode/osg/GraphicsContext_pmoc.hpp>
using namespace pmoc;
 void osg::QReflect_RunOperations::operator()(osg::QReflect_GraphicsContext  *p0){
//params checking
 _model->operator()(p0->_model);

}

///DefaultConstructor////////////////
osg::QReflect_RunOperations::QReflect_RunOperations(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::RunOperations*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_RunOperations::~QReflect_RunOperations( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_RunOperations::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_RunOperations::createInstance( ){
osg::ref_ptr<osg::RunOperations> osg_RunOperations_ptr	;
osg_RunOperations_ptr = new osg::RunOperations ()	;
Instance o(PMOCGETMETACLASS("osg::RunOperations"),(void*)osg_RunOperations_ptr.get()		,true);
_managedinstances.insert(osg_RunOperations_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_RunOperations::MetaQReflect_RunOperations():MetaQQuickClass( "osg::RunOperations"){
_typeid=&typeid(osg::RunOperations );
           qRegisterMetaType<osg::QMLRunOperations>();
           qRegisterMetaType<osg::QMLRunOperations*>("pmoc.osg.QMLRunOperations");
qmlRegisterType<osg::QReflect_RunOperations>("pmoc.osg",1,0,"QReflect_RunOperations");
           qmlRegisterType<osg::QMLRunOperations>("pmoc.osg",1,0,"QMLRunOperations");
};
const std::string osg::MetaQReflect_RunOperations::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_RunOperations::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_RunOperations::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_RunOperations::createQQModel(const Instance*i){ //return new MetaQReflect_RunOperations_QModel(i);}
QMLRunOperations *ret =new QMLRunOperations(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::GraphicsOperation *mother =dynamic_cast<osg::GraphicsOperation*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::GraphicsOperation");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::GraphicsOperation model for osg::RunOperationsis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::GraphicsOperation");
if(!cl){std::cerr<<"osg::GraphicsOperation QQModel for osg::RunOperationsis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_GraphicsThread_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/GraphicsThread_pmoc.hpp>
#include <customCode/osg/GraphicsThread_pmoc.hpp>
#include <customCode/osg/GraphicsThread_pmoc.hpp>
using namespace pmoc;

///DefaultConstructor////////////////
osg::QReflect_SwapBuffersOperation::QReflect_SwapBuffersOperation(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::SwapBuffersOperation*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_SwapBuffersOperation::~QReflect_SwapBuffersOperation( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_SwapBuffersOperation::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_SwapBuffersOperation::createInstance( ){
std::cerr<<"osg::SwapBuffersOperation is not instanciable"<<std::endl;return Instance();


}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_SwapBuffersOperation::MetaQReflect_SwapBuffersOperation():MetaQQuickClass( "osg::SwapBuffersOperation"){
_typeid=&typeid(osg::SwapBuffersOperation );
           qRegisterMetaType<osg::QMLSwapBuffersOperation>();
           qRegisterMetaType<osg::QMLSwapBuffersOperation*>("pmoc.osg.QMLSwapBuffersOperation");
qmlRegisterType<osg::QReflect_SwapBuffersOperation>("pmoc.osg",1,0,"QReflect_SwapBuffersOperation");
           qmlRegisterType<osg::QMLSwapBuffersOperation>("pmoc.osg",1,0,"QMLSwapBuffersOperation");
};
const std::string osg::MetaQReflect_SwapBuffersOperation::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_SwapBuffersOperation::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_SwapBuffersOperation::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_SwapBuffersOperation::createQQModel(const Instance*i){ //return new MetaQReflect_SwapBuffersOperation_QModel(i);}
QMLSwapBuffersOperation *ret =new QMLSwapBuffersOperation(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::GraphicsOperation *mother =dynamic_cast<osg::GraphicsOperation*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::GraphicsOperation");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::GraphicsOperation model for osg::SwapBuffersOperationis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::GraphicsOperation");
if(!cl){std::cerr<<"osg::GraphicsOperation QQModel for osg::SwapBuffersOperationis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_GraphicsThread_pmoc.cpp"
#endif




