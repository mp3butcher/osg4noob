#include <osg/VertexAttribDivisor>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/VertexAttribDivisor_pmoc.hpp>
using namespace pmoc;
osg::QMLVertexAttribDivisor::QMLVertexAttribDivisor(pmoc::Instance *i,QObject* parent):QReflect_VertexAttribDivisor(i,parent){
//custom initializations
}
QQuickItem* osg::QMLVertexAttribDivisor::connect2View(QQuickItem*i){
	this->_view=QReflect_VertexAttribDivisor::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLVertexAttribDivisor::updateModel(){
	  QReflect_VertexAttribDivisor::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_VertexAttribDivisor_pmoc.cpp"
#endif


