#include <osg/ArrayDispatchers>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/ArrayDispatchers_pmoc.hpp>
using namespace pmoc;
osg::QMLArrayDispatchers::QMLArrayDispatchers(pmoc::Instance *i,QObject* parent):QReflect_ArrayDispatchers(i,parent){
//custom initializations
}
QQuickItem* osg::QMLArrayDispatchers::connect2View(QQuickItem*i){
	this->_view=QReflect_ArrayDispatchers::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLArrayDispatchers::updateModel(){
	  QReflect_ArrayDispatchers::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ArrayDispatchers_pmoc.cpp"
#endif
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/ArrayDispatchers_pmoc.hpp>
using namespace pmoc;
osg::QMLAttributeDispatch::QMLAttributeDispatch(pmoc::Instance *i,QObject* parent):QReflect_AttributeDispatch(i,parent){
//custom initializations
}
QQuickItem* osg::QMLAttributeDispatch::connect2View(QQuickItem*i){
	this->_view=QReflect_AttributeDispatch::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLAttributeDispatch::updateModel(){
	  QReflect_AttributeDispatch::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ArrayDispatchers_pmoc.cpp"
#endif


