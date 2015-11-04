#include <osg/BlendColor>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/BlendColor_pmoc.hpp>
using namespace pmoc;
osg::QMLBlendColor::QMLBlendColor(pmoc::Instance *i,QObject* parent):QReflect_BlendColor(i,parent){
//custom initializations
}
QQuickItem* osg::QMLBlendColor::connect2View(QQuickItem*i){
	this->_view=QReflect_BlendColor::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLBlendColor::updateModel(){
	  QReflect_BlendColor::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_BlendColor_pmoc.cpp"
#endif


