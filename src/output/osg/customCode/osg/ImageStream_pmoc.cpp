#include <osg/ImageStream>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/ImageStream_pmoc.hpp>
using namespace pmoc;
osg::QMLImageStream::QMLImageStream(const pmoc::Instance *i,QObject* parent):QReflect_ImageStream(i,parent){
//custom initializations
}
QQuickItem* osg::QMLImageStream::connect2View(QQuickItem*i){
	this->_view=QReflect_ImageStream::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLImageStream::updateModel(){
	  QReflect_ImageStream::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ImageStream_pmoc.cpp"
#endif


