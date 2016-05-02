#include <osg/Vec2us>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Vec2us_pmoc.hpp>
using namespace pmoc;
osg::QMLVec2us::QMLVec2us(const pmoc::Instance *i,QObject* parent):QReflect_Vec2us(i,parent){
//custom initializations
}
QQuickItem* osg::QMLVec2us::connect2View(QQuickItem*i){
	this->_view=QReflect_Vec2us::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLVec2us::updateModel(){
	  QReflect_Vec2us::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Vec2us_pmoc.cpp"
#endif


