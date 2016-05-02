#include <osg/GLU>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/GLU_pmoc.hpp>
using namespace pmoc;
osg::QMLPixelStorageModes::QMLPixelStorageModes(const pmoc::Instance *i,QObject* parent):QReflect_PixelStorageModes(i,parent){
//custom initializations
}
QQuickItem* osg::QMLPixelStorageModes::connect2View(QQuickItem*i){
	this->_view=QReflect_PixelStorageModes::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLPixelStorageModes::updateModel(){
	  QReflect_PixelStorageModes::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_GLU_pmoc.cpp"
#endif


