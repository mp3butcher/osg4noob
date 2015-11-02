#include <osg/ColorMaski>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/ColorMaski_pmoc.hpp>
using namespace pmoc;
osg::QMLColorMaski::QMLColorMaski(pmoc::Instance *i,QObject* parent):QReflect_ColorMaski(i,parent){
//custom initializations
}
QQuickItem* osg::QMLColorMaski::connect2View(QQuickItem*i){
	this->_view=QReflect_ColorMaski::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLColorMaski::updateModel(){
	  QReflect_ColorMaski::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ColorMaski_pmoc.cpp"
#endif


