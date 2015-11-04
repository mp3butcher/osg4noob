#include <osg/Point>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Point_pmoc.hpp>
using namespace pmoc;
osg::QMLPoint::QMLPoint(pmoc::Instance *i,QObject* parent):QReflect_Point(i,parent){
//custom initializations
}
QQuickItem* osg::QMLPoint::connect2View(QQuickItem*i){
	this->_view=QReflect_Point::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLPoint::updateModel(){
	  QReflect_Point::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Point_pmoc.cpp"
#endif


