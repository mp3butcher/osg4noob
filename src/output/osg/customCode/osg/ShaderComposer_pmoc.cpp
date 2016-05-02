#include <osg/ShaderComposer>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/ShaderComposer_pmoc.hpp>
using namespace pmoc;
osg::QMLShaderComposer::QMLShaderComposer(const pmoc::Instance *i,QObject* parent):QReflect_ShaderComposer(i,parent){
//custom initializations
}
QQuickItem* osg::QMLShaderComposer::connect2View(QQuickItem*i){
	this->_view=QReflect_ShaderComposer::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLShaderComposer::updateModel(){
	  QReflect_ShaderComposer::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ShaderComposer_pmoc.cpp"
#endif


