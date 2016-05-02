#include <osg/PolygonMode>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/PolygonMode_pmoc.hpp>
using namespace pmoc;
osg::QMLPolygonMode::QMLPolygonMode(const pmoc::Instance *i,QObject* parent):QReflect_PolygonMode(i,parent){
//custom initializations
}
QQuickItem* osg::QMLPolygonMode::connect2View(QQuickItem*i){
	this->_view=QReflect_PolygonMode::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLPolygonMode::updateModel(){
	  QReflect_PolygonMode::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_PolygonMode_pmoc.cpp"
#endif


