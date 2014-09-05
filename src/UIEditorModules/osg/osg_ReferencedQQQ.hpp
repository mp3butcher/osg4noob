#ifndef EDITOR_META_CLASS_osg_ReferencedQQQ_H
#define EDITOR_META_CLASS_osg_ReferencedQQQ_H

#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/Referenced>

namespace pmoc{
class QQModel;
class  METAQQUICKLIBRARY_osg_EXPORT  osg_ReferencedQQQ_QModel: public QQModel{
Q_OBJECT
protected:
    osg::Referenced* _model;///the effective model to watch
public:
    ///Constructor////////////////
osg_ReferencedQQQ_QModel(Instance* i=0,QObject* parent = 0);
  ///Copy Constructor////////////////
osg_ReferencedQQQ_QModel(const osg_ReferencedQQQ_QModel&o);
///Destruction////////////////
   ~osg_ReferencedQQQ_QModel();
     inline osg::Referenced* getModel(){return  _model;}
    virtual QQuickItem *connect2View(QQuickItem*i);
};





/////////////////////////////////////////METAQQQ CLASS ////////////////////////////////////////////
class  METAQQUICKLIBRARY_osg_EXPORT  osg_ReferencedQQQ: public MetaQQuickClass{
protected:
public:
    virtual QQModel* createQQModel(Instance*i);
   osg_ReferencedQQQ():MetaQQuickClass( "osg::Referenced"){_typeid=&typeid(osg::Referenced );};
    virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
}
Q_DECLARE_METATYPE(pmoc::osg_ReferencedQQQ_QModel)
#endif

