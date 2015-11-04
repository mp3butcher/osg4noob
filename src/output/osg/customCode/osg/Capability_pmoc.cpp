#include <osg/Capability>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Capability_pmoc.hpp>
using namespace pmoc;
osg::QMLCapability::QMLCapability(pmoc::Instance *i,QObject* parent):QReflect_Capability(i,parent){
//custom initializations
}
QQuickItem* osg::QMLCapability::connect2View(QQuickItem*i){
	this->_view=QReflect_Capability::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLCapability::updateModel(){
	  QReflect_Capability::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Capability_pmoc.cpp"
#endif
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Capability_pmoc.hpp>
using namespace pmoc;
osg::QMLCapabilityi::QMLCapabilityi(pmoc::Instance *i,QObject* parent):QReflect_Capabilityi(i,parent){
//custom initializations
}
QQuickItem* osg::QMLCapabilityi::connect2View(QQuickItem*i){
	this->_view=QReflect_Capabilityi::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLCapabilityi::updateModel(){
	  QReflect_Capabilityi::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Capability_pmoc.cpp"
#endif
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Capability_pmoc.hpp>
using namespace pmoc;
osg::QMLDisablei::QMLDisablei(pmoc::Instance *i,QObject* parent):QReflect_Disablei(i,parent){
//custom initializations
}
QQuickItem* osg::QMLDisablei::connect2View(QQuickItem*i){
	this->_view=QReflect_Disablei::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLDisablei::updateModel(){
	  QReflect_Disablei::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Capability_pmoc.cpp"
#endif
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Capability_pmoc.hpp>
using namespace pmoc;
osg::QMLEnablei::QMLEnablei(pmoc::Instance *i,QObject* parent):QReflect_Enablei(i,parent){
//custom initializations
}
QQuickItem* osg::QMLEnablei::connect2View(QQuickItem*i){
	this->_view=QReflect_Enablei::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLEnablei::updateModel(){
	  QReflect_Enablei::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Capability_pmoc.cpp"
#endif


