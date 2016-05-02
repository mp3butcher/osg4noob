#include <osg/TextureCubeMap>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/TextureCubeMap_pmoc.hpp>
using namespace pmoc;
osg::QMLTextureCubeMap::QMLTextureCubeMap(const pmoc::Instance *i,QObject* parent):QReflect_TextureCubeMap(i,parent){
//custom initializations
}
QQuickItem* osg::QMLTextureCubeMap::connect2View(QQuickItem*i){
	this->_view=QReflect_TextureCubeMap::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLTextureCubeMap::updateModel(){
	  QReflect_TextureCubeMap::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_TextureCubeMap_pmoc.cpp"
#endif


