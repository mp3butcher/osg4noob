#ifndef EDITOR_META_CLASS_osg_Texture2DMultisampleQQQ_H
#define EDITOR_META_CLASS_osg_Texture2DMultisampleQQQ_H

#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/Texture2DMultisample>

namespace pmoc{
class QQModel;
class  METAQQUICKLIBRARY_osg_EXPORT  osg_Texture2DMultisampleQQQ_QModel: public QQModel{
Q_OBJECT
protected:
    osg::Texture2DMultisample* _model;///the effective model to watch
public:
    ///Constructor////////////////
osg_Texture2DMultisampleQQQ_QModel(Instance* i=0,QObject* parent = 0);
  ///Copy Constructor////////////////
osg_Texture2DMultisampleQQQ_QModel(const osg_Texture2DMultisampleQQQ_QModel&o);
///Destruction////////////////
   ~osg_Texture2DMultisampleQQQ_QModel();
     inline osg::Texture2DMultisample* getModel(){return  _model;}
    virtual QQuickItem *connect2View(QQuickItem*i);
};





/////////////////////////////////////////METAQQQ CLASS ////////////////////////////////////////////
class  METAQQUICKLIBRARY_osg_EXPORT  osg_Texture2DMultisampleQQQ: public MetaQQuickClass{
protected:
public:
    virtual QQModel* createQQModel(Instance*i);
   osg_Texture2DMultisampleQQQ():MetaQQuickClass( "osg::Texture2DMultisample"){_typeid=&typeid(osg::Texture2DMultisample );};
    virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
}
Q_DECLARE_METATYPE(pmoc::osg_Texture2DMultisampleQQQ_QModel)
#endif

