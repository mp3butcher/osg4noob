#include <osg/ClipPlane>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/ClipPlane_pmoc.hpp>
using namespace pmoc;
osg::QMLClipPlane::QMLClipPlane(pmoc::Instance *i,QObject* parent):QReflect_ClipPlane(i,parent){
//custom initializations
}
QQuickItem* osg::QMLClipPlane::connect2View(QQuickItem*i){
	this->_view=QReflect_ClipPlane::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLClipPlane::updateModel(){
	  QReflect_ClipPlane::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ClipPlane_pmoc.cpp"
#endif


