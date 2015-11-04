#include <osg/TexMat>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/TexMat_pmoc.hpp>
using namespace pmoc;
osg::QMLTexMat::QMLTexMat(pmoc::Instance *i,QObject* parent):QReflect_TexMat(i,parent){
//custom initializations
}
QQuickItem* osg::QMLTexMat::connect2View(QQuickItem*i){
	this->_view=QReflect_TexMat::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLTexMat::updateModel(){
	  QReflect_TexMat::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_TexMat_pmoc.cpp"
#endif


