#ifndef EDITOR_META_CLASS_osg_DepthQQQ_H
#define EDITOR_META_CLASS_osg_DepthQQQ_H

#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/Depth>

namespace pmoc{
class QQModel;
class  METAQQUICKLIBRARY_osg_EXPORT  osg_DepthQQQ_QModel: public QQModel{
Q_OBJECT
protected:
    osg::Depth* _model;///the effective model to watch
public:
    ///Constructor////////////////
osg_DepthQQQ_QModel(Instance* i=0,QObject* parent = 0);
  ///Copy Constructor////////////////
osg_DepthQQQ_QModel(const osg_DepthQQQ_QModel&o);
///Destruction////////////////
   ~osg_DepthQQQ_QModel();
     inline osg::Depth* getModel(){return  _model;}
    virtual QQuickItem *connect2View(QQuickItem*i);
};





/////////////////////////////////////////METAQQQ CLASS ////////////////////////////////////////////
class  METAQQUICKLIBRARY_osg_EXPORT  osg_DepthQQQ: public MetaQQuickClass{
protected:
public:
    virtual QQModel* createQQModel(Instance*i);
   osg_DepthQQQ():MetaQQuickClass( "osg::Depth"){_typeid=&typeid(osg::Depth );};
    virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
}
Q_DECLARE_METATYPE(pmoc::osg_DepthQQQ_QModel)
#endif

