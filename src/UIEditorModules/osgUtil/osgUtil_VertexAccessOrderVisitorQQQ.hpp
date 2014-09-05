#ifndef EDITOR_META_CLASS_osgUtil_VertexAccessOrderVisitorQQQ_H
#define EDITOR_META_CLASS_osgUtil_VertexAccessOrderVisitorQQQ_H

#include "Export.h"
#include <MetaQQuickClass.h>
#include <osgUtil/MeshOptimizers>

namespace pmoc{
class QQModel;
class  METAQQUICKLIBRARY_osgUtil_EXPORT  osgUtil_VertexAccessOrderVisitorQQQ_QModel: public QQModel{
Q_OBJECT
protected:
    osgUtil::VertexAccessOrderVisitor* _model;///the effective model to watch
public:
    ///Constructor////////////////
osgUtil_VertexAccessOrderVisitorQQQ_QModel(Instance* i=0,QObject* parent = 0);
  ///Copy Constructor////////////////
osgUtil_VertexAccessOrderVisitorQQQ_QModel(const osgUtil_VertexAccessOrderVisitorQQQ_QModel&o);
///Destruction////////////////
   ~osgUtil_VertexAccessOrderVisitorQQQ_QModel();
     inline osgUtil::VertexAccessOrderVisitor* getModel(){return  _model;}
    virtual QQuickItem *connect2View(QQuickItem*i);
};





/////////////////////////////////////////METAQQQ CLASS ////////////////////////////////////////////
class  METAQQUICKLIBRARY_osgUtil_EXPORT  osgUtil_VertexAccessOrderVisitorQQQ: public MetaQQuickClass{
protected:
public:
    virtual QQModel* createQQModel(Instance*i);
   osgUtil_VertexAccessOrderVisitorQQQ():MetaQQuickClass( "osgUtil::VertexAccessOrderVisitor"){_typeid=&typeid(osgUtil::VertexAccessOrderVisitor );};
    virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
}
Q_DECLARE_METATYPE(pmoc::osgUtil_VertexAccessOrderVisitorQQQ_QModel)
#endif

