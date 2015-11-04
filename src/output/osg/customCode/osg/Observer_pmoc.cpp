#include <osg/Observer>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Observer_pmoc.hpp>
using namespace pmoc;
osg::QMLObserver::QMLObserver(pmoc::Instance *i,QObject* parent):QReflect_Observer(i,parent){
//custom initializations
}
QQuickItem* osg::QMLObserver::connect2View(QQuickItem*i){
	this->_view=QReflect_Observer::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLObserver::updateModel(){
	  QReflect_Observer::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Observer_pmoc.cpp"
#endif
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Observer_pmoc.hpp>
using namespace pmoc;
osg::QMLObserverSet::QMLObserverSet(pmoc::Instance *i,QObject* parent):QReflect_ObserverSet(i,parent){
//custom initializations
}
QQuickItem* osg::QMLObserverSet::connect2View(QQuickItem*i){
	this->_view=QReflect_ObserverSet::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLObserverSet::updateModel(){
	  QReflect_ObserverSet::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Observer_pmoc.cpp"
#endif


