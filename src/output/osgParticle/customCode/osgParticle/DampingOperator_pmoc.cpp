#include <osgParticle/DampingOperator>
//includes

#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osgParticle/DampingOperator_pmoc.hpp>
using namespace pmoc;
osgParticle::QMLDampingOperator::QMLDampingOperator(const pmoc::Instance *i,QObject* parent):QReflect_DampingOperator(i,parent){
//custom initializations
}
QQuickItem* osgParticle::QMLDampingOperator::connect2View(QQuickItem*i){
	this->_view=QReflect_DampingOperator::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osgParticle::QMLDampingOperator::updateModel(){
	  QReflect_DampingOperator::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_DampingOperator_pmoc.cpp"
#endif




