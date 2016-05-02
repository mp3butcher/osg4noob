#include <osg/Hint>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Hint_pmoc.hpp>
using namespace pmoc;
osg::QMLHint::QMLHint(const pmoc::Instance *i,QObject* parent):QReflect_Hint(i,parent){
//custom initializations
}
QQuickItem* osg::QMLHint::connect2View(QQuickItem*i){
	this->_view=QReflect_Hint::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLHint::updateModel(){
	  QReflect_Hint::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Hint_pmoc.cpp"
#endif


