#include <osg/Vec3f>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Vec3f_pmoc.hpp>
using namespace pmoc;

osg::QMLVec3f::QMLVec3f(const pmoc::Instance *i,QObject* parent):QReflect_Vec3f(i,parent){
//custom initializations
}
QQuickItem* osg::QMLVec3f::connect2View(QQuickItem*i){
	this->_view=QReflect_Vec3f::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLVec3f::updateModel(){
	  QReflect_Vec3f::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Vec3f_pmoc.cpp"
#endif


