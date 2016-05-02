#include <osg/GLExtensions>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/GLExtensions_pmoc.hpp>
using namespace pmoc;
osg::QMLGLExtensions::QMLGLExtensions(const pmoc::Instance *i,QObject* parent):QReflect_GLExtensions(i,parent){
//custom initializations
}
QQuickItem* osg::QMLGLExtensions::connect2View(QQuickItem*i){
	this->_view=QReflect_GLExtensions::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLGLExtensions::updateModel(){
	  QReflect_GLExtensions::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_GLExtensions_pmoc.cpp"
#endif


