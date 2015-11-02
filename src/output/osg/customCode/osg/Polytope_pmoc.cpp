#include <osg/Polytope>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Polytope_pmoc.hpp>
using namespace pmoc;
osg::QMLPolytope::QMLPolytope(pmoc::Instance *i,QObject* parent):QReflect_Polytope(i,parent){
//custom initializations
}
QQuickItem* osg::QMLPolytope::connect2View(QQuickItem*i){
	this->_view=QReflect_Polytope::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLPolytope::updateModel(){
	  QReflect_Polytope::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Polytope_pmoc.cpp"
#endif


