#ifndef EDITOR_META_CLASS_osg_GroupQQQ_H
#define EDITOR_META_CLASS_osg_GroupQQQ_H

#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/Group>

namespace pmoc{
class QQModel;
class  METAQQUICKLIBRARY_osg_EXPORT  osg_GroupQQQ_QModel: public QQModel{
Q_OBJECT
protected:
    osg::Group* _model;///the effective model to watch
public:
    ///Constructor////////////////
osg_GroupQQQ_QModel(Instance* i=0,QObject* parent = 0);
  ///Copy Constructor////////////////
osg_GroupQQQ_QModel(const osg_GroupQQQ_QModel&o);
///Destruction////////////////
   ~osg_GroupQQQ_QModel();
     inline osg::Group* getModel(){return  _model;}
    virtual QQuickItem *connect2View(QQuickItem*i);
};





/////////////////////////////////////////METAQQQ CLASS ////////////////////////////////////////////
class  METAQQUICKLIBRARY_osg_EXPORT  osg_GroupQQQ: public MetaQQuickClass{
protected:
public:
    virtual QQModel* createQQModel(Instance*i);
   osg_GroupQQQ():MetaQQuickClass( "osg::Group"){_typeid=&typeid(osg::Group );};
    virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
}
Q_DECLARE_METATYPE(pmoc::osg_GroupQQQ_QModel)
#endif

