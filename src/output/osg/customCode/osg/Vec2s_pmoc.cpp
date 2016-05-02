#include <osg/Vec2s>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Vec2s_pmoc.hpp>
using namespace pmoc;
osg::QMLVec2s::QMLVec2s(const pmoc::Instance *i,QObject* parent):QReflect_Vec2s(i,parent){
//custom initializations
}
QQuickItem* osg::QMLVec2s::connect2View(QQuickItem*i){
	this->_view=QReflect_Vec2s::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLVec2s::updateModel(){
	  QReflect_Vec2s::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Vec2s_pmoc.cpp"
#endif


