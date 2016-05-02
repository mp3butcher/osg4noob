#include <osgParticle/FluidProgram>
//includes

#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osgParticle/FluidProgram_pmoc.hpp>
using namespace pmoc;
osgParticle::QMLFluidProgram::QMLFluidProgram(const pmoc::Instance *i,QObject* parent):QReflect_FluidProgram(i,parent){
//custom initializations
}
QQuickItem* osgParticle::QMLFluidProgram::connect2View(QQuickItem*i){
	this->_view=QReflect_FluidProgram::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osgParticle::QMLFluidProgram::updateModel(){
	  QReflect_FluidProgram::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_FluidProgram_pmoc.cpp"
#endif




