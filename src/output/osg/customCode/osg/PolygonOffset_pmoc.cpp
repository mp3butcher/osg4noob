#include <osg/PolygonOffset>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/PolygonOffset_pmoc.hpp>
using namespace pmoc;
osg::QMLPolygonOffset::QMLPolygonOffset(const pmoc::Instance *i,QObject* parent):QReflect_PolygonOffset(i,parent){
//custom initializations
}
QQuickItem* osg::QMLPolygonOffset::connect2View(QQuickItem*i){
	this->_view=QReflect_PolygonOffset::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLPolygonOffset::updateModel(){
	  QReflect_PolygonOffset::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_PolygonOffset_pmoc.cpp"
#endif


