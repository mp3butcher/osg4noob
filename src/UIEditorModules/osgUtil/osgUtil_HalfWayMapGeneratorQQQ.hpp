#ifndef EDITOR_META_CLASS_osgUtil_HalfWayMapGeneratorQQQ_H
#define EDITOR_META_CLASS_osgUtil_HalfWayMapGeneratorQQQ_H

#include "Export.h"
#include <MetaQQuickClass.h>
#include <osgUtil/HalfWayMapGenerator>

namespace pmoc{
class QQModel;
class  METAQQUICKLIBRARY_osgUtil_EXPORT  osgUtil_HalfWayMapGeneratorQQQ_QModel: public QQModel{
Q_OBJECT
protected:
    osgUtil::HalfWayMapGenerator* _model;///the effective model to watch
public:
    ///Constructor////////////////
osgUtil_HalfWayMapGeneratorQQQ_QModel(Instance* i=0,QObject* parent = 0);
  ///Copy Constructor////////////////
osgUtil_HalfWayMapGeneratorQQQ_QModel(const osgUtil_HalfWayMapGeneratorQQQ_QModel&o);
///Destruction////////////////
   ~osgUtil_HalfWayMapGeneratorQQQ_QModel();
     inline osgUtil::HalfWayMapGenerator* getModel(){return  _model;}
    virtual QQuickItem *connect2View(QQuickItem*i);
};





/////////////////////////////////////////METAQQQ CLASS ////////////////////////////////////////////
class  METAQQUICKLIBRARY_osgUtil_EXPORT  osgUtil_HalfWayMapGeneratorQQQ: public MetaQQuickClass{
protected:
public:
    virtual QQModel* createQQModel(Instance*i);
   osgUtil_HalfWayMapGeneratorQQQ():MetaQQuickClass( "osgUtil::HalfWayMapGenerator"){_typeid=&typeid(osgUtil::HalfWayMapGenerator );};
    virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
}
Q_DECLARE_METATYPE(pmoc::osgUtil_HalfWayMapGeneratorQQQ_QModel)
#endif

