#include <osg/Vec2ub>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Vec2ub_pmoc.hpp>
using namespace pmoc;
osg::QMLVec2ub::QMLVec2ub(pmoc::Instance *i,QObject* parent):QReflect_Vec2ub(i,parent){
//custom initializations
}
QQuickItem* osg::QMLVec2ub::connect2View(QQuickItem*i){
	this->_view=QReflect_Vec2ub::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLVec2ub::updateModel(){
	  QReflect_Vec2ub::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Vec2ub_pmoc.cpp"
#endif


