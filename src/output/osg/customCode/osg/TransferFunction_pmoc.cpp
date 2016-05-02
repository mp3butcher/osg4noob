#include <osg/TransferFunction>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/TransferFunction_pmoc.hpp>
using namespace pmoc;
osg::QMLTransferFunction::QMLTransferFunction(const pmoc::Instance *i,QObject* parent):QReflect_TransferFunction(i,parent){
//custom initializations
}
QQuickItem* osg::QMLTransferFunction::connect2View(QQuickItem*i){
	this->_view=QReflect_TransferFunction::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLTransferFunction::updateModel(){
	  QReflect_TransferFunction::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_TransferFunction_pmoc.cpp"
#endif
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/TransferFunction_pmoc.hpp>
using namespace pmoc;
osg::QMLTransferFunction1D::QMLTransferFunction1D(const pmoc::Instance *i,QObject* parent):QReflect_TransferFunction1D(i,parent){
//custom initializations
}
QQuickItem* osg::QMLTransferFunction1D::connect2View(QQuickItem*i){
	this->_view=QReflect_TransferFunction1D::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLTransferFunction1D::updateModel(){
	  QReflect_TransferFunction1D::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_TransferFunction_pmoc.cpp"
#endif


