#include <osg/ShadowVolumeOccluder>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/ShadowVolumeOccluder_pmoc.hpp>
using namespace pmoc;
osg::QMLShadowVolumeOccluder::QMLShadowVolumeOccluder(pmoc::Instance *i,QObject* parent):QReflect_ShadowVolumeOccluder(i,parent){
//custom initializations
}
QQuickItem* osg::QMLShadowVolumeOccluder::connect2View(QQuickItem*i){
	this->_view=QReflect_ShadowVolumeOccluder::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLShadowVolumeOccluder::updateModel(){
	  QReflect_ShadowVolumeOccluder::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ShadowVolumeOccluder_pmoc.cpp"
#endif



