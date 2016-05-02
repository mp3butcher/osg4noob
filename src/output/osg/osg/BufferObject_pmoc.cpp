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
osg::QReflect_AtomicCounterBufferObject::QReflect_AtomicCounterBufferObject(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osg::AtomicCounterBufferObject );
           qRegisterMetaType<osg::QMLAtomicCounterBufferObject>();
           qRegisterMetaType<osg::QMLAtomicCounterBufferObject*>("pmoc.osg.QMLAtomicCounterBufferObject");
qmlRegisterType<osg::QReflect_AtomicCounterBufferObject>("pmoc.osg",1,0,"QReflect_AtomicCounterBufferObject");
           qmlRegisterType<osg::QMLAtomicCounterBufferObject>("pmoc.osg",1,0,"QMLAtomicCounterBufferObject");
};
const std::string osg::MetaQReflect_AtomicCounterBufferObject::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_AtomicCounterBufferObject::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_AtomicCounterBufferObject::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_AtomicCounterBufferObject::createQQModel(const Instance*i){ //return new MetaQReflect_AtomicCounterBufferObject_QModel(i);}
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
#include <customCode/osg/Array_pmoc.hpp>
#include <customCode/osg/BufferObject_pmoc.hpp>
#include <customCode/osg/Image_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osg/PrimitiveSet_pmoc.hpp>
#include <customCode/osg/State_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_BufferData:: isSameKindAs(osg::QReflect_Object  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_BufferData::isSameKindAs : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->isSameKindAs(p0->_model);

}
 unsigned int  osg::QReflect_BufferData:: getBufferIndex()const{
//params checking
return _model->getBufferIndex();

}
 unsigned int  osg::QReflect_BufferData:: getModifiedCount()const{
//params checking
return _model->getModifiedCount();

}
 unsigned int  osg::QReflect_BufferData:: getNumClients()const{
//params checking
return _model->getNumClients();

}
 void osg::QReflect_BufferData::addClient(osg::QReflect_Object  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_BufferData::addClient : parameter n.0 is NULL\n"<<endl;return;}
 _model->addClient(p0->_model);
emit ClientCollectionChanged();

}
 void osg::QReflect_BufferData::dirty(){
//params checking
 _model->dirty();

}
 void osg::QReflect_BufferData::releaseGLObjects(osg::QReflect_State  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_BufferData::releaseGLObjects : parameter n.0 is NULL\n"<<endl;return;}
 _model->releaseGLObjects(p0->_model);

}
 void osg::QReflect_BufferData::removeClient(osg::QReflect_Object  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_BufferData::removeClient : parameter n.0 is NULL\n"<<endl;return;}
 _model->removeClient(p0->_model);
emit ClientCollectionChanged();

}
 void osg::QReflect_BufferData::resizeGLObjectBuffers( unsigned int  p0){
//params checking
 _model->resizeGLObjectBuffers(p0);

}
 void osg::QReflect_BufferData::setBufferIndex( unsigned int  p0){
//params checking
 _model->setBufferIndex(p0);
emit BufferIndexChanged();

}
 void osg::QReflect_BufferData::setBufferObject(osg::QReflect_BufferObject  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_BufferData::setBufferObject : parameter n.0 is NULL\n"<<endl;return;}
 _model->setBufferObject(p0->_model);
emit BufferObjectChanged();

}
 void osg::QReflect_BufferData::setModifiedCount( unsigned int  p0){
//params checking
 _model->setModifiedCount(p0);
emit ModifiedCountChanged();

}
const  char*  osg::QReflect_BufferData:: className()const{
//params checking
return _model->className();

}
const  char*  osg::QReflect_BufferData:: libraryName()const{
//params checking
return _model->libraryName();

}
osg::QReflect_Array*osg::QReflect_BufferData::asArray()const{
//params checking
PMOCSAFEADDOBJECT(*_model->asArray(),inst);
return inst.isValid()?((osg::QReflect_Array * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Array*osg::QReflect_BufferData::asArray(){
//params checking
PMOCSAFEADDOBJECT(*_model->asArray(),inst);
return inst.isValid()?((osg::QReflect_Array * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_BufferObject*osg::QReflect_BufferData::getBufferObject()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getBufferObject(),inst);
return inst.isValid()?((osg::QReflect_BufferObject * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_BufferObject*osg::QReflect_BufferData::getBufferObject(){
//params checking
PMOCSAFEADDOBJECT(*_model->getBufferObject(),inst);
return inst.isValid()?((osg::QReflect_BufferObject * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_GLBufferObject*osg::QReflect_BufferData::getGLBufferObject( unsigned int  p0)const{
//params checking
PMOCSAFEADDOBJECT(*_model->getGLBufferObject(p0),inst);
return inst.isValid()?((osg::QReflect_GLBufferObject * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_GLBufferObject*osg::QReflect_BufferData::getOrCreateGLBufferObject( unsigned int  p0)const{
//params checking
PMOCSAFEADDOBJECT(*_model->getOrCreateGLBufferObject(p0),inst);
return inst.isValid()?((osg::QReflect_GLBufferObject * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Image*osg::QReflect_BufferData::asImage()const{
//params checking
PMOCSAFEADDOBJECT(*_model->asImage(),inst);
return inst.isValid()?((osg::QReflect_Image * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Image*osg::QReflect_BufferData::asImage(){
//params checking
PMOCSAFEADDOBJECT(*_model->asImage(),inst);
return inst.isValid()?((osg::QReflect_Image * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_PrimitiveSet*osg::QReflect_BufferData::asPrimitiveSet()const{
//params checking
PMOCSAFEADDOBJECT(*_model->asPrimitiveSet(),inst);
return inst.isValid()?((osg::QReflect_PrimitiveSet * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_PrimitiveSet*osg::QReflect_BufferData::asPrimitiveSet(){
//params checking
PMOCSAFEADDOBJECT(*_model->asPrimitiveSet(),inst);
return inst.isValid()?((osg::QReflect_PrimitiveSet * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osg::QReflect_BufferData::QReflect_BufferData(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osg::BufferData );
           qRegisterMetaType<osg::QMLBufferData>();
           qRegisterMetaType<osg::QMLBufferData*>("pmoc.osg.QMLBufferData");
qmlRegisterType<osg::QReflect_BufferData>("pmoc.osg",1,0,"QReflect_BufferData");
           qmlRegisterType<osg::QMLBufferData>("pmoc.osg",1,0,"QMLBufferData");
};
const std::string osg::MetaQReflect_BufferData::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_BufferData::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_BufferData::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_BufferData::createQQModel(const Instance*i){ //return new MetaQReflect_BufferData_QModel(i);}
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
#include <customCode/osg/State_pmoc.hpp>
using namespace pmoc;
 GLenum  osg::QReflect_BufferObject:: getTarget()const{
//params checking
return _model->getTarget();

}
 GLenum  osg::QReflect_BufferObject:: getUsage()const{
//params checking
return _model->getUsage();

}
 bool  osg::QReflect_BufferObject:: getCopyDataAndReleaseGLBufferObject()const{
//params checking
return _model->getCopyDataAndReleaseGLBufferObject();

}
 bool  osg::QReflect_BufferObject:: isSameKindAs(osg::QReflect_Object  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_BufferObject::isSameKindAs : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->isSameKindAs(p0->_model);

}
 unsigned int  osg::QReflect_BufferObject:: addBufferData(osg::QReflect_BufferData  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_BufferObject::addBufferData : parameter n.0 is NULL\n"<<endl;return -1;}
emit BufferDataCollectionChanged();
return _model->addBufferData(p0->_model);

}
 unsigned int  osg::QReflect_BufferObject:: computeRequiredBufferSize()const{
//params checking
return _model->computeRequiredBufferSize();

}
 unsigned int  osg::QReflect_BufferObject:: getNumBufferData()const{
//params checking
return _model->getNumBufferData();

}
 void osg::QReflect_BufferObject::deleteBufferObject( unsigned int  p0 , GLuint  p1){
//params checking
 _model->deleteBufferObject(p0 ,p1);

}
 void osg::QReflect_BufferObject::dirty(){
//params checking
 _model->dirty();

}
 void osg::QReflect_BufferObject::releaseGLObjects(osg::QReflect_State  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_BufferObject::releaseGLObjects : parameter n.0 is NULL\n"<<endl;return;}
 _model->releaseGLObjects(p0->_model);

}
 void osg::QReflect_BufferObject::removeBufferData( unsigned int  p0){
//params checking
 _model->removeBufferData(p0);

}
 void osg::QReflect_BufferObject::removeBufferData(osg::QReflect_BufferData  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_BufferObject::removeBufferData : parameter n.0 is NULL\n"<<endl;return;}
 _model->removeBufferData(p0->_model);
emit BufferDataCollectionChanged();

}
 void osg::QReflect_BufferObject::resizeGLObjectBuffers( unsigned int  p0){
//params checking
 _model->resizeGLObjectBuffers(p0);

}
 void osg::QReflect_BufferObject::setBufferData( unsigned int  p0 ,osg::QReflect_BufferData  *p1){
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_BufferObject::setBufferData : parameter n.1 is NULL\n"<<endl;return;}
 _model->setBufferData(p0 ,p1->_model);

}
 void osg::QReflect_BufferObject::setCopyDataAndReleaseGLBufferObject( bool  p0){
//params checking
 _model->setCopyDataAndReleaseGLBufferObject(p0);
emit CopyDataAndReleaseGLBufferObjectChanged();

}
 void osg::QReflect_BufferObject::setGLBufferObject( unsigned int  p0 ,osg::QReflect_GLBufferObject  *p1){
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_BufferObject::setGLBufferObject : parameter n.1 is NULL\n"<<endl;return;}
 _model->setGLBufferObject(p0 ,p1->_model);

}
 void osg::QReflect_BufferObject::setTarget( GLenum  p0){
//params checking
 _model->setTarget(p0);
emit TargetChanged();

}
 void osg::QReflect_BufferObject::setUsage( GLenum  p0){
//params checking
 _model->setUsage(p0);
emit UsageChanged();

}
const  char*  osg::QReflect_BufferObject:: className()const{
//params checking
return _model->className();

}
const  char*  osg::QReflect_BufferObject:: libraryName()const{
//params checking
return _model->libraryName();

}
osg::QReflect_BufferData*osg::QReflect_BufferObject::getBufferData( unsigned int  p0)const{
//params checking
PMOCSAFEADDOBJECT(*_model->getBufferData(p0),inst);
return inst.isValid()?((osg::QReflect_BufferData * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_BufferData*osg::QReflect_BufferObject::getBufferData( unsigned int  p0){
//params checking
PMOCSAFEADDOBJECT(*_model->getBufferData(p0),inst);
return inst.isValid()?((osg::QReflect_BufferData * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_GLBufferObject*osg::QReflect_BufferObject::getGLBufferObject( unsigned int  p0)const{
//params checking
PMOCSAFEADDOBJECT(*_model->getGLBufferObject(p0),inst);
return inst.isValid()?((osg::QReflect_GLBufferObject * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_GLBufferObject*osg::QReflect_BufferObject::getOrCreateGLBufferObject( unsigned int  p0)const{
//params checking
PMOCSAFEADDOBJECT(*_model->getOrCreateGLBufferObject(p0),inst);
return inst.isValid()?((osg::QReflect_GLBufferObject * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osg::QReflect_BufferObject::QReflect_BufferObject(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osg::BufferObject );
           qRegisterMetaType<osg::QMLBufferObject>();
           qRegisterMetaType<osg::QMLBufferObject*>("pmoc.osg.QMLBufferObject");
qmlRegisterType<osg::QReflect_BufferObject>("pmoc.osg",1,0,"QReflect_BufferObject");
           qmlRegisterType<osg::QMLBufferObject>("pmoc.osg",1,0,"QMLBufferObject");
};
const std::string osg::MetaQReflect_BufferObject::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_BufferObject::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_BufferObject::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_BufferObject::createQQModel(const Instance*i){ //return new MetaQReflect_BufferObject_QModel(i);}
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
#include <customCode/osg/BufferObject_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_BufferObjectProfile:: operator<(osg::QReflect_BufferObjectProfile  &p0)const{
//params checking
return _model->operator<(*p0._model);

}
 bool  osg::QReflect_BufferObjectProfile:: operator==(osg::QReflect_BufferObjectProfile  &p0)const{
//params checking
return _model->operator==(*p0._model);

}
 void osg::QReflect_BufferObjectProfile::setProfile( GLenum  p0 , GLenum  p1 , unsigned int  p2){
//params checking
 _model->setProfile(p0 ,p1 ,p2);

}

///DefaultConstructor////////////////
osg::QReflect_BufferObjectProfile::QReflect_BufferObjectProfile(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osg::BufferObjectProfile );
           qRegisterMetaType<osg::QMLBufferObjectProfile>();
           qRegisterMetaType<osg::QMLBufferObjectProfile*>("pmoc.osg.QMLBufferObjectProfile");
qmlRegisterType<osg::QReflect_BufferObjectProfile>("pmoc.osg",1,0,"QReflect_BufferObjectProfile");
           qmlRegisterType<osg::QMLBufferObjectProfile>("pmoc.osg",1,0,"QMLBufferObjectProfile");
};
const std::string osg::MetaQReflect_BufferObjectProfile::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_BufferObjectProfile::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_BufferObjectProfile::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_BufferObjectProfile::createQQModel(const Instance*i){ //return new MetaQReflect_BufferObjectProfile_QModel(i);}
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
#include <customCode/osg/PrimitiveSet_pmoc.hpp>
using namespace pmoc;
 unsigned int  osg::QReflect_ElementBufferObject:: addDrawElements(osg::QReflect_DrawElements  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ElementBufferObject::addDrawElements : parameter n.0 is NULL\n"<<endl;return -1;}
emit DrawElementsCollectionChanged();
return _model->addDrawElements(p0->_model);

}
 void osg::QReflect_ElementBufferObject::removeDrawElements(osg::QReflect_DrawElements  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_ElementBufferObject::removeDrawElements : parameter n.0 is NULL\n"<<endl;return;}
 _model->removeDrawElements(p0->_model);
emit DrawElementsCollectionChanged();

}
 void osg::QReflect_ElementBufferObject::setDrawElements( unsigned int  p0 ,osg::QReflect_DrawElements  *p1){
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_ElementBufferObject::setDrawElements : parameter n.1 is NULL\n"<<endl;return;}
 _model->setDrawElements(p0 ,p1->_model);

}
osg::QReflect_DrawElements*osg::QReflect_ElementBufferObject::getDrawElements( unsigned int  p0)const{
//params checking
PMOCSAFEADDOBJECT(*_model->getDrawElements(p0),inst);
return inst.isValid()?((osg::QReflect_DrawElements * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_DrawElements*osg::QReflect_ElementBufferObject::getDrawElements( unsigned int  p0){
//params checking
PMOCSAFEADDOBJECT(*_model->getDrawElements(p0),inst);
return inst.isValid()?((osg::QReflect_DrawElements * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osg::QReflect_ElementBufferObject::QReflect_ElementBufferObject(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osg::ElementBufferObject );
           qRegisterMetaType<osg::QMLElementBufferObject>();
           qRegisterMetaType<osg::QMLElementBufferObject*>("pmoc.osg.QMLElementBufferObject");
qmlRegisterType<osg::QReflect_ElementBufferObject>("pmoc.osg",1,0,"QReflect_ElementBufferObject");
           qmlRegisterType<osg::QMLElementBufferObject>("pmoc.osg",1,0,"QMLElementBufferObject");
};
const std::string osg::MetaQReflect_ElementBufferObject::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_ElementBufferObject::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_ElementBufferObject::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_ElementBufferObject::createQQModel(const Instance*i){ //return new MetaQReflect_ElementBufferObject_QModel(i);}
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
#include <customCode/osg/Referenced_pmoc.hpp>
#include <customCode/osg/BufferObject_pmoc.hpp>
using namespace pmoc;
 GLuint  osg::QReflect_GLBufferObject:: getGLObjectID()const{
//params checking
return _model->getGLObjectID();

}
 GLuint&  osg::QReflect_GLBufferObject:: getGLObjectID(){
//params checking
return _model->getGLObjectID();

}
 bool  osg::QReflect_GLBufferObject:: hasAllBufferDataBeenRead()const{
//params checking
return _model->hasAllBufferDataBeenRead();

}
 bool  osg::QReflect_GLBufferObject:: isDirty()const{
//params checking
return _model->isDirty();

}
 bool  osg::QReflect_GLBufferObject:: isPBOSupported()const{
//params checking
return _model->isPBOSupported();

}
 int  osg::QReflect_GLBufferObject:: getOffset( unsigned int  p0)const{
//params checking
return _model->getOffset(p0);

}
 unsigned int  osg::QReflect_GLBufferObject:: getContextID()const{
//params checking
return _model->getContextID();

}
 void osg::QReflect_GLBufferObject::assign(osg::QReflect_BufferObject  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_GLBufferObject::assign : parameter n.0 is NULL\n"<<endl;return;}
 _model->assign(p0->_model);

}
 void osg::QReflect_GLBufferObject::bindBuffer(){
//params checking
 _model->bindBuffer();

}
 void osg::QReflect_GLBufferObject::clear(){
//params checking
 _model->clear();

}
 void osg::QReflect_GLBufferObject::compileBuffer(){
//params checking
 _model->compileBuffer();

}
 void osg::QReflect_GLBufferObject::deleteAllBufferObjects( unsigned int  p0){
//params checking
 _model->deleteAllBufferObjects(p0);

}
 void osg::QReflect_GLBufferObject::deleteGLObject(){
//params checking
 _model->deleteGLObject();

}
 void osg::QReflect_GLBufferObject::dirty(){
//params checking
 _model->dirty();

}
 void osg::QReflect_GLBufferObject::discardAllBufferObjects( unsigned int  p0){
//params checking
 _model->discardAllBufferObjects(p0);

}
 void osg::QReflect_GLBufferObject::discardAllDeletedBufferObjects( unsigned int  p0){
//params checking
 _model->discardAllDeletedBufferObjects(p0);

}
 void osg::QReflect_GLBufferObject::flushAllDeletedBufferObjects( unsigned int  p0){
//params checking
 _model->flushAllDeletedBufferObjects(p0);

}
 void osg::QReflect_GLBufferObject::flushDeletedBufferObjects( unsigned int  p0 , double  p1 , double  &p2){
//params checking
 _model->flushDeletedBufferObjects(p0 ,p1 ,p2);

}
 void osg::QReflect_GLBufferObject::releaseGLBufferObject( unsigned int  p0 ,osg::QReflect_GLBufferObject  *p1){
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_GLBufferObject::releaseGLBufferObject : parameter n.1 is NULL\n"<<endl;return;}
 _model->releaseGLBufferObject(p0 ,p1->_model);

}
 void osg::QReflect_GLBufferObject::setBufferDataHasBeenRead(osg::QReflect_BufferData  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_GLBufferObject::setBufferDataHasBeenRead : parameter n.0 is NULL\n"<<endl;return;}
 _model->setBufferDataHasBeenRead(p0->_model);

}
 void osg::QReflect_GLBufferObject::setBufferObject(osg::QReflect_BufferObject  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_GLBufferObject::setBufferObject : parameter n.0 is NULL\n"<<endl;return;}
 _model->setBufferObject(p0->_model);
emit BufferObjectChanged();

}
 void osg::QReflect_GLBufferObject::setProfile(osg::QReflect_BufferObjectProfile  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_GLBufferObject::setProfile : parameter n.0 is NULL\n"<<endl;return;}
 _model->setProfile(*p0->_model);

}
 void osg::QReflect_GLBufferObject::unbindBuffer(){
//params checking
 _model->unbindBuffer();

}
osg::QReflect_BufferObject*osg::QReflect_GLBufferObject::getBufferObject(){
//params checking
PMOCSAFEADDOBJECT(*_model->getBufferObject(),inst);
return inst.isValid()?((osg::QReflect_BufferObject * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osg::QReflect_GLBufferObject::QReflect_GLBufferObject(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::GLBufferObject*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_GLBufferObject::~QReflect_GLBufferObject( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_GLBufferObject::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_GLBufferObject::createInstance( ){
std::cerr<<"osg::GLBufferObject is not instanciable"<<std::endl;return Instance();


}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_GLBufferObject::MetaQReflect_GLBufferObject():MetaQQuickClass( "osg::GLBufferObject"){
_typeid=&typeid(osg::GLBufferObject );
           qRegisterMetaType<osg::QMLGLBufferObject>();
           qRegisterMetaType<osg::QMLGLBufferObject*>("pmoc.osg.QMLGLBufferObject");
qmlRegisterType<osg::QReflect_GLBufferObject>("pmoc.osg",1,0,"QReflect_GLBufferObject");
           qmlRegisterType<osg::QMLGLBufferObject>("pmoc.osg",1,0,"QMLGLBufferObject");
};
const std::string osg::MetaQReflect_GLBufferObject::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_GLBufferObject::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_GLBufferObject::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_GLBufferObject::createQQModel(const Instance*i){ //return new MetaQReflect_GLBufferObject_QModel(i);}
QMLGLBufferObject *ret =new QMLGLBufferObject(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Referenced *mother =dynamic_cast<osg::Referenced*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Referenced");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Referenced model for osg::GLBufferObjectis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Referenced");
if(!cl){std::cerr<<"osg::Referenced QQModel for osg::GLBufferObjectis not found"<<std::endl;return ret;}
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
#include <customCode/osg/Referenced_pmoc.hpp>
#include <customCode/osg/BufferObject_pmoc.hpp>
#include <customCode/osg/FrameStamp_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_GLBufferObjectManager:: hasSpace( unsigned int  p0)const{
//params checking
return _model->hasSpace(p0);

}
 bool  osg::QReflect_GLBufferObjectManager:: makeSpace( unsigned int  p0){
//params checking
return _model->makeSpace(p0);

}
 double&  osg::QReflect_GLBufferObjectManager:: getApplyTime(){
//params checking
return _model->getApplyTime();

}
 double&  osg::QReflect_GLBufferObjectManager:: getDeleteTime(){
//params checking
return _model->getDeleteTime();

}
 double&  osg::QReflect_GLBufferObjectManager:: getGenerateTime(){
//params checking
return _model->getGenerateTime();

}
 unsigned int  osg::QReflect_GLBufferObjectManager:: getContextID()const{
//params checking
return _model->getContextID();

}
 unsigned int  osg::QReflect_GLBufferObjectManager:: getCurrGLBufferObjectPoolSize()const{
//params checking
return _model->getCurrGLBufferObjectPoolSize();

}
 unsigned int  osg::QReflect_GLBufferObjectManager:: getMaxGLBufferObjectPoolSize()const{
//params checking
return _model->getMaxGLBufferObjectPoolSize();

}
 unsigned int  osg::QReflect_GLBufferObjectManager:: getNumberActiveGLBufferObjects()const{
//params checking
return _model->getNumberActiveGLBufferObjects();

}
 unsigned int  osg::QReflect_GLBufferObjectManager:: getNumberOrphanedGLBufferObjects()const{
//params checking
return _model->getNumberOrphanedGLBufferObjects();

}
 unsigned int&  osg::QReflect_GLBufferObjectManager:: getCurrGLBufferObjectPoolSize(){
//params checking
return _model->getCurrGLBufferObjectPoolSize();

}
 unsigned int&  osg::QReflect_GLBufferObjectManager:: getFrameNumber(){
//params checking
return _model->getFrameNumber();

}
 unsigned int&  osg::QReflect_GLBufferObjectManager:: getNumberActiveGLBufferObjects(){
//params checking
return _model->getNumberActiveGLBufferObjects();

}
 unsigned int&  osg::QReflect_GLBufferObjectManager:: getNumberApplied(){
//params checking
return _model->getNumberApplied();

}
 unsigned int&  osg::QReflect_GLBufferObjectManager:: getNumberDeleted(){
//params checking
return _model->getNumberDeleted();

}
 unsigned int&  osg::QReflect_GLBufferObjectManager:: getNumberFrames(){
//params checking
return _model->getNumberFrames();

}
 unsigned int&  osg::QReflect_GLBufferObjectManager:: getNumberGenerated(){
//params checking
return _model->getNumberGenerated();

}
 unsigned int&  osg::QReflect_GLBufferObjectManager:: getNumberOrphanedGLBufferObjects(){
//params checking
return _model->getNumberOrphanedGLBufferObjects();

}
 void osg::QReflect_GLBufferObjectManager::deleteAllGLBufferObjects(){
//params checking
 _model->deleteAllGLBufferObjects();

}
 void osg::QReflect_GLBufferObjectManager::discardAllDeletedGLBufferObjects(){
//params checking
 _model->discardAllDeletedGLBufferObjects();

}
 void osg::QReflect_GLBufferObjectManager::discardAllGLBufferObjects(){
//params checking
 _model->discardAllGLBufferObjects();

}
 void osg::QReflect_GLBufferObjectManager::flushAllDeletedGLBufferObjects(){
//params checking
 _model->flushAllDeletedGLBufferObjects();

}
 void osg::QReflect_GLBufferObjectManager::flushDeletedGLBufferObjects( double  p0 , double  &p1){
//params checking
 _model->flushDeletedGLBufferObjects(p0 ,p1);

}
 void osg::QReflect_GLBufferObjectManager::handlePendingOrphandedGLBufferObjects(){
//params checking
 _model->handlePendingOrphandedGLBufferObjects();

}
 void osg::QReflect_GLBufferObjectManager::newFrame(osg::QReflect_FrameStamp  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_GLBufferObjectManager::newFrame : parameter n.0 is NULL\n"<<endl;return;}
 _model->newFrame(p0->_model);

}
 void osg::QReflect_GLBufferObjectManager::releaseGLBufferObject(osg::QReflect_GLBufferObject  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_GLBufferObjectManager::releaseGLBufferObject : parameter n.0 is NULL\n"<<endl;return;}
 _model->releaseGLBufferObject(p0->_model);

}
 void osg::QReflect_GLBufferObjectManager::resetStats(){
//params checking
 _model->resetStats();

}
 void osg::QReflect_GLBufferObjectManager::setCurrGLBufferObjectPoolSize( unsigned int  p0){
//params checking
 _model->setCurrGLBufferObjectPoolSize(p0);
emit CurrGLBufferObjectPoolSizeChanged();

}
 void osg::QReflect_GLBufferObjectManager::setMaxGLBufferObjectPoolSize( unsigned int  p0){
//params checking
 _model->setMaxGLBufferObjectPoolSize(p0);
emit MaxGLBufferObjectPoolSizeChanged();

}
 void osg::QReflect_GLBufferObjectManager::setNumberActiveGLBufferObjects( unsigned int  p0){
//params checking
 _model->setNumberActiveGLBufferObjects(p0);
emit NumberActiveGLBufferObjectsChanged();

}
 void osg::QReflect_GLBufferObjectManager::setNumberOrphanedGLBufferObjects( unsigned int  p0){
//params checking
 _model->setNumberOrphanedGLBufferObjects(p0);
emit NumberOrphanedGLBufferObjectsChanged();

}
osg::QReflect_GLBufferObjectSet*osg::QReflect_GLBufferObjectManager::getGLBufferObjectSet(osg::QReflect_BufferObjectProfile  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_GLBufferObjectManager::getGLBufferObjectSet : parameter n.0 is NULL\n"<<endl;;}
PMOCSAFEADDOBJECT(*_model->getGLBufferObjectSet(*p0->_model),inst);
return inst.isValid()?((osg::QReflect_GLBufferObjectSet * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osg::QReflect_GLBufferObjectManager::QReflect_GLBufferObjectManager(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::GLBufferObjectManager*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_GLBufferObjectManager::~QReflect_GLBufferObjectManager( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_GLBufferObjectManager::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_GLBufferObjectManager::createInstance( ){
std::cerr<<"osg::GLBufferObjectManager is not instanciable"<<std::endl;return Instance();


}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_GLBufferObjectManager::MetaQReflect_GLBufferObjectManager():MetaQQuickClass( "osg::GLBufferObjectManager"){
_typeid=&typeid(osg::GLBufferObjectManager );
           qRegisterMetaType<osg::QMLGLBufferObjectManager>();
           qRegisterMetaType<osg::QMLGLBufferObjectManager*>("pmoc.osg.QMLGLBufferObjectManager");
qmlRegisterType<osg::QReflect_GLBufferObjectManager>("pmoc.osg",1,0,"QReflect_GLBufferObjectManager");
           qmlRegisterType<osg::QMLGLBufferObjectManager>("pmoc.osg",1,0,"QMLGLBufferObjectManager");
};
const std::string osg::MetaQReflect_GLBufferObjectManager::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_GLBufferObjectManager::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_GLBufferObjectManager::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_GLBufferObjectManager::createQQModel(const Instance*i){ //return new MetaQReflect_GLBufferObjectManager_QModel(i);}
QMLGLBufferObjectManager *ret =new QMLGLBufferObjectManager(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Referenced *mother =dynamic_cast<osg::Referenced*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Referenced");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Referenced model for osg::GLBufferObjectManageris invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Referenced");
if(!cl){std::cerr<<"osg::Referenced QQModel for osg::GLBufferObjectManageris not found"<<std::endl;return ret;}
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
#include <customCode/osg/Referenced_pmoc.hpp>
#include <customCode/osg/BufferObject_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_GLBufferObjectSet:: checkConsistency()const{
//params checking
return _model->checkConsistency();

}
 bool  osg::QReflect_GLBufferObjectSet:: makeSpace( unsigned int  &p0){
//params checking
return _model->makeSpace(p0);

}
 unsigned int  osg::QReflect_GLBufferObjectSet:: computeNumGLBufferObjectsInList()const{
//params checking
return _model->computeNumGLBufferObjectsInList();

}
 unsigned int  osg::QReflect_GLBufferObjectSet:: getNumOfGLBufferObjects()const{
//params checking
return _model->getNumOfGLBufferObjects();

}
 unsigned int  osg::QReflect_GLBufferObjectSet:: getNumOrphans()const{
//params checking
return _model->getNumOrphans();

}
 unsigned int  osg::QReflect_GLBufferObjectSet:: getNumPendingOrphans()const{
//params checking
return _model->getNumPendingOrphans();

}
 unsigned int  osg::QReflect_GLBufferObjectSet:: size()const{
//params checking
return _model->size();

}
 void osg::QReflect_GLBufferObjectSet::addToBack(osg::QReflect_GLBufferObject  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_GLBufferObjectSet::addToBack : parameter n.0 is NULL\n"<<endl;return;}
 _model->addToBack(p0->_model);

}
 void osg::QReflect_GLBufferObjectSet::deleteAllGLBufferObjects(){
//params checking
 _model->deleteAllGLBufferObjects();

}
 void osg::QReflect_GLBufferObjectSet::discardAllDeletedGLBufferObjects(){
//params checking
 _model->discardAllDeletedGLBufferObjects();

}
 void osg::QReflect_GLBufferObjectSet::discardAllGLBufferObjects(){
//params checking
 _model->discardAllGLBufferObjects();

}
 void osg::QReflect_GLBufferObjectSet::flushAllDeletedGLBufferObjects(){
//params checking
 _model->flushAllDeletedGLBufferObjects();

}
 void osg::QReflect_GLBufferObjectSet::flushDeletedGLBufferObjects( double  p0 , double  &p1){
//params checking
 _model->flushDeletedGLBufferObjects(p0 ,p1);

}
 void osg::QReflect_GLBufferObjectSet::handlePendingOrphandedGLBufferObjects(){
//params checking
 _model->handlePendingOrphandedGLBufferObjects();

}
 void osg::QReflect_GLBufferObjectSet::moveToBack(osg::QReflect_GLBufferObject  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_GLBufferObjectSet::moveToBack : parameter n.0 is NULL\n"<<endl;return;}
 _model->moveToBack(p0->_model);

}
 void osg::QReflect_GLBufferObjectSet::moveToSet(osg::QReflect_GLBufferObject  *p0 ,osg::QReflect_GLBufferObjectSet  *p1){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_GLBufferObjectSet::moveToSet : parameter n.0 is NULL\n"<<endl;return;}
if(! p1) {std::cerr<<"PMOC: osg::QReflect_GLBufferObjectSet::moveToSet : parameter n.1 is NULL\n"<<endl;return;}
 _model->moveToSet(p0->_model ,p1->_model);

}
 void osg::QReflect_GLBufferObjectSet::orphan(osg::QReflect_GLBufferObject  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_GLBufferObjectSet::orphan : parameter n.0 is NULL\n"<<endl;return;}
 _model->orphan(p0->_model);

}
 void osg::QReflect_GLBufferObjectSet::remove(osg::QReflect_GLBufferObject  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_GLBufferObjectSet::remove : parameter n.0 is NULL\n"<<endl;return;}
 _model->remove(p0->_model);

}
osg::QReflect_GLBufferObjectManager*osg::QReflect_GLBufferObjectSet::getParent(){
//params checking
PMOCSAFEADDOBJECT(*_model->getParent(),inst);
return inst.isValid()?((osg::QReflect_GLBufferObjectManager * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osg::QReflect_GLBufferObjectSet::QReflect_GLBufferObjectSet(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osg::GLBufferObjectSet );
           qRegisterMetaType<osg::QMLGLBufferObjectSet>();
           qRegisterMetaType<osg::QMLGLBufferObjectSet*>("pmoc.osg.QMLGLBufferObjectSet");
qmlRegisterType<osg::QReflect_GLBufferObjectSet>("pmoc.osg",1,0,"QReflect_GLBufferObjectSet");
           qmlRegisterType<osg::QMLGLBufferObjectSet>("pmoc.osg",1,0,"QMLGLBufferObjectSet");
};
const std::string osg::MetaQReflect_GLBufferObjectSet::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_GLBufferObjectSet::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_GLBufferObjectSet::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_GLBufferObjectSet::createQQModel(const Instance*i){ //return new MetaQReflect_GLBufferObjectSet_QModel(i);}
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
#include <customCode/osg/Image_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_PixelBufferObject:: isPBOSupported( unsigned int  p0)const{
//params checking
return _model->isPBOSupported(p0);

}
 void osg::QReflect_PixelBufferObject::setImage(osg::QReflect_Image  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_PixelBufferObject::setImage : parameter n.0 is NULL\n"<<endl;return;}
 _model->setImage(p0->_model);

}
osg::QReflect_Image*osg::QReflect_PixelBufferObject::getImage()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getImage(),inst);
return inst.isValid()?((osg::QReflect_Image * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Image*osg::QReflect_PixelBufferObject::getImage(){
//params checking
PMOCSAFEADDOBJECT(*_model->getImage(),inst);
return inst.isValid()?((osg::QReflect_Image * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osg::QReflect_PixelBufferObject::QReflect_PixelBufferObject(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osg::PixelBufferObject );
           qRegisterMetaType<osg::QMLPixelBufferObject>();
           qRegisterMetaType<osg::QMLPixelBufferObject*>("pmoc.osg.QMLPixelBufferObject");
qmlRegisterType<osg::QReflect_PixelBufferObject>("pmoc.osg",1,0,"QReflect_PixelBufferObject");
           qmlRegisterType<osg::QMLPixelBufferObject>("pmoc.osg",1,0,"QMLPixelBufferObject");
};
const std::string osg::MetaQReflect_PixelBufferObject::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_PixelBufferObject::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_PixelBufferObject::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_PixelBufferObject::createQQModel(const Instance*i){ //return new MetaQReflect_PixelBufferObject_QModel(i);}
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
#include <customCode/osg/State_pmoc.hpp>
using namespace pmoc;
 unsigned int  osg::QReflect_PixelDataBufferObject:: getDataSize()const{
//params checking
return _model->getDataSize();

}
 void osg::QReflect_PixelDataBufferObject::bindBufferInReadMode(osg::QReflect_State  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_PixelDataBufferObject::bindBufferInReadMode : parameter n.0 is NULL\n"<<endl;return;}
 _model->bindBufferInReadMode(*p0->_model);

}
 void osg::QReflect_PixelDataBufferObject::bindBufferInWriteMode(osg::QReflect_State  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_PixelDataBufferObject::bindBufferInWriteMode : parameter n.0 is NULL\n"<<endl;return;}
 _model->bindBufferInWriteMode(*p0->_model);

}
 void osg::QReflect_PixelDataBufferObject::compileBuffer(osg::QReflect_State  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_PixelDataBufferObject::compileBuffer : parameter n.0 is NULL\n"<<endl;return;}
 _model->compileBuffer(*p0->_model);

}
 void osg::QReflect_PixelDataBufferObject::resizeGLObjectBuffers( unsigned int  p0){
//params checking
 _model->resizeGLObjectBuffers(p0);

}
 void osg::QReflect_PixelDataBufferObject::setDataSize( unsigned int  p0){
//params checking
 _model->setDataSize(p0);
emit DataSizeChanged();

}
 void osg::QReflect_PixelDataBufferObject::unbindBuffer( unsigned int  p0)const{
//params checking
 _model->unbindBuffer(p0);

}
osg::QReflect_PixelDataBufferObject::Mode  osg::QReflect_PixelDataBufferObject::getMode( unsigned int  p0)const{
//params checking
osg::QReflect_PixelDataBufferObject::Mode ret=static_cast<osg::QReflect_PixelDataBufferObject::Mode>( _model->getMode(p0));return  ret;

}

///DefaultConstructor////////////////
osg::QReflect_PixelDataBufferObject::QReflect_PixelDataBufferObject(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osg::PixelDataBufferObject );
           qRegisterMetaType<osg::QMLPixelDataBufferObject>();
           qRegisterMetaType<osg::QMLPixelDataBufferObject*>("pmoc.osg.QMLPixelDataBufferObject");
qmlRegisterType<osg::QReflect_PixelDataBufferObject>("pmoc.osg",1,0,"QReflect_PixelDataBufferObject");
           qmlRegisterType<osg::QMLPixelDataBufferObject>("pmoc.osg",1,0,"QMLPixelDataBufferObject");
};
const std::string osg::MetaQReflect_PixelDataBufferObject::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_PixelDataBufferObject::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_PixelDataBufferObject::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_PixelDataBufferObject::createQQModel(const Instance*i){ //return new MetaQReflect_PixelDataBufferObject_QModel(i);}
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
osg::QReflect_ShaderStorageBufferObject::QReflect_ShaderStorageBufferObject(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osg::ShaderStorageBufferObject );
           qRegisterMetaType<osg::QMLShaderStorageBufferObject>();
           qRegisterMetaType<osg::QMLShaderStorageBufferObject*>("pmoc.osg.QMLShaderStorageBufferObject");
qmlRegisterType<osg::QReflect_ShaderStorageBufferObject>("pmoc.osg",1,0,"QReflect_ShaderStorageBufferObject");
           qmlRegisterType<osg::QMLShaderStorageBufferObject>("pmoc.osg",1,0,"QMLShaderStorageBufferObject");
};
const std::string osg::MetaQReflect_ShaderStorageBufferObject::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_ShaderStorageBufferObject::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_ShaderStorageBufferObject::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_ShaderStorageBufferObject::createQQModel(const Instance*i){ //return new MetaQReflect_ShaderStorageBufferObject_QModel(i);}
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
osg::QReflect_UniformBufferObject::QReflect_UniformBufferObject(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osg::UniformBufferObject );
           qRegisterMetaType<osg::QMLUniformBufferObject>();
           qRegisterMetaType<osg::QMLUniformBufferObject*>("pmoc.osg.QMLUniformBufferObject");
qmlRegisterType<osg::QReflect_UniformBufferObject>("pmoc.osg",1,0,"QReflect_UniformBufferObject");
           qmlRegisterType<osg::QMLUniformBufferObject>("pmoc.osg",1,0,"QMLUniformBufferObject");
};
const std::string osg::MetaQReflect_UniformBufferObject::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_UniformBufferObject::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_UniformBufferObject::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_UniformBufferObject::createQQModel(const Instance*i){ //return new MetaQReflect_UniformBufferObject_QModel(i);}
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
#include <customCode/osg/Array_pmoc.hpp>
using namespace pmoc;
 unsigned int  osg::QReflect_VertexBufferObject:: addArray(osg::QReflect_Array  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_VertexBufferObject::addArray : parameter n.0 is NULL\n"<<endl;return -1;}
emit ArrayCollectionChanged();
return _model->addArray(p0->_model);

}
 void osg::QReflect_VertexBufferObject::removeArray(osg::QReflect_Array  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_VertexBufferObject::removeArray : parameter n.0 is NULL\n"<<endl;return;}
 _model->removeArray(p0->_model);
emit ArrayCollectionChanged();

}
 void osg::QReflect_VertexBufferObject::setArray( unsigned int  p0 ,osg::QReflect_Array  *p1){
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_VertexBufferObject::setArray : parameter n.1 is NULL\n"<<endl;return;}
 _model->setArray(p0 ,p1->_model);

}
osg::QReflect_Array*osg::QReflect_VertexBufferObject::getArray( unsigned int  p0)const{
//params checking
PMOCSAFEADDOBJECT(*_model->getArray(p0),inst);
return inst.isValid()?((osg::QReflect_Array * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Array*osg::QReflect_VertexBufferObject::getArray( unsigned int  p0){
//params checking
PMOCSAFEADDOBJECT(*_model->getArray(p0),inst);
return inst.isValid()?((osg::QReflect_Array * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osg::QReflect_VertexBufferObject::QReflect_VertexBufferObject(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osg::VertexBufferObject );
           qRegisterMetaType<osg::QMLVertexBufferObject>();
           qRegisterMetaType<osg::QMLVertexBufferObject*>("pmoc.osg.QMLVertexBufferObject");
qmlRegisterType<osg::QReflect_VertexBufferObject>("pmoc.osg",1,0,"QReflect_VertexBufferObject");
           qmlRegisterType<osg::QMLVertexBufferObject>("pmoc.osg",1,0,"QMLVertexBufferObject");
};
const std::string osg::MetaQReflect_VertexBufferObject::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_VertexBufferObject::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_VertexBufferObject::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_VertexBufferObject::createQQModel(const Instance*i){ //return new MetaQReflect_VertexBufferObject_QModel(i);}
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




