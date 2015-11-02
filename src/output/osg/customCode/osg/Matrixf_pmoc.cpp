#include <osg/Matrixf>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Matrixf_pmoc.hpp>
using namespace pmoc;
osg::QMLMatrixf::QMLMatrixf(pmoc::Instance *i,QObject* parent):QReflect_Matrixf(i,parent){
//custom initializations
}
QQuickItem* osg::QMLMatrixf::connect2View(QQuickItem*i){
	this->_view=QReflect_Matrixf::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLMatrixf::updateModel(){
	  QReflect_Matrixf::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Matrixf_pmoc.cpp"
#endif
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Matrixf_pmoc.hpp>
using namespace pmoc;
osg::QMLRefMatrixf::QMLRefMatrixf(pmoc::Instance *i,QObject* parent):QReflect_RefMatrixf(i,parent){
//custom initializations
}
QQuickItem* osg::QMLRefMatrixf::connect2View(QQuickItem*i){
	this->_view=QReflect_RefMatrixf::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLRefMatrixf::updateModel(){
	  QReflect_RefMatrixf::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Matrixf_pmoc.cpp"
#endif


