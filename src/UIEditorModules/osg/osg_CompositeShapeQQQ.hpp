#ifndef EDITOR_META_CLASS_osg_CompositeShapeQQQ_H
#define EDITOR_META_CLASS_osg_CompositeShapeQQQ_H

#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/Shape>

namespace pmoc{
class QQModel;
class  METAQQUICKLIBRARY_osg_EXPORT  osg_CompositeShapeQQQ_QModel: public QQModel{
Q_OBJECT
protected:
    osg::CompositeShape* _model;///the effective model to watch
public:
    ///Constructor////////////////
osg_CompositeShapeQQQ_QModel(Instance* i=0,QObject* parent = 0);
  ///Copy Constructor////////////////
osg_CompositeShapeQQQ_QModel(const osg_CompositeShapeQQQ_QModel&o);
///Destruction////////////////
   ~osg_CompositeShapeQQQ_QModel();
     inline osg::CompositeShape* getModel(){return  _model;}
    virtual QQuickItem *connect2View(QQuickItem*i);
};





/////////////////////////////////////////METAQQQ CLASS ////////////////////////////////////////////
class  METAQQUICKLIBRARY_osg_EXPORT  osg_CompositeShapeQQQ: public MetaQQuickClass{
protected:
public:
    virtual QQModel* createQQModel(Instance*i);
   osg_CompositeShapeQQQ():MetaQQuickClass( "osg::CompositeShape"){_typeid=&typeid(osg::CompositeShape );};
    virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
}
Q_DECLARE_METATYPE(pmoc::osg_CompositeShapeQQQ_QModel)
#endif

