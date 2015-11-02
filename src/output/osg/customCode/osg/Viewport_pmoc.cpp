#include <osg/Viewport>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Viewport_pmoc.hpp>
using namespace pmoc;
osg::QMLViewport::QMLViewport(pmoc::Instance *i,QObject* parent):QReflect_Viewport(i,parent){
//custom initializations
}
QQuickItem* osg::QMLViewport::connect2View(QQuickItem*i){
	this->_view=QReflect_Viewport::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLViewport::updateModel(){
	  QReflect_Viewport::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Viewport_pmoc.cpp"
#endif


