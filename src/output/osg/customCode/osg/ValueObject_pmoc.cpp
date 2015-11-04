#include <osg/ValueObject>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/ValueObject_pmoc.hpp>
using namespace pmoc;
osg::QMLValueObject::QMLValueObject(pmoc::Instance *i,QObject* parent):QReflect_ValueObject(i,parent){
//custom initializations
}
QQuickItem* osg::QMLValueObject::connect2View(QQuickItem*i){
	this->_view=QReflect_ValueObject::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLValueObject::updateModel(){
	  QReflect_ValueObject::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ValueObject_pmoc.cpp"
#endif


