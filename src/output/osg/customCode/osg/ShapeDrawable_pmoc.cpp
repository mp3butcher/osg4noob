#include <osg/ShapeDrawable>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/ShapeDrawable_pmoc.hpp>
using namespace pmoc;
osg::QMLShapeDrawable::QMLShapeDrawable(const pmoc::Instance *i,QObject* parent):QReflect_ShapeDrawable(i,parent){
//custom initializations
}
QQuickItem* osg::QMLShapeDrawable::connect2View(QQuickItem*i){
	this->_view=QReflect_ShapeDrawable::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLShapeDrawable::updateModel(){
	  QReflect_ShapeDrawable::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ShapeDrawable_pmoc.cpp"
#endif
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/ShapeDrawable_pmoc.hpp>
using namespace pmoc;
osg::QMLTessellationHints::QMLTessellationHints(const pmoc::Instance *i,QObject* parent):QReflect_TessellationHints(i,parent){
//custom initializations
}
QQuickItem* osg::QMLTessellationHints::connect2View(QQuickItem*i){
	this->_view=QReflect_TessellationHints::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLTessellationHints::updateModel(){
	  QReflect_TessellationHints::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ShapeDrawable_pmoc.cpp"
#endif




