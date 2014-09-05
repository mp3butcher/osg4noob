#ifndef EDITOR_META_CLASS_osg_ClipPlaneQQQ_H
#define EDITOR_META_CLASS_osg_ClipPlaneQQQ_H

#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/ClipPlane>

namespace pmoc{
class QQModel;
class  METAQQUICKLIBRARY_osg_EXPORT  osg_ClipPlaneQQQ_QModel: public QQModel{
Q_OBJECT
protected:
    osg::ClipPlane* _model;///the effective model to watch
public:
    ///Constructor////////////////
osg_ClipPlaneQQQ_QModel(Instance* i=0,QObject* parent = 0);
  ///Copy Constructor////////////////
osg_ClipPlaneQQQ_QModel(const osg_ClipPlaneQQQ_QModel&o);
///Destruction////////////////
   ~osg_ClipPlaneQQQ_QModel();
     inline osg::ClipPlane* getModel(){return  _model;}
    virtual QQuickItem *connect2View(QQuickItem*i);
};





/////////////////////////////////////////METAQQQ CLASS ////////////////////////////////////////////
class  METAQQUICKLIBRARY_osg_EXPORT  osg_ClipPlaneQQQ: public MetaQQuickClass{
protected:
public:
    virtual QQModel* createQQModel(Instance*i);
   osg_ClipPlaneQQQ():MetaQQuickClass( "osg::ClipPlane"){_typeid=&typeid(osg::ClipPlane );};
    virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
}
Q_DECLARE_METATYPE(pmoc::osg_ClipPlaneQQQ_QModel)
#endif

