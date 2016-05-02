#include <osg/AnimationPath>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/AnimationPath_pmoc.hpp>
using namespace pmoc;
osg::QMLAnimationPath::QMLAnimationPath(const pmoc::Instance *i,QObject* parent):QReflect_AnimationPath(i,parent){
//custom initializations
}
QQuickItem* osg::QMLAnimationPath::connect2View(QQuickItem*i){
	this->_view=QReflect_AnimationPath::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLAnimationPath::updateModel(){
	  QReflect_AnimationPath::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_AnimationPath_pmoc.cpp"
#endif
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/AnimationPath_pmoc.hpp>
using namespace pmoc;
osg::QMLAnimationPathCallback::QMLAnimationPathCallback(const pmoc::Instance *i,QObject* parent):QReflect_AnimationPathCallback(i,parent){
//custom initializations
}
QQuickItem* osg::QMLAnimationPathCallback::connect2View(QQuickItem*i){
	this->_view=QReflect_AnimationPathCallback::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLAnimationPathCallback::updateModel(){
	  QReflect_AnimationPathCallback::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_AnimationPath_pmoc.cpp"
#endif


