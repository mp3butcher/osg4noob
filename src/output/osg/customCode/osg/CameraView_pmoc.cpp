#include <osg/CameraView>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/CameraView_pmoc.hpp>
using namespace pmoc;
osg::QMLCameraView::QMLCameraView(pmoc::Instance *i,QObject* parent):QReflect_CameraView(i,parent){
//custom initializations
}
QQuickItem* osg::QMLCameraView::connect2View(QQuickItem*i){
	this->_view=QReflect_CameraView::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLCameraView::updateModel(){
	  QReflect_CameraView::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_CameraView_pmoc.cpp"
#endif



