#include <osgParticle/OrbitOperator>
//includes

#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osgParticle/OrbitOperator_pmoc.hpp>
using namespace pmoc;
osgParticle::QMLOrbitOperator::QMLOrbitOperator(pmoc::Instance *i,QObject* parent):QReflect_OrbitOperator(i,parent){
//custom initializations
}
QQuickItem* osgParticle::QMLOrbitOperator::connect2View(QQuickItem*i){
	this->_view=QReflect_OrbitOperator::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osgParticle::QMLOrbitOperator::updateModel(){
	  QReflect_OrbitOperator::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_OrbitOperator_pmoc.cpp"
#endif




