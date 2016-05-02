#include <osg/LogicOp>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/LogicOp_pmoc.hpp>
using namespace pmoc;
osg::QMLLogicOp::QMLLogicOp(const pmoc::Instance *i,QObject* parent):QReflect_LogicOp(i,parent){
//custom initializations
}
QQuickItem* osg::QMLLogicOp::connect2View(QQuickItem*i){
	this->_view=QReflect_LogicOp::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLLogicOp::updateModel(){
	  QReflect_LogicOp::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_LogicOp_pmoc.cpp"
#endif


