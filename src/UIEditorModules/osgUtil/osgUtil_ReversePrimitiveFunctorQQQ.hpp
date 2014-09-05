#ifndef EDITOR_META_CLASS_osgUtil_ReversePrimitiveFunctorQQQ_H
#define EDITOR_META_CLASS_osgUtil_ReversePrimitiveFunctorQQQ_H

#include "Export.h"
#include <MetaQQuickClass.h>
#include <osgUtil/ReversePrimitiveFunctor>

namespace pmoc{
class QQModel;
class  METAQQUICKLIBRARY_osgUtil_EXPORT  osgUtil_ReversePrimitiveFunctorQQQ_QModel: public QQModel{
Q_OBJECT
protected:
    osgUtil::ReversePrimitiveFunctor* _model;///the effective model to watch
public:
    ///Constructor////////////////
osgUtil_ReversePrimitiveFunctorQQQ_QModel(Instance* i=0,QObject* parent = 0);
  ///Copy Constructor////////////////
osgUtil_ReversePrimitiveFunctorQQQ_QModel(const osgUtil_ReversePrimitiveFunctorQQQ_QModel&o);
///Destruction////////////////
   ~osgUtil_ReversePrimitiveFunctorQQQ_QModel();
     inline osgUtil::ReversePrimitiveFunctor* getModel(){return  _model;}
    virtual QQuickItem *connect2View(QQuickItem*i);
};





/////////////////////////////////////////METAQQQ CLASS ////////////////////////////////////////////
class  METAQQUICKLIBRARY_osgUtil_EXPORT  osgUtil_ReversePrimitiveFunctorQQQ: public MetaQQuickClass{
protected:
public:
    virtual QQModel* createQQModel(Instance*i);
   osgUtil_ReversePrimitiveFunctorQQQ():MetaQQuickClass( "osgUtil::ReversePrimitiveFunctor"){_typeid=&typeid(osgUtil::ReversePrimitiveFunctor );};
    virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
}
Q_DECLARE_METATYPE(pmoc::osgUtil_ReversePrimitiveFunctorQQQ_QModel)
#endif

