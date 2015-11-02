#include <osg/SampleMaski>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/SampleMaski_pmoc.hpp>
using namespace pmoc;
osg::QMLSampleMaski::QMLSampleMaski(pmoc::Instance *i,QObject* parent):QReflect_SampleMaski(i,parent){
//custom initializations
}
QQuickItem* osg::QMLSampleMaski::connect2View(QQuickItem*i){
	this->_view=QReflect_SampleMaski::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLSampleMaski::updateModel(){
	  QReflect_SampleMaski::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_SampleMaski_pmoc.cpp"
#endif


