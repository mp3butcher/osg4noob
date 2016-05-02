#include <osg/ClusterCullingCallback>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/ClusterCullingCallback_pmoc.hpp>
using namespace pmoc;
osg::QMLClusterCullingCallback::QMLClusterCullingCallback(const pmoc::Instance *i,QObject* parent):QReflect_ClusterCullingCallback(i,parent){
//custom initializations
}
QQuickItem* osg::QMLClusterCullingCallback::connect2View(QQuickItem*i){
	this->_view=QReflect_ClusterCullingCallback::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLClusterCullingCallback::updateModel(){
	  QReflect_ClusterCullingCallback::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ClusterCullingCallback_pmoc.cpp"
#endif



