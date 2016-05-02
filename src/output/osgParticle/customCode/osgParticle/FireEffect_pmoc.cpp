#include <osgParticle/FireEffect>
//includes

#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osgParticle/FireEffect_pmoc.hpp>
using namespace pmoc;
osgParticle::QMLFireEffect::QMLFireEffect(const pmoc::Instance *i,QObject* parent):QReflect_FireEffect(i,parent){
//custom initializations
}
QQuickItem* osgParticle::QMLFireEffect::connect2View(QQuickItem*i){
	this->_view=QReflect_FireEffect::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osgParticle::QMLFireEffect::updateModel(){
	  QReflect_FireEffect::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_FireEffect_pmoc.cpp"
#endif




