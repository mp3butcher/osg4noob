#include <osg/LightSource>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/LightSource_pmoc.hpp>
using namespace pmoc;
osg::QMLLightSource::QMLLightSource(pmoc::Instance *i,QObject* parent):QReflect_LightSource(i,parent){
//custom initializations
}
QQuickItem* osg::QMLLightSource::connect2View(QQuickItem*i){
	this->_view=QReflect_LightSource::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLLightSource::updateModel(){
	  QReflect_LightSource::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_LightSource_pmoc.cpp"
#endif



