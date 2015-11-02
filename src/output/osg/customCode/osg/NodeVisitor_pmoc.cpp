#include <osg/NodeVisitor>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/NodeVisitor_pmoc.hpp>
using namespace pmoc;
osg::QMLNodeAcceptOp::QMLNodeAcceptOp(pmoc::Instance *i,QObject* parent):QReflect_NodeAcceptOp(i,parent){
//custom initializations
}
QQuickItem* osg::QMLNodeAcceptOp::connect2View(QQuickItem*i){
	this->_view=QReflect_NodeAcceptOp::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLNodeAcceptOp::updateModel(){
	  QReflect_NodeAcceptOp::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_NodeVisitor_pmoc.cpp"
#endif
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/NodeVisitor_pmoc.hpp>
using namespace pmoc;
osg::QMLNodeVisitor::QMLNodeVisitor(pmoc::Instance *i,QObject* parent):QReflect_NodeVisitor(i,parent){
//custom initializations
}
QQuickItem* osg::QMLNodeVisitor::connect2View(QQuickItem*i){
	this->_view=QReflect_NodeVisitor::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLNodeVisitor::updateModel(){
	  QReflect_NodeVisitor::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_NodeVisitor_pmoc.cpp"
#endif



