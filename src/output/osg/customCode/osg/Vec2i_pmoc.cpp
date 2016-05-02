#include <osg/Vec2i>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Vec2i_pmoc.hpp>
using namespace pmoc;
osg::QMLVec2i::QMLVec2i(const pmoc::Instance *i,QObject* parent):QReflect_Vec2i(i,parent){
//custom initializations
}
QQuickItem* osg::QMLVec2i::connect2View(QQuickItem*i){
	this->_view=QReflect_Vec2i::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLVec2i::updateModel(){
	  QReflect_Vec2i::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Vec2i_pmoc.cpp"
#endif


