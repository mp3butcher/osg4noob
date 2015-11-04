#include <osg/Vec3ub>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Vec3ub_pmoc.hpp>
using namespace pmoc;
osg::QMLVec3ub::QMLVec3ub(pmoc::Instance *i,QObject* parent):QReflect_Vec3ub(i,parent){
//custom initializations
}
QQuickItem* osg::QMLVec3ub::connect2View(QQuickItem*i){
	this->_view=QReflect_Vec3ub::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLVec3ub::updateModel(){
	  QReflect_Vec3ub::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Vec3ub_pmoc.cpp"
#endif


