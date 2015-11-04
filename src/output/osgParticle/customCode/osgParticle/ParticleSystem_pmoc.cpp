#include <osgParticle/ParticleSystem>
//includes

#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osgParticle/ParticleSystem_pmoc.hpp>
using namespace pmoc;
 osgParticle::QReflect_Particle* osgParticle::QMLParticleSystem::getDefaultParticleTemplate( )const {
 PMOCSAFEADDOBJECT(_model->getDefaultParticleTemplate(),inst);
return (osgParticle::QReflect_Particle * )PMOCGETMETACLASS("osgParticle::Particle")->createQQModel(&inst);
}
osgParticle::QMLParticleSystem::QMLParticleSystem(pmoc::Instance *i,QObject* parent):QReflect_ParticleSystem(i,parent){
//custom initializations
}
QQuickItem* osgParticle::QMLParticleSystem::connect2View(QQuickItem*i){
	this->_view=QReflect_ParticleSystem::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osgParticle::QMLParticleSystem::updateModel(){
	  QReflect_ParticleSystem::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ParticleSystem_pmoc.cpp"
#endif




