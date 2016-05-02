#include <osg/PointSprite>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/PointSprite_pmoc.hpp>
using namespace pmoc;
osg::QMLPointSprite::QMLPointSprite(const pmoc::Instance *i,QObject* parent):QReflect_PointSprite(i,parent){
//custom initializations
}
QQuickItem* osg::QMLPointSprite::connect2View(QQuickItem*i){
	this->_view=QReflect_PointSprite::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLPointSprite::updateModel(){
	  QReflect_PointSprite::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_PointSprite_pmoc.cpp"
#endif


