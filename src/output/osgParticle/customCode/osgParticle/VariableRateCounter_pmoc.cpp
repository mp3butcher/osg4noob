#include <osgParticle/VariableRateCounter>
//includes

#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osgParticle/VariableRateCounter_pmoc.hpp>
using namespace pmoc;
osgParticle::QMLVariableRateCounter::QMLVariableRateCounter(const pmoc::Instance *i,QObject* parent):QReflect_VariableRateCounter(i,parent){
//custom initializations
}
QQuickItem* osgParticle::QMLVariableRateCounter::connect2View(QQuickItem*i){
	this->_view=QReflect_VariableRateCounter::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osgParticle::QMLVariableRateCounter::updateModel(){
	  QReflect_VariableRateCounter::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_VariableRateCounter_pmoc.cpp"
#endif


