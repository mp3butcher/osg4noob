#include <osgParticle/SinkOperator>
//includes

#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osgParticle/SinkOperator_pmoc.hpp>
using namespace pmoc;
osgParticle::QMLSinkOperator::QMLSinkOperator(pmoc::Instance *i,QObject* parent):QReflect_SinkOperator(i,parent){
//custom initializations
}
QQuickItem* osgParticle::QMLSinkOperator::connect2View(QQuickItem*i){
	this->_view=QReflect_SinkOperator::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osgParticle::QMLSinkOperator::updateModel(){
	  QReflect_SinkOperator::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_SinkOperator_pmoc.cpp"
#endif




