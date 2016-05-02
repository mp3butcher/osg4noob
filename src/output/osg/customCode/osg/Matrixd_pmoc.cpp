#include <osg/Matrixd>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Matrixd_pmoc.hpp>
using namespace pmoc;
osg::QMLMatrixd::QMLMatrixd(const pmoc::Instance *i,QObject* parent):QReflect_Matrixd(i,parent){
//custom initializations
}
QQuickItem* osg::QMLMatrixd::connect2View(QQuickItem*i){
	this->_view=QReflect_Matrixd::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLMatrixd::updateModel(){
	  QReflect_Matrixd::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Matrixd_pmoc.cpp"
#endif
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Matrixd_pmoc.hpp>
using namespace pmoc;
osg::QMLRefMatrixd::QMLRefMatrixd(const pmoc::Instance *i,QObject* parent):QReflect_RefMatrixd(i,parent){
//custom initializations
}
QQuickItem* osg::QMLRefMatrixd::connect2View(QQuickItem*i){
	this->_view=QReflect_RefMatrixd::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLRefMatrixd::updateModel(){
	  QReflect_RefMatrixd::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Matrixd_pmoc.cpp"
#endif


