#include <osg/Notify>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Notify_pmoc.hpp>
using namespace pmoc;
osg::QMLNotifyHandler::QMLNotifyHandler(pmoc::Instance *i,QObject* parent):QReflect_NotifyHandler(i,parent){
//custom initializations
}
QQuickItem* osg::QMLNotifyHandler::connect2View(QQuickItem*i){
	this->_view=QReflect_NotifyHandler::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLNotifyHandler::updateModel(){
	  QReflect_NotifyHandler::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Notify_pmoc.cpp"
#endif
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Notify_pmoc.hpp>
using namespace pmoc;
osg::QMLStandardNotifyHandler::QMLStandardNotifyHandler(pmoc::Instance *i,QObject* parent):QReflect_StandardNotifyHandler(i,parent){
//custom initializations
}
QQuickItem* osg::QMLStandardNotifyHandler::connect2View(QQuickItem*i){
	this->_view=QReflect_StandardNotifyHandler::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLStandardNotifyHandler::updateModel(){
	  QReflect_StandardNotifyHandler::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Notify_pmoc.cpp"
#endif
 


