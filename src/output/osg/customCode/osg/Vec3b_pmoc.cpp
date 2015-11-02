#include <osg/Vec3b>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Vec3b_pmoc.hpp>
using namespace pmoc;
osg::QMLVec3b::QMLVec3b(pmoc::Instance *i,QObject* parent):QReflect_Vec3b(i,parent){
//custom initializations
}
QQuickItem* osg::QMLVec3b::connect2View(QQuickItem*i){
	this->_view=QReflect_Vec3b::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLVec3b::updateModel(){
	  QReflect_Vec3b::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Vec3b_pmoc.cpp"
#endif


