#include <osg/Billboard>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Billboard_pmoc.hpp>
using namespace pmoc;
osg::QMLBillboard::QMLBillboard(pmoc::Instance *i,QObject* parent):QReflect_Billboard(i,parent){
//custom initializations
}
QQuickItem* osg::QMLBillboard::connect2View(QQuickItem*i){
	this->_view=QReflect_Billboard::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLBillboard::updateModel(){
	  QReflect_Billboard::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Billboard_pmoc.cpp"
#endif




