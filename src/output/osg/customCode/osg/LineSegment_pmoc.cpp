#include <osg/LineSegment>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/LineSegment_pmoc.hpp>
using namespace pmoc;
osg::QMLLineSegment::QMLLineSegment(const pmoc::Instance *i,QObject* parent):QReflect_LineSegment(i,parent){
//custom initializations
}
QQuickItem* osg::QMLLineSegment::connect2View(QQuickItem*i){
	this->_view=QReflect_LineSegment::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLLineSegment::updateModel(){
	  QReflect_LineSegment::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_LineSegment_pmoc.cpp"
#endif


