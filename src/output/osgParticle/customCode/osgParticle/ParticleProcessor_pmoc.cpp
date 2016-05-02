#include <osgParticle/ParticleProcessor>
//includes

#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osgParticle/ParticleProcessor_pmoc.hpp>
using namespace pmoc;
osgParticle::QMLParticleProcessor::QMLParticleProcessor(const pmoc::Instance *i,QObject* parent):QReflect_ParticleProcessor(i,parent){
//custom initializations
}
QQuickItem* osgParticle::QMLParticleProcessor::connect2View(QQuickItem*i){
	this->_view=QReflect_ParticleProcessor::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osgParticle::QMLParticleProcessor::updateModel(){
	  QReflect_ParticleProcessor::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ParticleProcessor_pmoc.cpp"
#endif




