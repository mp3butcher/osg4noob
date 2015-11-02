#include <osg/Vec2b>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Vec2b_pmoc.hpp>
using namespace pmoc;
osg::QMLVec2b::QMLVec2b(pmoc::Instance *i,QObject* parent):QReflect_Vec2b(i,parent){
//custom initializations
}
QQuickItem* osg::QMLVec2b::connect2View(QQuickItem*i){
	this->_view=QReflect_Vec2b::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLVec2b::updateModel(){
	  QReflect_Vec2b::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Vec2b_pmoc.cpp"
#endif


