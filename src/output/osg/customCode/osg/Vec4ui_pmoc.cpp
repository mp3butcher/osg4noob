#include <osg/Vec4ui>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Vec4ui_pmoc.hpp>
using namespace pmoc;
osg::QMLVec4ui::QMLVec4ui(pmoc::Instance *i,QObject* parent):QReflect_Vec4ui(i,parent){
//custom initializations
}
QQuickItem* osg::QMLVec4ui::connect2View(QQuickItem*i){
	this->_view=QReflect_Vec4ui::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLVec4ui::updateModel(){
	  QReflect_Vec4ui::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Vec4ui_pmoc.cpp"
#endif


