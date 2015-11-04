#include <osg/Vec2f>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Vec2f_pmoc.hpp>
using namespace pmoc;
osg::QMLVec2f::QMLVec2f(pmoc::Instance *i,QObject* parent):QReflect_Vec2f(i,parent){
//custom initializations
}
QQuickItem* osg::QMLVec2f::connect2View(QQuickItem*i){
	this->_view=QReflect_Vec2f::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLVec2f::updateModel(){
	  QReflect_Vec2f::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Vec2f_pmoc.cpp"
#endif


