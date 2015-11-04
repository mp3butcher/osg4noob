#include <osg/CollectOccludersVisitor>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/CollectOccludersVisitor_pmoc.hpp>
using namespace pmoc;
osg::QMLCollectOccludersVisitor::QMLCollectOccludersVisitor(pmoc::Instance *i,QObject* parent):QReflect_CollectOccludersVisitor(i,parent){
//custom initializations
}
QQuickItem* osg::QMLCollectOccludersVisitor::connect2View(QQuickItem*i){
	this->_view=QReflect_CollectOccludersVisitor::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLCollectOccludersVisitor::updateModel(){
	  QReflect_CollectOccludersVisitor::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_CollectOccludersVisitor_pmoc.cpp"
#endif



