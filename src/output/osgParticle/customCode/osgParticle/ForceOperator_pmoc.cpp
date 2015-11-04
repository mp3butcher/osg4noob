#include <osgParticle/ForceOperator>
//includes

#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osgParticle/ForceOperator_pmoc.hpp>
using namespace pmoc;
osgParticle::QMLForceOperator::QMLForceOperator(pmoc::Instance *i,QObject* parent):QReflect_ForceOperator(i,parent){
//custom initializations
}
QQuickItem* osgParticle::QMLForceOperator::connect2View(QQuickItem*i){
	this->_view=QReflect_ForceOperator::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osgParticle::QMLForceOperator::updateModel(){
	  QReflect_ForceOperator::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ForceOperator_pmoc.cpp"
#endif




