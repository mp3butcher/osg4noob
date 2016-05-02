#include <osg/FrameBufferObject>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/FrameBufferObject_pmoc.hpp>
#include <customCode/osg/FrameBufferObject_pmoc.hpp>
#include <customCode/osg/FrameBufferObject_pmoc.hpp>
#include <customCode/osg/GLExtensions_pmoc.hpp>
#include <customCode/osg/State_pmoc.hpp>
#include <customCode/osg/Texture_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_FrameBufferAttachment:: isMultisample()const{
//params checking
return _model->isMultisample();

}
 int  osg::QReflect_FrameBufferAttachment:: compare(osg::QReflect_FrameBufferAttachment  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_FrameBufferAttachment::compare : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->compare(*p0->_model);

}
 unsigned int  osg::QReflect_FrameBufferAttachment:: getCubeMapFace()const{
//params checking
return _model->getCubeMapFace();

}
 unsigned int  osg::QReflect_FrameBufferAttachment:: getTexture3DZOffset()const{
//params checking
return _model->getTexture3DZOffset();

}
 unsigned int  osg::QReflect_FrameBufferAttachment:: getTextureArrayLayer()const{
//params checking
return _model->getTextureArrayLayer();

}
 unsigned int  osg::QReflect_FrameBufferAttachment:: getTextureLevel()const{
//params checking
return _model->getTextureLevel();

}
 void osg::QReflect_FrameBufferAttachment::attach(osg::QReflect_State  *p0 , GLenum  p1 , GLenum  p2 ,osg::QReflect_GLExtensions  *p3)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_FrameBufferAttachment::attach : parameter n.0 is NULL\n"<<endl;return;}
if(! p3) {std::cerr<<"PMOC: osg::QReflect_FrameBufferAttachment::attach : parameter n.3 is NULL\n"<<endl;return;}
 _model->attach(*p0->_model ,p1 ,p2 ,p3->_model);

}
 void osg::QReflect_FrameBufferAttachment::createRequiredTexturesAndApplyGenerateMipMap(osg::QReflect_State  *p0 ,osg::QReflect_GLExtensions  *p1)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_FrameBufferAttachment::createRequiredTexturesAndApplyGenerateMipMap : parameter n.0 is NULL\n"<<endl;return;}
