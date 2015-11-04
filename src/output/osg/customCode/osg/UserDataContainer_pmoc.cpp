#include <osg/UserDataContainer>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/UserDataContainer_pmoc.hpp>
using namespace pmoc;
osg::QMLDefaultUserDataContainer::QMLDefaultUserDataContainer(pmoc::Instance *i,QObject* parent):QReflect_DefaultUserDataContainer(i,parent){
//custom initializations
}
QQuickItem* osg::QMLDefaultUserDataContainer::connect2View(QQuickItem*i){
	this->_view=QReflect_DefaultUserDataContainer::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLDefaultUserDataContainer::updateModel(){
	  QReflect_DefaultUserDataContainer::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_UserDataContainer_pmoc.cpp"
#endif
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/UserDataContainer_pmoc.hpp>
using namespace pmoc;
osg::QMLUserDataContainer::QMLUserDataContainer(pmoc::Instance *i,QObject* parent):QReflect_UserDataContainer(i,parent){
//custom initializations
}
QQuickItem* osg::QMLUserDataContainer::connect2View(QQuickItem*i){
	this->_view=QReflect_UserDataContainer::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLUserDataContainer::updateModel(){
	  QReflect_UserDataContainer::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_UserDataContainer_pmoc.cpp"
#endif


