#include <osg/Quat>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Quat_pmoc.hpp>
using namespace pmoc;
osg::QMLQuat::QMLQuat(const pmoc::Instance *i,QObject* parent):QReflect_Quat(i,parent){
//custom initializations
}
QQuickItem* osg::QMLQuat::connect2View(QQuickItem*i){
	this->_view=QReflect_Quat::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLQuat::updateModel(){
	  QReflect_Quat::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Quat_pmoc.cpp"
#endif


