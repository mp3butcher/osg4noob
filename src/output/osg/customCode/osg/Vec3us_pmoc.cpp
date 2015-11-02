#include <osg/Vec3us>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Vec3us_pmoc.hpp>
using namespace pmoc;
osg::QMLVec3us::QMLVec3us(pmoc::Instance *i,QObject* parent):QReflect_Vec3us(i,parent){
//custom initializations
}
QQuickItem* osg::QMLVec3us::connect2View(QQuickItem*i){
	this->_view=QReflect_Vec3us::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLVec3us::updateModel(){
	  QReflect_Vec3us::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Vec3us_pmoc.cpp"
#endif


