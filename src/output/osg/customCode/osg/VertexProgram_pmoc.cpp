#include <osg/VertexProgram>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/VertexProgram_pmoc.hpp>
using namespace pmoc;
osg::QMLVertexProgram::QMLVertexProgram(pmoc::Instance *i,QObject* parent):QReflect_VertexProgram(i,parent){
//custom initializations
}
QQuickItem* osg::QMLVertexProgram::connect2View(QQuickItem*i){
	this->_view=QReflect_VertexProgram::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLVertexProgram::updateModel(){
	  QReflect_VertexProgram::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_VertexProgram_pmoc.cpp"
#endif


