#include <osgParticle/Placer>
//includes

#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osgParticle/Placer_pmoc.hpp>
using namespace pmoc;
osgParticle::QMLPlacer::QMLPlacer(const pmoc::Instance *i,QObject* parent):QReflect_Placer(i,parent){
//custom initializations
}
QQuickItem* osgParticle::QMLPlacer::connect2View(QQuickItem*i){
	this->_view=QReflect_Placer::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osgParticle::QMLPlacer::updateModel(){
	  QReflect_Placer::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Placer_pmoc.cpp"
#endif


