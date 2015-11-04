#include <osg/CullingSet>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/CullingSet_pmoc.hpp>
using namespace pmoc;
osg::QMLCullingSet::QMLCullingSet(pmoc::Instance *i,QObject* parent):QReflect_CullingSet(i,parent){
//custom initializations
}
QQuickItem* osg::QMLCullingSet::connect2View(QQuickItem*i){
	this->_view=QReflect_CullingSet::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLCullingSet::updateModel(){
	  QReflect_CullingSet::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_CullingSet_pmoc.cpp"
#endif



