#ifndef EDITOR_META_CLASS_osg_TriangleMeshQQQ_H
#define EDITOR_META_CLASS_osg_TriangleMeshQQQ_H

#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/Shape>

namespace pmoc{
class QQModel;
class  METAQQUICKLIBRARY_osg_EXPORT  osg_TriangleMeshQQQ_QModel: public QQModel{
Q_OBJECT
protected:
    osg::TriangleMesh* _model;///the effective model to watch
public:
    ///Constructor////////////////
osg_TriangleMeshQQQ_QModel(Instance* i=0,QObject* parent = 0);
  ///Copy Constructor////////////////
osg_TriangleMeshQQQ_QModel(const osg_TriangleMeshQQQ_QModel&o);
///Destruction////////////////
   ~osg_TriangleMeshQQQ_QModel();
     inline osg::TriangleMesh* getModel(){return  _model;}
    virtual QQuickItem *connect2View(QQuickItem*i);
};





/////////////////////////////////////////METAQQQ CLASS ////////////////////////////////////////////
class  METAQQUICKLIBRARY_osg_EXPORT  osg_TriangleMeshQQQ: public MetaQQuickClass{
protected:
public:
    virtual QQModel* createQQModel(Instance*i);
   osg_TriangleMeshQQQ():MetaQQuickClass( "osg::TriangleMesh"){_typeid=&typeid(osg::TriangleMesh );};
    virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
}
Q_DECLARE_METATYPE(pmoc::osg_TriangleMeshQQQ_QModel)
#endif

