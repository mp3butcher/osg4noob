#include <osg/Switch>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Switch_pmoc.hpp>
using namespace pmoc;
osg::QMLSwitch::QMLSwitch(const pmoc::Instance *i,QObject* parent):QReflect_Switch(i,parent){
//custom initializations
}
QQuickItem* osg::QMLSwitch::connect2View(QQuickItem*i){
	this->_view=QReflect_Switch::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLSwitch::updateModel(){
	  QReflect_Switch::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Switch_pmoc.cpp"
#endif



