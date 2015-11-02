#include <osg/DeleteHandler>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/DeleteHandler_pmoc.hpp>
using namespace pmoc;
osg::QMLDeleteHandler::QMLDeleteHandler(pmoc::Instance *i,QObject* parent):QReflect_DeleteHandler(i,parent){
//custom initializations
}
QQuickItem* osg::QMLDeleteHandler::connect2View(QQuickItem*i){
	this->_view=QReflect_DeleteHandler::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLDeleteHandler::updateModel(){
	  QReflect_DeleteHandler::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_DeleteHandler_pmoc.cpp"
#endif


