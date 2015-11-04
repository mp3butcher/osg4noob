#include <osg/TexEnvFilter>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/TexEnvFilter_pmoc.hpp>
using namespace pmoc;
osg::QMLTexEnvFilter::QMLTexEnvFilter(pmoc::Instance *i,QObject* parent):QReflect_TexEnvFilter(i,parent){
//custom initializations
}
QQuickItem* osg::QMLTexEnvFilter::connect2View(QQuickItem*i){
	this->_view=QReflect_TexEnvFilter::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLTexEnvFilter::updateModel(){
	  QReflect_TexEnvFilter::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_TexEnvFilter_pmoc.cpp"
#endif