if(! p1) {std::cerr<<"PMOC: osg::QReflect_FrameBufferAttachment::createRequiredTexturesAndApplyGenerateMipMap : parameter n.1 is NULL\n"<<endl;return;}
 _model->createRequiredTexturesAndApplyGenerateMipMap(*p0->_model ,p1->_model);

}
osg::QReflect_RenderBuffer*osg::QReflect_FrameBufferAttachment::getRenderBuffer()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getRenderBuffer(),inst);
return inst.isValid()?((osg::QReflect_RenderBuffer * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_RenderBuffer*osg::QReflect_FrameBufferAttachment::getRenderBuffer(){
//params checking
PMOCSAFEADDOBJECT(*_model->getRenderBuffer(),inst);
return inst.isValid()?((osg::QReflect_RenderBuffer * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Texture*osg::QReflect_FrameBufferAttachment::getTexture()const{
//params checking
PMOCSAFEADDOBJECT(*_model->getTexture(),inst);
return inst.isValid()?((osg::QReflect_Texture * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Texture*osg::QReflect_FrameBufferAttachment::getTexture(){
//params checking
PMOCSAFEADDOBJECT(*_model->getTexture(),inst);
return inst.isValid()?((osg::QReflect_Texture * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osg::QReflect_FrameBufferAttachment::QReflect_FrameBufferAttachment(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::FrameBufferAttachment*>(i->ptr);
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_FrameBufferAttachment::~QReflect_FrameBufferAttachment( ){
 }
///update this according _model new state
void osg::QReflect_FrameBufferAttachment::updateModel(){
}
Instance osg::MetaQReflect_FrameBufferAttachment::createInstance( ){
osg::FrameBufferAttachment* osg_FrameBufferAttachment_ptr	;
osg_FrameBufferAttachment_ptr= new osg::FrameBufferAttachment()	;
Instance o(PMOCGETMETACLASS("osg::FrameBufferAttachment"),(void*)osg_FrameBufferAttachment_ptr	,true);
_managedinstances.insert(osg_FrameBufferAttachment_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_FrameBufferAttachment::MetaQReflect_FrameBufferAttachment():MetaQQuickClass( "osg::FrameBufferAttachment"){
_typeid=&typeid(osg::FrameBufferAttachment );
           qRegisterMetaType<osg::QMLFrameBufferAttachment>();
           qRegisterMetaType<osg::QMLFrameBufferAttachment*>("pmoc.osg.QMLFrameBufferAttachment");
qmlRegisterType<osg::QReflect_FrameBufferAttachment>("pmoc.osg",1,0,"QReflect_FrameBufferAttachment");
           qmlRegisterType<osg::QMLFrameBufferAttachment>("pmoc.osg",1,0,"QMLFrameBufferAttachment");
};
const std::string osg::MetaQReflect_FrameBufferAttachment::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_FrameBufferAttachment::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_FrameBufferAttachment::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_FrameBufferAttachment::createQQModel(const Instance*i){ //return new MetaQReflect_FrameBufferAttachment_QModel(i);}
QMLFrameBufferAttachment *ret =new QMLFrameBufferAttachment(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_FrameBufferObject_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/FrameBufferObject_pmoc.hpp>
#include <customCode/osg/FrameBufferObject_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/State_pmoc.hpp>
using namespace pmoc;
 GLuint  osg::QReflect_FrameBufferObject:: getHandle( unsigned int  p0)const{
//params checking
return _model->getHandle(p0);

}
 bool  osg::QReflect_FrameBufferObject:: hasMultipleRenderingTargets()const{
//params checking
return _model->hasMultipleRenderingTargets();

}
 bool  osg::QReflect_FrameBufferObject:: isMultisample()const{
//params checking
return _model->isMultisample();

}
 int  osg::QReflect_FrameBufferObject:: compare(osg::QReflect_StateAttribute  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_FrameBufferObject::compare : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->compare(*p0->_model);

}
 void osg::QReflect_FrameBufferObject::apply(osg::QReflect_State  *p0 ,osg::QReflect_FrameBufferObject::BindTarget  p1)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_FrameBufferObject::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model ,static_cast<osg::FrameBufferObject::BindTarget>(p1));

}
 void osg::QReflect_FrameBufferObject::apply(osg::QReflect_State  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_FrameBufferObject::apply : parameter n.0 is NULL\n"<<endl;return;}
 _model->apply(*p0->_model);

}
 void osg::QReflect_FrameBufferObject::deleteFrameBufferObject( unsigned int  p0 , GLuint  p1){
//params checking
 _model->deleteFrameBufferObject(p0 ,p1);

}
 void osg::QReflect_FrameBufferObject::discardDeletedFrameBufferObjects( unsigned int  p0){
//params checking
 _model->discardDeletedFrameBufferObjects(p0);

}
 void osg::QReflect_FrameBufferObject::flushDeletedFrameBufferObjects( unsigned int  p0 , double  p1 , double  &p2){
//params checking
 _model->flushDeletedFrameBufferObjects(p0 ,p1 ,p2);

}
 void osg::QReflect_FrameBufferObject::releaseGLObjects(osg::QReflect_State  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_FrameBufferObject::releaseGLObjects : parameter n.0 is NULL\n"<<endl;return;}
 _model->releaseGLObjects(p0->_model);

}
 void osg::QReflect_FrameBufferObject::resizeGLObjectBuffers( unsigned int  p0){
//params checking
 _model->resizeGLObjectBuffers(p0);

}

///DefaultConstructor////////////////
osg::QReflect_FrameBufferObject::QReflect_FrameBufferObject(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::FrameBufferObject*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_FrameBufferObject::~QReflect_FrameBufferObject( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_FrameBufferObject::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_FrameBufferObject::createInstance( ){
osg::ref_ptr<osg::FrameBufferObject> osg_FrameBufferObject_ptr	;
osg_FrameBufferObject_ptr = new osg::FrameBufferObject ()	;
Instance o(PMOCGETMETACLASS("osg::FrameBufferObject"),(void*)osg_FrameBufferObject_ptr.get()		,true);
_managedinstances.insert(osg_FrameBufferObject_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_FrameBufferObject::MetaQReflect_FrameBufferObject():MetaQQuickClass( "osg::FrameBufferObject"){
_typeid=&typeid(osg::FrameBufferObject );
           qRegisterMetaType<osg::QMLFrameBufferObject>();
           qRegisterMetaType<osg::QMLFrameBufferObject*>("pmoc.osg.QMLFrameBufferObject");
qmlRegisterType<osg::QReflect_FrameBufferObject>("pmoc.osg",1,0,"QReflect_FrameBufferObject");
           qmlRegisterType<osg::QMLFrameBufferObject>("pmoc.osg",1,0,"QMLFrameBufferObject");
};
const std::string osg::MetaQReflect_FrameBufferObject::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_FrameBufferObject::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_FrameBufferObject::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_FrameBufferObject::createQQModel(const Instance*i){ //return new MetaQReflect_FrameBufferObject_QModel(i);}
QMLFrameBufferObject *ret =new QMLFrameBufferObject(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::StateAttribute *mother =dynamic_cast<osg::StateAttribute*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::StateAttribute");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::StateAttribute model for osg::FrameBufferObjectis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::StateAttribute");
if(!cl){std::cerr<<"osg::StateAttribute QQModel for osg::FrameBufferObjectis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_FrameBufferObject_pmoc.cpp"
#endif
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/FrameBufferObject_pmoc.hpp>
#include <customCode/osg/FrameBufferObject_pmoc.hpp>
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osg/FrameBufferObject_pmoc.hpp>
#include <customCode/osg/GLExtensions_pmoc.hpp>
#include <customCode/osg/State_pmoc.hpp>
using namespace pmoc;
 GLenum  osg::QReflect_RenderBuffer:: getInternalFormat()const{
//params checking
return _model->getInternalFormat();

}
 GLuint  osg::QReflect_RenderBuffer:: getObjectID( unsigned int  p0 ,osg::QReflect_GLExtensions  *p1)const{
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_RenderBuffer::getObjectID : parameter n.1 is NULL\n"<<endl;return -1;}
return _model->getObjectID(p0 ,p1->_model);

}
 int  osg::QReflect_RenderBuffer:: compare(osg::QReflect_RenderBuffer  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_RenderBuffer::compare : parameter n.0 is NULL\n"<<endl;return -1;}
return _model->compare(*p0->_model);

}
 int  osg::QReflect_RenderBuffer:: getColorSamples()const{
//params checking
return _model->getColorSamples();

}
 int  osg::QReflect_RenderBuffer:: getHeight()const{
//params checking
return _model->getHeight();

}
 int  osg::QReflect_RenderBuffer:: getMaxSamples( unsigned int  p0 ,osg::QReflect_GLExtensions  *p1){
//params checking
if(! p1) {std::cerr<<"PMOC: osg::QReflect_RenderBuffer::getMaxSamples : parameter n.1 is NULL\n"<<endl;return -1;}
return _model->getMaxSamples(p0 ,p1->_model);

}
 int  osg::QReflect_RenderBuffer:: getSamples()const{
//params checking
return _model->getSamples();

}
 int  osg::QReflect_RenderBuffer:: getWidth()const{
//params checking
return _model->getWidth();

}
 void osg::QReflect_RenderBuffer::deleteRenderBuffer( unsigned int  p0 , GLuint  p1){
//params checking
 _model->deleteRenderBuffer(p0 ,p1);

}
 void osg::QReflect_RenderBuffer::discardDeletedRenderBuffers( unsigned int  p0){
//params checking
 _model->discardDeletedRenderBuffers(p0);

}
 void osg::QReflect_RenderBuffer::flushDeletedRenderBuffers( unsigned int  p0 , double  p1 , double  &p2){
//params checking
 _model->flushDeletedRenderBuffers(p0 ,p1 ,p2);

}
 void osg::QReflect_RenderBuffer::releaseGLObjects(osg::QReflect_State  *p0)const{
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_RenderBuffer::releaseGLObjects : parameter n.0 is NULL\n"<<endl;return;}
 _model->releaseGLObjects(p0->_model);

}
 void osg::QReflect_RenderBuffer::resizeGLObjectBuffers( unsigned int  p0){
//params checking
 _model->resizeGLObjectBuffers(p0);

}
 void osg::QReflect_RenderBuffer::setColorSamples( int  p0){
//params checking
 _model->setColorSamples(p0);
emit ColorSamplesChanged();

}
 void osg::QReflect_RenderBuffer::setHeight( int  p0){
//params checking
 _model->setHeight(p0);
emit HeightChanged();

}
 void osg::QReflect_RenderBuffer::setInternalFormat( GLenum  p0){
//params checking
 _model->setInternalFormat(p0);
emit InternalFormatChanged();

}
 void osg::QReflect_RenderBuffer::setSamples( int  p0){
//params checking
 _model->setSamples(p0);
emit SamplesChanged();

}
 void osg::QReflect_RenderBuffer::setSize( int  p0 , int  p1){
//params checking
 _model->setSize(p0 ,p1);

}
 void osg::QReflect_RenderBuffer::setWidth( int  p0){
//params checking
 _model->setWidth(p0);
emit WidthChanged();

}

///DefaultConstructor////////////////
osg::QReflect_RenderBuffer::QReflect_RenderBuffer(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::RenderBuffer*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_RenderBuffer::~QReflect_RenderBuffer( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osg::QReflect_RenderBuffer::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osg::MetaQReflect_RenderBuffer::createInstance( ){
osg::ref_ptr<osg::RenderBuffer> osg_RenderBuffer_ptr	;
osg_RenderBuffer_ptr = new osg::RenderBuffer ()	;
Instance o(PMOCGETMETACLASS("osg::RenderBuffer"),(void*)osg_RenderBuffer_ptr.get()		,true);
_managedinstances.insert(osg_RenderBuffer_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_RenderBuffer::MetaQReflect_RenderBuffer():MetaQQuickClass( "osg::RenderBuffer"){
_typeid=&typeid(osg::RenderBuffer );
           qRegisterMetaType<osg::QMLRenderBuffer>();
           qRegisterMetaType<osg::QMLRenderBuffer*>("pmoc.osg.QMLRenderBuffer");
qmlRegisterType<osg::QReflect_RenderBuffer>("pmoc.osg",1,0,"QReflect_RenderBuffer");
           qmlRegisterType<osg::QMLRenderBuffer>("pmoc.osg",1,0,"QMLRenderBuffer");
};
const std::string osg::MetaQReflect_RenderBuffer::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_RenderBuffer::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_RenderBuffer::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_RenderBuffer::createQQModel(const Instance*i){ //return new MetaQReflect_RenderBuffer_QModel(i);}
QMLRenderBuffer *ret =new QMLRenderBuffer(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osg::Object *mother =dynamic_cast<osg::Object*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osg::Object");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osg::Object model for osg::RenderBufferis invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osg::Object");
if(!cl){std::cerr<<"osg::Object QQModel for osg::RenderBufferis not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_FrameBufferObject_pmoc.cpp"
#endif




