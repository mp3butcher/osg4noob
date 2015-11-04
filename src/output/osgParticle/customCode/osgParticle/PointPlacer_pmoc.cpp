#include <osgParticle/PointPlacer>
//includes

#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osgParticle/PointPlacer_pmoc.hpp>
using namespace pmoc;
osgParticle::QMLPointPlacer::QMLPointPlacer(pmoc::Instance *i,QObject* parent):QReflect_PointPlacer(i,parent){
//custom initializations
}
QQuickItem* osgParticle::QMLPointPlacer::connect2View(QQuickItem*i){
	this->_view=QReflect_PointPlacer::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osgParticle::QMLPointPlacer::updateModel(){
	  QReflect_PointPlacer::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_PointPlacer_pmoc.cpp"
#endif




