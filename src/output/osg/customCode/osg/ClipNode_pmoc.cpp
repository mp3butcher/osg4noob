#include <osg/ClipNode>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/ClipNode_pmoc.hpp>
using namespace pmoc;
osg::QMLClipNode::QMLClipNode(const pmoc::Instance *i,QObject* parent):QReflect_ClipNode(i,parent){
//custom initializations
}
QQuickItem* osg::QMLClipNode::connect2View(QQuickItem*i){
	this->_view=QReflect_ClipNode::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLClipNode::updateModel(){
	  QReflect_ClipNode::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ClipNode_pmoc.cpp"
#endif



