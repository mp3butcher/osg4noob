#include <osgParticle/BoxPlacer>
//includes

#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osgParticle/BoxPlacer_pmoc.hpp>
using namespace pmoc;
osgParticle::QMLBoxPlacer::QMLBoxPlacer(const pmoc::Instance *i,QObject* parent):QReflect_BoxPlacer(i,parent){
//custom initializations
}
QQuickItem* osgParticle::QMLBoxPlacer::connect2View(QQuickItem*i){
	this->_view=QReflect_BoxPlacer::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osgParticle::QMLBoxPlacer::updateModel(){
	  QReflect_BoxPlacer::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_BoxPlacer_pmoc.cpp"
#endif




