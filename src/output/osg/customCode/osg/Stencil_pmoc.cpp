#include <osg/Stencil>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Stencil_pmoc.hpp>
using namespace pmoc;
osg::QMLStencil::QMLStencil(const pmoc::Instance *i,QObject* parent):QReflect_Stencil(i,parent){
//custom initializations
}
QQuickItem* osg::QMLStencil::connect2View(QQuickItem*i){
	this->_view=QReflect_Stencil::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLStencil::updateModel(){
	  QReflect_Stencil::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Stencil_pmoc.cpp"
#endif


