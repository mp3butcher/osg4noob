#include <osg/AlphaFunc>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/AlphaFunc_pmoc.hpp>
using namespace pmoc;
osg::QMLAlphaFunc::QMLAlphaFunc(const pmoc::Instance *i,QObject* parent):QReflect_AlphaFunc(i,parent){
//custom initializations
}
QQuickItem* osg::QMLAlphaFunc::connect2View(QQuickItem*i){
	this->_view=QReflect_AlphaFunc::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLAlphaFunc::updateModel(){
	  QReflect_AlphaFunc::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_AlphaFunc_pmoc.cpp"
#endif


