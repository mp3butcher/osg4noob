#ifndef EDITOR_META_CLASS_osgUtil_SceneViewQQQ_H
#define EDITOR_META_CLASS_osgUtil_SceneViewQQQ_H

#include "Export.h"
#include <MetaQQuickClass.h>
#include <osgUtil/SceneView>

namespace pmoc{
class QQModel;
class  METAQQUICKLIBRARY_osgUtil_EXPORT  osgUtil_SceneViewQQQ_QModel: public QQModel{
Q_OBJECT
protected:
    osgUtil::SceneView* _model;///the effective model to watch
public:
    ///Constructor////////////////
osgUtil_SceneViewQQQ_QModel(Instance* i=0,QObject* parent = 0);
  ///Copy Constructor////////////////
osgUtil_SceneViewQQQ_QModel(const osgUtil_SceneViewQQQ_QModel&o);
///Destruction////////////////
   ~osgUtil_SceneViewQQQ_QModel();
     inline osgUtil::SceneView* getModel(){return  _model;}
    virtual QQuickItem *connect2View(QQuickItem*i);
};





/////////////////////////////////////////METAQQQ CLASS ////////////////////////////////////////////
class  METAQQUICKLIBRARY_osgUtil_EXPORT  osgUtil_SceneViewQQQ: public MetaQQuickClass{
protected:
public:
    virtual QQModel* createQQModel(Instance*i);
   osgUtil_SceneViewQQQ():MetaQQuickClass( "osgUtil::SceneView"){_typeid=&typeid(osgUtil::SceneView );};
    virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
}
Q_DECLARE_METATYPE(pmoc::osgUtil_SceneViewQQQ_QModel)
#endif

