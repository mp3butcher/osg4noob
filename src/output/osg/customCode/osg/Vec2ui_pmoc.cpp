#include <osg/Vec2ui>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Vec2ui_pmoc.hpp>
using namespace pmoc;
osg::QMLVec2ui::QMLVec2ui(const pmoc::Instance *i,QObject* parent):QReflect_Vec2ui(i,parent){
//custom initializations
}
QQuickItem* osg::QMLVec2ui::connect2View(QQuickItem*i){
	this->_view=QReflect_Vec2ui::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLVec2ui::updateModel(){
	  QReflect_Vec2ui::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Vec2ui_pmoc.cpp"
#endif


