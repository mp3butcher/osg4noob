#ifndef EDITOR_META_CLASS_osgUtil_ReflectionMapGeneratorQQQ_H
#define EDITOR_META_CLASS_osgUtil_ReflectionMapGeneratorQQQ_H

#include "Export.h"
#include <MetaQQuickClass.h>
#include <osgUtil/ReflectionMapGenerator>

namespace pmoc{
class QQModel;
class  METAQQUICKLIBRARY_osgUtil_EXPORT  osgUtil_ReflectionMapGeneratorQQQ_QModel: public QQModel{
Q_OBJECT
protected:
    osgUtil::ReflectionMapGenerator* _model;///the effective model to watch
public:
    ///Constructor////////////////
osgUtil_ReflectionMapGeneratorQQQ_QModel(Instance* i=0,QObject* parent = 0);
  ///Copy Constructor////////////////
osgUtil_ReflectionMapGeneratorQQQ_QModel(const osgUtil_ReflectionMapGeneratorQQQ_QModel&o);
///Destruction////////////////
   ~osgUtil_ReflectionMapGeneratorQQQ_QModel();
     inline osgUtil::ReflectionMapGenerator* getModel(){return  _model;}
    virtual QQuickItem *connect2View(QQuickItem*i);
};





/////////////////////////////////////////METAQQQ CLASS ////////////////////////////////////////////
class  METAQQUICKLIBRARY_osgUtil_EXPORT  osgUtil_ReflectionMapGeneratorQQQ: public MetaQQuickClass{
protected:
public:
    virtual QQModel* createQQModel(Instance*i);
   osgUtil_ReflectionMapGeneratorQQQ():MetaQQuickClass( "osgUtil::ReflectionMapGenerator"){_typeid=&typeid(osgUtil::ReflectionMapGenerator );};
    virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
}
Q_DECLARE_METATYPE(pmoc::osgUtil_ReflectionMapGeneratorQQQ_QModel)
#endif

