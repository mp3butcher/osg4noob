#ifndef EDITOR_META_CLASS_osg_QuatQQQ_H
#define EDITOR_META_CLASS_osg_QuatQQQ_H

#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/Quat>

namespace pmoc{
class QQModel;
class  METAQQUICKLIBRARY_osg_EXPORT  osg_QuatQQQ_QModel: public QQModel{
Q_OBJECT
protected:
    osg::Quat* _model;///the effective model to watch
public:
    ///Constructor////////////////
osg_QuatQQQ_QModel(Instance* i=0,QObject* parent = 0);
  ///Copy Constructor////////////////
osg_QuatQQQ_QModel(const osg_QuatQQQ_QModel&o);
///Destruction////////////////
   ~osg_QuatQQQ_QModel();
     inline osg::Quat* getModel(){return  _model;}
    virtual QQuickItem *connect2View(QQuickItem*i);
};





/////////////////////////////////////////METAQQQ CLASS ////////////////////////////////////////////
class  METAQQUICKLIBRARY_osg_EXPORT  osg_QuatQQQ: public MetaQQuickClass{
protected:
public:
    virtual QQModel* createQQModel(Instance*i);
   osg_QuatQQQ():MetaQQuickClass( "osg::Quat"){_typeid=&typeid(osg::Quat );};
    virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
}
Q_DECLARE_METATYPE(pmoc::osg_QuatQQQ_QModel)
#endif

