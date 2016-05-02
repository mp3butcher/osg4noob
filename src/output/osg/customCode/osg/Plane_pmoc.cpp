#include <osg/Plane>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Plane_pmoc.hpp>
using namespace pmoc;
osg::QMLPlane::QMLPlane(const pmoc::Instance *i,QObject* parent):QReflect_Plane(i,parent){
//custom initializations
}
QQuickItem* osg::QMLPlane::connect2View(QQuickItem*i){
	this->_view=QReflect_Plane::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLPlane::updateModel(){
	  QReflect_Plane::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Plane_pmoc.cpp"
#endif


