#include <osg/Timer>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Timer_pmoc.hpp>
using namespace pmoc;
osg::QMLElapsedTime::QMLElapsedTime(const pmoc::Instance *i,QObject* parent):QReflect_ElapsedTime(i,parent){
//custom initializations
}
QQuickItem* osg::QMLElapsedTime::connect2View(QQuickItem*i){
	this->_view=QReflect_ElapsedTime::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLElapsedTime::updateModel(){
	  QReflect_ElapsedTime::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Timer_pmoc.cpp"
#endif
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Timer_pmoc.hpp>
using namespace pmoc;
osg::QMLTimer::QMLTimer(const pmoc::Instance *i,QObject* parent):QReflect_Timer(i,parent){
//custom initializations
}
QQuickItem* osg::QMLTimer::connect2View(QQuickItem*i){
	this->_view=QReflect_Timer::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLTimer::updateModel(){
	  QReflect_Timer::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Timer_pmoc.cpp"
#endif


