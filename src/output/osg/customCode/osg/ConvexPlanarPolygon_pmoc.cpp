#include <osg/ConvexPlanarPolygon>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/ConvexPlanarPolygon_pmoc.hpp>
using namespace pmoc;
osg::QMLConvexPlanarPolygon::QMLConvexPlanarPolygon(pmoc::Instance *i,QObject* parent):QReflect_ConvexPlanarPolygon(i,parent){
//custom initializations
}
QQuickItem* osg::QMLConvexPlanarPolygon::connect2View(QQuickItem*i){
	this->_view=QReflect_ConvexPlanarPolygon::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLConvexPlanarPolygon::updateModel(){
	  QReflect_ConvexPlanarPolygon::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ConvexPlanarPolygon_pmoc.cpp"
#endif


