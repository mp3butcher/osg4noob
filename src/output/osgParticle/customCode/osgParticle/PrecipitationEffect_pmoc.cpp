#include <osgParticle/PrecipitationEffect>
//includes


#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osgParticle/PrecipitationEffect_pmoc.hpp>
using namespace pmoc;
osgParticle::QMLPrecipitationEffect::QMLPrecipitationEffect(const pmoc::Instance *i,QObject* parent):QReflect_PrecipitationEffect(i,parent){
//custom initializations
}
QQuickItem* osgParticle::QMLPrecipitationEffect::connect2View(QQuickItem*i){
	this->_view=QReflect_PrecipitationEffect::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here

	  updateModel();


return this->_view;
}
void  osgParticle::QMLPrecipitationEffect::updateModel(){
	  QReflect_PrecipitationEffect::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_PrecipitationEffect_pmoc.cpp"
#endif




