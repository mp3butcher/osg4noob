#include <osg/Scissor>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Scissor_pmoc.hpp>
using namespace pmoc;
osg::QMLScissor::QMLScissor(pmoc::Instance *i,QObject* parent):QReflect_Scissor(i,parent){
//custom initializations
}
QQuickItem* osg::QMLScissor::connect2View(QQuickItem*i){
	this->_view=QReflect_Scissor::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLScissor::updateModel(){
	  QReflect_Scissor::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Scissor_pmoc.cpp"
#endif


