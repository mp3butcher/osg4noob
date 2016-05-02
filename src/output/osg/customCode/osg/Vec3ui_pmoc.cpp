#include <osg/Vec3ui>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Vec3ui_pmoc.hpp>
using namespace pmoc;
osg::QMLVec3ui::QMLVec3ui(const pmoc::Instance *i,QObject* parent):QReflect_Vec3ui(i,parent){
//custom initializations
}
QQuickItem* osg::QMLVec3ui::connect2View(QQuickItem*i){
	this->_view=QReflect_Vec3ui::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLVec3ui::updateModel(){
	  QReflect_Vec3ui::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Vec3ui_pmoc.cpp"
#endif


