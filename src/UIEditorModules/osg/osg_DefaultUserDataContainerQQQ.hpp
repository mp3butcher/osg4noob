#ifndef EDITOR_META_CLASS_osg_DefaultUserDataContainerQQQ_H
#define EDITOR_META_CLASS_osg_DefaultUserDataContainerQQQ_H

#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/UserDataContainer>

namespace pmoc{
class QQModel;
class  METAQQUICKLIBRARY_osg_EXPORT  osg_DefaultUserDataContainerQQQ_QModel: public QQModel{
Q_OBJECT
protected:
    osg::DefaultUserDataContainer* _model;///the effective model to watch
public:
    ///Constructor////////////////
osg_DefaultUserDataContainerQQQ_QModel(Instance* i=0,QObject* parent = 0);
  ///Copy Constructor////////////////
osg_DefaultUserDataContainerQQQ_QModel(const osg_DefaultUserDataContainerQQQ_QModel&o);
///Destruction////////////////
   ~osg_DefaultUserDataContainerQQQ_QModel();
     inline osg::DefaultUserDataContainer* getModel(){return  _model;}
    virtual QQuickItem *connect2View(QQuickItem*i);
};





/////////////////////////////////////////METAQQQ CLASS ////////////////////////////////////////////
class  METAQQUICKLIBRARY_osg_EXPORT  osg_DefaultUserDataContainerQQQ: public MetaQQuickClass{
protected:
public:
    virtual QQModel* createQQModel(Instance*i);
   osg_DefaultUserDataContainerQQQ():MetaQQuickClass( "osg::DefaultUserDataContainer"){_typeid=&typeid(osg::DefaultUserDataContainer );};
    virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
}
Q_DECLARE_METATYPE(pmoc::osg_DefaultUserDataContainerQQQ_QModel)
#endif

