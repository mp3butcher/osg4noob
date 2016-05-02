#include <osgParticle/RandomRateCounter>
//includes

#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osgParticle/RandomRateCounter_pmoc.hpp>
using namespace pmoc;
osgParticle::QMLRandomRateCounter::QMLRandomRateCounter(const pmoc::Instance *i,QObject* parent):QReflect_RandomRateCounter(i,parent){
//custom initializations
}
QQuickItem* osgParticle::QMLRandomRateCounter::connect2View(QQuickItem*i){
	this->_view=QReflect_RandomRateCounter::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osgParticle::QMLRandomRateCounter::updateModel(){
	  QReflect_RandomRateCounter::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_RandomRateCounter_pmoc.cpp"
#endif


