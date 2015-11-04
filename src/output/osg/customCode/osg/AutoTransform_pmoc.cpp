#include <osg/AutoTransform>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/AutoTransform_pmoc.hpp>
using namespace pmoc;
osg::QMLAutoTransform::QMLAutoTransform(pmoc::Instance *i,QObject* parent):QReflect_AutoTransform(i,parent){
//custom initializations
}
QQuickItem* osg::QMLAutoTransform::connect2View(QQuickItem*i){
	this->_view=QReflect_AutoTransform::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLAutoTransform::updateModel(){
	  QReflect_AutoTransform::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_AutoTransform_pmoc.cpp"
#endif



