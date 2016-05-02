#include <osg/CoordinateSystemNode>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/CoordinateSystemNode_pmoc.hpp>
using namespace pmoc;
osg::QMLCoordinateSystemNode::QMLCoordinateSystemNode(const pmoc::Instance *i,QObject* parent):QReflect_CoordinateSystemNode(i,parent){
//custom initializations
}
QQuickItem* osg::QMLCoordinateSystemNode::connect2View(QQuickItem*i){
	this->_view=QReflect_CoordinateSystemNode::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLCoordinateSystemNode::updateModel(){
	  QReflect_CoordinateSystemNode::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_CoordinateSystemNode_pmoc.cpp"
#endif
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/CoordinateSystemNode_pmoc.hpp>
using namespace pmoc;
osg::QMLEllipsoidModel::QMLEllipsoidModel(const pmoc::Instance *i,QObject* parent):QReflect_EllipsoidModel(i,parent){
//custom initializations
}
QQuickItem* osg::QMLEllipsoidModel::connect2View(QQuickItem*i){
	this->_view=QReflect_EllipsoidModel::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLEllipsoidModel::updateModel(){
	  QReflect_EllipsoidModel::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_CoordinateSystemNode_pmoc.cpp"
#endif



