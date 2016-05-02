#include <osg/BlendFunci>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/BlendFunci_pmoc.hpp>
using namespace pmoc;
osg::QMLBlendFunci::QMLBlendFunci(const pmoc::Instance *i,QObject* parent):QReflect_BlendFunci(i,parent){
//custom initializations
}
QQuickItem* osg::QMLBlendFunci::connect2View(QQuickItem*i){
	this->_view=QReflect_BlendFunci::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLBlendFunci::updateModel(){
	  QReflect_BlendFunci::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_BlendFunci_pmoc.cpp"
#endif


