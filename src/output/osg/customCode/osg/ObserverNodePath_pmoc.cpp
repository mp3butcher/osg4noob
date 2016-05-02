#include <osg/ObserverNodePath>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/ObserverNodePath_pmoc.hpp>
using namespace pmoc;
osg::QMLObserverNodePath::QMLObserverNodePath(const pmoc::Instance *i,QObject* parent):QReflect_ObserverNodePath(i,parent){
//custom initializations
}
QQuickItem* osg::QMLObserverNodePath::connect2View(QQuickItem*i){
	this->_view=QReflect_ObserverNodePath::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLObserverNodePath::updateModel(){
	  QReflect_ObserverNodePath::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ObserverNodePath_pmoc.cpp"
#endif



