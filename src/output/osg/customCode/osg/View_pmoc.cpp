#include <osg/View>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/View_pmoc.hpp>
using namespace pmoc;
osg::QMLView::QMLView(const pmoc::Instance *i,QObject* parent):QReflect_View(i,parent){
//custom initializations
}
QQuickItem* osg::QMLView::connect2View(QQuickItem*i){
	this->_view=QReflect_View::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLView::updateModel(){
	  QReflect_View::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_View_pmoc.cpp"
#endif



