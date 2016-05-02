#include <osg/ClipControl>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/ClipControl_pmoc.hpp>
using namespace pmoc;
osg::QMLClipControl::QMLClipControl(const pmoc::Instance *i,QObject* parent):QReflect_ClipControl(i,parent){
//custom initializations
}
QQuickItem* osg::QMLClipControl::connect2View(QQuickItem*i){
	this->_view=QReflect_ClipControl::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLClipControl::updateModel(){
	  QReflect_ClipControl::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ClipControl_pmoc.cpp"
#endif


