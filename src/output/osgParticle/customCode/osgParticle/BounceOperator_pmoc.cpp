#include <osgParticle/BounceOperator>
//includes

#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osgParticle/BounceOperator_pmoc.hpp>
using namespace pmoc;
osgParticle::QMLBounceOperator::QMLBounceOperator(const pmoc::Instance *i,QObject* parent):QReflect_BounceOperator(i,parent){
//custom initializations
}
QQuickItem* osgParticle::QMLBounceOperator::connect2View(QQuickItem*i){
	this->_view=QReflect_BounceOperator::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osgParticle::QMLBounceOperator::updateModel(){
	  QReflect_BounceOperator::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_BounceOperator_pmoc.cpp"
#endif




