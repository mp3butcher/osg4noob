#include <osg/NodeTrackerCallback>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/NodeTrackerCallback_pmoc.hpp>
using namespace pmoc;
osg::QMLNodeTrackerCallback::QMLNodeTrackerCallback(const pmoc::Instance *i,QObject* parent):QReflect_NodeTrackerCallback(i,parent){
//custom initializations
}
QQuickItem* osg::QMLNodeTrackerCallback::connect2View(QQuickItem*i){
	this->_view=QReflect_NodeTrackerCallback::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLNodeTrackerCallback::updateModel(){
	  QReflect_NodeTrackerCallback::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_NodeTrackerCallback_pmoc.cpp"
#endif



