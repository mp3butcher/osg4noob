#include <osgParticle/ParticleEffect>
//includes

#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osgParticle/ParticleEffect_pmoc.hpp>
using namespace pmoc;
osgParticle::QMLParticleEffect::QMLParticleEffect(const pmoc::Instance *i,QObject* parent):QReflect_ParticleEffect(i,parent){
//custom initializations
}
QQuickItem* osgParticle::QMLParticleEffect::connect2View(QQuickItem*i){
	this->_view=QReflect_ParticleEffect::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osgParticle::QMLParticleEffect::updateModel(){
	  QReflect_ParticleEffect::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ParticleEffect_pmoc.cpp"
#endif




