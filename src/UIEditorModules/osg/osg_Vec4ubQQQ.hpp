#ifndef EDITOR_META_CLASS_osg_Vec4ubQQQ_H
#define EDITOR_META_CLASS_osg_Vec4ubQQQ_H

#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/Vec4ub>

namespace pmoc{
class QQModel;
class  METAQQUICKLIBRARY_osg_EXPORT  osg_Vec4ubQQQ_QModel: public QQModel{
Q_OBJECT
protected:
    osg::Vec4ub* _model;///the effective model to watch
public:
    ///Constructor////////////////
osg_Vec4ubQQQ_QModel(Instance* i=0,QObject* parent = 0);
  ///Copy Constructor////////////////
osg_Vec4ubQQQ_QModel(const osg_Vec4ubQQQ_QModel&o);
///Destruction////////////////
   ~osg_Vec4ubQQQ_QModel();
     inline osg::Vec4ub* getModel(){return  _model;}
    virtual QQuickItem *connect2View(QQuickItem*i);
};





/////////////////////////////////////////METAQQQ CLASS ////////////////////////////////////////////
class  METAQQUICKLIBRARY_osg_EXPORT  osg_Vec4ubQQQ: public MetaQQuickClass{
protected:
public:
    virtual QQModel* createQQModel(Instance*i);
   osg_Vec4ubQQQ():MetaQQuickClass( "osg::Vec4ub"){_typeid=&typeid(osg::Vec4ub );};
    virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
}
Q_DECLARE_METATYPE(pmoc::osg_Vec4ubQQQ_QModel)
#endif

