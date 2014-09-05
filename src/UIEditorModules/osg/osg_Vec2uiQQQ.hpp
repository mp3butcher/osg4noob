#ifndef EDITOR_META_CLASS_osg_Vec2uiQQQ_H
#define EDITOR_META_CLASS_osg_Vec2uiQQQ_H

#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/Vec2ui>

namespace pmoc{
class QQModel;
class  METAQQUICKLIBRARY_osg_EXPORT  osg_Vec2uiQQQ_QModel: public QQModel{
Q_OBJECT
protected:
    osg::Vec2ui* _model;///the effective model to watch
public:
    ///Constructor////////////////
osg_Vec2uiQQQ_QModel(Instance* i=0,QObject* parent = 0);
  ///Copy Constructor////////////////
osg_Vec2uiQQQ_QModel(const osg_Vec2uiQQQ_QModel&o);
///Destruction////////////////
   ~osg_Vec2uiQQQ_QModel();
     inline osg::Vec2ui* getModel(){return  _model;}
    virtual QQuickItem *connect2View(QQuickItem*i);
};





/////////////////////////////////////////METAQQQ CLASS ////////////////////////////////////////////
class  METAQQUICKLIBRARY_osg_EXPORT  osg_Vec2uiQQQ: public MetaQQuickClass{
protected:
public:
    virtual QQModel* createQQModel(Instance*i);
   osg_Vec2uiQQQ():MetaQQuickClass( "osg::Vec2ui"){_typeid=&typeid(osg::Vec2ui );};
    virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
}
Q_DECLARE_METATYPE(pmoc::osg_Vec2uiQQQ_QModel)
#endif

