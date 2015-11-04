#include <osgParticle/CompositePlacer>
//includes

#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osgParticle/CompositePlacer_pmoc.hpp>
using namespace pmoc;
osgParticle::QMLCompositePlacer::QMLCompositePlacer(pmoc::Instance *i,QObject* parent):QReflect_CompositePlacer(i,parent){
//custom initializations
}
QQuickItem* osgParticle::QMLCompositePlacer::connect2View(QQuickItem*i){
	this->_view=QReflect_CompositePlacer::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osgParticle::QMLCompositePlacer::updateModel(){
	  QReflect_CompositePlacer::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_CompositePlacer_pmoc.cpp"
#endif




