#include <osg/Vec4i>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Vec4i_pmoc.hpp>
using namespace pmoc;
osg::QMLVec4i::QMLVec4i(const pmoc::Instance *i,QObject* parent):QReflect_Vec4i(i,parent){
//custom initializations
}
QQuickItem* osg::QMLVec4i::connect2View(QQuickItem*i){
	this->_view=QReflect_Vec4i::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLVec4i::updateModel(){
	  QReflect_Vec4i::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Vec4i_pmoc.cpp"
#endif


