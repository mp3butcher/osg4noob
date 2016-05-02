#include <osgParticle/ModularEmitter>
//includes

#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osgParticle/ModularEmitter_pmoc.hpp>
#include <osgParticle/ParticleProcessor>
using namespace pmoc;
osgParticle::QMLModularEmitter::QMLModularEmitter(const pmoc::Instance *i,QObject* parent):QReflect_ModularEmitter(i,parent){
//custom initializations
// _model->setReferenceFrame(osgParticle::ParticleProcessor::ABSOLUTE_RF);
  // _model->setStartTime(_startTime);
      //  _model->setLifeTime(10);
     //   _model->setEndless(true);
}
QQuickItem* osgParticle::QMLModularEmitter::connect2View(QQuickItem*i){
	this->_view=QReflect_ModularEmitter::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osgParticle::QMLModularEmitter::updateModel(){
	  QReflect_ModularEmitter::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ModularEmitter_pmoc.cpp"
#endif




