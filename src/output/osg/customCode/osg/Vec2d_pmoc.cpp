#include <osg/Vec2d>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Vec2d_pmoc.hpp>
using namespace pmoc;
osg::QMLVec2d::QMLVec2d(const pmoc::Instance *i,QObject* parent):QReflect_Vec2d(i,parent){
//custom initializations
}
QQuickItem* osg::QMLVec2d::connect2View(QQuickItem*i){
	this->_view=QReflect_Vec2d::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLVec2d::updateModel(){
	  QReflect_Vec2d::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Vec2d_pmoc.cpp"
#endif


