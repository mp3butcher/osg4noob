#include <osgParticle/AccelOperator>
//includes

#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osgParticle/AccelOperator_pmoc.hpp>
using namespace pmoc;
osgParticle::QMLAccelOperator::QMLAccelOperator(const pmoc::Instance *i,QObject* parent):QReflect_AccelOperator(i,parent){
//custom initializations
}
QQuickItem* osgParticle::QMLAccelOperator::connect2View(QQuickItem*i){
	this->_view=QReflect_AccelOperator::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osgParticle::QMLAccelOperator::updateModel(){
	  QReflect_AccelOperator::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_AccelOperator_pmoc.cpp"
#endif




