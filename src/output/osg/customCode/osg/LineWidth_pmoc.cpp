#include <osg/LineWidth>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/LineWidth_pmoc.hpp>
using namespace pmoc;
osg::QMLLineWidth::QMLLineWidth(pmoc::Instance *i,QObject* parent):QReflect_LineWidth(i,parent){
//custom initializations
}
QQuickItem* osg::QMLLineWidth::connect2View(QQuickItem*i){
	this->_view=QReflect_LineWidth::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLLineWidth::updateModel(){
	  QReflect_LineWidth::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_LineWidth_pmoc.cpp"
#endif


