#include <osg/LineStipple>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/LineStipple_pmoc.hpp>
using namespace pmoc;
osg::QMLLineStipple::QMLLineStipple(const pmoc::Instance *i,QObject* parent):QReflect_LineStipple(i,parent){
//custom initializations
}
QQuickItem* osg::QMLLineStipple::connect2View(QQuickItem*i){
	this->_view=QReflect_LineStipple::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLLineStipple::updateModel(){
	  QReflect_LineStipple::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_LineStipple_pmoc.cpp"
#endif


