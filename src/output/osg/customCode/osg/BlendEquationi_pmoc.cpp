#include <osg/BlendEquationi>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/BlendEquationi_pmoc.hpp>
using namespace pmoc;
osg::QMLBlendEquationi::QMLBlendEquationi(const pmoc::Instance *i,QObject* parent):QReflect_BlendEquationi(i,parent){
//custom initializations
}
QQuickItem* osg::QMLBlendEquationi::connect2View(QQuickItem*i){
	this->_view=QReflect_BlendEquationi::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLBlendEquationi::updateModel(){
	  QReflect_BlendEquationi::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_BlendEquationi_pmoc.cpp"
#endif


