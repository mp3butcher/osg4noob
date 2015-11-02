#include <osg/Vec4f>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Vec4f_pmoc.hpp>
using namespace pmoc;
osg::QMLVec4f::QMLVec4f(pmoc::Instance *i,QObject* parent):QReflect_Vec4f(i,parent){
//custom initializations
}
QQuickItem* osg::QMLVec4f::connect2View(QQuickItem*i){
	this->_view=QReflect_Vec4f::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLVec4f::updateModel(){
	  QReflect_Vec4f::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Vec4f_pmoc.cpp"
#endif


