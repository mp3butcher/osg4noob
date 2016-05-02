#include <osg/FrontFace>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/FrontFace_pmoc.hpp>
using namespace pmoc;
osg::QMLFrontFace::QMLFrontFace(const pmoc::Instance *i,QObject* parent):QReflect_FrontFace(i,parent){
//custom initializations
}
QQuickItem* osg::QMLFrontFace::connect2View(QQuickItem*i){
	this->_view=QReflect_FrontFace::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLFrontFace::updateModel(){
	  QReflect_FrontFace::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_FrontFace_pmoc.cpp"
#endif


