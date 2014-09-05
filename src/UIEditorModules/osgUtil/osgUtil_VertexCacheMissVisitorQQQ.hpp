#ifndef EDITOR_META_CLASS_osgUtil_VertexCacheMissVisitorQQQ_H
#define EDITOR_META_CLASS_osgUtil_VertexCacheMissVisitorQQQ_H

#include "Export.h"
#include <MetaQQuickClass.h>
#include <osgUtil/MeshOptimizers>

namespace pmoc{
class QQModel;
class  METAQQUICKLIBRARY_osgUtil_EXPORT  osgUtil_VertexCacheMissVisitorQQQ_QModel: public QQModel{
Q_OBJECT
protected:
    osgUtil::VertexCacheMissVisitor* _model;///the effective model to watch
public:
    ///Constructor////////////////
osgUtil_VertexCacheMissVisitorQQQ_QModel(Instance* i=0,QObject* parent = 0);
  ///Copy Constructor////////////////
osgUtil_VertexCacheMissVisitorQQQ_QModel(const osgUtil_VertexCacheMissVisitorQQQ_QModel&o);
///Destruction////////////////
   ~osgUtil_VertexCacheMissVisitorQQQ_QModel();
     inline osgUtil::VertexCacheMissVisitor* getModel(){return  _model;}
    virtual QQuickItem *connect2View(QQuickItem*i);
};





/////////////////////////////////////////METAQQQ CLASS ////////////////////////////////////////////
class  METAQQUICKLIBRARY_osgUtil_EXPORT  osgUtil_VertexCacheMissVisitorQQQ: public MetaQQuickClass{
protected:
public:
    virtual QQModel* createQQModel(Instance*i);
   osgUtil_VertexCacheMissVisitorQQQ():MetaQQuickClass( "osgUtil::VertexCacheMissVisitor"){_typeid=&typeid(osgUtil::VertexCacheMissVisitor );};
    virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
}
Q_DECLARE_METATYPE(pmoc::osgUtil_VertexCacheMissVisitorQQQ_QModel)
#endif

