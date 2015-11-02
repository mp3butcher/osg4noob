#include <osg/CullStack>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/CullStack_pmoc.hpp>
using namespace pmoc;
osg::QMLCullStack::QMLCullStack(pmoc::Instance *i,QObject* parent):QReflect_CullStack(i,parent){
//custom initializations
}
QQuickItem* osg::QMLCullStack::connect2View(QQuickItem*i){
	this->_view=QReflect_CullStack::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLCullStack::updateModel(){
	  QReflect_CullStack::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_CullStack_pmoc.cpp"
#endif



