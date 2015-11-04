#include <osg/TexEnvCombine>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/TexEnvCombine_pmoc.hpp>
using namespace pmoc;
osg::QMLTexEnvCombine::QMLTexEnvCombine(pmoc::Instance *i,QObject* parent):QReflect_TexEnvCombine(i,parent){
//custom initializations
}
QQuickItem* osg::QMLTexEnvCombine::connect2View(QQuickItem*i){
	this->_view=QReflect_TexEnvCombine::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLTexEnvCombine::updateModel(){
	  QReflect_TexEnvCombine::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_TexEnvCombine_pmoc.cpp"
#endif


