#include "osg_GeodeQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/Geode>

#include <QQmlContext>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>

using namespace std;
using namespace pmoc;

///CopyConstruction////////////////
osg_GeodeQQQ_QModel::osg_GeodeQQQ_QModel(const osg_GeodeQQQ_QModel&o):QQModel(o)
{
    _model=o._model;
}

///Destruction////////////////
osg_GeodeQQQ_QModel::~osg_GeodeQQQ_QModel() {};

///DefaultConstructor////////////////
osg_GeodeQQQ_QModel::osg_GeodeQQQ_QModel(Instance*i,QObject* parent):QQModel(i,parent)
{
    _model=reinterpret_cast<osg::Geode*>(i->ptr);
    qRegisterMetaType<pmoc::osg_GeodeQQQ_QModel>();
    qmlRegisterType<pmoc::osg_GeodeQQQ_QModel>("osg_GeodeQQQ_QModel",1,0,"osg_GeodeQQQ_QModel");;
//_qdrawables=new StateAttribListModel(this);
    // qRegisterMetaType<pmoc::StateAttribListModel>();
    qmlRegisterType<pmoc::StateAttribListModel>("StateAttribListModel",1,0,"StateAttribListModel");;
    _clickeddrawable=0;
    for(int i=0; i<_model->getNumDrawables(); i++)
    {

        osg::Drawable *dr=_model->getDrawable(i);
        Instance inst=PMOCADDOBJECT(   *dr);
        QString classname=QString( inst.model->id().c_str());
        StateAttribObject dra(QString( dr->getName().c_str()),classname);
        _qdrawables.addStateAttrib(dra);

    }
    //          _qdrawables=QQmlListProperty<StateAttribObject>(lis);
}
QQuickItem *osg_GeodeQQQ_QModel::connect2View(QQuickItem*i)
{
    this->_view=i;
    ///connect this's signals/slot to its qml component	///CustomiZE here

    ///hack: add an other model cause property doesn't work
    //((QQuickView*)_view->window())->rootContext()->setContextProperty("drawablesModel",&_qdrawables);
    QQModel *q;
    connect(_view,SIGNAL(drawableselected(int)),this,SLOT(DrawableSelected(int)) );
//connect(_view,SIGNAL(copysignal(QQModel*)), ((QQuickView*)_view->window())->rootObject(),SLOT(setCopyBuffer(QQModel*)));
    emit drawablesChanged(&_qdrawables);
    return this->_view;
}
void osg_GeodeQQQ_QModel::drawableAdded(QQModel*q)
{
//reset listview
    _qdrawables.resetListViewModel();
    for(int i=0; i<_model->getNumDrawables(); i++)
    {

        osg::Drawable *dr=_model->getDrawable(i);
        Instance inst=PMOCADDOBJECT(   *dr);
        QString classname=QString( inst.model->id().c_str());
        StateAttribObject dra(QString( dr->getName().c_str()),classname);
        _qdrawables.addStateAttrib(dra);

    }
    emit drawablesChanged(&_qdrawables );

}
void osg_GeodeQQQ_QModel::DrawableSelected(int i)
{
    if(_clickeddrawable)_clickeddrawable->setParentItem(0);
    osg::Drawable *dr=_model->getDrawable(i);
    ;///copy const must be managed here else object is destructed

//pmoc::MetaClass * met=PMOCMETACLASS("osg::Matrixf");

    Instance inst=PMOCADDOBJECT(*dr);//P2MOCADDOBJECT(osg::Matrixf, &nonconst );
    _clickeddrawable=QQUICKCOMPONENT(inst,_view);
 //   connect(_clickeddrawable,SIGNAL(drawableselected(int)),this,SLOT(DrawableSelected(int)) );


}

///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_GeodeQQQ::Imports() const
{
    return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_GeodeQQQ::PREcompoQML()const
{
    return string("");
}
const std::string osg_GeodeQQQ::POSTcompoQML()const
{
    return string("");
}
QQModel* osg_GeodeQQQ::createQQModel(Instance*i)
{
    return new osg_GeodeQQQ_QModel(i);
}
