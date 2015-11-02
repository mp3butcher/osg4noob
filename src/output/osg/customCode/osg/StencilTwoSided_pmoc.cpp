#include <osg/StencilTwoSided>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/StencilTwoSided_pmoc.hpp>
using namespace pmoc;
osg::QMLStencilTwoSided::QMLStencilTwoSided(pmoc::Instance *i,QObject* parent):QReflect_StencilTwoSided(i,parent){
//custom initializations
}
QQuickItem* osg::QMLStencilTwoSided::connect2View(QQuickItem*i){
	this->_view=QReflect_StencilTwoSided::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLStencilTwoSided::updateModel(){
	  QReflect_StencilTwoSided::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_StencilTwoSided_pmoc.cpp"
#endif


