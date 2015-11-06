#include <osg/BufferObject>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/BufferObject_pmoc.hpp>
#include <customCode/osg/BufferObject_pmoc.hpp>
#include <customCode/osg/BufferObject_pmoc.hpp>
using namespace pmoc;

///DefaultConstructor////////////////
osg::QReflect_AtomicCounterBufferObject::QReflect_AtomicCounterBufferObject(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::AtomicCounterBufferObject*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_AtomicCounterBufferObject::~QReflect_AtomicCounterBufferObject( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_AtomicCounterBufferObject::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_AtomicCounterBufferObject::createInstance( ){
osg::ref_ptr<osg::AtomicCounterBufferObject> osg_AtomicCounterBufferObject_ptr	;
osg_AtomicCounterBufferObject_ptr = new osg::AtomicCounterBufferObject ()	;
Instance o(PMOCGETMETACLASS("osg::AtomicCounterBufferObject"),(void*)osg_AtomicCounterBufferObject_ptr.get()		,true);
_managedinstances.insert(osg_AtomicCounterBufferObject_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_AtomicCounterBufferObject::MetaQReflect_AtomicCounterBufferObject():MetaQQuickClass( "osg::AtomicCounterBufferObject"){
_typeid=&typeid(osg::AtomicCounterBufferObject );           qRegisterMetaType<QMLAtomicCounterBufferObject>();
qmlRegisterType<QReflect_AtomicCounterBufferObject>("pmoc.osg",1,0,"QReflect_AtomicCounterBufferObject");
           qmlRegisterType<QMLAtomicCounterBufferObject>("pmoc.osg",1,0,"QMLAtomicCounterBufferObject");
};
const std::string osg::MetaQReflect_AtomicCounterBufferObject::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_AtomicCounterBufferObject::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_AtomicCounterBufferObject::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_AtomicCounterBufferObject::createQQModel(Instance*i){ //return new MetaQReflect_AtomicCounterBufferObject_QModel(i);}
QMLAtomicCounterBufferObject *ret =new QMLAtomicCounterBufferObject(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::BufferObject *mother =dynamic_cast<osg::BufferObject*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::BufferObject");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::BufferObject model for osg::AtomicCounterBufferObjectis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::BufferObject");
if(!cl){std::cerr<<"osg::BufferObject QQModel for osg::AtomicCounterBufferObjectis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_BufferObject_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/BufferObject_pmoc.hpp>
#include <customCode/osg/BufferObject_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osg/BufferObject_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <osg/BufferObject>
#include <osg/BufferObject_pmoc.hpp>
#include <osg/Object>
using namespace pmoc;
 bool  osg::QReflect_BufferData::isSameKindAs(osg::QReflect_Object *p0)const{
return _model->isSameKindAs(p0->_model);

}
 unsigned int  osg::QReflect_BufferData::getNumClients()const{
return _model->getNumClients();

}
 void osg::QReflect_BufferData::dirty(){
 _model->dirty();

}
 void osg::QReflect_BufferData::resizeGLObjectBuffers( unsigned int p0){
 _model->resizeGLObjectBuffers(p0);

}
const  char*  osg::QReflect_BufferData::className()const{
return _model->className();

}
const  char*  osg::QReflect_BufferData::libraryName()const{
return _model->libraryName();

}
const unsigned int osg::QReflect_BufferData::getBufferIndex()const{return _model->getBufferIndex();}
const unsigned int osg::QReflect_BufferData::getModifiedCount()const{return _model->getModifiedCount();}
osg::QReflect_BufferObject * osg::QReflect_BufferData::getBufferObject()const{
PMOCSAFEADDOBJECT(*_model->getBufferObject(),inst);
return inst.isValid()?((osg::QReflect_BufferObject * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_GLBufferObject*osg::QReflect_BufferData::getGLBufferObject( unsigned int p0)const{
PMOCSAFEADDOBJECT(*_model->getGLBufferObject(p0),inst);
return inst.isValid()?((osg::QReflect_GLBufferObject * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_GLBufferObject*osg::QReflect_BufferData::getOrCreateGLBufferObject( unsigned int p0)const{
PMOCSAFEADDOBJECT(*_model->getOrCreateGLBufferObject(p0),inst);
return inst.isValid()?((osg::QReflect_GLBufferObject * )inst.model->createQQModel(&inst)):NULL;
}
void   osg::QReflect_BufferData::addClient( osg::QReflect_Object *par){
_model->addClient(par->_model);
}
void   osg::QReflect_BufferData::pmoc_reverse_addClient( osg::QReflect_Object *par){
_model->removeClient(par->_model);
emit ClientCollectionChanged();
}
void  osg::QReflect_BufferData::setBufferIndex(const unsigned int &par){_model->setBufferIndex(par);emit BufferIndexChanged(par);}
void  osg::QReflect_BufferData::setModifiedCount(const unsigned int &par){_model->setModifiedCount(par);emit ModifiedCountChanged(par);}
void osg::QReflect_BufferData::pmoc_reverse_setBufferObject( osg::QReflect_BufferObject *par){_model->setBufferObject(NULL);
emit BufferObjectChanged(NULL);
}
void osg::QReflect_BufferData::setBufferObject( osg::QReflect_BufferObject *par){_model->setBufferObject(par->_model);
emit BufferObjectChanged(par);
}

///DefaultConstructor////////////////
osg::QReflect_BufferData::QReflect_BufferData(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::BufferData*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_BufferData::~QReflect_BufferData( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_BufferData::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_BufferData::createInstance( ){
std::cerr<<"osg::BufferData is not instanciable"<<std::endl;return Instance();


}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_BufferData::MetaQReflect_BufferData():MetaQQuickClass( "osg::BufferData"){
_typeid=&typeid(osg::BufferData );           qRegisterMetaType<QMLBufferData>();
qmlRegisterType<QReflect_BufferData>("pmoc.osg",1,0,"QReflect_BufferData");
           qmlRegisterType<QMLBufferData>("pmoc.osg",1,0,"QMLBufferData");
       PMOCACTION("getBufferObject","setBufferObject","unsetBufferObject");
       PMOCACTION("getClient","addClient","removeClient");
};
const std::string osg::MetaQReflect_BufferData::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_BufferData::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_BufferData::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_BufferData::createQQModel(Instance*i){ //return new MetaQReflect_BufferData_QModel(i);}
QMLBufferData *ret =new QMLBufferData(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Object *mother =dynamic_cast<osg::Object*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Object");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Object model for osg::BufferDatais invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Object");
if(!cl){std::cerr<<"osg::Object QQModel for osg::BufferDatais not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_BufferObject_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/BufferObject_pmoc.hpp>
#include <customCode/osg/BufferObject_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osg/BufferObject_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <osg/BufferObject>
using namespace pmoc;
 GLenum  osg::QReflect_BufferObject::getTarget()const{
return _model->getTarget();

}
 GLenum  osg::QReflect_BufferObject::getUsage()const{
return _model->getUsage();

}
 bool  osg::QReflect_BufferObject::isSameKindAs(osg::QReflect_Object *p0)const{
return _model->isSameKindAs(p0->_model);

}
 unsigned int  osg::QReflect_BufferObject::computeRequiredBufferSize()const{
return _model->computeRequiredBufferSize();

}
 unsigned int  osg::QReflect_BufferObject::getNumBufferData()const{
return _model->getNumBufferData();

}
 void osg::QReflect_BufferObject::deleteBufferObject( unsigned int p0 , GLuint p1){
 _model->deleteBufferObject(p0 ,p1);

}
 void osg::QReflect_BufferObject::dirty(){
 _model->dirty();

}
 void osg::QReflect_BufferObject::removeBufferData( unsigned int p0){
 _model->removeBufferData(p0);

}
 void osg::QReflect_BufferObject::resizeGLObjectBuffers( unsigned int p0){
 _model->resizeGLObjectBuffers(p0);

}
 void osg::QReflect_BufferObject::setBufferData( unsigned int p0 ,osg::QReflect_BufferData *p1){
 _model->setBufferData(p0 ,p1->_model);

}
 void osg::QReflect_BufferObject::setGLBufferObject( unsigned int p0 ,osg::QReflect_GLBufferObject *p1){
 _model->setGLBufferObject(p0 ,p1->_model);

}
 void osg::QReflect_BufferObject::setTarget( GLenum p0){
 _model->setTarget(p0);

}
 void osg::QReflect_BufferObject::setUsage( GLenum p0){
 _model->setUsage(p0);

}
const  char*  osg::QReflect_BufferObject::className()const{
return _model->className();

}
const  char*  osg::QReflect_BufferObject::libraryName()const{
return _model->libraryName();

}
const bool osg::QReflect_BufferObject::getCopyDataAndReleaseGLBufferObject()const{return _model->getCopyDataAndReleaseGLBufferObject();}
osg::QReflect_BufferData*osg::QReflect_BufferObject::getBufferData( unsigned int p0)const{
PMOCSAFEADDOBJECT(*_model->getBufferData(p0),inst);
return inst.isValid()?((osg::QReflect_BufferData * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_BufferData*osg::QReflect_BufferObject::getBufferData( unsigned int p0){
PMOCSAFEADDOBJECT(*_model->getBufferData(p0),inst);
return inst.isValid()?((osg::QReflect_BufferData * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_GLBufferObject*osg::QReflect_BufferObject::getGLBufferObject( unsigned int p0)const{
PMOCSAFEADDOBJECT(*_model->getGLBufferObject(p0),inst);
return inst.isValid()?((osg::QReflect_GLBufferObject * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_GLBufferObject*osg::QReflect_BufferObject::getOrCreateGLBufferObject( unsigned int p0)const{
PMOCSAFEADDOBJECT(*_model->getOrCreateGLBufferObject(p0),inst);
return inst.isValid()?((osg::QReflect_GLBufferObject * )inst.model->createQQModel(&inst)):NULL;
}
void   osg::QReflect_BufferObject::addBufferData( osg::QReflect_BufferData *par){
_model->addBufferData(par->_model);
}
void   osg::QReflect_BufferObject::pmoc_reverse_addBufferData( osg::QReflect_BufferData *par){
_model->removeBufferData(par->_model);
emit BufferDataCollectionChanged();
}
void  osg::QReflect_BufferObject::setCopyDataAndReleaseGLBufferObject(const bool &par){_model->setCopyDataAndReleaseGLBufferObject(par);emit CopyDataAndReleaseGLBufferObjectChanged(par);}

///DefaultConstructor////////////////
osg::QReflect_BufferObject::QReflect_BufferObject(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::BufferObject*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_BufferObject::~QReflect_BufferObject( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_BufferObject::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_BufferObject::createInstance( ){
std::cerr<<"osg::BufferObject is not instanciable"<<std::endl;return Instance();


}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_BufferObject::MetaQReflect_BufferObject():MetaQQuickClass( "osg::BufferObject"){
_typeid=&typeid(osg::BufferObject );           qRegisterMetaType<QMLBufferObject>();
qmlRegisterType<QReflect_BufferObject>("pmoc.osg",1,0,"QReflect_BufferObject");
           qmlRegisterType<QMLBufferObject>("pmoc.osg",1,0,"QMLBufferObject");
       PMOCACTION("getBufferData","addBufferData","removeBufferData");
};
const std::string osg::MetaQReflect_BufferObject::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_BufferObject::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_BufferObject::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_BufferObject::createQQModel(Instance*i){ //return new MetaQReflect_BufferObject_QModel(i);}
QMLBufferObject *ret =new QMLBufferObject(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Object *mother =dynamic_cast<osg::Object*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Object");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Object model for osg::BufferObjectis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Object");
if(!cl){std::cerr<<"osg::Object QQModel for osg::BufferObjectis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_BufferObject_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/BufferObject_pmoc.hpp>
#include <customCode/osg/BufferObject_pmoc.hpp>
using namespace pmoc;
 void osg::QReflect_BufferObjectProfile::setProfile( GLenum p0 , GLenum p1 , unsigned int p2){
 _model->setProfile(p0 ,p1 ,p2);

}

///DefaultConstructor////////////////
osg::QReflect_BufferObjectProfile::QReflect_BufferObjectProfile(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::BufferObjectProfile*>(i->ptr);
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_BufferObjectProfile::~QReflect_BufferObjectProfile( ){
 }
///update this according _model new state
void osg::QReflect_BufferObjectProfile::updateModel(){
}
Instance osg::MetaQReflect_BufferObjectProfile::createInstance( ){
osg::BufferObjectProfile* osg_BufferObjectProfile_ptr	;
osg_BufferObjectProfile_ptr= new osg::BufferObjectProfile()	;
Instance o(PMOCGETMETACLASS("osg::BufferObjectProfile"),(void*)osg_BufferObjectProfile_ptr	,true);
_managedinstances.insert(osg_BufferObjectProfile_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_BufferObjectProfile::MetaQReflect_BufferObjectProfile():MetaQQuickClass( "osg::BufferObjectProfile"){
_typeid=&typeid(osg::BufferObjectProfile );           qRegisterMetaType<QMLBufferObjectProfile>();
qmlRegisterType<QReflect_BufferObjectProfile>("pmoc.osg",1,0,"QReflect_BufferObjectProfile");
           qmlRegisterType<QMLBufferObjectProfile>("pmoc.osg",1,0,"QMLBufferObjectProfile");
};
const std::string osg::MetaQReflect_BufferObjectProfile::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_BufferObjectProfile::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_BufferObjectProfile::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_BufferObjectProfile::createQQModel(Instance*i){ //return new MetaQReflect_BufferObjectProfile_QModel(i);}
QMLBufferObjectProfile *ret =new QMLBufferObjectProfile(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_BufferObject_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/BufferObject_pmoc.hpp>
#include <customCode/osg/BufferObject_pmoc.hpp>
#include <customCode/osg/BufferObject_pmoc.hpp>
using namespace pmoc;

///DefaultConstructor////////////////
osg::QReflect_ElementBufferObject::QReflect_ElementBufferObject(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::ElementBufferObject*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_ElementBufferObject::~QReflect_ElementBufferObject( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_ElementBufferObject::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_ElementBufferObject::createInstance( ){
osg::ref_ptr<osg::ElementBufferObject> osg_ElementBufferObject_ptr	;
osg_ElementBufferObject_ptr = new osg::ElementBufferObject ()	;
Instance o(PMOCGETMETACLASS("osg::ElementBufferObject"),(void*)osg_ElementBufferObject_ptr.get()		,true);
_managedinstances.insert(osg_ElementBufferObject_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_ElementBufferObject::MetaQReflect_ElementBufferObject():MetaQQuickClass( "osg::ElementBufferObject"){
_typeid=&typeid(osg::ElementBufferObject );           qRegisterMetaType<QMLElementBufferObject>();
qmlRegisterType<QReflect_ElementBufferObject>("pmoc.osg",1,0,"QReflect_ElementBufferObject");
           qmlRegisterType<QMLElementBufferObject>("pmoc.osg",1,0,"QMLElementBufferObject");
};
const std::string osg::MetaQReflect_ElementBufferObject::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_ElementBufferObject::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_ElementBufferObject::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_ElementBufferObject::createQQModel(Instance*i){ //return new MetaQReflect_ElementBufferObject_QModel(i);}
QMLElementBufferObject *ret =new QMLElementBufferObject(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::BufferObject *mother =dynamic_cast<osg::BufferObject*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::BufferObject");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::BufferObject model for osg::ElementBufferObjectis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::BufferObject");
if(!cl){std::cerr<<"osg::BufferObject QQModel for osg::ElementBufferObjectis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_BufferObject_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/BufferObject_pmoc.hpp>
#include <customCode/osg/BufferObject_pmoc.hpp>
#include <customCode/osg/BufferObject_pmoc.hpp>
#include <osg/BufferObject>
#include <osg/BufferObject_pmoc.hpp>
using namespace pmoc;
 GLuint  osg::QReflect_GLBufferObject::getGLObjectID()const{
return _model->getGLObjectID();

}
 GLuint&  osg::QReflect_GLBufferObject::getGLObjectID(){
return _model->getGLObjectID();

}
 bool  osg::QReflect_GLBufferObject::hasAllBufferDataBeenRead()const{
return _model->hasAllBufferDataBeenRead();

}
 bool  osg::QReflect_GLBufferObject::isDirty()const{
return _model->isDirty();

}
 bool  osg::QReflect_GLBufferObject::isPBOSupported()const{
return _model->isPBOSupported();

}
 int  osg::QReflect_GLBufferObject::getOffset( unsigned int p0)const{
return _model->getOffset(p0);

}
 unsigned int  osg::QReflect_GLBufferObject::getContextID()const{
return _model->getContextID();

}
 void osg::QReflect_GLBufferObject::assign(osg::QReflect_BufferObject *p0){
 _model->assign(p0->_model);

}
 void osg::QReflect_GLBufferObject::bindBuffer(){
 _model->bindBuffer();

}
 void osg::QReflect_GLBufferObject::clear(){
 _model->clear();

}
 void osg::QReflect_GLBufferObject::compileBuffer(){
 _model->compileBuffer();

}
 void osg::QReflect_GLBufferObject::deleteGLObject(){
 _model->deleteGLObject();

}
 void osg::QReflect_GLBufferObject::dirty(){
 _model->dirty();

}
 void osg::QReflect_GLBufferObject::release(){
 _model->release();

}
 void osg::QReflect_GLBufferObject::setBufferDataHasBeenRead(osg::QReflect_BufferData *p0){
 _model->setBufferDataHasBeenRead(p0->_model);

}
 void osg::QReflect_GLBufferObject::setProfile(osg::QReflect_BufferObjectProfile *p0){
 _model->setProfile(*p0->_model);

}
 void osg::QReflect_GLBufferObject::unbindBuffer(){
 _model->unbindBuffer();

}
osg::QReflect_BufferObject * osg::QReflect_GLBufferObject::getBufferObject()const{
PMOCSAFEADDOBJECT(*_model->getBufferObject(),inst);
return inst.isValid()?((osg::QReflect_BufferObject * )inst.model->createQQModel(&inst)):NULL;
}
void osg::QReflect_GLBufferObject::pmoc_reverse_setBufferObject( osg::QReflect_BufferObject *par){_model->setBufferObject(NULL);
emit BufferObjectChanged(NULL);
}
void osg::QReflect_GLBufferObject::setBufferObject( osg::QReflect_BufferObject *par){_model->setBufferObject(par->_model);
emit BufferObjectChanged(par);
}

///DefaultConstructor////////////////
osg::QReflect_GLBufferObject::QReflect_GLBufferObject(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::GLBufferObject*>(i->ptr);
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_GLBufferObject::~QReflect_GLBufferObject( ){
 }
///update this according _model new state
void osg::QReflect_GLBufferObject::updateModel(){
}
Instance osg::MetaQReflect_GLBufferObject::createInstance( ){
std::cerr<<"osg::GLBufferObject is not instanciable"<<std::endl;return Instance();


}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_GLBufferObject::MetaQReflect_GLBufferObject():MetaQQuickClass( "osg::GLBufferObject"){
_typeid=&typeid(osg::GLBufferObject );           qRegisterMetaType<QMLGLBufferObject>();
qmlRegisterType<QReflect_GLBufferObject>("pmoc.osg",1,0,"QReflect_GLBufferObject");
           qmlRegisterType<QMLGLBufferObject>("pmoc.osg",1,0,"QMLGLBufferObject");
       PMOCACTION("getBufferObject","setBufferObject","unsetBufferObject");
};
const std::string osg::MetaQReflect_GLBufferObject::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_GLBufferObject::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_GLBufferObject::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_GLBufferObject::createQQModel(Instance*i){ //return new MetaQReflect_GLBufferObject_QModel(i);}
QMLGLBufferObject *ret =new QMLGLBufferObject(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_BufferObject_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/BufferObject_pmoc.hpp>
#include <customCode/osg/BufferObject_pmoc.hpp>
#include <customCode/osg/BufferObject_pmoc.hpp>
#include <customCode/osg/FrameStamp_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_GLBufferObjectManager::hasSpace( unsigned int p0)const{
return _model->hasSpace(p0);

}
 bool  osg::QReflect_GLBufferObjectManager::makeSpace( unsigned int p0){
return _model->makeSpace(p0);

}
 double&  osg::QReflect_GLBufferObjectManager::getApplyTime(){
return _model->getApplyTime();

}
 double&  osg::QReflect_GLBufferObjectManager::getDeleteTime(){
return _model->getDeleteTime();

}
 double&  osg::QReflect_GLBufferObjectManager::getGenerateTime(){
return _model->getGenerateTime();

}
 unsigned int&  osg::QReflect_GLBufferObjectManager::getFrameNumber(){
return _model->getFrameNumber();

}
 unsigned int&  osg::QReflect_GLBufferObjectManager::getNumberApplied(){
return _model->getNumberApplied();

}
 unsigned int&  osg::QReflect_GLBufferObjectManager::getNumberDeleted(){
return _model->getNumberDeleted();

}
 unsigned int&  osg::QReflect_GLBufferObjectManager::getNumberFrames(){
return _model->getNumberFrames();

}
 unsigned int&  osg::QReflect_GLBufferObjectManager::getNumberGenerated(){
return _model->getNumberGenerated();

}
 void osg::QReflect_GLBufferObjectManager::deleteAllGLObjects(){
 _model->deleteAllGLObjects();

}
 void osg::QReflect_GLBufferObjectManager::discardAllDeletedGLObjects(){
 _model->discardAllDeletedGLObjects();

}
 void osg::QReflect_GLBufferObjectManager::discardAllGLObjects(){
 _model->discardAllGLObjects();

}
 void osg::QReflect_GLBufferObjectManager::flushAllDeletedGLObjects(){
 _model->flushAllDeletedGLObjects();

}
 void osg::QReflect_GLBufferObjectManager::flushDeletedGLObjects( double p0 , double &p1){
 _model->flushDeletedGLObjects(p0 ,p1);

}
 void osg::QReflect_GLBufferObjectManager::handlePendingOrphandedGLBufferObjects(){
 _model->handlePendingOrphandedGLBufferObjects();

}
 void osg::QReflect_GLBufferObjectManager::newFrame(osg::QReflect_FrameStamp *p0){
 _model->newFrame(p0->_model);

}
 void osg::QReflect_GLBufferObjectManager::resetStats(){
 _model->resetStats();

}
const unsigned int osg::QReflect_GLBufferObjectManager::getCurrGLBufferObjectPoolSize()const{return _model->getCurrGLBufferObjectPoolSize();}
const unsigned int osg::QReflect_GLBufferObjectManager::getMaxGLBufferObjectPoolSize()const{return _model->getMaxGLBufferObjectPoolSize();}
const unsigned int osg::QReflect_GLBufferObjectManager::getNumberActiveGLBufferObjects()const{return _model->getNumberActiveGLBufferObjects();}
const unsigned int osg::QReflect_GLBufferObjectManager::getNumberOrphanedGLBufferObjects()const{return _model->getNumberOrphanedGLBufferObjects();}
osg::QReflect_GLBufferObjectSet*osg::QReflect_GLBufferObjectManager::getGLBufferObjectSet(osg::QReflect_BufferObjectProfile *p0){
PMOCSAFEADDOBJECT(*_model->getGLBufferObjectSet(*p0->_model),inst);
return inst.isValid()?((osg::QReflect_GLBufferObjectSet * )inst.model->createQQModel(&inst)):NULL;
}
void  osg::QReflect_GLBufferObjectManager::setCurrGLBufferObjectPoolSize(const unsigned int &par){_model->setCurrGLBufferObjectPoolSize(par);emit CurrGLBufferObjectPoolSizeChanged(par);}
void  osg::QReflect_GLBufferObjectManager::setMaxGLBufferObjectPoolSize(const unsigned int &par){_model->setMaxGLBufferObjectPoolSize(par);emit MaxGLBufferObjectPoolSizeChanged(par);}
void  osg::QReflect_GLBufferObjectManager::setNumberActiveGLBufferObjects(const unsigned int &par){_model->setNumberActiveGLBufferObjects(par);emit NumberActiveGLBufferObjectsChanged(par);}
void  osg::QReflect_GLBufferObjectManager::setNumberOrphanedGLBufferObjects(const unsigned int &par){_model->setNumberOrphanedGLBufferObjects(par);emit NumberOrphanedGLBufferObjectsChanged(par);}

///DefaultConstructor////////////////
osg::QReflect_GLBufferObjectManager::QReflect_GLBufferObjectManager(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::GLBufferObjectManager*>(i->ptr);
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_GLBufferObjectManager::~QReflect_GLBufferObjectManager( ){
 }
///update this according _model new state
void osg::QReflect_GLBufferObjectManager::updateModel(){
}
Instance osg::MetaQReflect_GLBufferObjectManager::createInstance( ){
std::cerr<<"osg::GLBufferObjectManager is not instanciable"<<std::endl;return Instance();


}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_GLBufferObjectManager::MetaQReflect_GLBufferObjectManager():MetaQQuickClass( "osg::GLBufferObjectManager"){
_typeid=&typeid(osg::GLBufferObjectManager );           qRegisterMetaType<QMLGLBufferObjectManager>();
qmlRegisterType<QReflect_GLBufferObjectManager>("pmoc.osg",1,0,"QReflect_GLBufferObjectManager");
           qmlRegisterType<QMLGLBufferObjectManager>("pmoc.osg",1,0,"QMLGLBufferObjectManager");
};
const std::string osg::MetaQReflect_GLBufferObjectManager::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_GLBufferObjectManager::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_GLBufferObjectManager::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_GLBufferObjectManager::createQQModel(Instance*i){ //return new MetaQReflect_GLBufferObjectManager_QModel(i);}
QMLGLBufferObjectManager *ret =new QMLGLBufferObjectManager(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_BufferObject_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/BufferObject_pmoc.hpp>
#include <customCode/osg/BufferObject_pmoc.hpp>
#include <customCode/osg/Referenced_pmoc.hpp>
#include <customCode/osg/BufferObject_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_GLBufferObjectSet::checkConsistency()const{
return _model->checkConsistency();

}
 bool  osg::QReflect_GLBufferObjectSet::makeSpace( unsigned int &p0){
return _model->makeSpace(p0);

}
 unsigned int  osg::QReflect_GLBufferObjectSet::computeNumGLBufferObjectsInList()const{
return _model->computeNumGLBufferObjectsInList();

}
 unsigned int  osg::QReflect_GLBufferObjectSet::getNumOfGLBufferObjects()const{
return _model->getNumOfGLBufferObjects();

}
 unsigned int  osg::QReflect_GLBufferObjectSet::getNumOrphans()const{
return _model->getNumOrphans();

}
 unsigned int  osg::QReflect_GLBufferObjectSet::getNumPendingOrphans()const{
return _model->getNumPendingOrphans();

}
 unsigned int  osg::QReflect_GLBufferObjectSet::size()const{
return _model->size();

}
 void osg::QReflect_GLBufferObjectSet::addToBack(osg::QReflect_GLBufferObject *p0){
 _model->addToBack(p0->_model);

}
 void osg::QReflect_GLBufferObjectSet::deleteAllGLBufferObjects(){
 _model->deleteAllGLBufferObjects();

}
 void osg::QReflect_GLBufferObjectSet::discardAllDeletedGLBufferObjects(){
 _model->discardAllDeletedGLBufferObjects();

}
 void osg::QReflect_GLBufferObjectSet::discardAllGLBufferObjects(){
 _model->discardAllGLBufferObjects();

}
 void osg::QReflect_GLBufferObjectSet::flushAllDeletedGLBufferObjects(){
 _model->flushAllDeletedGLBufferObjects();

}
 void osg::QReflect_GLBufferObjectSet::flushDeletedGLBufferObjects( double p0 , double &p1){
 _model->flushDeletedGLBufferObjects(p0 ,p1);

}
 void osg::QReflect_GLBufferObjectSet::handlePendingOrphandedGLBufferObjects(){
 _model->handlePendingOrphandedGLBufferObjects();

}
 void osg::QReflect_GLBufferObjectSet::moveToBack(osg::QReflect_GLBufferObject *p0){
 _model->moveToBack(p0->_model);

}
 void osg::QReflect_GLBufferObjectSet::moveToSet(osg::QReflect_GLBufferObject *p0 ,osg::QReflect_GLBufferObjectSet *p1){
 _model->moveToSet(p0->_model ,p1->_model);

}
 void osg::QReflect_GLBufferObjectSet::orphan(osg::QReflect_GLBufferObject *p0){
 _model->orphan(p0->_model);

}
 void osg::QReflect_GLBufferObjectSet::remove(osg::QReflect_GLBufferObject *p0){
 _model->remove(p0->_model);

}
osg::QReflect_GLBufferObjectManager*osg::QReflect_GLBufferObjectSet::getParent(){
PMOCSAFEADDOBJECT(*_model->getParent(),inst);
return inst.isValid()?((osg::QReflect_GLBufferObjectManager * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osg::QReflect_GLBufferObjectSet::QReflect_GLBufferObjectSet(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::GLBufferObjectSet*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_GLBufferObjectSet::~QReflect_GLBufferObjectSet( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_GLBufferObjectSet::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_GLBufferObjectSet::createInstance( ){
std::cerr<<"osg::GLBufferObjectSet is not instanciable"<<std::endl;return Instance();


}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_GLBufferObjectSet::MetaQReflect_GLBufferObjectSet():MetaQQuickClass( "osg::GLBufferObjectSet"){
_typeid=&typeid(osg::GLBufferObjectSet );           qRegisterMetaType<QMLGLBufferObjectSet>();
qmlRegisterType<QReflect_GLBufferObjectSet>("pmoc.osg",1,0,"QReflect_GLBufferObjectSet");
           qmlRegisterType<QMLGLBufferObjectSet>("pmoc.osg",1,0,"QMLGLBufferObjectSet");
};
const std::string osg::MetaQReflect_GLBufferObjectSet::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_GLBufferObjectSet::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_GLBufferObjectSet::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_GLBufferObjectSet::createQQModel(Instance*i){ //return new MetaQReflect_GLBufferObjectSet_QModel(i);}
QMLGLBufferObjectSet *ret =new QMLGLBufferObjectSet(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Referenced *mother =dynamic_cast<osg::Referenced*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Referenced");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Referenced model for osg::GLBufferObjectSetis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Referenced");
if(!cl){std::cerr<<"osg::Referenced QQModel for osg::GLBufferObjectSetis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_BufferObject_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/BufferObject_pmoc.hpp>
#include <customCode/osg/BufferObject_pmoc.hpp>
#include <customCode/osg/BufferObject_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_PixelBufferObject::isPBOSupported( unsigned int p0)const{
return _model->isPBOSupported(p0);

}

///DefaultConstructor////////////////
osg::QReflect_PixelBufferObject::QReflect_PixelBufferObject(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::PixelBufferObject*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_PixelBufferObject::~QReflect_PixelBufferObject( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_PixelBufferObject::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_PixelBufferObject::createInstance( ){
osg::ref_ptr<osg::PixelBufferObject> osg_PixelBufferObject_ptr	;
osg_PixelBufferObject_ptr = new osg::PixelBufferObject ()	;
Instance o(PMOCGETMETACLASS("osg::PixelBufferObject"),(void*)osg_PixelBufferObject_ptr.get()		,true);
_managedinstances.insert(osg_PixelBufferObject_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_PixelBufferObject::MetaQReflect_PixelBufferObject():MetaQQuickClass( "osg::PixelBufferObject"){
_typeid=&typeid(osg::PixelBufferObject );           qRegisterMetaType<QMLPixelBufferObject>();
qmlRegisterType<QReflect_PixelBufferObject>("pmoc.osg",1,0,"QReflect_PixelBufferObject");
           qmlRegisterType<QMLPixelBufferObject>("pmoc.osg",1,0,"QMLPixelBufferObject");
};
const std::string osg::MetaQReflect_PixelBufferObject::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_PixelBufferObject::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_PixelBufferObject::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_PixelBufferObject::createQQModel(Instance*i){ //return new MetaQReflect_PixelBufferObject_QModel(i);}
QMLPixelBufferObject *ret =new QMLPixelBufferObject(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::BufferObject *mother =dynamic_cast<osg::BufferObject*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::BufferObject");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::BufferObject model for osg::PixelBufferObjectis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::BufferObject");
if(!cl){std::cerr<<"osg::BufferObject QQModel for osg::PixelBufferObjectis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_BufferObject_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/BufferObject_pmoc.hpp>
#include <customCode/osg/BufferObject_pmoc.hpp>
#include <customCode/osg/BufferObject_pmoc.hpp>
using namespace pmoc;
 void osg::QReflect_PixelDataBufferObject::resizeGLObjectBuffers( unsigned int p0){
 _model->resizeGLObjectBuffers(p0);

}
 void osg::QReflect_PixelDataBufferObject::unbindBuffer( unsigned int p0)const{
 _model->unbindBuffer(p0);

}
const unsigned int osg::QReflect_PixelDataBufferObject::getDataSize()const{return _model->getDataSize();}
osg::QReflect_PixelDataBufferObject::Mode  osg::QReflect_PixelDataBufferObject::getMode( unsigned int p0)const{
osg::QReflect_PixelDataBufferObject::Mode ret=static_cast<osg::QReflect_PixelDataBufferObject::Mode>( _model->getMode(p0));return  ret;

}
void  osg::QReflect_PixelDataBufferObject::setDataSize(const unsigned int &par){_model->setDataSize(par);emit DataSizeChanged(par);}

///DefaultConstructor////////////////
osg::QReflect_PixelDataBufferObject::QReflect_PixelDataBufferObject(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::PixelDataBufferObject*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_PixelDataBufferObject::~QReflect_PixelDataBufferObject( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_PixelDataBufferObject::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_PixelDataBufferObject::createInstance( ){
osg::ref_ptr<osg::PixelDataBufferObject> osg_PixelDataBufferObject_ptr	;
osg_PixelDataBufferObject_ptr = new osg::PixelDataBufferObject ()	;
Instance o(PMOCGETMETACLASS("osg::PixelDataBufferObject"),(void*)osg_PixelDataBufferObject_ptr.get()		,true);
_managedinstances.insert(osg_PixelDataBufferObject_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_PixelDataBufferObject::MetaQReflect_PixelDataBufferObject():MetaQQuickClass( "osg::PixelDataBufferObject"){
_typeid=&typeid(osg::PixelDataBufferObject );           qRegisterMetaType<QMLPixelDataBufferObject>();
qmlRegisterType<QReflect_PixelDataBufferObject>("pmoc.osg",1,0,"QReflect_PixelDataBufferObject");
           qmlRegisterType<QMLPixelDataBufferObject>("pmoc.osg",1,0,"QMLPixelDataBufferObject");
};
const std::string osg::MetaQReflect_PixelDataBufferObject::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_PixelDataBufferObject::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_PixelDataBufferObject::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_PixelDataBufferObject::createQQModel(Instance*i){ //return new MetaQReflect_PixelDataBufferObject_QModel(i);}
QMLPixelDataBufferObject *ret =new QMLPixelDataBufferObject(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::BufferObject *mother =dynamic_cast<osg::BufferObject*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::BufferObject");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::BufferObject model for osg::PixelDataBufferObjectis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::BufferObject");
if(!cl){std::cerr<<"osg::BufferObject QQModel for osg::PixelDataBufferObjectis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_BufferObject_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/BufferObject_pmoc.hpp>
#include <customCode/osg/BufferObject_pmoc.hpp>
#include <customCode/osg/BufferObject_pmoc.hpp>
using namespace pmoc;

///DefaultConstructor////////////////
osg::QReflect_ShaderStorageBufferObject::QReflect_ShaderStorageBufferObject(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::ShaderStorageBufferObject*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_ShaderStorageBufferObject::~QReflect_ShaderStorageBufferObject( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_ShaderStorageBufferObject::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_ShaderStorageBufferObject::createInstance( ){
osg::ref_ptr<osg::ShaderStorageBufferObject> osg_ShaderStorageBufferObject_ptr	;
osg_ShaderStorageBufferObject_ptr = new osg::ShaderStorageBufferObject ()	;
Instance o(PMOCGETMETACLASS("osg::ShaderStorageBufferObject"),(void*)osg_ShaderStorageBufferObject_ptr.get()		,true);
_managedinstances.insert(osg_ShaderStorageBufferObject_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_ShaderStorageBufferObject::MetaQReflect_ShaderStorageBufferObject():MetaQQuickClass( "osg::ShaderStorageBufferObject"){
_typeid=&typeid(osg::ShaderStorageBufferObject );           qRegisterMetaType<QMLShaderStorageBufferObject>();
qmlRegisterType<QReflect_ShaderStorageBufferObject>("pmoc.osg",1,0,"QReflect_ShaderStorageBufferObject");
           qmlRegisterType<QMLShaderStorageBufferObject>("pmoc.osg",1,0,"QMLShaderStorageBufferObject");
};
const std::string osg::MetaQReflect_ShaderStorageBufferObject::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_ShaderStorageBufferObject::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_ShaderStorageBufferObject::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_ShaderStorageBufferObject::createQQModel(Instance*i){ //return new MetaQReflect_ShaderStorageBufferObject_QModel(i);}
QMLShaderStorageBufferObject *ret =new QMLShaderStorageBufferObject(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::BufferObject *mother =dynamic_cast<osg::BufferObject*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::BufferObject");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::BufferObject model for osg::ShaderStorageBufferObjectis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::BufferObject");
if(!cl){std::cerr<<"osg::BufferObject QQModel for osg::ShaderStorageBufferObjectis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_BufferObject_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/BufferObject_pmoc.hpp>
#include <customCode/osg/BufferObject_pmoc.hpp>
#include <customCode/osg/BufferObject_pmoc.hpp>
using namespace pmoc;

///DefaultConstructor////////////////
osg::QReflect_UniformBufferObject::QReflect_UniformBufferObject(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::UniformBufferObject*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_UniformBufferObject::~QReflect_UniformBufferObject( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_UniformBufferObject::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_UniformBufferObject::createInstance( ){
osg::ref_ptr<osg::UniformBufferObject> osg_UniformBufferObject_ptr	;
osg_UniformBufferObject_ptr = new osg::UniformBufferObject ()	;
Instance o(PMOCGETMETACLASS("osg::UniformBufferObject"),(void*)osg_UniformBufferObject_ptr.get()		,true);
_managedinstances.insert(osg_UniformBufferObject_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_UniformBufferObject::MetaQReflect_UniformBufferObject():MetaQQuickClass( "osg::UniformBufferObject"){
_typeid=&typeid(osg::UniformBufferObject );           qRegisterMetaType<QMLUniformBufferObject>();
qmlRegisterType<QReflect_UniformBufferObject>("pmoc.osg",1,0,"QReflect_UniformBufferObject");
           qmlRegisterType<QMLUniformBufferObject>("pmoc.osg",1,0,"QMLUniformBufferObject");
};
const std::string osg::MetaQReflect_UniformBufferObject::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_UniformBufferObject::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_UniformBufferObject::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_UniformBufferObject::createQQModel(Instance*i){ //return new MetaQReflect_UniformBufferObject_QModel(i);}
QMLUniformBufferObject *ret =new QMLUniformBufferObject(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::BufferObject *mother =dynamic_cast<osg::BufferObject*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::BufferObject");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::BufferObject model for osg::UniformBufferObjectis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::BufferObject");
if(!cl){std::cerr<<"osg::BufferObject QQModel for osg::UniformBufferObjectis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_BufferObject_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/BufferObject_pmoc.hpp>
#include <customCode/osg/BufferObject_pmoc.hpp>
#include <customCode/osg/BufferObject_pmoc.hpp>
using namespace pmoc;

///DefaultConstructor////////////////
osg::QReflect_VertexBufferObject::QReflect_VertexBufferObject(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::VertexBufferObject*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_VertexBufferObject::~QReflect_VertexBufferObject( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_VertexBufferObject::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_VertexBufferObject::createInstance( ){
osg::ref_ptr<osg::VertexBufferObject> osg_VertexBufferObject_ptr	;
osg_VertexBufferObject_ptr = new osg::VertexBufferObject ()	;
Instance o(PMOCGETMETACLASS("osg::VertexBufferObject"),(void*)osg_VertexBufferObject_ptr.get()		,true);
_managedinstances.insert(osg_VertexBufferObject_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_VertexBufferObject::MetaQReflect_VertexBufferObject():MetaQQuickClass( "osg::VertexBufferObject"){
_typeid=&typeid(osg::VertexBufferObject );           qRegisterMetaType<QMLVertexBufferObject>();
qmlRegisterType<QReflect_VertexBufferObject>("pmoc.osg",1,0,"QReflect_VertexBufferObject");
           qmlRegisterType<QMLVertexBufferObject>("pmoc.osg",1,0,"QMLVertexBufferObject");
};
const std::string osg::MetaQReflect_VertexBufferObject::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_VertexBufferObject::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_VertexBufferObject::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_VertexBufferObject::createQQModel(Instance*i){ //return new MetaQReflect_VertexBufferObject_QModel(i);}
QMLVertexBufferObject *ret =new QMLVertexBufferObject(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::BufferObject *mother =dynamic_cast<osg::BufferObject*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::BufferObject");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::BufferObject model for osg::VertexBufferObjectis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::BufferObject");
if(!cl){std::cerr<<"osg::BufferObject QQModel for osg::VertexBufferObjectis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_BufferObject_pmoc.cpp"
#endif


