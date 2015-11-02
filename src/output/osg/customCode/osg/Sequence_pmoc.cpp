#include <osg/Sequence>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Sequence_pmoc.hpp>
using namespace pmoc;
osg::QMLSequence::QMLSequence(pmoc::Instance *i,QObject* parent):QReflect_Sequence(i,parent){
//custom initializations
}
QQuickItem* osg::QMLSequence::connect2View(QQuickItem*i){
	this->_view=QReflect_Sequence::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLSequence::updateModel(){
	  QReflect_Sequence::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Sequence_pmoc.cpp"
#endif



