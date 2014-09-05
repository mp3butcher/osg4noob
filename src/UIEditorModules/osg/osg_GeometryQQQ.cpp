#include "osg_GeometryQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/Geometry>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_GeometryQQQ_QModel::osg_GeometryQQQ_QModel(const osg_GeometryQQQ_QModel&o):QQModel(o)
{
    _model=o._model;
}

///Destruction////////////////
osg_GeometryQQQ_QModel::~osg_GeometryQQQ_QModel() {};

///DefaultConstructor////////////////
osg_GeometryQQQ_QModel::osg_GeometryQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent)
{
    _model=reinterpret_cast<osg::Geometry*>(i->ptr);

    qRegisterMetaType<pmoc::osg_GeometryQQQ_QModel>();
    qmlRegisterType<pmoc::osg_GeometryQQQ_QModel>("osg_GeometryQQQ_QModel",1,0,"osg_GeometryQQQ_QModel");;
//_qdrawables=new StateAttribListModel(this);


}
QQuickItem *osg_GeometryQQQ_QModel::connect2View(QQuickItem*i)
{
    this->_view=i;
    ///connect this's signals/slot to its qml component	///CustomiZE here

osg::StateSet * st=_model->getStateSet();
    if(st){
    Instance inst=PMOCADDOBJECT(*st);
    QQuickItem * statesetview=QQUICKCOMPONENT(inst,_view);
    }
    return this->_view;
}




///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_GeometryQQQ::Imports() const
{
    return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_GeometryQQQ::PREcompoQML()const
{
    return string("");
}
const std::string osg_GeometryQQQ::POSTcompoQML()const
{
    return string("");
}
QQModel* osg_GeometryQQQ::createQQModel(Instance*i)
{
    return new osg_GeometryQQQ_QModel(i);
}
