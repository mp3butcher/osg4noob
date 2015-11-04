#include <osg/Vec3i>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Vec3i_pmoc.hpp>
using namespace pmoc;
osg::QMLVec3i::QMLVec3i(pmoc::Instance *i,QObject* parent):QReflect_Vec3i(i,parent){
//custom initializations
}
QQuickItem* osg::QMLVec3i::connect2View(QQuickItem*i){
	this->_view=QReflect_Vec3i::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLVec3i::updateModel(){
	  QReflect_Vec3i::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Vec3i_pmoc.cpp"
#endif


