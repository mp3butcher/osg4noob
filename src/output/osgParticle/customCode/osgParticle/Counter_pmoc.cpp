#include <osgParticle/Counter>
//includes

#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osgParticle/Counter_pmoc.hpp>
using namespace pmoc;
osgParticle::QMLCounter::QMLCounter(pmoc::Instance *i,QObject* parent):QReflect_Counter(i,parent){
//custom initializations
}
QQuickItem* osgParticle::QMLCounter::connect2View(QQuickItem*i){
	this->_view=QReflect_Counter::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osgParticle::QMLCounter::updateModel(){
	  QReflect_Counter::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Counter_pmoc.cpp"
#endif


