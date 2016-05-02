#include <osg/Vec3s>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Vec3s_pmoc.hpp>
using namespace pmoc;
osg::QMLVec3s::QMLVec3s(const pmoc::Instance *i,QObject* parent):QReflect_Vec3s(i,parent){
//custom initializations
}
QQuickItem* osg::QMLVec3s::connect2View(QQuickItem*i){
	this->_view=QReflect_Vec3s::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLVec3s::updateModel(){
	  QReflect_Vec3s::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Vec3s_pmoc.cpp"
#endif


