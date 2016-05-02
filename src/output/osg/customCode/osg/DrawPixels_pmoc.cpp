#include <osg/DrawPixels>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/DrawPixels_pmoc.hpp>
using namespace pmoc;
osg::QMLDrawPixels::QMLDrawPixels(const pmoc::Instance *i,QObject* parent):QReflect_DrawPixels(i,parent){
//custom initializations
}
QQuickItem* osg::QMLDrawPixels::connect2View(QQuickItem*i){
	this->_view=QReflect_DrawPixels::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLDrawPixels::updateModel(){
	  QReflect_DrawPixels::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_DrawPixels_pmoc.cpp"
#endif




