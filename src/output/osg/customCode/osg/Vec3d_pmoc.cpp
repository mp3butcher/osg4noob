#include <osg/Vec3d>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Vec3d_pmoc.hpp>
using namespace pmoc;
osg::QMLVec3d::QMLVec3d(pmoc::Instance *i,QObject* parent):QReflect_Vec3d(i,parent){
//custom initializations
}
QQuickItem* osg::QMLVec3d::connect2View(QQuickItem*i){
	this->_view=QReflect_Vec3d::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLVec3d::updateModel(){
	  QReflect_Vec3d::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Vec3d_pmoc.cpp"
#endif


