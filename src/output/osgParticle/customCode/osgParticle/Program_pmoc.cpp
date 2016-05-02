#include <osgParticle/Program>
//includes

#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osgParticle/Program_pmoc.hpp>
using namespace pmoc;
osgParticle::QMLProgram::QMLProgram(const pmoc::Instance *i,QObject* parent):QReflect_Program(i,parent){
//custom initializations
}
QQuickItem* osgParticle::QMLProgram::connect2View(QQuickItem*i){
	this->_view=QReflect_Program::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osgParticle::QMLProgram::updateModel(){
	  QReflect_Program::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Program_pmoc.cpp"
#endif




