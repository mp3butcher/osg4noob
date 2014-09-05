#ifndef EDITOR_META_CLASS_osgUtil_dereference_clearQQQ_H
#define EDITOR_META_CLASS_osgUtil_dereference_clearQQQ_H

#include "Export.h"
#include <MetaQQuickClass.h>
#include <osgUtil/EdgeCollector>

namespace pmoc{
class QQModel;
class  METAQQUICKLIBRARY_osgUtil_EXPORT  osgUtil_dereference_clearQQQ_QModel: public QQModel{
Q_OBJECT
protected:
    osgUtil::dereference_clear* _model;///the effective model to watch
public:
    ///Constructor////////////////
osgUtil_dereference_clearQQQ_QModel(Instance* i=0,QObject* parent = 0);
  ///Copy Constructor////////////////
osgUtil_dereference_clearQQQ_QModel(const osgUtil_dereference_clearQQQ_QModel&o);
///Destruction////////////////
   ~osgUtil_dereference_clearQQQ_QModel();
     inline osgUtil::dereference_clear* getModel(){return  _model;}
    virtual QQuickItem *connect2View(QQuickItem*i);
};





/////////////////////////////////////////METAQQQ CLASS ////////////////////////////////////////////
class  METAQQUICKLIBRARY_osgUtil_EXPORT  osgUtil_dereference_clearQQQ: public MetaQQuickClass{
protected:
public:
    virtual QQModel* createQQModel(Instance*i);
   osgUtil_dereference_clearQQQ():MetaQQuickClass( "osgUtil::dereference_clear"){_typeid=&typeid(osgUtil::dereference_clear );};
    virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
}
Q_DECLARE_METATYPE(pmoc::osgUtil_dereference_clearQQQ_QModel)
#endif

