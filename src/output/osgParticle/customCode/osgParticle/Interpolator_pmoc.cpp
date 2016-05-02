#include <osgParticle/Interpolator>
//includes

#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osgParticle/Interpolator_pmoc.hpp>
using namespace pmoc;
osgParticle::QMLInterpolator::QMLInterpolator(const pmoc::Instance *i,QObject* parent):QReflect_Interpolator(i,parent){
//custom initializations
}
QQuickItem* osgParticle::QMLInterpolator::connect2View(QQuickItem*i){
	this->_view=QReflect_Interpolator::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osgParticle::QMLInterpolator::updateModel(){
	  QReflect_Interpolator::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Interpolator_pmoc.cpp"
#endif


