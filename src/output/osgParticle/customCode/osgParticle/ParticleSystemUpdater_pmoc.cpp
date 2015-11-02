#include <osgParticle/ParticleSystemUpdater>
//includes

#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osgParticle/ParticleSystemUpdater_pmoc.hpp>
using namespace pmoc;
osgParticle::QMLParticleSystemUpdater::QMLParticleSystemUpdater(pmoc::Instance *i,QObject* parent):QReflect_ParticleSystemUpdater(i,parent){
//custom initializations
}
QQuickItem* osgParticle::QMLParticleSystemUpdater::connect2View(QQuickItem*i){
	this->_view=QReflect_ParticleSystemUpdater::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osgParticle::QMLParticleSystemUpdater::updateModel(){
	  QReflect_ParticleSystemUpdater::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ParticleSystemUpdater_pmoc.cpp"
#endif




