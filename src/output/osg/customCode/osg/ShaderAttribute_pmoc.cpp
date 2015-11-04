#include <osg/ShaderAttribute>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/ShaderAttribute_pmoc.hpp>
using namespace pmoc;
osg::QMLShaderAttribute::QMLShaderAttribute(pmoc::Instance *i,QObject* parent):QReflect_ShaderAttribute(i,parent){
//custom initializations
}
QQuickItem* osg::QMLShaderAttribute::connect2View(QQuickItem*i){
	this->_view=QReflect_ShaderAttribute::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLShaderAttribute::updateModel(){
	  QReflect_ShaderAttribute::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ShaderAttribute_pmoc.cpp"
#endif


