#ifndef EDITOR_META_CLASS_osg_PolygonModeQQQ_H
#define EDITOR_META_CLASS_osg_PolygonModeQQQ_H

#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/PolygonMode>

namespace pmoc{
class QQModel;
class  METAQQUICKLIBRARY_osg_EXPORT  osg_PolygonModeQQQ_QModel: public QQModel{
Q_OBJECT
protected:
    osg::PolygonMode* _model;///the effective model to watch
public:
    ///Constructor////////////////
osg_PolygonModeQQQ_QModel(Instance* i=0,QObject* parent = 0);
  ///Copy Constructor////////////////
osg_PolygonModeQQQ_QModel(const osg_PolygonModeQQQ_QModel&o);
///Destruction////////////////
   ~osg_PolygonModeQQQ_QModel();
     inline osg::PolygonMode* getModel(){return  _model;}
    virtual QQuickItem *connect2View(QQuickItem*i);
};





/////////////////////////////////////////METAQQQ CLASS ////////////////////////////////////////////
class  METAQQUICKLIBRARY_osg_EXPORT  osg_PolygonModeQQQ: public MetaQQuickClass{
protected:
public:
    virtual QQModel* createQQModel(Instance*i);
   osg_PolygonModeQQQ():MetaQQuickClass( "osg::PolygonMode"){_typeid=&typeid(osg::PolygonMode );};
    virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
}
Q_DECLARE_METATYPE(pmoc::osg_PolygonModeQQQ_QModel)
#endif

