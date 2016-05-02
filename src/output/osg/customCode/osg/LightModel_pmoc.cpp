#include <osg/LightModel>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/LightModel_pmoc.hpp>
using namespace pmoc;
osg::QMLLightModel::QMLLightModel(const pmoc::Instance *i,QObject* parent):QReflect_LightModel(i,parent){
//custom initializations
}
QQuickItem* osg::QMLLightModel::connect2View(QQuickItem*i){
	this->_view=QReflect_LightModel::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLLightModel::updateModel(){
	  QReflect_LightModel::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_LightModel_pmoc.cpp"
#endif


