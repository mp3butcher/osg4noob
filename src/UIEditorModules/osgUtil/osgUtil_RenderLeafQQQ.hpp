#ifndef EDITOR_META_CLASS_osgUtil_RenderLeafQQQ_H
#define EDITOR_META_CLASS_osgUtil_RenderLeafQQQ_H

#include "Export.h"
#include <MetaQQuickClass.h>
#include <osgUtil/RenderLeaf>

namespace pmoc{
class QQModel;
class  METAQQUICKLIBRARY_osgUtil_EXPORT  osgUtil_RenderLeafQQQ_QModel: public QQModel{
Q_OBJECT
protected:
    osgUtil::RenderLeaf* _model;///the effective model to watch
public:
    ///Constructor////////////////
osgUtil_RenderLeafQQQ_QModel(Instance* i=0,QObject* parent = 0);
  ///Copy Constructor////////////////
osgUtil_RenderLeafQQQ_QModel(const osgUtil_RenderLeafQQQ_QModel&o);
///Destruction////////////////
   ~osgUtil_RenderLeafQQQ_QModel();
     inline osgUtil::RenderLeaf* getModel(){return  _model;}
    virtual QQuickItem *connect2View(QQuickItem*i);
};





/////////////////////////////////////////METAQQQ CLASS ////////////////////////////////////////////
class  METAQQUICKLIBRARY_osgUtil_EXPORT  osgUtil_RenderLeafQQQ: public MetaQQuickClass{
protected:
public:
    virtual QQModel* createQQModel(Instance*i);
   osgUtil_RenderLeafQQQ():MetaQQuickClass( "osgUtil::RenderLeaf"){_typeid=&typeid(osgUtil::RenderLeaf );};
    virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
}
Q_DECLARE_METATYPE(pmoc::osgUtil_RenderLeafQQQ_QModel)
#endif

