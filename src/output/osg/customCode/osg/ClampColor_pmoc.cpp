#include <osg/ClampColor>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/ClampColor_pmoc.hpp>
using namespace pmoc;
osg::QMLClampColor::QMLClampColor(const pmoc::Instance *i,QObject* parent):QReflect_ClampColor(i,parent){
//custom initializations
}
QQuickItem* osg::QMLClampColor::connect2View(QQuickItem*i){
	this->_view=QReflect_ClampColor::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLClampColor::updateModel(){
	  QReflect_ClampColor::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ClampColor_pmoc.cpp"
#endif


