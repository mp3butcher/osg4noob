#include <osg/Multisample>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Multisample_pmoc.hpp>
using namespace pmoc;
osg::QMLMultisample::QMLMultisample(pmoc::Instance *i,QObject* parent):QReflect_Multisample(i,parent){
//custom initializations
}
QQuickItem* osg::QMLMultisample::connect2View(QQuickItem*i){
	this->_view=QReflect_Multisample::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLMultisample::updateModel(){
	  QReflect_Multisample::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Multisample_pmoc.cpp"
#endif


