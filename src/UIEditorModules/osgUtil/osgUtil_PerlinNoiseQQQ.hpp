#ifndef EDITOR_META_CLASS_osgUtil_PerlinNoiseQQQ_H
#define EDITOR_META_CLASS_osgUtil_PerlinNoiseQQQ_H

#include "Export.h"
#include <MetaQQuickClass.h>
#include <osgUtil/PerlinNoise>

namespace pmoc{
class QQModel;
class  METAQQUICKLIBRARY_osgUtil_EXPORT  osgUtil_PerlinNoiseQQQ_QModel: public QQModel{
Q_OBJECT
protected:
    osgUtil::PerlinNoise* _model;///the effective model to watch
public:
    ///Constructor////////////////
osgUtil_PerlinNoiseQQQ_QModel(Instance* i=0,QObject* parent = 0);
  ///Copy Constructor////////////////
osgUtil_PerlinNoiseQQQ_QModel(const osgUtil_PerlinNoiseQQQ_QModel&o);
///Destruction////////////////
   ~osgUtil_PerlinNoiseQQQ_QModel();
     inline osgUtil::PerlinNoise* getModel(){return  _model;}
    virtual QQuickItem *connect2View(QQuickItem*i);
};





/////////////////////////////////////////METAQQQ CLASS ////////////////////////////////////////////
class  METAQQUICKLIBRARY_osgUtil_EXPORT  osgUtil_PerlinNoiseQQQ: public MetaQQuickClass{
protected:
public:
    virtual QQModel* createQQModel(Instance*i);
   osgUtil_PerlinNoiseQQQ():MetaQQuickClass( "osgUtil::PerlinNoise"){_typeid=&typeid(osgUtil::PerlinNoise );};
    virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
}
Q_DECLARE_METATYPE(pmoc::osgUtil_PerlinNoiseQQQ_QModel)
#endif

