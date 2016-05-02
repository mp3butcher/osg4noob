#include <osg/GraphicsCostEstimator>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/GraphicsCostEstimator_pmoc.hpp>
using namespace pmoc;
osg::QMLClampedLinearCostFunction1D::QMLClampedLinearCostFunction1D(const pmoc::Instance *i,QObject* parent):QReflect_ClampedLinearCostFunction1D(i,parent){
//custom initializations
}
QQuickItem* osg::QMLClampedLinearCostFunction1D::connect2View(QQuickItem*i){
	this->_view=QReflect_ClampedLinearCostFunction1D::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLClampedLinearCostFunction1D::updateModel(){
	  QReflect_ClampedLinearCostFunction1D::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_GraphicsCostEstimator_pmoc.cpp"
#endif
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/GraphicsCostEstimator_pmoc.hpp>
using namespace pmoc;
osg::QMLGeometryCostEstimator::QMLGeometryCostEstimator(const pmoc::Instance *i,QObject* parent):QReflect_GeometryCostEstimator(i,parent){
//custom initializations
}
QQuickItem* osg::QMLGeometryCostEstimator::connect2View(QQuickItem*i){
	this->_view=QReflect_GeometryCostEstimator::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLGeometryCostEstimator::updateModel(){
	  QReflect_GeometryCostEstimator::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_GraphicsCostEstimator_pmoc.cpp"
#endif
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/GraphicsCostEstimator_pmoc.hpp>
using namespace pmoc;
osg::QMLGraphicsCostEstimator::QMLGraphicsCostEstimator(const pmoc::Instance *i,QObject* parent):QReflect_GraphicsCostEstimator(i,parent){
//custom initializations
}
QQuickItem* osg::QMLGraphicsCostEstimator::connect2View(QQuickItem*i){
	this->_view=QReflect_GraphicsCostEstimator::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLGraphicsCostEstimator::updateModel(){
	  QReflect_GraphicsCostEstimator::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_GraphicsCostEstimator_pmoc.cpp"
#endif
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/GraphicsCostEstimator_pmoc.hpp>
using namespace pmoc;
osg::QMLProgramCostEstimator::QMLProgramCostEstimator(const pmoc::Instance *i,QObject* parent):QReflect_ProgramCostEstimator(i,parent){
//custom initializations
}
QQuickItem* osg::QMLProgramCostEstimator::connect2View(QQuickItem*i){
	this->_view=QReflect_ProgramCostEstimator::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLProgramCostEstimator::updateModel(){
	  QReflect_ProgramCostEstimator::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_GraphicsCostEstimator_pmoc.cpp"
#endif
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/GraphicsCostEstimator_pmoc.hpp>
using namespace pmoc;
osg::QMLTextureCostEstimator::QMLTextureCostEstimator(const pmoc::Instance *i,QObject* parent):QReflect_TextureCostEstimator(i,parent){
//custom initializations
}
QQuickItem* osg::QMLTextureCostEstimator::connect2View(QQuickItem*i){
	this->_view=QReflect_TextureCostEstimator::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLTextureCostEstimator::updateModel(){
	  QReflect_TextureCostEstimator::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_GraphicsCostEstimator_pmoc.cpp"
#endif


