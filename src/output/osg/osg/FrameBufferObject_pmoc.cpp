#include <osg/FrameBufferObject>
//includes
#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/FrameBufferObject_pmoc.hpp>
#include <customCode/osg/FrameBufferObject_pmoc.hpp>
#include <customCode/osg/FrameBufferObject_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_FrameBufferAttachment::isMultisample()const{
return _model->isMultisample();

}
 int  osg::QReflect_FrameBufferAttachment::compare(osg::QReflect_FrameBufferAttachment *p0)const{
return _model->compare(*p0->_model);

}
 unsigned int  osg::QReflect_FrameBufferAttachment::getCubeMapFace()const{
return _model->getCubeMapFace();

}
 unsigned int  osg::QReflect_FrameBufferAttachment::getTexture3DZOffset()const{
return _model->getTexture3DZOffset();

}
 unsigned int  osg::QReflect_FrameBufferAttachment::getTextureArrayLayer()const{
return _model->getTextureArrayLayer();

}
 unsigned int  osg::QReflect_FrameBufferAttachment::getTextureLevel()const{
return _model->getTextureLevel();

}
osg::QReflect_RenderBuffer*osg::QReflect_FrameBufferAttachment::getRenderBuffer()const{
PMOCSAFEADDOBJECT(*_model->getRenderBuffer(),inst);
return inst.isValid()?((osg::QReflect_RenderBuffer * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_RenderBuffer*osg::QReflect_FrameBufferAttachment::getRenderBuffer(){
PMOCSAFEADDOBJECT(*_model->getRenderBuffer(),inst);
return inst.isValid()?((osg::QReflect_RenderBuffer * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Texture*osg::QReflect_FrameBufferAttachment::getTexture()const{
PMOCSAFEADDOBJECT(*_model->getTexture(),inst);
return inst.isValid()?((osg::QReflect_Texture * )inst.model->createQQModel(&inst)):NULL;
}
osg::QReflect_Texture*osg::QReflect_FrameBufferAttachment::getTexture(){
PMOCSAFEADDOBJECT(*_model->getTexture(),inst);
return inst.isValid()?((osg::QReflect_Texture * )inst.model->createQQModel(&inst)):NULL;
}

///DefaultConstructor////////////////
osg::QReflect_FrameBufferAttachment::QReflect_FrameBufferAttachment(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osg::FrameBufferAttachment );           qRegisterMetaType<QMLFrameBufferAttachment>();
qmlRegisterType<QReflect_FrameBufferAttachment>("pmoc.osg",1,0,"QReflect_FrameBufferAttachment");
           qmlRegisterType<QMLFrameBufferAttachment>("pmoc.osg",1,0,"QMLFrameBufferAttachment");
};
const std::string osg::MetaQReflect_FrameBufferAttachment::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_FrameBufferAttachment::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_FrameBufferAttachment::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_FrameBufferAttachment::createQQModel(Instance*i){ //return new MetaQReflect_FrameBufferAttachment_QModel(i);}
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
 GLuint  osg::QReflect_FrameBufferObject::getHandle( unsigned int p0)const{
return _model->getHandle(p0);

}
 bool  osg::QReflect_FrameBufferObject::hasMultipleRenderingTargets()const{
return _model->hasMultipleRenderingTargets();

}
 bool  osg::QReflect_FrameBufferObject::isMultisample()const{
return _model->isMultisample();

}
 int  osg::QReflect_FrameBufferObject::compare(osg::QReflect_StateAttribute *p0)const{
return _model->compare(*p0->_model);

}
 void osg::QReflect_FrameBufferObject::releaseGLObjects(osg::QReflect_State *p0)const{
 _model->releaseGLObjects(p0->_model);

}
 void osg::QReflect_FrameBufferObject::resizeGLObjectBuffers( unsigned int p0){
 _model->resizeGLObjectBuffers(p0);

}

///DefaultConstructor////////////////
osg::QReflect_FrameBufferObject::QReflect_FrameBufferObject(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osg::FrameBufferObject );           qRegisterMetaType<QMLFrameBufferObject>();
qmlRegisterType<QReflect_FrameBufferObject>("pmoc.osg",1,0,"QReflect_FrameBufferObject");
           qmlRegisterType<QMLFrameBufferObject>("pmoc.osg",1,0,"QMLFrameBufferObject");
};
const std::string osg::MetaQReflect_FrameBufferObject::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_FrameBufferObject::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_FrameBufferObject::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_FrameBufferObject::createQQModel(Instance*i){ //return new MetaQReflect_FrameBufferObject_QModel(i);}
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
using namespace pmoc;
 void osg::QReflect_GLFrameBufferObjectManager::deleteGLObject( GLuint p0){
 _model->deleteGLObject(p0);

}

///DefaultConstructor////////////////
osg::QReflect_GLFrameBufferObjectManager::QReflect_GLFrameBufferObjectManager(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::GLFrameBufferObjectManager*>(i->ptr);
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_GLFrameBufferObjectManager::~QReflect_GLFrameBufferObjectManager( ){
 }
///update this according _model new state
void osg::QReflect_GLFrameBufferObjectManager::updateModel(){
}
Instance osg::MetaQReflect_GLFrameBufferObjectManager::createInstance( ){
std::cerr<<"osg::GLFrameBufferObjectManager is not instanciable"<<std::endl;return Instance();


}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_GLFrameBufferObjectManager::MetaQReflect_GLFrameBufferObjectManager():MetaQQuickClass( "osg::GLFrameBufferObjectManager"){
_typeid=&typeid(osg::GLFrameBufferObjectManager );           qRegisterMetaType<QMLGLFrameBufferObjectManager>();
qmlRegisterType<QReflect_GLFrameBufferObjectManager>("pmoc.osg",1,0,"QReflect_GLFrameBufferObjectManager");
           qmlRegisterType<QMLGLFrameBufferObjectManager>("pmoc.osg",1,0,"QMLGLFrameBufferObjectManager");
};
const std::string osg::MetaQReflect_GLFrameBufferObjectManager::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_GLFrameBufferObjectManager::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_GLFrameBufferObjectManager::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_GLFrameBufferObjectManager::createQQModel(Instance*i){ //return new MetaQReflect_GLFrameBufferObjectManager_QModel(i);}
QMLGLFrameBufferObjectManager *ret =new QMLGLFrameBufferObjectManager(i);
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
using namespace pmoc;
 void osg::QReflect_GLRenderBufferManager::deleteGLObject( GLuint p0){
 _model->deleteGLObject(p0);

}

///DefaultConstructor////////////////
osg::QReflect_GLRenderBufferManager::QReflect_GLRenderBufferManager(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::GLRenderBufferManager*>(i->ptr);
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_GLRenderBufferManager::~QReflect_GLRenderBufferManager( ){
 }
///update this according _model new state
void osg::QReflect_GLRenderBufferManager::updateModel(){
}
Instance osg::MetaQReflect_GLRenderBufferManager::createInstance( ){
std::cerr<<"osg::GLRenderBufferManager is not instanciable"<<std::endl;return Instance();


}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_GLRenderBufferManager::MetaQReflect_GLRenderBufferManager():MetaQQuickClass( "osg::GLRenderBufferManager"){
_typeid=&typeid(osg::GLRenderBufferManager );           qRegisterMetaType<QMLGLRenderBufferManager>();
qmlRegisterType<QReflect_GLRenderBufferManager>("pmoc.osg",1,0,"QReflect_GLRenderBufferManager");
           qmlRegisterType<QMLGLRenderBufferManager>("pmoc.osg",1,0,"QMLGLRenderBufferManager");
};
const std::string osg::MetaQReflect_GLRenderBufferManager::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_GLRenderBufferManager::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_GLRenderBufferManager::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_GLRenderBufferManager::createQQModel(Instance*i){ //return new MetaQReflect_GLRenderBufferManager_QModel(i);}
QMLGLRenderBufferManager *ret =new QMLGLRenderBufferManager(i);
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
#include <customCode/osg/Object_pmoc.hpp>
#include <customCode/osg/FrameBufferObject_pmoc.hpp>
#include <customCode/osg/GLExtensions_pmoc.hpp>
#include <customCode/osg/State_pmoc.hpp>
using namespace pmoc;
 GLuint  osg::QReflect_RenderBuffer::getObjectID( unsigned int p0 ,osg::QReflect_GLExtensions *p1)const{
return _model->getObjectID(p0 ,p1->_model);

}
 int  osg::QReflect_RenderBuffer::compare(osg::QReflect_RenderBuffer *p0)const{
return _model->compare(*p0->_model);

}
 int  osg::QReflect_RenderBuffer::getMaxSamples( unsigned int p0 ,osg::QReflect_GLExtensions *p1){
return _model->getMaxSamples(p0 ,p1->_model);

}
 void osg::QReflect_RenderBuffer::releaseGLObjects(osg::QReflect_State *p0)const{
 _model->releaseGLObjects(p0->_model);

}
 void osg::QReflect_RenderBuffer::resizeGLObjectBuffers( unsigned int p0){
 _model->resizeGLObjectBuffers(p0);

}
 void osg::QReflect_RenderBuffer::setSize( int p0 , int p1){
 _model->setSize(p0 ,p1);

}
const int osg::QReflect_RenderBuffer::getColorSamples()const{return _model->getColorSamples();}
const int osg::QReflect_RenderBuffer::getHeight()const{return _model->getHeight();}
const int osg::QReflect_RenderBuffer::getSamples()const{return _model->getSamples();}
const int osg::QReflect_RenderBuffer::getWidth()const{return _model->getWidth();}
void  osg::QReflect_RenderBuffer::setColorSamples(const int &par){_model->setColorSamples(par);emit ColorSamplesChanged(par);}
void  osg::QReflect_RenderBuffer::setHeight(const int &par){_model->setHeight(par);emit HeightChanged(par);}
void  osg::QReflect_RenderBuffer::setSamples(const int &par){_model->setSamples(par);emit SamplesChanged(par);}
void  osg::QReflect_RenderBuffer::setWidth(const int &par){_model->setWidth(par);emit WidthChanged(par);}

///DefaultConstructor////////////////
osg::QReflect_RenderBuffer::QReflect_RenderBuffer(Instance *i,QObject* parent):QQModel(i,parent),_model(0){
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
_typeid=&typeid(osg::RenderBuffer );           qRegisterMetaType<QMLRenderBuffer>();
qmlRegisterType<QReflect_RenderBuffer>("pmoc.osg",1,0,"QReflect_RenderBuffer");
           qmlRegisterType<QMLRenderBuffer>("pmoc.osg",1,0,"QMLRenderBuffer");
};
const std::string osg::MetaQReflect_RenderBuffer::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_RenderBuffer::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_RenderBuffer::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_RenderBuffer::createQQModel(Instance*i){ //return new MetaQReflect_RenderBuffer_QModel(i);}
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



