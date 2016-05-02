#include <osg/GraphicsContext>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/GraphicsContext_pmoc.hpp>
using namespace pmoc;
osg::QMLGraphicsContext::QMLGraphicsContext(const pmoc::Instance *i,QObject* parent):QReflect_GraphicsContext(i,parent){
//custom initializations
}
QQuickItem* osg::QMLGraphicsContext::connect2View(QQuickItem*i){
	this->_view=QReflect_GraphicsContext::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLGraphicsContext::updateModel(){
	  QReflect_GraphicsContext::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_GraphicsContext_pmoc.cpp"
#endif
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/GraphicsContext_pmoc.hpp>
using namespace pmoc;
osg::QMLSyncSwapBuffersCallback::QMLSyncSwapBuffersCallback(const pmoc::Instance *i,QObject* parent):QReflect_SyncSwapBuffersCallback(i,parent){
//custom initializations
}
QQuickItem* osg::QMLSyncSwapBuffersCallback::connect2View(QQuickItem*i){
	this->_view=QReflect_SyncSwapBuffersCallback::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLSyncSwapBuffersCallback::updateModel(){
	  QReflect_SyncSwapBuffersCallback::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_GraphicsContext_pmoc.cpp"
#endif


