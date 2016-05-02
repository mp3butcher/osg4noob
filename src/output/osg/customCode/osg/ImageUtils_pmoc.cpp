#include <osg/ImageUtils>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/ImageUtils_pmoc.hpp>
using namespace pmoc;
osg::QMLCastAndScaleToFloatOperation::QMLCastAndScaleToFloatOperation(const pmoc::Instance *i,QObject* parent):QReflect_CastAndScaleToFloatOperation(i,parent){
//custom initializations
}
QQuickItem* osg::QMLCastAndScaleToFloatOperation::connect2View(QQuickItem*i){
	this->_view=QReflect_CastAndScaleToFloatOperation::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLCastAndScaleToFloatOperation::updateModel(){
	  QReflect_CastAndScaleToFloatOperation::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ImageUtils_pmoc.cpp"
#endif


