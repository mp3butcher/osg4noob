#include <osgParticle/ExplosionOperator>
//includes

#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osgParticle/ExplosionOperator_pmoc.hpp>
using namespace pmoc;
osgParticle::QMLExplosionOperator::QMLExplosionOperator(pmoc::Instance *i,QObject* parent):QReflect_ExplosionOperator(i,parent){
//custom initializations
}
QQuickItem* osgParticle::QMLExplosionOperator::connect2View(QQuickItem*i){
	this->_view=QReflect_ExplosionOperator::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osgParticle::QMLExplosionOperator::updateModel(){
	  QReflect_ExplosionOperator::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ExplosionOperator_pmoc.cpp"
#endif




