#include <osg/GLBeginEndAdapter>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/GLBeginEndAdapter_pmoc.hpp>
using namespace pmoc;
osg::QMLGLBeginEndAdapter::QMLGLBeginEndAdapter(const pmoc::Instance *i,QObject* parent):QReflect_GLBeginEndAdapter(i,parent){
//custom initializations
}
QQuickItem* osg::QMLGLBeginEndAdapter::connect2View(QQuickItem*i){
	this->_view=QReflect_GLBeginEndAdapter::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLGLBeginEndAdapter::updateModel(){
	  QReflect_GLBeginEndAdapter::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_GLBeginEndAdapter_pmoc.cpp"
#endif


