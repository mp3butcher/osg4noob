#include <osg/Array>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Array_pmoc.hpp>
using namespace pmoc;
osg::QMLArray::QMLArray(pmoc::Instance *i,QObject* parent):QReflect_Array(i,parent){
//custom initializations
}
QQuickItem* osg::QMLArray::connect2View(QQuickItem*i){
	this->_view=QReflect_Array::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLArray::updateModel(){
	  QReflect_Array::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Array_pmoc.cpp"
#endif
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Array_pmoc.hpp>
using namespace pmoc;
osg::QMLArrayVisitor::QMLArrayVisitor(pmoc::Instance *i,QObject* parent):QReflect_ArrayVisitor(i,parent){
//custom initializations
}
QQuickItem* osg::QMLArrayVisitor::connect2View(QQuickItem*i){
	this->_view=QReflect_ArrayVisitor::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLArrayVisitor::updateModel(){
	  QReflect_ArrayVisitor::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Array_pmoc.cpp"
#endif
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Array_pmoc.hpp>
using namespace pmoc;
osg::QMLConstArrayVisitor::QMLConstArrayVisitor(pmoc::Instance *i,QObject* parent):QReflect_ConstArrayVisitor(i,parent){
//custom initializations
}
QQuickItem* osg::QMLConstArrayVisitor::connect2View(QQuickItem*i){
	this->_view=QReflect_ConstArrayVisitor::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLConstArrayVisitor::updateModel(){
	  QReflect_ConstArrayVisitor::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Array_pmoc.cpp"
#endif
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Array_pmoc.hpp>
using namespace pmoc;
osg::QMLConstValueVisitor::QMLConstValueVisitor(pmoc::Instance *i,QObject* parent):QReflect_ConstValueVisitor(i,parent){
//custom initializations
}
QQuickItem* osg::QMLConstValueVisitor::connect2View(QQuickItem*i){
	this->_view=QReflect_ConstValueVisitor::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLConstValueVisitor::updateModel(){
	  QReflect_ConstValueVisitor::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Array_pmoc.cpp"
#endif
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Array_pmoc.hpp>
using namespace pmoc;
osg::QMLIndexArray::QMLIndexArray(pmoc::Instance *i,QObject* parent):QReflect_IndexArray(i,parent){
//custom initializations
}
QQuickItem* osg::QMLIndexArray::connect2View(QQuickItem*i){
	this->_view=QReflect_IndexArray::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLIndexArray::updateModel(){
	  QReflect_IndexArray::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Array_pmoc.cpp"
#endif
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Array_pmoc.hpp>
using namespace pmoc;
osg::QMLValueVisitor::QMLValueVisitor(pmoc::Instance *i,QObject* parent):QReflect_ValueVisitor(i,parent){
//custom initializations
}
QQuickItem* osg::QMLValueVisitor::connect2View(QQuickItem*i){
	this->_view=QReflect_ValueVisitor::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLValueVisitor::updateModel(){
	  QReflect_ValueVisitor::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Array_pmoc.cpp"
#endif


