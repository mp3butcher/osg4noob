#include <osg/Depth>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Depth_pmoc.hpp>
using namespace pmoc;
osg::QMLDepth::QMLDepth(const pmoc::Instance *i,QObject* parent):QReflect_Depth(i,parent){
//custom initializations
}
QQuickItem* osg::QMLDepth::connect2View(QQuickItem*i){
	this->_view=QReflect_Depth::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLDepth::updateModel(){
	  QReflect_Depth::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Depth_pmoc.cpp"
#endif


