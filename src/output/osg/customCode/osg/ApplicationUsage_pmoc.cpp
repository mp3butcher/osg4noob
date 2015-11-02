#include <osg/ApplicationUsage>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/ApplicationUsage_pmoc.hpp>
using namespace pmoc;
osg::QMLApplicationUsage::QMLApplicationUsage(pmoc::Instance *i,QObject* parent):QReflect_ApplicationUsage(i,parent){
//custom initializations
}
QQuickItem* osg::QMLApplicationUsage::connect2View(QQuickItem*i){
	this->_view=QReflect_ApplicationUsage::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here


return this->_view;
}
void  osg::QMLApplicationUsage::updateModel(){
	  QReflect_ApplicationUsage::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ApplicationUsage_pmoc.cpp"
#endif
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/ApplicationUsage_pmoc.hpp>
using namespace pmoc;
osg::QMLApplicationUsageProxy::QMLApplicationUsageProxy(pmoc::Instance *i,QObject* parent):QReflect_ApplicationUsageProxy(i,parent){
//custom initializations
}
QQuickItem* osg::QMLApplicationUsageProxy::connect2View(QQuickItem*i){
	this->_view=QReflect_ApplicationUsageProxy::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLApplicationUsageProxy::updateModel(){
	  QReflect_ApplicationUsageProxy::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ApplicationUsage_pmoc.cpp"
#endif


