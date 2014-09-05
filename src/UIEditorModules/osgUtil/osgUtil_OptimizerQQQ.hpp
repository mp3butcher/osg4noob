#ifndef EDITOR_META_CLASS_osgUtil_OptimizerQQQ_H
#define EDITOR_META_CLASS_osgUtil_OptimizerQQQ_H

#include "Export.h"
#include <MetaQQuickClass.h>
#include <osgUtil/Optimizer>

namespace pmoc{
class QQModel;
class  METAQQUICKLIBRARY_osgUtil_EXPORT  osgUtil_OptimizerQQQ_QModel: public QQModel{
Q_OBJECT
protected:
    osgUtil::Optimizer* _model;///the effective model to watch
public:
    ///Constructor////////////////
osgUtil_OptimizerQQQ_QModel(Instance* i=0,QObject* parent = 0);
  ///Copy Constructor////////////////
osgUtil_OptimizerQQQ_QModel(const osgUtil_OptimizerQQQ_QModel&o);
///Destruction////////////////
   ~osgUtil_OptimizerQQQ_QModel();
     inline osgUtil::Optimizer* getModel(){return  _model;}
    virtual QQuickItem *connect2View(QQuickItem*i);
};





/////////////////////////////////////////METAQQQ CLASS ////////////////////////////////////////////
class  METAQQUICKLIBRARY_osgUtil_EXPORT  osgUtil_OptimizerQQQ: public MetaQQuickClass{
protected:
public:
    virtual QQModel* createQQModel(Instance*i);
   osgUtil_OptimizerQQQ():MetaQQuickClass( "osgUtil::Optimizer"){_typeid=&typeid(osgUtil::Optimizer );};
    virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
}
Q_DECLARE_METATYPE(pmoc::osgUtil_OptimizerQQQ_QModel)
#endif

