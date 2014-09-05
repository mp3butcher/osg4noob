#ifndef EDITOR_META_CLASS_osg_PixelStorageModesQQQ_H
#define EDITOR_META_CLASS_osg_PixelStorageModesQQQ_H

#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/GLU>

namespace pmoc{
class QQModel;
class  METAQQUICKLIBRARY_osg_EXPORT  osg_PixelStorageModesQQQ_QModel: public QQModel{
Q_OBJECT
protected:
    osg::PixelStorageModes* _model;///the effective model to watch
public:
    ///Constructor////////////////
osg_PixelStorageModesQQQ_QModel(Instance* i=0,QObject* parent = 0);
  ///Copy Constructor////////////////
osg_PixelStorageModesQQQ_QModel(const osg_PixelStorageModesQQQ_QModel&o);
///Destruction////////////////
   ~osg_PixelStorageModesQQQ_QModel();
     inline osg::PixelStorageModes* getModel(){return  _model;}
    virtual QQuickItem *connect2View(QQuickItem*i);
};





/////////////////////////////////////////METAQQQ CLASS ////////////////////////////////////////////
class  METAQQUICKLIBRARY_osg_EXPORT  osg_PixelStorageModesQQQ: public MetaQQuickClass{
protected:
public:
    virtual QQModel* createQQModel(Instance*i);
   osg_PixelStorageModesQQQ():MetaQQuickClass( "osg::PixelStorageModes"){_typeid=&typeid(osg::PixelStorageModes );};
    virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
}
Q_DECLARE_METATYPE(pmoc::osg_PixelStorageModesQQQ_QModel)
#endif

