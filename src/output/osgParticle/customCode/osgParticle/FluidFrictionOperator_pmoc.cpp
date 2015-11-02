#include <osgParticle/FluidFrictionOperator>
//includes

#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osgParticle/FluidFrictionOperator_pmoc.hpp>
using namespace pmoc;
osgParticle::QMLFluidFrictionOperator::QMLFluidFrictionOperator(pmoc::Instance *i,QObject* parent):QReflect_FluidFrictionOperator(i,parent){
//custom initializations
}
QQuickItem* osgParticle::QMLFluidFrictionOperator::connect2View(QQuickItem*i){
	this->_view=QReflect_FluidFrictionOperator::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osgParticle::QMLFluidFrictionOperator::updateModel(){
	  QReflect_FluidFrictionOperator::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_FluidFrictionOperator_pmoc.cpp"
#endif




