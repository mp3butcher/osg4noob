#ifndef EDITOR_META_CLASS_osg_ScriptQQQ_H
#define EDITOR_META_CLASS_osg_ScriptQQQ_H

#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/ScriptEngine>

namespace pmoc{
class QQModel;
class  METAQQUICKLIBRARY_osg_EXPORT  osg_ScriptQQQ_QModel: public QQModel{
Q_OBJECT
protected:
    osg::Script* _model;///the effective model to watch
public:
    ///Constructor////////////////
osg_ScriptQQQ_QModel(Instance* i=0,QObject* parent = 0);
  ///Copy Constructor////////////////
osg_ScriptQQQ_QModel(const osg_ScriptQQQ_QModel&o);
///Destruction////////////////
   ~osg_ScriptQQQ_QModel();
     inline osg::Script* getModel(){return  _model;}
    virtual QQuickItem *connect2View(QQuickItem*i);
};





/////////////////////////////////////////METAQQQ CLASS ////////////////////////////////////////////
class  METAQQUICKLIBRARY_osg_EXPORT  osg_ScriptQQQ: public MetaQQuickClass{
protected:
public:
    virtual QQModel* createQQModel(Instance*i);
   osg_ScriptQQQ():MetaQQuickClass( "osg::Script"){_typeid=&typeid(osg::Script );};
    virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
}
Q_DECLARE_METATYPE(pmoc::osg_ScriptQQQ_QModel)
#endif

