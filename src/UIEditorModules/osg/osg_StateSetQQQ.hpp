#ifndef EDITOR_META_CLASS_osg_StateSetQQQ_H
#define EDITOR_META_CLASS_osg_StateSetQQQ_H

#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/StateSet>
#include "AttribListModel.hpp"
namespace pmoc{
class QQModel;
class  METAQQUICKLIBRARY_osg_EXPORT  osg_StateSetQQQ_QModel: public QQModel{
Q_OBJECT
Q_PROPERTY(pmoc::StateAttribListModel* stateAttribs READ getDrawables NOTIFY drawablesChanged)
//Q_PROPERTY(QQmlListProperty<pmoc::StateAttribObject> drawables READ getDrawables NOTIFY drawablesChanged)
signals:
void drawablesChanged();


    //QQmlListProperty<pmoc::StateAttribObject> _qdrawables;
public:

StateAttribListModel *getDrawables(){return &_attlist;}
public slots:
void popStateAttribute(int i);
protected:
    osg::StateSet* _model;///the effective model to watch
    StateAttribListModel _attlist;
     QQuickItem *  _currentattrib;
public:
    ///Constructor////////////////
osg_StateSetQQQ_QModel(Instance* i=0,QObject* parent = 0);
  ///Copy Constructor////////////////
osg_StateSetQQQ_QModel(const osg_StateSetQQQ_QModel&o);
///Destruction////////////////
   ~osg_StateSetQQQ_QModel();
     inline osg::StateSet* getModel(){return  _model;}
    virtual QQuickItem *connect2View(QQuickItem*i);
};





/////////////////////////////////////////METAQQQ CLASS ////////////////////////////////////////////
class  METAQQUICKLIBRARY_osg_EXPORT  osg_StateSetQQQ: public MetaQQuickClass{
protected:
public:
    virtual QQModel* createQQModel(Instance*i);
   osg_StateSetQQQ():MetaQQuickClass( "osg::StateSet"){_typeid=&typeid(osg::StateSet );};
    virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
}
Q_DECLARE_METATYPE(pmoc::osg_StateSetQQQ_QModel)
#endif

