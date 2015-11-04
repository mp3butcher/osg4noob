#include <osg/PolygonStipple>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/PolygonStipple_pmoc.hpp>
using namespace pmoc;
osg::QMLPolygonStipple::QMLPolygonStipple(pmoc::Instance *i,QObject* parent):QReflect_PolygonStipple(i,parent){
//custom initializations
}
QQuickItem* osg::QMLPolygonStipple::connect2View(QQuickItem*i){
	this->_view=QReflect_PolygonStipple::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLPolygonStipple::updateModel(){
	  QReflect_PolygonStipple::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_PolygonStipple_pmoc.cpp"
#endif


