#include <osg/FrameStamp>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/FrameStamp_pmoc.hpp>
using namespace pmoc;
osg::QMLFrameStamp::QMLFrameStamp(pmoc::Instance *i,QObject* parent):QReflect_FrameStamp(i,parent){
//custom initializations
}
QQuickItem* osg::QMLFrameStamp::connect2View(QQuickItem*i){
	this->_view=QReflect_FrameStamp::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLFrameStamp::updateModel(){
	  QReflect_FrameStamp::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_FrameStamp_pmoc.cpp"
#endif


