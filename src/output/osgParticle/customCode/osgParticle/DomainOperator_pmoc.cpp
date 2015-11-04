#include <osgParticle/DomainOperator>
//includes

#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osgParticle/DomainOperator_pmoc.hpp>
using namespace pmoc;
osgParticle::QMLDomainOperator::QMLDomainOperator(pmoc::Instance *i,QObject* parent):QReflect_DomainOperator(i,parent){
//custom initializations
}
QQuickItem* osgParticle::QMLDomainOperator::connect2View(QQuickItem*i){
	this->_view=QReflect_DomainOperator::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osgParticle::QMLDomainOperator::updateModel(){
	  QReflect_DomainOperator::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_DomainOperator_pmoc.cpp"
#endif




