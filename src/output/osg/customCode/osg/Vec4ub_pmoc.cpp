#include <osg/Vec4ub>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Vec4ub_pmoc.hpp>
using namespace pmoc;
osg::QMLVec4ub::QMLVec4ub(const pmoc::Instance *i,QObject* parent):QReflect_Vec4ub(i,parent){
//custom initializations
}
QQuickItem* osg::QMLVec4ub::connect2View(QQuickItem*i){
	this->_view=QReflect_Vec4ub::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLVec4ub::updateModel(){
	  QReflect_Vec4ub::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Vec4ub_pmoc.cpp"
#endif


