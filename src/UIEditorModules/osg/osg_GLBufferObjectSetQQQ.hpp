#ifndef EDITOR_META_CLASS_osg_GLBufferObjectSetQQQ_H
#define EDITOR_META_CLASS_osg_GLBufferObjectSetQQQ_H

#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/BufferObject>

namespace pmoc{
class QQModel;
class  METAQQUICKLIBRARY_osg_EXPORT  osg_GLBufferObjectSetQQQ_QModel: public QQModel{
Q_OBJECT
protected:
    osg::GLBufferObjectSet* _model;///the effective model to watch
public:
    ///Constructor////////////////
osg_GLBufferObjectSetQQQ_QModel(Instance* i=0,QObject* parent = 0);
  ///Copy Constructor////////////////
osg_GLBufferObjectSetQQQ_QModel(const osg_GLBufferObjectSetQQQ_QModel&o);
///Destruction////////////////
   ~osg_GLBufferObjectSetQQQ_QModel();
     inline osg::GLBufferObjectSet* getModel(){return  _model;}
    virtual QQuickItem *connect2View(QQuickItem*i);
};





/////////////////////////////////////////METAQQQ CLASS ////////////////////////////////////////////
class  METAQQUICKLIBRARY_osg_EXPORT  osg_GLBufferObjectSetQQQ: public MetaQQuickClass{
protected:
public:
    virtual QQModel* createQQModel(Instance*i);
   osg_GLBufferObjectSetQQQ():MetaQQuickClass( "osg::GLBufferObjectSet"){_typeid=&typeid(osg::GLBufferObjectSet );};
    virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
}
Q_DECLARE_METATYPE(pmoc::osg_GLBufferObjectSetQQQ_QModel)
#endif

