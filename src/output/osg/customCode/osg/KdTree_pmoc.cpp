#include <osg/KdTree>
//includes

#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/KdTree_pmoc.hpp>
using namespace pmoc;
osg::QMLKdTree::QMLKdTree(pmoc::Instance *i,QObject* parent):QReflect_KdTree(i,parent){
//custom initializations
}
QQuickItem* osg::QMLKdTree::connect2View(QQuickItem*i){
	this->_view=QReflect_KdTree::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLKdTree::updateModel(){
	  QReflect_KdTree::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_KdTree_pmoc.cpp"
#endif
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/KdTree_pmoc.hpp>
using namespace pmoc;
osg::QMLKdTreeBuilder::QMLKdTreeBuilder(pmoc::Instance *i,QObject* parent):QReflect_KdTreeBuilder(i,parent){
//custom initializations
}
QQuickItem* osg::QMLKdTreeBuilder::connect2View(QQuickItem*i){
	this->_view=QReflect_KdTreeBuilder::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLKdTreeBuilder::updateModel(){
	  QReflect_KdTreeBuilder::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_KdTree_pmoc.cpp"
#endif




