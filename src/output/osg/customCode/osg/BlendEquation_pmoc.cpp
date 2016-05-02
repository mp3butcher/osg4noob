#include <osg/BlendEquation>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/BlendEquation_pmoc.hpp>
using namespace pmoc;
osg::QMLBlendEquation::QMLBlendEquation(const pmoc::Instance *i,QObject* parent):QReflect_BlendEquation(i,parent){
//custom initializations
}
QQuickItem* osg::QMLBlendEquation::connect2View(QQuickItem*i){
	this->_view=QReflect_BlendEquation::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLBlendEquation::updateModel(){
	  QReflect_BlendEquation::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_BlendEquation_pmoc.cpp"
#endif


