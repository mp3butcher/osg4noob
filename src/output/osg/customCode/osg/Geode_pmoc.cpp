#include <osg/Geode>
//includes
#include <customCode/osg/Geode_pmoc.hpp>
#include <MetaQQuickLibraryRegistry.h>
#include <iostream>

using namespace pmoc;

osg::QMLGeode::QMLGeode(pmoc::Instance *i,QObject* parent):QReflect_Geode(i,parent)
{
//custom initializations
    _clickeddrawable=0;  qmlRegisterType<pmoc::StateAttribListModel>();
}
QQuickItem* osg::QMLGeode::connect2View(QQuickItem*i)
{
    this->_view=QReflect_Geode::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
    ///CustomiZE here

    pmoc::QQModel *q;
    updateModel();
    connect(_view,SIGNAL(drawableselected(int)),this,SLOT(DrawableSelected(int)) );
//connect(_view,SIGNAL(copysignal(QQModel*)), ((QQuickView*)_view->window())->rootObject(),SLOT(setCopyBuffer(QQModel*)));
    emit drawablesChanged(&_qdrawables);
    return this->_view;
}


void osg::QMLGeode::updateModel()
{
    QReflect_Geode::updateModel();


    _qdrawables.resetListViewModel();
    for(int i=0; i<_model->getNumDrawables(); i++)
    {

        osg::Drawable *dr=_model->getDrawable(i);

        PMOCSAFEADDOBJECT( *dr,inst);
        QString classname=QString( inst.model->id().c_str());
        StateAttribObject dra(QString( dr->getName().c_str()),classname);
        _qdrawables.addStateAttrib(dra);

    }
    emit drawablesChanged(&_qdrawables );

}
void osg::QMLGeode::DrawableSelected(int i)
{

  if(_model->getDrawable(i))  {

        PMOCSAFEADDOBJECT(*_model->getDrawable(i),inst);
        QQUICKCOMPONENTWITHNAME(inst,_view,"Drawable");

    }

}


#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Geode_pmoc.cpp"
#endif
