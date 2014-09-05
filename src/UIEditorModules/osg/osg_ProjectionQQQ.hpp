#ifndef EDITOR_META_CLASS_osg_ProjectionQQQ_H
#define EDITOR_META_CLASS_osg_ProjectionQQQ_H

#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/Projection>

namespace pmoc{
class QQModel;
class  METAQQUICKLIBRARY_osg_EXPORT  osg_ProjectionQQQ_QModel: public QQModel{
Q_OBJECT
protected:
    osg::Projection* _model;///the effective model to watch
public:
    ///Constructor////////////////
osg_ProjectionQQQ_QModel(Instance* i=0,QObject* parent = 0);
  ///Copy Constructor////////////////
osg_ProjectionQQQ_QModel(const osg_ProjectionQQQ_QModel&o);
///Destruction////////////////
   ~osg_ProjectionQQQ_QModel();
     inline osg::Projection* getModel(){return  _model;}
    virtual QQuickItem *connect2View(QQuickItem*i);
};





/////////////////////////////////////////METAQQQ CLASS ////////////////////////////////////////////
class  METAQQUICKLIBRARY_osg_EXPORT  osg_ProjectionQQQ: public MetaQQuickClass{
protected:
public:
    virtual QQModel* createQQModel(Instance*i);
   osg_ProjectionQQQ():MetaQQuickClass( "osg::Projection"){_typeid=&typeid(osg::Projection );};
    virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
}
Q_DECLARE_METATYPE(pmoc::osg_ProjectionQQQ_QModel)
#endif

