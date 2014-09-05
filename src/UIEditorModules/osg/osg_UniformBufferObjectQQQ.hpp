#ifndef EDITOR_META_CLASS_osg_UniformBufferObjectQQQ_H
#define EDITOR_META_CLASS_osg_UniformBufferObjectQQQ_H

#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/BufferObject>

namespace pmoc{
class QQModel;
class  METAQQUICKLIBRARY_osg_EXPORT  osg_UniformBufferObjectQQQ_QModel: public QQModel{
Q_OBJECT
protected:
    osg::UniformBufferObject* _model;///the effective model to watch
public:
    ///Constructor////////////////
osg_UniformBufferObjectQQQ_QModel(Instance* i=0,QObject* parent = 0);
  ///Copy Constructor////////////////
osg_UniformBufferObjectQQQ_QModel(const osg_UniformBufferObjectQQQ_QModel&o);
///Destruction////////////////
   ~osg_UniformBufferObjectQQQ_QModel();
     inline osg::UniformBufferObject* getModel(){return  _model;}
    virtual QQuickItem *connect2View(QQuickItem*i);
};





/////////////////////////////////////////METAQQQ CLASS ////////////////////////////////////////////
class  METAQQUICKLIBRARY_osg_EXPORT  osg_UniformBufferObjectQQQ: public MetaQQuickClass{
protected:
public:
    virtual QQModel* createQQModel(Instance*i);
   osg_UniformBufferObjectQQQ():MetaQQuickClass( "osg::UniformBufferObject"){_typeid=&typeid(osg::UniformBufferObject );};
    virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
}
Q_DECLARE_METATYPE(pmoc::osg_UniformBufferObjectQQQ_QModel)
#endif

