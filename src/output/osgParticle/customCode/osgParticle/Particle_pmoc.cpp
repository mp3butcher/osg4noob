#include <osgParticle/Particle>
//includes

#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osgParticle/Particle_pmoc.hpp>
using namespace pmoc;
osgParticle::QMLParticle::QMLParticle(pmoc::Instance *i,QObject* parent):QReflect_Particle(i,parent){
//custom initializations
}
QQuickItem* osgParticle::QMLParticle::connect2View(QQuickItem*i){
	this->_view=QReflect_Particle::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osgParticle::QMLParticle::updateModel(){
	  QReflect_Particle::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Particle_pmoc.cpp"
#endif




