#include <osg/Texture2DArray>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Texture2DArray_pmoc.hpp>
using namespace pmoc;
osg::QMLTexture2DArray::QMLTexture2DArray(pmoc::Instance *i,QObject* parent):QReflect_Texture2DArray(i,parent){
//custom initializations
}
QQuickItem* osg::QMLTexture2DArray::connect2View(QQuickItem*i){
	this->_view=QReflect_Texture2DArray::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLTexture2DArray::updateModel(){
	  QReflect_Texture2DArray::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Texture2DArray_pmoc.cpp"
#endif


