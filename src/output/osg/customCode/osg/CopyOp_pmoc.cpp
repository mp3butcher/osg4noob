#include <osg/CopyOp>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/CopyOp_pmoc.hpp>
using namespace pmoc;
osg::QMLCopyOp::QMLCopyOp(const pmoc::Instance *i,QObject* parent):QReflect_CopyOp(i,parent){
//custom initializations
}
QQuickItem* osg::QMLCopyOp::connect2View(QQuickItem*i){
	this->_view=QReflect_CopyOp::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLCopyOp::updateModel(){
	  QReflect_CopyOp::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_CopyOp_pmoc.cpp"
#endif


