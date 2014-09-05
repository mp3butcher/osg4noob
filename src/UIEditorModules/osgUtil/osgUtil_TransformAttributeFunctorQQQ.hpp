#ifndef EDITOR_META_CLASS_osgUtil_TransformAttributeFunctorQQQ_H
#define EDITOR_META_CLASS_osgUtil_TransformAttributeFunctorQQQ_H

#include "Export.h"
#include <MetaQQuickClass.h>
#include <osgUtil/TransformAttributeFunctor>

namespace pmoc{
class QQModel;
class  METAQQUICKLIBRARY_osgUtil_EXPORT  osgUtil_TransformAttributeFunctorQQQ_QModel: public QQModel{
Q_OBJECT
protected:
    osgUtil::TransformAttributeFunctor* _model;///the effective model to watch
public:
    ///Constructor////////////////
osgUtil_TransformAttributeFunctorQQQ_QModel(Instance* i=0,QObject* parent = 0);
  ///Copy Constructor////////////////
osgUtil_TransformAttributeFunctorQQQ_QModel(const osgUtil_TransformAttributeFunctorQQQ_QModel&o);
///Destruction////////////////
   ~osgUtil_TransformAttributeFunctorQQQ_QModel();
     inline osgUtil::TransformAttributeFunctor* getModel(){return  _model;}
    virtual QQuickItem *connect2View(QQuickItem*i);
};





/////////////////////////////////////////METAQQQ CLASS ////////////////////////////////////////////
class  METAQQUICKLIBRARY_osgUtil_EXPORT  osgUtil_TransformAttributeFunctorQQQ: public MetaQQuickClass{
protected:
public:
    virtual QQModel* createQQModel(Instance*i);
   osgUtil_TransformAttributeFunctorQQQ():MetaQQuickClass( "osgUtil::TransformAttributeFunctor"){_typeid=&typeid(osgUtil::TransformAttributeFunctor );};
    virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
}
Q_DECLARE_METATYPE(pmoc::osgUtil_TransformAttributeFunctorQQQ_QModel)
#endif

