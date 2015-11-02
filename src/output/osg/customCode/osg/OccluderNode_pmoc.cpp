#include <osg/OccluderNode>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/OccluderNode_pmoc.hpp>
using namespace pmoc;
osg::QMLOccluderNode::QMLOccluderNode(pmoc::Instance *i,QObject* parent):QReflect_OccluderNode(i,parent){
//custom initializations
}
QQuickItem* osg::QMLOccluderNode::connect2View(QQuickItem*i){
	this->_view=QReflect_OccluderNode::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLOccluderNode::updateModel(){
	  QReflect_OccluderNode::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_OccluderNode_pmoc.cpp"
#endif



