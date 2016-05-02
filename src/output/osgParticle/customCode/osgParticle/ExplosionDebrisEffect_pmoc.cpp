#include <osgParticle/ExplosionDebrisEffect>
//includes

#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osgParticle/ExplosionDebrisEffect_pmoc.hpp>
using namespace pmoc;
osgParticle::QMLExplosionDebrisEffect::QMLExplosionDebrisEffect(const pmoc::Instance *i,QObject* parent):QReflect_ExplosionDebrisEffect(i,parent){
//custom initializations
}
QQuickItem* osgParticle::QMLExplosionDebrisEffect::connect2View(QQuickItem*i){
	this->_view=QReflect_ExplosionDebrisEffect::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osgParticle::QMLExplosionDebrisEffect::updateModel(){
	  QReflect_ExplosionDebrisEffect::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ExplosionDebrisEffect_pmoc.cpp"
#endif




