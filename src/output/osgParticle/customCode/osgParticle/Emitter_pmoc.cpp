#include <osgParticle/Emitter>
//includes

#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osgParticle/Emitter_pmoc.hpp>
using namespace pmoc;
osgParticle::QMLEmitter::QMLEmitter(pmoc::Instance *i,QObject* parent):QReflect_Emitter(i,parent){
//custom initializations
}
QQuickItem* osgParticle::QMLEmitter::connect2View(QQuickItem*i){
	this->_view=QReflect_Emitter::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osgParticle::QMLEmitter::updateModel(){
	  QReflect_Emitter::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Emitter_pmoc.cpp"
#endif




