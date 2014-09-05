#ifndef EDITOR_META_CLASS_osg_ImageStreamQQQ_H
#define EDITOR_META_CLASS_osg_ImageStreamQQQ_H

#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/ImageStream>

namespace pmoc{
class QQModel;
class  METAQQUICKLIBRARY_osg_EXPORT  osg_ImageStreamQQQ_QModel: public QQModel{
Q_OBJECT
protected:
    osg::ImageStream* _model;///the effective model to watch
public:
    ///Constructor////////////////
osg_ImageStreamQQQ_QModel(Instance* i=0,QObject* parent = 0);
  ///Copy Constructor////////////////
osg_ImageStreamQQQ_QModel(const osg_ImageStreamQQQ_QModel&o);
///Destruction////////////////
   ~osg_ImageStreamQQQ_QModel();
     inline osg::ImageStream* getModel(){return  _model;}
    virtual QQuickItem *connect2View(QQuickItem*i);
};





/////////////////////////////////////////METAQQQ CLASS ////////////////////////////////////////////
class  METAQQUICKLIBRARY_osg_EXPORT  osg_ImageStreamQQQ: public MetaQQuickClass{
protected:
public:
    virtual QQModel* createQQModel(Instance*i);
   osg_ImageStreamQQQ():MetaQQuickClass( "osg::ImageStream"){_typeid=&typeid(osg::ImageStream );};
    virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
}
Q_DECLARE_METATYPE(pmoc::osg_ImageStreamQQQ_QModel)
#endif

