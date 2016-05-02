#include <osg/BlendFunc>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/BlendFunc_pmoc.hpp>
using namespace pmoc;
osg::QMLBlendFunc::QMLBlendFunc(const pmoc::Instance *i,QObject* parent):QReflect_BlendFunc(i,parent){
//custom initializations
}
QQuickItem* osg::QMLBlendFunc::connect2View(QQuickItem*i){
	this->_view=QReflect_BlendFunc::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLBlendFunc::updateModel(){
	  QReflect_BlendFunc::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_BlendFunc_pmoc.cpp"
#endif


