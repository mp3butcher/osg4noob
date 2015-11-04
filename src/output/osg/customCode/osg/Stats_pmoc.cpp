#include <osg/Stats>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Stats_pmoc.hpp>
using namespace pmoc;
osg::QMLStats::QMLStats(pmoc::Instance *i,QObject* parent):QReflect_Stats(i,parent){
//custom initializations
}
QQuickItem* osg::QMLStats::connect2View(QQuickItem*i){
	this->_view=QReflect_Stats::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLStats::updateModel(){
	  QReflect_Stats::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Stats_pmoc.cpp"
#endif


