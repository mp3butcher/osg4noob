#include <osg/Vec4b>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Vec4b_pmoc.hpp>
using namespace pmoc;
osg::QMLVec4b::QMLVec4b(pmoc::Instance *i,QObject* parent):QReflect_Vec4b(i,parent){
//custom initializations
}
QQuickItem* osg::QMLVec4b::connect2View(QQuickItem*i){
	this->_view=QReflect_Vec4b::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLVec4b::updateModel(){
	  QReflect_Vec4b::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Vec4b_pmoc.cpp"
#endif


