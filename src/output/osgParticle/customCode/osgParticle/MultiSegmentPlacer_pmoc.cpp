#include <osgParticle/MultiSegmentPlacer>
//includes

#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osgParticle/MultiSegmentPlacer_pmoc.hpp>
using namespace pmoc;
osgParticle::QMLMultiSegmentPlacer::QMLMultiSegmentPlacer(pmoc::Instance *i,QObject* parent):QReflect_MultiSegmentPlacer(i,parent){
//custom initializations
}
QQuickItem* osgParticle::QMLMultiSegmentPlacer::connect2View(QQuickItem*i){
	this->_view=QReflect_MultiSegmentPlacer::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osgParticle::QMLMultiSegmentPlacer::updateModel(){
	  QReflect_MultiSegmentPlacer::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_MultiSegmentPlacer_pmoc.cpp"
#endif




