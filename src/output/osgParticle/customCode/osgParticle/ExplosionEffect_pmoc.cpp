#include <osgParticle/ExplosionEffect>
//includes

#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osgParticle/ExplosionEffect_pmoc.hpp>
using namespace pmoc;
osgParticle::QMLExplosionEffect::QMLExplosionEffect(const pmoc::Instance *i,QObject* parent):QReflect_ExplosionEffect(i,parent){
//custom initializations
}
QQuickItem* osgParticle::QMLExplosionEffect::connect2View(QQuickItem*i){
	this->_view=QReflect_ExplosionEffect::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osgParticle::QMLExplosionEffect::updateModel(){
	  QReflect_ExplosionEffect::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ExplosionEffect_pmoc.cpp"
#endif




