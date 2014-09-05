#ifndef EDITOR_META_CLASS_osg_BoxQQQ_H
#define EDITOR_META_CLASS_osg_BoxQQQ_H

#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/Shape>

namespace pmoc{
class QQModel;
class  METAQQUICKLIBRARY_osg_EXPORT  osg_BoxQQQ_QModel: public QQModel{
Q_OBJECT
protected:
    osg::Box* _model;///the effective model to watch
public:
    ///Constructor////////////////
osg_BoxQQQ_QModel(Instance* i=0,QObject* parent = 0);
  ///Copy Constructor////////////////
osg_BoxQQQ_QModel(const osg_BoxQQQ_QModel&o);
///Destruction////////////////
   ~osg_BoxQQQ_QModel();
     inline osg::Box* getModel(){return  _model;}
    virtual QQuickItem *connect2View(QQuickItem*i);
};





/////////////////////////////////////////METAQQQ CLASS ////////////////////////////////////////////
class  METAQQUICKLIBRARY_osg_EXPORT  osg_BoxQQQ: public MetaQQuickClass{
protected:
public:
    virtual QQModel* createQQModel(Instance*i);
   osg_BoxQQQ():MetaQQuickClass( "osg::Box"){_typeid=&typeid(osg::Box );};
    virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
}
Q_DECLARE_METATYPE(pmoc::osg_BoxQQQ_QModel)
#endif

