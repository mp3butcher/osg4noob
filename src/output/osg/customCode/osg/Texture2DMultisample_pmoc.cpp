#include <osg/Texture2DMultisample>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Texture2DMultisample_pmoc.hpp>
using namespace pmoc;
osg::QMLTexture2DMultisample::QMLTexture2DMultisample(pmoc::Instance *i,QObject* parent):QReflect_Texture2DMultisample(i,parent){
//custom initializations
}
QQuickItem* osg::QMLTexture2DMultisample::connect2View(QQuickItem*i){
	this->_view=QReflect_Texture2DMultisample::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLTexture2DMultisample::updateModel(){
	  QReflect_Texture2DMultisample::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Texture2DMultisample_pmoc.cpp"
#endif


