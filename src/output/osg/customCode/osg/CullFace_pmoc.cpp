#include <osg/CullFace>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/CullFace_pmoc.hpp>
using namespace pmoc;
osg::QMLCullFace::QMLCullFace(pmoc::Instance *i,QObject* parent):QReflect_CullFace(i,parent){
//custom initializations
}
QQuickItem* osg::QMLCullFace::connect2View(QQuickItem*i){
	this->_view=QReflect_CullFace::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLCullFace::updateModel(){
	  QReflect_CullFace::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_CullFace_pmoc.cpp"
#endif


