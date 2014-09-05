#ifndef EDITOR_META_CLASS_osg_PositionAttitudeTransformQQQ_H
#define EDITOR_META_CLASS_osg_PositionAttitudeTransformQQQ_H

#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/PositionAttitudeTransform>

namespace pmoc{
class QQModel;
class  METAQQUICKLIBRARY_osg_EXPORT  osg_PositionAttitudeTransformQQQ_QModel: public QQModel{
Q_OBJECT
protected:
    osg::PositionAttitudeTransform* _model;///the effective model to watch
public:
    ///Constructor////////////////
osg_PositionAttitudeTransformQQQ_QModel(Instance* i=0,QObject* parent = 0);
  ///Copy Constructor////////////////
osg_PositionAttitudeTransformQQQ_QModel(const osg_PositionAttitudeTransformQQQ_QModel&o);
///Destruction////////////////
   ~osg_PositionAttitudeTransformQQQ_QModel();
     inline osg::PositionAttitudeTransform* getModel(){return  _model;}
    virtual QQuickItem *connect2View(QQuickItem*i);
};





/////////////////////////////////////////METAQQQ CLASS ////////////////////////////////////////////
class  METAQQUICKLIBRARY_osg_EXPORT  osg_PositionAttitudeTransformQQQ: public MetaQQuickClass{
protected:
public:
    virtual QQModel* createQQModel(Instance*i);
   osg_PositionAttitudeTransformQQQ():MetaQQuickClass( "osg::PositionAttitudeTransform"){_typeid=&typeid(osg::PositionAttitudeTransform );};
    virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
}
Q_DECLARE_METATYPE(pmoc::osg_PositionAttitudeTransformQQQ_QModel)
#endif

