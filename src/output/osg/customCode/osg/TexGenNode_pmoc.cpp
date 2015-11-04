#include <osg/TexGenNode>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/TexGenNode_pmoc.hpp>
using namespace pmoc;
osg::QMLTexGenNode::QMLTexGenNode(pmoc::Instance *i,QObject* parent):QReflect_TexGenNode(i,parent){
//custom initializations
}
QQuickItem* osg::QMLTexGenNode::connect2View(QQuickItem*i){
	this->_view=QReflect_TexGenNode::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLTexGenNode::updateModel(){
	  QReflect_TexGenNode::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_TexGenNode_pmoc.cpp"
#endif



