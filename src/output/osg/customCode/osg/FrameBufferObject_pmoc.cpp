#include <osg/FrameBufferObject>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/FrameBufferObject_pmoc.hpp>
using namespace pmoc;
osg::QMLFrameBufferAttachment::QMLFrameBufferAttachment(const pmoc::Instance *i,QObject* parent):QReflect_FrameBufferAttachment(i,parent){
//custom initializations
}
QQuickItem* osg::QMLFrameBufferAttachment::connect2View(QQuickItem*i){
	this->_view=QReflect_FrameBufferAttachment::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
///CustomiZE here


   return this->_view;
}
void  osg::QMLFrameBufferAttachment::updateModel(){
   QReflect_FrameBufferAttachment::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_FrameBufferObject_pmoc.cpp"
#endif
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/FrameBufferObject_pmoc.hpp>
using namespace pmoc;
osg::QMLFrameBufferObject::QMLFrameBufferObject(const pmoc::Instance *i,QObject* parent):QReflect_FrameBufferObject(i,parent){
//custom initializations
}
QQuickItem* osg::QMLFrameBufferObject::connect2View(QQuickItem*i){
	this->_view=QReflect_FrameBufferObject::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
///CustomiZE here


   return this->_view;
}
void  osg::QMLFrameBufferObject::updateModel(){
   QReflect_FrameBufferObject::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_FrameBufferObject_pmoc.cpp"
#endif
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/FrameBufferObject_pmoc.hpp>
using namespace pmoc;
/*osg::QMLGLFrameBufferObjectManager::QMLGLFrameBufferObjectManager(const pmoc::Instance *i,QObject* parent):QReflect_GLFrameBufferObjectManager(i,parent){
//custom initializations
}
QQuickItem* osg::QMLGLFrameBufferObjectManager::connect2View(QQuickItem*i){
	this->_view=QReflect_GLFrameBufferObjectManager::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
///CustomiZE here


   return this->_view;
}
void  osg::QMLGLFrameBufferObjectManager::updateModel(){
   QReflect_GLFrameBufferObjectManager::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}*/
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_FrameBufferObject_pmoc.cpp"
#endif
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/FrameBufferObject_pmoc.hpp>
using namespace pmoc;
/*osg::QMLGLRenderBufferManager::QMLGLRenderBufferManager(const pmoc::Instance *i,QObject* parent):QReflect_GLRenderBufferManager(i,parent){
//custom initializations
}
QQuickItem* osg::QMLGLRenderBufferManager::connect2View(QQuickItem*i){
	this->_view=QReflect_GLRenderBufferManager::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
///CustomiZE here


   return this->_view;
}
void  osg::QMLGLRenderBufferManager::updateModel(){
   QReflect_GLRenderBufferManager::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}*/
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_FrameBufferObject_pmoc.cpp"
#endif
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/FrameBufferObject_pmoc.hpp>
using namespace pmoc;
osg::QMLRenderBuffer::QMLRenderBuffer(const pmoc::Instance *i,QObject* parent):QReflect_RenderBuffer(i,parent){
//custom initializations
}
QQuickItem* osg::QMLRenderBuffer::connect2View(QQuickItem*i){
	this->_view=QReflect_RenderBuffer::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
///CustomiZE here


   return this->_view;
}
void  osg::QMLRenderBuffer::updateModel(){
   QReflect_RenderBuffer::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_FrameBufferObject_pmoc.cpp"
#endif



