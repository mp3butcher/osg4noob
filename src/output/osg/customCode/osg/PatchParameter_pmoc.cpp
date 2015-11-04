#include <osg/PatchParameter>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/PatchParameter_pmoc.hpp>
using namespace pmoc;
osg::QMLPatchParameter::QMLPatchParameter(pmoc::Instance *i,QObject* parent):QReflect_PatchParameter(i,parent){
//custom initializations
}
QQuickItem* osg::QMLPatchParameter::connect2View(QQuickItem*i){
	this->_view=QReflect_PatchParameter::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLPatchParameter::updateModel(){
	  QReflect_PatchParameter::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_PatchParameter_pmoc.cpp"
#endif


