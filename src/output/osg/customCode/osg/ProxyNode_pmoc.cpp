#include <osg/ProxyNode>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/ProxyNode_pmoc.hpp>
using namespace pmoc;
osg::QMLProxyNode::QMLProxyNode(const pmoc::Instance *i,QObject* parent):QReflect_ProxyNode(i,parent){
//custom initializations
}
QQuickItem* osg::QMLProxyNode::connect2View(QQuickItem*i){
	this->_view=QReflect_ProxyNode::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLProxyNode::updateModel(){
	  QReflect_ProxyNode::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ProxyNode_pmoc.cpp"
#endif



