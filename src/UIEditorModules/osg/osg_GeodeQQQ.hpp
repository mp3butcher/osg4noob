#ifndef EDITOR_META_CLASS_osg_GeodeQQQ_H
#define EDITOR_META_CLASS_osg_GeodeQQQ_H

#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/Geode>

#include "AttribListModel.hpp"

namespace pmoc{
class  METAQQUICKLIBRARY_osg_EXPORT  osg_GeodeQQQ_QModel: public QQModel{
Q_OBJECT
Q_PROPERTY(pmoc::StateAttribListModel* drawables READ getDrawables NOTIFY drawablesChanged)
//Q_PROPERTY(QQmlListProperty<pmoc::StateAttribObject> drawables READ getDrawables NOTIFY drawablesChanged)
signals:
void drawablesChanged(pmoc::StateAttribListModel* );
protected:
    osg::Geode* _model;///the effective model to watch
    StateAttribListModel _qdrawables;
     QQuickItem *_clickeddrawable;
    //QQmlListProperty<pmoc::StateAttribObject> _qdrawables;
public:

StateAttribListModel *getDrawables(){return &_qdrawables;}
//QQmlListProperty<pmoc::StateAttribObject> & getDrawables(){return _qdrawables;}

    ///Constructor////////////////
osg_GeodeQQQ_QModel(Instance*i=0,QObject* parent = 0);
  ///Copy Constructor////////////////
osg_GeodeQQQ_QModel(const osg_GeodeQQQ_QModel&o);
///Destruction////////////////
   ~osg_GeodeQQQ_QModel();
     inline osg::Geode* getModel(){return  _model;}
    virtual QQuickItem *connect2View(QQuickItem*i);
  public  slots:
    void DrawableSelected(int i);
void drawableAdded(QQModel*);
};





/////////////////////////////////////////METAQQQ CLASS ////////////////////////////////////////////
class  METAQQUICKLIBRARY_osg_EXPORT  osg_GeodeQQQ: public MetaQQuickClass{
protected:
public:
    virtual QQModel* createQQModel(Instance*i);
   osg_GeodeQQQ():MetaQQuickClass( "osg::Geode"){_typeid=&typeid(osg::Geode );};
    virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
}
Q_DECLARE_METATYPE(pmoc::osg_GeodeQQQ_QModel)
#endif

