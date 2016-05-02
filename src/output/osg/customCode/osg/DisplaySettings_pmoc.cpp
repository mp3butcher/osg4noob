#include <osg/DisplaySettings>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/DisplaySettings_pmoc.hpp>
using namespace pmoc;
osg::QMLDisplaySettings::QMLDisplaySettings(const pmoc::Instance *i,QObject* parent):QReflect_DisplaySettings(i,parent){
//custom initializations
}
QQuickItem* osg::QMLDisplaySettings::connect2View(QQuickItem*i){
	this->_view=QReflect_DisplaySettings::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLDisplaySettings::updateModel(){
	  QReflect_DisplaySettings::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_DisplaySettings_pmoc.cpp"
#endif


