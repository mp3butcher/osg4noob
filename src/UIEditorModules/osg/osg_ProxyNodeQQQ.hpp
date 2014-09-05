#ifndef EDITOR_META_CLASS_osg_ProxyNodeQQQ_H
#define EDITOR_META_CLASS_osg_ProxyNodeQQQ_H

#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/ProxyNode>

namespace pmoc{
class QQModel;
class  METAQQUICKLIBRARY_osg_EXPORT  osg_ProxyNodeQQQ_QModel: public QQModel{
Q_OBJECT
protected:
    osg::ProxyNode* _model;///the effective model to watch
public:
    ///Constructor////////////////
osg_ProxyNodeQQQ_QModel(Instance* i=0,QObject* parent = 0);
  ///Copy Constructor////////////////
osg_ProxyNodeQQQ_QModel(const osg_ProxyNodeQQQ_QModel&o);
///Destruction////////////////
   ~osg_ProxyNodeQQQ_QModel();
     inline osg::ProxyNode* getModel(){return  _model;}
    virtual QQuickItem *connect2View(QQuickItem*i);
};





/////////////////////////////////////////METAQQQ CLASS ////////////////////////////////////////////
class  METAQQUICKLIBRARY_osg_EXPORT  osg_ProxyNodeQQQ: public MetaQQuickClass{
protected:
public:
    virtual QQModel* createQQModel(Instance*i);
   osg_ProxyNodeQQQ():MetaQQuickClass( "osg::ProxyNode"){_typeid=&typeid(osg::ProxyNode );};
    virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
}
Q_DECLARE_METATYPE(pmoc::osg_ProxyNodeQQQ_QModel)
#endif

