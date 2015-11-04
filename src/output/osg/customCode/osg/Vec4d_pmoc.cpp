#include <osg/Vec4d>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Vec4d_pmoc.hpp>
using namespace pmoc;
osg::QMLVec4d::QMLVec4d(pmoc::Instance *i,QObject* parent):QReflect_Vec4d(i,parent){
//custom initializations
}
QQuickItem* osg::QMLVec4d::connect2View(QQuickItem*i){
	this->_view=QReflect_Vec4d::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLVec4d::updateModel(){
	  QReflect_Vec4d::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Vec4d_pmoc.cpp"
#endif


