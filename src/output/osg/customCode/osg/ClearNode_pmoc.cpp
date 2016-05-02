#include <osg/ClearNode>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/ClearNode_pmoc.hpp>
using namespace pmoc;
osg::QMLClearNode::QMLClearNode(const pmoc::Instance *i,QObject* parent):QReflect_ClearNode(i,parent){
//custom initializations
}
QQuickItem* osg::QMLClearNode::connect2View(QQuickItem*i){
	this->_view=QReflect_ClearNode::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLClearNode::updateModel(){
	  QReflect_ClearNode::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ClearNode_pmoc.cpp"
#endif



