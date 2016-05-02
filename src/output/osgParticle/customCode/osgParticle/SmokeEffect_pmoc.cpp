#include <osgParticle/SmokeEffect>
//includes

#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osgParticle/SmokeEffect_pmoc.hpp>
using namespace pmoc;
osgParticle::QMLSmokeEffect::QMLSmokeEffect(const pmoc::Instance *i,QObject* parent):QReflect_SmokeEffect(i,parent){
//custom initializations
}
QQuickItem* osgParticle::QMLSmokeEffect::connect2View(QQuickItem*i){
	this->_view=QReflect_SmokeEffect::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osgParticle::QMLSmokeEffect::updateModel(){
	  QReflect_SmokeEffect::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_SmokeEffect_pmoc.cpp"
#endif




