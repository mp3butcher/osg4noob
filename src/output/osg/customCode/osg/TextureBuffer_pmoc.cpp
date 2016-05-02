#include <osg/TextureBuffer>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/TextureBuffer_pmoc.hpp>
using namespace pmoc;
osg::QMLTextureBuffer::QMLTextureBuffer(const pmoc::Instance *i,QObject* parent):QReflect_TextureBuffer(i,parent){
//custom initializations
}
QQuickItem* osg::QMLTextureBuffer::connect2View(QQuickItem*i){
	this->_view=QReflect_TextureBuffer::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLTextureBuffer::updateModel(){
	  QReflect_TextureBuffer::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_TextureBuffer_pmoc.cpp"
#endif


