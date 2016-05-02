#include <osg/Callback>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Callback_pmoc.hpp>
using namespace pmoc;
osg::QMLCallback::QMLCallback(const pmoc::Instance *i,QObject* parent):QReflect_Callback(i,parent){
//custom initializations
}
QQuickItem* osg::QMLCallback::connect2View(QQuickItem*i){
	this->_view=QReflect_Callback::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLCallback::updateModel(){
	  QReflect_Callback::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Callback_pmoc.cpp"
#endif
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Callback_pmoc.hpp>
using namespace pmoc;
osg::QMLCallbackObject::QMLCallbackObject(const pmoc::Instance *i,QObject* parent):QReflect_CallbackObject(i,parent){
//custom initializations
}
QQuickItem* osg::QMLCallbackObject::connect2View(QQuickItem*i){
	this->_view=QReflect_CallbackObject::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLCallbackObject::updateModel(){
	  QReflect_CallbackObject::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Callback_pmoc.cpp"
#endif
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Callback_pmoc.hpp>
using namespace pmoc;
osg::QMLNodeCallback::QMLNodeCallback(const pmoc::Instance *i,QObject* parent):QReflect_NodeCallback(i,parent){
//custom initializations
}
QQuickItem* osg::QMLNodeCallback::connect2View(QQuickItem*i){
	this->_view=QReflect_NodeCallback::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLNodeCallback::updateModel(){
	  QReflect_NodeCallback::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Callback_pmoc.cpp"
#endif
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Callback_pmoc.hpp>
using namespace pmoc;
osg::QMLStateAttributeCallback::QMLStateAttributeCallback(const pmoc::Instance *i,QObject* parent):QReflect_StateAttributeCallback(i,parent){
//custom initializations
}
QQuickItem* osg::QMLStateAttributeCallback::connect2View(QQuickItem*i){
	this->_view=QReflect_StateAttributeCallback::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLStateAttributeCallback::updateModel(){
	  QReflect_StateAttributeCallback::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Callback_pmoc.cpp"
#endif
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Callback_pmoc.hpp>
using namespace pmoc;
osg::QMLUniformCallback::QMLUniformCallback(const pmoc::Instance *i,QObject* parent):QReflect_UniformCallback(i,parent){
//custom initializations
}
QQuickItem* osg::QMLUniformCallback::connect2View(QQuickItem*i){
	this->_view=QReflect_UniformCallback::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLUniformCallback::updateModel(){
	  QReflect_UniformCallback::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Callback_pmoc.cpp"
#endif


