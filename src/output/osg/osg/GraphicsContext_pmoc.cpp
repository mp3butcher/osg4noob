#include <osg/GraphicsContext>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/GraphicsContext_pmoc.hpp>
#include <customCode/osg/GraphicsContext_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osg/GraphicsContext_pmoc.hpp>
#include <customCode/osg/GraphicsThread_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osg/OperationThread_pmoc.hpp>
#include <customCode/osg/State_pmoc.hpp>
#include <customCode/osg/Vec4f_pmoc.hpp>
using namespace pmoc;
 GLbitfield  osg::QReflect_GraphicsContext:: getClearMask()const{
//params checking
return _model->getClearMask();

}
 GLuint  osg::QReflect_GraphicsContext:: getDefaultFboId()const{
//params checking
return _model->getDefaultFboId();

}
 bool  osg::QReflect_GraphicsContext:: isCurrent()const{
//params checking
return _model->isCurrent();

}
 bool  osg::QReflect_GraphicsContext:: isRealized()const{
//params checking
return _model->isRealized();

}
 bool  osg::QReflect_GraphicsContext:: isSameKindAs(osg::QReflect_Object  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_GraphicsContext::isSameKindAs : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->isSameKindAs(p0->_model);

}
 bool  osg::QReflect_GraphicsContext:: makeContextCurrent(osg::QReflect_GraphicsContext  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_GraphicsContext::makeContextCurrent : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->makeContextCurrent(p0->_model);

}
 bool  osg::QReflect_GraphicsContext:: makeCurrent(){
//params checking
return _model->makeCurrent();

}
 bool  osg::QReflect_GraphicsContext:: realize(){
//params checking
return _model->realize();

}
 bool  osg::QReflect_GraphicsContext:: releaseContext(){
//params checking
return _model->releaseContext();

}
 double  osg::QReflect_GraphicsContext:: getTimeSinceLastClear()const{
//params checking
return _model->getTimeSinceLastClear();

}
 unsigned int  osg::QReflect_GraphicsContext:: createNewContextID(){
//params checking
return _model->createNewContextID();

}
 unsigned int  osg::QReflect_GraphicsContext:: getMaxContextID(){
//params checking
return _model->getMaxContextID();

}
 void osg::QReflect_GraphicsContext::add(osg::QReflect_Operation  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_GraphicsContext::add : parameter n.0 is NULL\n"<<endl;return;}
 _model->add(p0->_model);

}
 void osg::QReflect_GraphicsContext::bindPBufferToTexture( GLenum  p0){
//params checking
 _model->bindPBufferToTexture(p0);

}
 void osg::QReflect_GraphicsContext::clear(){
//params checking
 _model->clear();

}
 void osg::QReflect_GraphicsContext::close( bool  p0){
//params checking
 _model->close(p0);

}
 void osg::QReflect_GraphicsContext::createGraphicsThread(){
//params checking
 _model->createGraphicsThread();

}
 void osg::QReflect_GraphicsContext::decrementContextIDUsageCount( unsigned int  p0){
//params checking
 _model->decrementContextIDUsageCount(p0);

}
 void osg::QReflect_GraphicsContext::incrementContextIDUsageCount( unsigned int  p0){
//params checking
 _model->incrementContextIDUsageCount(p0);

}
 void osg::QReflect_GraphicsContext::remove(const  QString  &p0){
//params checking
 _model->remove(std::string(p0.toStdString()));

}
 void osg::QReflect_GraphicsContext::remove(osg::QReflect_Operation  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_GraphicsContext::remove : parameter n.0 is NULL\n"<<endl;return;}
 _model->remove(p0->_model);

}
 void osg::QReflect_GraphicsContext::removeAllOperations(){
//params checking
 _model->removeAllOperations();

}
 void osg::QReflect_GraphicsContext::resized( int  p0 , int  p1 , int  p2 , int  p3){
//params checking
 _model->resized(p0 ,p1 ,p2 ,p3);

}
 void osg::QReflect_GraphicsContext::resizedImplementation( int  p0 , int  p1 , int  p2 , int  p3){
//params checking
 _model->resizedImplementation(p0 ,p1 ,p2 ,p3);

}
 void osg::QReflect_GraphicsContext::runOperations(){
//params checking
 _model->runOperations();

}
 void osg::QReflect_GraphicsContext::setClearColor(osg::QReflect_Vec4f  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_GraphicsContext::setClearColor : parameter n.0 is NULL\n"<<endl;return;}
 _model->setClearColor(*p0->_model);

}
 void osg::QReflect_GraphicsContext::setClearMask( GLbitfield  p0){
//params checking
 _model->setClearMask(p0);
emit ClearMaskChanged();

}
 void osg::QReflect_GraphicsContext::setCompileContext( unsigned int  p0 ,osg::QReflect_GraphicsContext  *p1){
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_GraphicsContext::setCompileContext : parameter n.1 is NULL\n"<<endl;return;}
 _model->setCompileContext(p0 ,p1->_model);

}
 void osg::QReflect_GraphicsContext::setDefaultFboId( GLuint  p0){
//params checking
 _model->setDefaultFboId(p0);
emit DefaultFboIdChanged();

}
 void osg::QReflect_GraphicsContext::setGraphicsThread(osg::QReflect_GraphicsThread  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_GraphicsContext::setGraphicsThread : parameter n.0 is NULL\n"<<endl;return;}
 _model->setGraphicsThread(p0->_model);
emit GraphicsThreadChanged();

}
 void osg::QReflect_GraphicsContext::setState(osg::QReflect_State  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_GraphicsContext::setState : parameter n.0 is NULL\n"<<endl;return;}
 _model->setState(p0->_model);
emit StateChanged();

}
 void osg::QReflect_GraphicsContext::swapBuffers(){
//params checking
 _model->swapBuffers();

}
 void osg::QReflect_GraphicsContext::swapBuffersCallbackOrImplemenation(){
//params checking
 _model->swapBuffersCallbackOrImplemenation();

}
const  char*  osg::QReflect_GraphicsContext:: className()const{
//params checking
return _model->className();

}
const  char*  osg::QReflect_GraphicsContext:: libraryName()const{
//params checking
return _model->libraryName();

}
osg::QReflect_GraphicsContext*osg::QReflect_GraphicsContext::getCompileContext( unsigned int  p0){
//params checking
PMOCSAFEADDOBJECT(*_model->getCompileContext(p0),inst);
return inst.isValid()?((osg::QReflect_GraphicsContext * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_GraphicsContext*osg::QReflect_GraphicsContext::getOrCreateCompileContext( unsigned int  p0){
//params checking
PMOCSAFEADDOBJECT(*_model->getOrCreateCompileContext(p0),inst);
return inst.isValid()?((osg::QReflect_GraphicsContext * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_GraphicsThread*osg::QReflect_GraphicsContext::getGraphicsThread()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getGraphicsThread(),inst);
return inst.isValid()?((osg::QReflect_GraphicsThread * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_GraphicsThread*osg::QReflect_GraphicsContext::getGraphicsThread(){
//params checking
PMOCSAFEADDOBJECT(*_model->getGraphicsThread(),inst);
return inst.isValid()?((osg::QReflect_GraphicsThread * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Operation*osg::QReflect_GraphicsContext::getCurrentOperation(){
//params checking
PMOCSAFEADDOBJECT(*_model->getCurrentOperation(),inst);
return inst.isValid()?((osg::QReflect_Operation * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_RefBlock*osg::QReflect_GraphicsContext::getOperationsBlock(){
//params checking
PMOCSAFEADDOBJECT(*_model->getOperationsBlock(),inst);
return inst.isValid()?((osg::QReflect_RefBlock * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_State*osg::QReflect_GraphicsContext::getState()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getState(),inst);
return inst.isValid()?((osg::QReflect_State * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_State*osg::QReflect_GraphicsContext::getState(){
//params checking
PMOCSAFEADDOBJECT(*_model->getState(),inst);
return inst.isValid()?((osg::QReflect_State * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osg::QReflect_GraphicsContext::QReflect_GraphicsContext(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::GraphicsContext*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_GraphicsContext::~QReflect_GraphicsContext( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_GraphicsContext::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_GraphicsContext::createInstance( ){
std::cerr<<"osg::GraphicsContext is not instanciable"<<std::endl;return Instance();


}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_GraphicsContext::MetaQReflect_GraphicsContext():MetaQQuickClass( "osg::GraphicsContext"){
_typeid=&typeid(osg::GraphicsContext );
           qRegisterMetaType<osg::QMLGraphicsContext>();
           qRegisterMetaType<osg::QMLGraphicsContext*>("pmoc.osg.QMLGraphicsContext");
qmlRegisterType<osg::QReflect_GraphicsContext>("pmoc.osg",1,0,"QReflect_GraphicsContext");
           qmlRegisterType<osg::QMLGraphicsContext>("pmoc.osg",1,0,"QMLGraphicsContext");
};
const std::string osg::MetaQReflect_GraphicsContext::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_GraphicsContext::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_GraphicsContext::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_GraphicsContext::createQQModel(const Instance*i){ //return new MetaQReflect_GraphicsContext_QModel(i);}
QMLGraphicsContext *ret =new QMLGraphicsContext(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Object *mother =dynamic_cast<osg::Object*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Object");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Object model for osg::GraphicsContextis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Object");
if(!cl){std::cerr<<"osg::Object QQModel for osg::GraphicsContextis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_GraphicsContext_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/GraphicsContext_pmoc.hpp>
#include <customCode/osg/GraphicsContext_pmoc.hpp>
#include <customCode/osg/GraphicsContext_pmoc.hpp>
using namespace pmoc;
 void osg::QReflect_SyncSwapBuffersCallback::swapBuffersImplementation(osg::QReflect_GraphicsContext  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_SyncSwapBuffersCallback::swapBuffersImplementation : parameter n.0 is NULL\n"<<endl;return;}
 _model->swapBuffersImplementation(p0->_model);

}

///DefaultConstructor////////////////
osg::QReflect_SyncSwapBuffersCallback::QReflect_SyncSwapBuffersCallback(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::SyncSwapBuffersCallback*>(i->ptr);
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_SyncSwapBuffersCallback::~QReflect_SyncSwapBuffersCallback( ){
 }
///update this according _model new state
void osg::QReflect_SyncSwapBuffersCallback::updateModel(){
}
Instance osg::MetaQReflect_SyncSwapBuffersCallback::createInstance( ){
osg::ref_ptr<osg::SyncSwapBuffersCallback> osg_SyncSwapBuffersCallback_ptr	;
osg_SyncSwapBuffersCallback_ptr = new osg::SyncSwapBuffersCallback ()	;
Instance o(PMOCGETMETACLASS("osg::SyncSwapBuffersCallback"),(void*)osg_SyncSwapBuffersCallback_ptr.get()		,true);
_managedinstances.insert(osg_SyncSwapBuffersCallback_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_SyncSwapBuffersCallback::MetaQReflect_SyncSwapBuffersCallback():MetaQQuickClass( "osg::SyncSwapBuffersCallback"){
_typeid=&typeid(osg::SyncSwapBuffersCallback );
           qRegisterMetaType<osg::QMLSyncSwapBuffersCallback>();
           qRegisterMetaType<osg::QMLSyncSwapBuffersCallback*>("pmoc.osg.QMLSyncSwapBuffersCallback");
qmlRegisterType<osg::QReflect_SyncSwapBuffersCallback>("pmoc.osg",1,0,"QReflect_SyncSwapBuffersCallback");
           qmlRegisterType<osg::QMLSyncSwapBuffersCallback>("pmoc.osg",1,0,"QMLSyncSwapBuffersCallback");
};
const std::string osg::MetaQReflect_SyncSwapBuffersCallback::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_SyncSwapBuffersCallback::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_SyncSwapBuffersCallback::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_SyncSwapBuffersCallback::createQQModel(const Instance*i){ //return new MetaQReflect_SyncSwapBuffersCallback_QModel(i);}
QMLSyncSwapBuffersCallback *ret =new QMLSyncSwapBuffersCallback(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_GraphicsContext_pmoc.cpp"
#endif




