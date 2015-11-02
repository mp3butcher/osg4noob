#include <osgParticle/ModularProgram>
//includes

#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osgParticle/ModularProgram_pmoc.hpp>
using namespace pmoc;
osgParticle::QMLModularProgram::QMLModularProgram(pmoc::Instance *i,QObject* parent):QReflect_ModularProgram(i,parent){
//custom initializations
}
QQuickItem* osgParticle::QMLModularProgram::connect2View(QQuickItem*i){
	this->_view=QReflect_ModularProgram::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osgParticle::QMLModularProgram::updateModel(){
	  QReflect_ModularProgram::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ModularProgram_pmoc.cpp"
#endif




