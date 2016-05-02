#include <osg/ConvexPlanarOccluder>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/ConvexPlanarOccluder_pmoc.hpp>
using namespace pmoc;
osg::QMLConvexPlanarOccluder::QMLConvexPlanarOccluder(const pmoc::Instance *i,QObject* parent):QReflect_ConvexPlanarOccluder(i,parent){
//custom initializations
}
QQuickItem* osg::QMLConvexPlanarOccluder::connect2View(QQuickItem*i){
	this->_view=QReflect_ConvexPlanarOccluder::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLConvexPlanarOccluder::updateModel(){
	  QReflect_ConvexPlanarOccluder::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ConvexPlanarOccluder_pmoc.cpp"
#endif


