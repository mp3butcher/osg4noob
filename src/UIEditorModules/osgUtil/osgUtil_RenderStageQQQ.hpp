#ifndef EDITOR_META_CLASS_osgUtil_RenderStageQQQ_H
#define EDITOR_META_CLASS_osgUtil_RenderStageQQQ_H

#include "Export.h"
#include <MetaQQuickClass.h>
#include <osgUtil/RenderStage>

namespace pmoc{
class QQModel;
class  METAQQUICKLIBRARY_osgUtil_EXPORT  osgUtil_RenderStageQQQ_QModel: public QQModel{
Q_OBJECT
protected:
    osgUtil::RenderStage* _model;///the effective model to watch
public:
    ///Constructor////////////////
osgUtil_RenderStageQQQ_QModel(Instance* i=0,QObject* parent = 0);
  ///Copy Constructor////////////////
osgUtil_RenderStageQQQ_QModel(const osgUtil_RenderStageQQQ_QModel&o);
///Destruction////////////////
   ~osgUtil_RenderStageQQQ_QModel();
     inline osgUtil::RenderStage* getModel(){return  _model;}
    virtual QQuickItem *connect2View(QQuickItem*i);
};





/////////////////////////////////////////METAQQQ CLASS ////////////////////////////////////////////
class  METAQQUICKLIBRARY_osgUtil_EXPORT  osgUtil_RenderStageQQQ: public MetaQQuickClass{
protected:
public:
    virtual QQModel* createQQModel(Instance*i);
   osgUtil_RenderStageQQQ():MetaQQuickClass( "osgUtil::RenderStage"){_typeid=&typeid(osgUtil::RenderStage );};
    virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
}
Q_DECLARE_METATYPE(pmoc::osgUtil_RenderStageQQQ_QModel)
#endif

