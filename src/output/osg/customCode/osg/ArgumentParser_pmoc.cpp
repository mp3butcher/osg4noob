#include <osg/ArgumentParser>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/ArgumentParser_pmoc.hpp>
using namespace pmoc;
osg::QMLArgumentParser::QMLArgumentParser(pmoc::Instance *i,QObject* parent):QReflect_ArgumentParser(i,parent){
//custom initializations
}
QQuickItem* osg::QMLArgumentParser::connect2View(QQuickItem*i){
	this->_view=QReflect_ArgumentParser::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLArgumentParser::updateModel(){
	  QReflect_ArgumentParser::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ArgumentParser_pmoc.cpp"
#endif


