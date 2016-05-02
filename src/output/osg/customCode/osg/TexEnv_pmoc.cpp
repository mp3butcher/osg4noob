#include <osg/TexEnv>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/TexEnv_pmoc.hpp>
using namespace pmoc;
osg::QMLTexEnv::QMLTexEnv(const pmoc::Instance *i,QObject* parent):QReflect_TexEnv(i,parent){
//custom initializations
}
QQuickItem* osg::QMLTexEnv::connect2View(QQuickItem*i){
	this->_view=QReflect_TexEnv::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLTexEnv::updateModel(){
	  QReflect_TexEnv::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_TexEnv_pmoc.cpp"
#endif


