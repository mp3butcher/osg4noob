#include <osgParticle/CenteredPlacer>
//includes

#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osgParticle/CenteredPlacer_pmoc.hpp>
using namespace pmoc;
osgParticle::QMLCenteredPlacer::QMLCenteredPlacer(pmoc::Instance *i,QObject* parent):QReflect_CenteredPlacer(i,parent){
//custom initializations
}
QQuickItem* osgParticle::QMLCenteredPlacer::connect2View(QQuickItem*i){
	this->_view=QReflect_CenteredPlacer::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osgParticle::QMLCenteredPlacer::updateModel(){
	  QReflect_CenteredPlacer::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_CenteredPlacer_pmoc.cpp"
#endif


