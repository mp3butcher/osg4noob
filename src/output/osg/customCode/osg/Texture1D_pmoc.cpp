#include <osg/Texture1D>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Texture1D_pmoc.hpp>
using namespace pmoc;
osg::QMLTexture1D::QMLTexture1D(const pmoc::Instance *i,QObject* parent):QReflect_Texture1D(i,parent){
//custom initializations
}
QQuickItem* osg::QMLTexture1D::connect2View(QQuickItem*i){
	this->_view=QReflect_Texture1D::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLTexture1D::updateModel(){
	  QReflect_Texture1D::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Texture1D_pmoc.cpp"
#endif


