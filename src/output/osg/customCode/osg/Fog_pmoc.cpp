#include <osg/Fog>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Fog_pmoc.hpp>
using namespace pmoc;
osg::QMLFog::QMLFog(const pmoc::Instance *i,QObject* parent):QReflect_Fog(i,parent){
//custom initializations
}
QQuickItem* osg::QMLFog::connect2View(QQuickItem*i){
	this->_view=QReflect_Fog::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLFog::updateModel(){
	  QReflect_Fog::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Fog_pmoc.cpp"
#endif


