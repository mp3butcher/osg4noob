#ifndef EDITOR_META_CLASS_osg_StateAttributeCallbackQQQ_H
#define EDITOR_META_CLASS_osg_StateAttributeCallbackQQQ_H

#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/StateAttributeCallback>

namespace pmoc{
class QQModel;
class  METAQQUICKLIBRARY_osg_EXPORT  osg_StateAttributeCallbackQQQ_QModel: public QQModel{
Q_OBJECT
protected:
    osg::StateAttributeCallback* _model;///the effective model to watch
public:
    ///Constructor////////////////
osg_StateAttributeCallbackQQQ_QModel(Instance* i=0,QObject* parent = 0);
  ///Copy Constructor////////////////
osg_StateAttributeCallbackQQQ_QModel(const osg_StateAttributeCallbackQQQ_QModel&o);
///Destruction////////////////
   ~osg_StateAttributeCallbackQQQ_QModel();
     inline osg::StateAttributeCallback* getModel(){return  _model;}
    virtual QQuickItem *connect2View(QQuickItem*i);
};





/////////////////////////////////////////METAQQQ CLASS ////////////////////////////////////////////
class  METAQQUICKLIBRARY_osg_EXPORT  osg_StateAttributeCallbackQQQ: public MetaQQuickClass{
protected:
public:
    virtual QQModel* createQQModel(Instance*i);
   osg_StateAttributeCallbackQQQ():MetaQQuickClass( "osg::StateAttributeCallback"){_typeid=&typeid(osg::StateAttributeCallback );};
    virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
}
Q_DECLARE_METATYPE(pmoc::osg_StateAttributeCallbackQQQ_QModel)
#endif

