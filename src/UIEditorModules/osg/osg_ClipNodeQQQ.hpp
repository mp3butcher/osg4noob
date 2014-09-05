#ifndef EDITOR_META_CLASS_osg_ClipNodeQQQ_H
#define EDITOR_META_CLASS_osg_ClipNodeQQQ_H

#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/ClipNode>

namespace pmoc{
class QQModel;
class  METAQQUICKLIBRARY_osg_EXPORT  osg_ClipNodeQQQ_QModel: public QQModel{
Q_OBJECT
protected:
    osg::ClipNode* _model;///the effective model to watch
public:
    ///Constructor////////////////
osg_ClipNodeQQQ_QModel(Instance* i=0,QObject* parent = 0);
  ///Copy Constructor////////////////
osg_ClipNodeQQQ_QModel(const osg_ClipNodeQQQ_QModel&o);
///Destruction////////////////
   ~osg_ClipNodeQQQ_QModel();
     inline osg::ClipNode* getModel(){return  _model;}
    virtual QQuickItem *connect2View(QQuickItem*i);
};





/////////////////////////////////////////METAQQQ CLASS ////////////////////////////////////////////
class  METAQQUICKLIBRARY_osg_EXPORT  osg_ClipNodeQQQ: public MetaQQuickClass{
protected:
public:
    virtual QQModel* createQQModel(Instance*i);
   osg_ClipNodeQQQ():MetaQQuickClass( "osg::ClipNode"){_typeid=&typeid(osg::ClipNode );};
    virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
}
Q_DECLARE_METATYPE(pmoc::osg_ClipNodeQQQ_QModel)
#endif

