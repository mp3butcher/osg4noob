#include <osg/Projection>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Projection_pmoc.hpp>
using namespace pmoc;
osg::QMLProjection::QMLProjection(const pmoc::Instance *i,QObject* parent):QReflect_Projection(i,parent){
//custom initializations
}
QQuickItem* osg::QMLProjection::connect2View(QQuickItem*i){
	this->_view=QReflect_Projection::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLProjection::updateModel(){
	  QReflect_Projection::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Projection_pmoc.cpp"
#endif



