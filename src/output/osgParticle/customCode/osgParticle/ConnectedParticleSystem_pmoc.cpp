#include <osgParticle/ConnectedParticleSystem>
//includes

#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osgParticle/ConnectedParticleSystem_pmoc.hpp>
using namespace pmoc;
osgParticle::QMLConnectedParticleSystem::QMLConnectedParticleSystem(pmoc::Instance *i,QObject* parent):QReflect_ConnectedParticleSystem(i,parent){
//custom initializations
}
QQuickItem* osgParticle::QMLConnectedParticleSystem::connect2View(QQuickItem*i){
	this->_view=QReflect_ConnectedParticleSystem::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here
QQuickItem *out;
PMOCQCOMPONENT(_model->getDefaultParticleTemplate(),_view,out);

return this->_view;
}
void  osgParticle::QMLConnectedParticleSystem::updateModel(){
	  QReflect_ConnectedParticleSystem::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ConnectedParticleSystem_pmoc.cpp"
#endif




