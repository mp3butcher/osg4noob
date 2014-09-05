#ifndef EDITOR_META_CLASS_osg_RunOperationsQQQ_H
#define EDITOR_META_CLASS_osg_RunOperationsQQQ_H

#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/GraphicsThread>

namespace pmoc{
class QQModel;
class  METAQQUICKLIBRARY_osg_EXPORT  osg_RunOperationsQQQ_QModel: public QQModel{
Q_OBJECT
protected:
    osg::RunOperations* _model;///the effective model to watch
public:
    ///Constructor////////////////
osg_RunOperationsQQQ_QModel(Instance* i=0,QObject* parent = 0);
  ///Copy Constructor////////////////
osg_RunOperationsQQQ_QModel(const osg_RunOperationsQQQ_QModel&o);
///Destruction////////////////
   ~osg_RunOperationsQQQ_QModel();
     inline osg::RunOperations* getModel(){return  _model;}
    virtual QQuickItem *connect2View(QQuickItem*i);
};





/////////////////////////////////////////METAQQQ CLASS ////////////////////////////////////////////
class  METAQQUICKLIBRARY_osg_EXPORT  osg_RunOperationsQQQ: public MetaQQuickClass{
protected:
public:
    virtual QQModel* createQQModel(Instance*i);
   osg_RunOperationsQQQ():MetaQQuickClass( "osg::RunOperations"){_typeid=&typeid(osg::RunOperations );};
    virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
}
Q_DECLARE_METATYPE(pmoc::osg_RunOperationsQQQ_QModel)
#endif

