#include <osg/RenderInfo>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/RenderInfo_pmoc.hpp>
using namespace pmoc;
osg::QMLRenderInfo::QMLRenderInfo(pmoc::Instance *i,QObject* parent):QReflect_RenderInfo(i,parent){
//custom initializations
}
QQuickItem* osg::QMLRenderInfo::connect2View(QQuickItem*i){
	this->_view=QReflect_RenderInfo::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLRenderInfo::updateModel(){
	  QReflect_RenderInfo::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_RenderInfo_pmoc.cpp"
#endif




