#ifndef EDITOR_META_CLASS_osg_StencilQQQ_H
#define EDITOR_META_CLASS_osg_StencilQQQ_H

#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/Stencil>

namespace pmoc{
class QQModel;
class  METAQQUICKLIBRARY_osg_EXPORT  osg_StencilQQQ_QModel: public QQModel{
Q_OBJECT
protected:
    osg::Stencil* _model;///the effective model to watch
public:
    ///Constructor////////////////
osg_StencilQQQ_QModel(Instance* i=0,QObject* parent = 0);
  ///Copy Constructor////////////////
osg_StencilQQQ_QModel(const osg_StencilQQQ_QModel&o);
///Destruction////////////////
   ~osg_StencilQQQ_QModel();
     inline osg::Stencil* getModel(){return  _model;}
    virtual QQuickItem *connect2View(QQuickItem*i);
};





/////////////////////////////////////////METAQQQ CLASS ////////////////////////////////////////////
class  METAQQUICKLIBRARY_osg_EXPORT  osg_StencilQQQ: public MetaQQuickClass{
protected:
public:
    virtual QQModel* createQQModel(Instance*i);
   osg_StencilQQQ():MetaQQuickClass( "osg::Stencil"){_typeid=&typeid(osg::Stencil );};
    virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
}
Q_DECLARE_METATYPE(pmoc::osg_StencilQQQ_QModel)
#endif

