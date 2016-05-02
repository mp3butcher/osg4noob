#include <osg/Referenced>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Referenced_pmoc.hpp>
using namespace pmoc;
osg::QMLReferenced::QMLReferenced(const pmoc::Instance *i,QObject* parent):QReflect_Referenced(i,parent){
//custom initializations
}
QQuickItem* osg::QMLReferenced::connect2View(QQuickItem*i){
	this->_view=QReflect_Referenced::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLReferenced::updateModel(){
	  QReflect_Referenced::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Referenced_pmoc.cpp"
#endif


