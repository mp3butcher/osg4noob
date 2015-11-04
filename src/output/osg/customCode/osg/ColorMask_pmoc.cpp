#include <osg/ColorMask>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/ColorMask_pmoc.hpp>
using namespace pmoc;
osg::QMLColorMask::QMLColorMask(pmoc::Instance *i,QObject* parent):QReflect_ColorMask(i,parent){
//custom initializations
}
QQuickItem* osg::QMLColorMask::connect2View(QQuickItem*i){
	this->_view=QReflect_ColorMask::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLColorMask::updateModel(){
	  QReflect_ColorMask::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ColorMask_pmoc.cpp"
#endif


