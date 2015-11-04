#include <osg/ImageSequence>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/ImageSequence_pmoc.hpp>
using namespace pmoc;
osg::QMLImageSequence::QMLImageSequence(pmoc::Instance *i,QObject* parent):QReflect_ImageSequence(i,parent){
//custom initializations
}
QQuickItem* osg::QMLImageSequence::connect2View(QQuickItem*i){
	this->_view=QReflect_ImageSequence::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLImageSequence::updateModel(){
	  QReflect_ImageSequence::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ImageSequence_pmoc.cpp"
#endif


