#include <osgParticle/RadialShooter>
//includes

#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osgParticle/RadialShooter_pmoc.hpp>
using namespace pmoc;
osgParticle::QMLRadialShooter::QMLRadialShooter(pmoc::Instance *i,QObject* parent):QReflect_RadialShooter(i,parent){
//custom initializations
}
QQuickItem* osgParticle::QMLRadialShooter::connect2View(QQuickItem*i){
	this->_view=QReflect_RadialShooter::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osgParticle::QMLRadialShooter::updateModel(){
	  QReflect_RadialShooter::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_RadialShooter_pmoc.cpp"
#endif




