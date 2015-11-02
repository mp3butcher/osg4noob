#include <osgParticle/SmokeTrailEffect>
//includes

#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osgParticle/SmokeTrailEffect_pmoc.hpp>
using namespace pmoc;
osgParticle::QMLSmokeTrailEffect::QMLSmokeTrailEffect(pmoc::Instance *i,QObject* parent):QReflect_SmokeTrailEffect(i,parent){
//custom initializations
}
QQuickItem* osgParticle::QMLSmokeTrailEffect::connect2View(QQuickItem*i){
	this->_view=QReflect_SmokeTrailEffect::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osgParticle::QMLSmokeTrailEffect::updateModel(){
	  QReflect_SmokeTrailEffect::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_SmokeTrailEffect_pmoc.cpp"
#endif




