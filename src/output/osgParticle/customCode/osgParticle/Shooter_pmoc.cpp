#include <osgParticle/Shooter>
//includes

#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osgParticle/Shooter_pmoc.hpp>
using namespace pmoc;
osgParticle::QMLShooter::QMLShooter(pmoc::Instance *i,QObject* parent):QReflect_Shooter(i,parent){
//custom initializations
}
QQuickItem* osgParticle::QMLShooter::connect2View(QQuickItem*i){
	this->_view=QReflect_Shooter::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osgParticle::QMLShooter::updateModel(){
	  QReflect_Shooter::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Shooter_pmoc.cpp"
#endif


