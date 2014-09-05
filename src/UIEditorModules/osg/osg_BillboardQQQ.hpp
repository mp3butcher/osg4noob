#ifndef EDITOR_META_CLASS_osg_BillboardQQQ_H
#define EDITOR_META_CLASS_osg_BillboardQQQ_H

#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/Billboard>

namespace pmoc{
class QQModel;
class  METAQQUICKLIBRARY_osg_EXPORT  osg_BillboardQQQ_QModel: public QQModel{
Q_OBJECT
protected:
    osg::Billboard* _model;///the effective model to watch
public:
    ///Constructor////////////////
osg_BillboardQQQ_QModel(Instance* i=0,QObject* parent = 0);
  ///Copy Constructor////////////////
osg_BillboardQQQ_QModel(const osg_BillboardQQQ_QModel&o);
///Destruction////////////////
   ~osg_BillboardQQQ_QModel();
     inline osg::Billboard* getModel(){return  _model;}
    virtual QQuickItem *connect2View(QQuickItem*i);
};





/////////////////////////////////////////METAQQQ CLASS ////////////////////////////////////////////
class  METAQQUICKLIBRARY_osg_EXPORT  osg_BillboardQQQ: public MetaQQuickClass{
protected:
public:
    virtual QQModel* createQQModel(Instance*i);
   osg_BillboardQQQ():MetaQQuickClass( "osg::Billboard"){_typeid=&typeid(osg::Billboard );};
    virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
}
Q_DECLARE_METATYPE(pmoc::osg_BillboardQQQ_QModel)
#endif

