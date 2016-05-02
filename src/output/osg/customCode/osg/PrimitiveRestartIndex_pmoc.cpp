#include <osg/PrimitiveRestartIndex>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/PrimitiveRestartIndex_pmoc.hpp>
using namespace pmoc;
osg::QMLPrimitiveRestartIndex::QMLPrimitiveRestartIndex(const pmoc::Instance *i,QObject* parent):QReflect_PrimitiveRestartIndex(i,parent){
//custom initializations
}
QQuickItem* osg::QMLPrimitiveRestartIndex::connect2View(QQuickItem*i){
	this->_view=QReflect_PrimitiveRestartIndex::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLPrimitiveRestartIndex::updateModel(){
	  QReflect_PrimitiveRestartIndex::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_PrimitiveRestartIndex_pmoc.cpp"
#endif


