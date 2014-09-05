#ifndef EDITOR_META_CLASS_osg_QueryGeometryQQQ_H
#define EDITOR_META_CLASS_osg_QueryGeometryQQQ_H

#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/OcclusionQueryNode>

namespace pmoc{
class QQModel;
class  METAQQUICKLIBRARY_osg_EXPORT  osg_QueryGeometryQQQ_QModel: public QQModel{
Q_OBJECT
protected:
    osg::QueryGeometry* _model;///the effective model to watch
public:
    ///Constructor////////////////
osg_QueryGeometryQQQ_QModel(Instance* i=0,QObject* parent = 0);
  ///Copy Constructor////////////////
osg_QueryGeometryQQQ_QModel(const osg_QueryGeometryQQQ_QModel&o);
///Destruction////////////////
   ~osg_QueryGeometryQQQ_QModel();
     inline osg::QueryGeometry* getModel(){return  _model;}
    virtual QQuickItem *connect2View(QQuickItem*i);
};





/////////////////////////////////////////METAQQQ CLASS ////////////////////////////////////////////
class  METAQQUICKLIBRARY_osg_EXPORT  osg_QueryGeometryQQQ: public MetaQQuickClass{
protected:
public:
    virtual QQModel* createQQModel(Instance*i);
   osg_QueryGeometryQQQ():MetaQQuickClass( "osg::QueryGeometry"){_typeid=&typeid(osg::QueryGeometry );};
    virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
}
Q_DECLARE_METATYPE(pmoc::osg_QueryGeometryQQQ_QModel)
#endif

