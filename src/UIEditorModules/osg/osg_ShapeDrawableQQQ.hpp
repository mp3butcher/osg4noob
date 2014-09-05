#ifndef EDITOR_META_CLASS_osg_ShapeDrawableQQQ_H
#define EDITOR_META_CLASS_osg_ShapeDrawableQQQ_H

#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/ShapeDrawable>

namespace pmoc{
class QQModel;
class  METAQQUICKLIBRARY_osg_EXPORT  osg_ShapeDrawableQQQ_QModel: public QQModel{
Q_OBJECT
protected:
    osg::ShapeDrawable* _model;///the effective model to watch
public:
    ///Constructor////////////////
osg_ShapeDrawableQQQ_QModel(Instance* i=0,QObject* parent = 0);
  ///Copy Constructor////////////////
osg_ShapeDrawableQQQ_QModel(const osg_ShapeDrawableQQQ_QModel&o);
///Destruction////////////////
   ~osg_ShapeDrawableQQQ_QModel();
     inline osg::ShapeDrawable* getModel(){return  _model;}
    virtual QQuickItem *connect2View(QQuickItem*i);
};





/////////////////////////////////////////METAQQQ CLASS ////////////////////////////////////////////
class  METAQQUICKLIBRARY_osg_EXPORT  osg_ShapeDrawableQQQ: public MetaQQuickClass{
protected:
public:
    virtual QQModel* createQQModel(Instance*i);
   osg_ShapeDrawableQQQ():MetaQQuickClass( "osg::ShapeDrawable"){_typeid=&typeid(osg::ShapeDrawable );};
    virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
}
Q_DECLARE_METATYPE(pmoc::osg_ShapeDrawableQQQ_QModel)
#endif

