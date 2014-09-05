#ifndef EDITOR_META_CLASS_osg_Vec3fQQQ_H
#define EDITOR_META_CLASS_osg_Vec3fQQQ_H

#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/Vec3f>

namespace pmoc{
class QQModel;
class  METAQQUICKLIBRARY_osg_EXPORT  osg_Vec3fQQQ_QModel: public QQModel{
Q_OBJECT
protected:
    osg::Vec3f* _model;///the effective model to watch
public:
    ///Constructor////////////////
osg_Vec3fQQQ_QModel(Instance* i=0,QObject* parent = 0);
  ///Copy Constructor////////////////
osg_Vec3fQQQ_QModel(const osg_Vec3fQQQ_QModel&o);
///Destruction////////////////
   ~osg_Vec3fQQQ_QModel();
     inline osg::Vec3f* getModel(){return  _model;}
    virtual QQuickItem *connect2View(QQuickItem*i);
};





/////////////////////////////////////////METAQQQ CLASS ////////////////////////////////////////////
class  METAQQUICKLIBRARY_osg_EXPORT  osg_Vec3fQQQ: public MetaQQuickClass{
protected:
public:
    virtual QQModel* createQQModel(Instance*i);
   osg_Vec3fQQQ():MetaQQuickClass( "osg::Vec3f"){_typeid=&typeid(osg::Vec3f );};
    virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
}
Q_DECLARE_METATYPE(pmoc::osg_Vec3fQQQ_QModel)
#endif

