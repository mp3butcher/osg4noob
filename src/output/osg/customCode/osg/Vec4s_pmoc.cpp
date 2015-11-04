#include <osg/Vec4s>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Vec4s_pmoc.hpp>
using namespace pmoc;
osg::QMLVec4s::QMLVec4s(pmoc::Instance *i,QObject* parent):QReflect_Vec4s(i,parent){
//custom initializations
}
QQuickItem* osg::QMLVec4s::connect2View(QQuickItem*i){
	this->_view=QReflect_Vec4s::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLVec4s::updateModel(){
	  QReflect_Vec4s::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Vec4s_pmoc.cpp"
#endif


