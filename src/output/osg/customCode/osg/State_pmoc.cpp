#include <osg/State>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/State_pmoc.hpp>
using namespace pmoc;
osg::QMLState::QMLState(const pmoc::Instance *i,QObject* parent):QReflect_State(i,parent){
//custom initializations
}
QQuickItem* osg::QMLState::connect2View(QQuickItem*i){
	this->_view=QReflect_State::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLState::updateModel(){
	  QReflect_State::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_State_pmoc.cpp"
#endif
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/State_pmoc.hpp>
using namespace pmoc;
osg::QMLVertexAttribAlias::QMLVertexAttribAlias(const pmoc::Instance *i,QObject* parent):QReflect_VertexAttribAlias(i,parent){
//custom initializations
}
QQuickItem* osg::QMLVertexAttribAlias::connect2View(QQuickItem*i){
	this->_view=QReflect_VertexAttribAlias::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLVertexAttribAlias::updateModel(){
	  QReflect_VertexAttribAlias::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_State_pmoc.cpp"
#endif


