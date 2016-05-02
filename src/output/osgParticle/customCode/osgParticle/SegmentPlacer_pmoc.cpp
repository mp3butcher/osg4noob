#include <osgParticle/SegmentPlacer>
//includes
#include <QQuickItem>
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osgParticle/SegmentPlacer_pmoc.hpp>
using namespace pmoc;
osgParticle::QMLSegmentPlacer::QMLSegmentPlacer(const pmoc::Instance *i,QObject* parent):QReflect_SegmentPlacer(i,parent){
//custom initializations
}
QQuickItem* osgParticle::QMLSegmentPlacer::connect2View(QQuickItem*i){
	this->_view=QReflect_SegmentPlacer::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osgParticle::QMLSegmentPlacer::updateModel(){
	  QReflect_SegmentPlacer::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_SegmentPlacer_pmoc.cpp"
#endif




