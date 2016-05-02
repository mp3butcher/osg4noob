#include <osg/OperationThread>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/OperationThread_pmoc.hpp>
using namespace pmoc;
osg::QMLOperation::QMLOperation(const pmoc::Instance *i,QObject* parent):QReflect_Operation(i,parent){
//custom initializations
}
QQuickItem* osg::QMLOperation::connect2View(QQuickItem*i){
	this->_view=QReflect_Operation::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLOperation::updateModel(){
	  QReflect_Operation::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_OperationThread_pmoc.cpp"
#endif
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/OperationThread_pmoc.hpp>
using namespace pmoc;
osg::QMLOperationQueue::QMLOperationQueue(const pmoc::Instance *i,QObject* parent):QReflect_OperationQueue(i,parent){
//custom initializations
}
QQuickItem* osg::QMLOperationQueue::connect2View(QQuickItem*i){
	this->_view=QReflect_OperationQueue::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLOperationQueue::updateModel(){
	  QReflect_OperationQueue::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_OperationThread_pmoc.cpp"
#endif
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/OperationThread_pmoc.hpp>
using namespace pmoc;
osg::QMLOperationThread::QMLOperationThread(const pmoc::Instance *i,QObject* parent):QReflect_OperationThread(i,parent){
//custom initializations
}
QQuickItem* osg::QMLOperationThread::connect2View(QQuickItem*i){
	this->_view=QReflect_OperationThread::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLOperationThread::updateModel(){
	  QReflect_OperationThread::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_OperationThread_pmoc.cpp"
#endif
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/OperationThread_pmoc.hpp>
using namespace pmoc;
osg::QMLRefBlock::QMLRefBlock(const pmoc::Instance *i,QObject* parent):QReflect_RefBlock(i,parent){
//custom initializations
}
QQuickItem* osg::QMLRefBlock::connect2View(QQuickItem*i){
	this->_view=QReflect_RefBlock::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLRefBlock::updateModel(){
	  QReflect_RefBlock::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_OperationThread_pmoc.cpp"
#endif
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/OperationThread_pmoc.hpp>
using namespace pmoc;
osg::QMLRefBlockCount::QMLRefBlockCount(const pmoc::Instance *i,QObject* parent):QReflect_RefBlockCount(i,parent){
//custom initializations
}
QQuickItem* osg::QMLRefBlockCount::connect2View(QQuickItem*i){
	this->_view=QReflect_RefBlockCount::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLRefBlockCount::updateModel(){
	  QReflect_RefBlockCount::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_OperationThread_pmoc.cpp"
#endif


