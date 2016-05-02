#include <osgParticle/SectorPlacer>
//includes

#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osgParticle/SectorPlacer_pmoc.hpp>
using namespace pmoc;
osgParticle::QMLSectorPlacer::QMLSectorPlacer(const pmoc::Instance *i,QObject* parent):QReflect_SectorPlacer(i,parent){
//custom initializations
}
QQuickItem* osgParticle::QMLSectorPlacer::connect2View(QQuickItem*i){
	this->_view=QReflect_SectorPlacer::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osgParticle::QMLSectorPlacer::updateModel(){
	  QReflect_SectorPlacer::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_SectorPlacer_pmoc.cpp"
#endif




