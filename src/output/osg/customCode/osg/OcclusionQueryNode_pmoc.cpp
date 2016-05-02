#include <osg/OcclusionQueryNode>
//includes

#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/OcclusionQueryNode_pmoc.hpp>
using namespace pmoc;
osg::QMLOcclusionQueryNode::QMLOcclusionQueryNode(const pmoc::Instance *i,QObject* parent):QReflect_OcclusionQueryNode(i,parent){
//custom initializations
}
QQuickItem* osg::QMLOcclusionQueryNode::connect2View(QQuickItem*i){
	this->_view=QReflect_OcclusionQueryNode::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLOcclusionQueryNode::updateModel(){
	  QReflect_OcclusionQueryNode::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_OcclusionQueryNode_pmoc.cpp"
#endif
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/OcclusionQueryNode_pmoc.hpp>
using namespace pmoc;
osg::QMLQueryGeometry::QMLQueryGeometry(const pmoc::Instance *i,QObject* parent):QReflect_QueryGeometry(i,parent){
//custom initializations
}
QQuickItem* osg::QMLQueryGeometry::connect2View(QQuickItem*i){
	this->_view=QReflect_QueryGeometry::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLQueryGeometry::updateModel(){
	  QReflect_QueryGeometry::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_OcclusionQueryNode_pmoc.cpp"
#endif
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/OcclusionQueryNode_pmoc.hpp>
using namespace pmoc;
osg::QMLTestResult::QMLTestResult(const pmoc::Instance *i,QObject* parent):QReflect_TestResult(i,parent){
//custom initializations
}
QQuickItem* osg::QMLTestResult::connect2View(QQuickItem*i){
	this->_view=QReflect_TestResult::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLTestResult::updateModel(){
	  QReflect_TestResult::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_OcclusionQueryNode_pmoc.cpp"
#endif




