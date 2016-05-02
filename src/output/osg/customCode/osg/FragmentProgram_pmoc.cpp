#include <osg/FragmentProgram>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/FragmentProgram_pmoc.hpp>
using namespace pmoc;
osg::QMLFragmentProgram::QMLFragmentProgram(const pmoc::Instance *i,QObject* parent):QReflect_FragmentProgram(i,parent){
//custom initializations
}
QQuickItem* osg::QMLFragmentProgram::connect2View(QQuickItem*i){
	this->_view=QReflect_FragmentProgram::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
///CustomiZE here


   return this->_view;
}
void  osg::QMLFragmentProgram::updateModel(){
   QReflect_FragmentProgram::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_FragmentProgram_pmoc.cpp"
#endif


