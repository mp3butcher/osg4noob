#include <osg/TextureRectangle>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/TextureRectangle_pmoc.hpp>
using namespace pmoc;
osg::QMLTextureRectangle::QMLTextureRectangle(pmoc::Instance *i,QObject* parent):QReflect_TextureRectangle(i,parent){
//custom initializations
}
QQuickItem* osg::QMLTextureRectangle::connect2View(QQuickItem*i){
	this->_view=QReflect_TextureRectangle::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLTextureRectangle::updateModel(){
	  QReflect_TextureRectangle::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_TextureRectangle_pmoc.cpp"
#endif


