#ifndef EDITOR_META_CLASS_osg_FrameStampQQQ_H
#define EDITOR_META_CLASS_osg_FrameStampQQQ_H

#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/FrameStamp>

namespace pmoc{
class QQModel;
class  METAQQUICKLIBRARY_osg_EXPORT  osg_FrameStampQQQ_QModel: public QQModel{
Q_OBJECT
protected:
    osg::FrameStamp* _model;///the effective model to watch
public:
    ///Constructor////////////////
osg_FrameStampQQQ_QModel(Instance* i=0,QObject* parent = 0);
  ///Copy Constructor////////////////
osg_FrameStampQQQ_QModel(const osg_FrameStampQQQ_QModel&o);
///Destruction////////////////
   ~osg_FrameStampQQQ_QModel();
     inline osg::FrameStamp* getModel(){return  _model;}
    virtual QQuickItem *connect2View(QQuickItem*i);
};





/////////////////////////////////////////METAQQQ CLASS ////////////////////////////////////////////
class  METAQQUICKLIBRARY_osg_EXPORT  osg_FrameStampQQQ: public MetaQQuickClass{
protected:
public:
    virtual QQModel* createQQModel(Instance*i);
   osg_FrameStampQQQ():MetaQQuickClass( "osg::FrameStamp"){_typeid=&typeid(osg::FrameStamp );};
    virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
}
Q_DECLARE_METATYPE(pmoc::osg_FrameStampQQQ_QModel)
#endif

