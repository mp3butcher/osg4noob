#include <osg/Drawable>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Drawable_pmoc.hpp>
using namespace pmoc;
osg::QMLAttributeFunctorArrayVisitor::QMLAttributeFunctorArrayVisitor(pmoc::Instance *i,QObject* parent):QReflect_AttributeFunctorArrayVisitor(i,parent){
//custom initializations
}
QQuickItem* osg::QMLAttributeFunctorArrayVisitor::connect2View(QQuickItem*i){
	this->_view=QReflect_AttributeFunctorArrayVisitor::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLAttributeFunctorArrayVisitor::updateModel(){
	  QReflect_AttributeFunctorArrayVisitor::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Drawable_pmoc.cpp"
#endif
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Drawable_pmoc.hpp>
using namespace pmoc;
osg::QMLConstAttributeFunctorArrayVisitor::QMLConstAttributeFunctorArrayVisitor(pmoc::Instance *i,QObject* parent):QReflect_ConstAttributeFunctorArrayVisitor(i,parent){
//custom initializations
}
QQuickItem* osg::QMLConstAttributeFunctorArrayVisitor::connect2View(QQuickItem*i){
	this->_view=QReflect_ConstAttributeFunctorArrayVisitor::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLConstAttributeFunctorArrayVisitor::updateModel(){
	  QReflect_ConstAttributeFunctorArrayVisitor::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Drawable_pmoc.cpp"
#endif
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Drawable_pmoc.hpp>
using namespace pmoc;
osg::QMLDrawable::QMLDrawable(pmoc::Instance *i,QObject* parent):QReflect_Drawable(i,parent){
//custom initializations
}
QQuickItem* osg::QMLDrawable::connect2View(QQuickItem*i){
	this->_view=QReflect_Drawable::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLDrawable::updateModel(){
	  QReflect_Drawable::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Drawable_pmoc.cpp"
#endif




