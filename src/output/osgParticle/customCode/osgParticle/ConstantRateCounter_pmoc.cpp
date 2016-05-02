#include <osgParticle/ConstantRateCounter>
//includes

#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osgParticle/ConstantRateCounter_pmoc.hpp>
using namespace pmoc;
osgParticle::QMLConstantRateCounter::QMLConstantRateCounter(const pmoc::Instance *i,QObject* parent):QReflect_ConstantRateCounter(i,parent){
//custom initializations
}
QQuickItem* osgParticle::QMLConstantRateCounter::connect2View(QQuickItem*i){
	this->_view=QReflect_ConstantRateCounter::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osgParticle::QMLConstantRateCounter::updateModel(){
	  QReflect_ConstantRateCounter::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ConstantRateCounter_pmoc.cpp"
#endif


