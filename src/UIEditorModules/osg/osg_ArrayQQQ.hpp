#ifndef EDITOR_META_CLASS_osg_ArrayQQQ_H
#define EDITOR_META_CLASS_osg_ArrayQQQ_H

#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/Array>

namespace pmoc{
class QQModel;
class  METAQQUICKLIBRARY_osg_EXPORT  osg_ArrayQQQ_QModel: public QQModel{
Q_OBJECT
protected:
    osg::Array* _model;///the effective model to watch
public:
    ///Constructor////////////////
osg_ArrayQQQ_QModel(Instance* i=0,QObject* parent = 0);
  ///Copy Constructor////////////////
osg_ArrayQQQ_QModel(const osg_ArrayQQQ_QModel&o);
///Destruction////////////////
   ~osg_ArrayQQQ_QModel();
     inline osg::Array* getModel(){return  _model;}
    virtual QQuickItem *connect2View(QQuickItem*i);
};





/////////////////////////////////////////METAQQQ CLASS ////////////////////////////////////////////
class  METAQQUICKLIBRARY_osg_EXPORT  osg_ArrayQQQ: public MetaQQuickClass{
protected:
public:
    virtual QQModel* createQQModel(Instance*i);
   osg_ArrayQQQ():MetaQQuickClass( "osg::Array"){_typeid=&typeid(osg::Array );};
    virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
}
Q_DECLARE_METATYPE(pmoc::osg_ArrayQQQ_QModel)
#endif

