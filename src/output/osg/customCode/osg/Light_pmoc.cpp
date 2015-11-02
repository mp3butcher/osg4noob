#include <osg/Light>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Light_pmoc.hpp>
using namespace pmoc;
osg::QMLLight::QMLLight(pmoc::Instance *i,QObject* parent):QReflect_Light(i,parent)
{
//custom initializations
}
QQuickItem* osg::QMLLight::connect2View(QQuickItem*i)
{
    this->_view=QReflect_Light::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
    ///CustomiZE here



    return this->_view;
}
void  osg::QMLLight::updateModel()
{
    QReflect_Light::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
    ///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Light_pmoc.cpp"
#endif


