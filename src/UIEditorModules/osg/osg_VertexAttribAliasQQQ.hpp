#ifndef EDITOR_META_CLASS_osg_VertexAttribAliasQQQ_H
#define EDITOR_META_CLASS_osg_VertexAttribAliasQQQ_H

#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/State>

namespace pmoc{
class QQModel;
class  METAQQUICKLIBRARY_osg_EXPORT  osg_VertexAttribAliasQQQ_QModel: public QQModel{
Q_OBJECT
protected:
    osg::VertexAttribAlias* _model;///the effective model to watch
public:
    ///Constructor////////////////
osg_VertexAttribAliasQQQ_QModel(Instance* i=0,QObject* parent = 0);
  ///Copy Constructor////////////////
osg_VertexAttribAliasQQQ_QModel(const osg_VertexAttribAliasQQQ_QModel&o);
///Destruction////////////////
   ~osg_VertexAttribAliasQQQ_QModel();
     inline osg::VertexAttribAlias* getModel(){return  _model;}
    virtual QQuickItem *connect2View(QQuickItem*i);
};





/////////////////////////////////////////METAQQQ CLASS ////////////////////////////////////////////
class  METAQQUICKLIBRARY_osg_EXPORT  osg_VertexAttribAliasQQQ: public MetaQQuickClass{
protected:
public:
    virtual QQModel* createQQModel(Instance*i);
   osg_VertexAttribAliasQQQ():MetaQQuickClass( "osg::VertexAttribAlias"){_typeid=&typeid(osg::VertexAttribAlias );};
    virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
}
Q_DECLARE_METATYPE(pmoc::osg_VertexAttribAliasQQQ_QModel)
#endif

