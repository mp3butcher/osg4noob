#include <osg/ColorMatrix>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/ColorMatrix_pmoc.hpp>
using namespace pmoc;
osg::QMLColorMatrix::QMLColorMatrix(const pmoc::Instance *i,QObject* parent):QReflect_ColorMatrix(i,parent){
//custom initializations
}
QQuickItem* osg::QMLColorMatrix::connect2View(QQuickItem*i){
	this->_view=QReflect_ColorMatrix::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLColorMatrix::updateModel(){
	  QReflect_ColorMatrix::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ColorMatrix_pmoc.cpp"
#endif


