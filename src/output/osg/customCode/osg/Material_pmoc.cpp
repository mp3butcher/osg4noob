#include <osg/Material>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Material_pmoc.hpp>
using namespace pmoc;
osg::QMLMaterial::QMLMaterial(pmoc::Instance *i,QObject* parent):QReflect_Material(i,parent){
//custom initializations
}
QQuickItem* osg::QMLMaterial::connect2View(QQuickItem*i){
	this->_view=QReflect_Material::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLMaterial::updateModel(){
	  QReflect_Material::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Material_pmoc.cpp"
#endif


