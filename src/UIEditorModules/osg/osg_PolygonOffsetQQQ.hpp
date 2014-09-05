#ifndef EDITOR_META_CLASS_osg_PolygonOffsetQQQ_H
#define EDITOR_META_CLASS_osg_PolygonOffsetQQQ_H

#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/PolygonOffset>

namespace pmoc{
class QQModel;
class  METAQQUICKLIBRARY_osg_EXPORT  osg_PolygonOffsetQQQ_QModel: public QQModel{
Q_OBJECT
protected:
    osg::PolygonOffset* _model;///the effective model to watch
public:
    ///Constructor////////////////
osg_PolygonOffsetQQQ_QModel(Instance* i=0,QObject* parent = 0);
  ///Copy Constructor////////////////
osg_PolygonOffsetQQQ_QModel(const osg_PolygonOffsetQQQ_QModel&o);
///Destruction////////////////
   ~osg_PolygonOffsetQQQ_QModel();
     inline osg::PolygonOffset* getModel(){return  _model;}
    virtual QQuickItem *connect2View(QQuickItem*i);
};





/////////////////////////////////////////METAQQQ CLASS ////////////////////////////////////////////
class  METAQQUICKLIBRARY_osg_EXPORT  osg_PolygonOffsetQQQ: public MetaQQuickClass{
protected:
public:
    virtual QQModel* createQQModel(Instance*i);
   osg_PolygonOffsetQQQ():MetaQQuickClass( "osg::PolygonOffset"){_typeid=&typeid(osg::PolygonOffset );};
    virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
}
Q_DECLARE_METATYPE(pmoc::osg_PolygonOffsetQQQ_QModel)
#endif

