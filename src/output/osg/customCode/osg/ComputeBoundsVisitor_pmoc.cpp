#include <osg/ComputeBoundsVisitor>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/ComputeBoundsVisitor_pmoc.hpp>
using namespace pmoc;
osg::QMLComputeBoundsVisitor::QMLComputeBoundsVisitor(pmoc::Instance *i,QObject* parent):QReflect_ComputeBoundsVisitor(i,parent){
//custom initializations
}
QQuickItem* osg::QMLComputeBoundsVisitor::connect2View(QQuickItem*i){
	this->_view=QReflect_ComputeBoundsVisitor::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLComputeBoundsVisitor::updateModel(){
	  QReflect_ComputeBoundsVisitor::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ComputeBoundsVisitor_pmoc.cpp"
#endif



