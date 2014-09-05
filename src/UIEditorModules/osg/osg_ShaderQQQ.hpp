#ifndef EDITOR_META_CLASS_osg_ShaderQQQ_H
#define EDITOR_META_CLASS_osg_ShaderQQQ_H

#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/Shader>

namespace pmoc{
class QQModel;
class  METAQQUICKLIBRARY_osg_EXPORT  osg_ShaderQQQ_QModel: public QQModel{
Q_OBJECT
protected:
    osg::Shader* _model;///the effective model to watch
public:
    ///Constructor////////////////
osg_ShaderQQQ_QModel(Instance* i=0,QObject* parent = 0);
  ///Copy Constructor////////////////
osg_ShaderQQQ_QModel(const osg_ShaderQQQ_QModel&o);
///Destruction////////////////
   ~osg_ShaderQQQ_QModel();
     inline osg::Shader* getModel(){return  _model;}
    virtual QQuickItem *connect2View(QQuickItem*i);
};





/////////////////////////////////////////METAQQQ CLASS ////////////////////////////////////////////
class  METAQQUICKLIBRARY_osg_EXPORT  osg_ShaderQQQ: public MetaQQuickClass{
protected:
public:
    virtual QQModel* createQQModel(Instance*i);
   osg_ShaderQQQ():MetaQQuickClass( "osg::Shader"){_typeid=&typeid(osg::Shader );};
    virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
}
Q_DECLARE_METATYPE(pmoc::osg_ShaderQQQ_QModel)
#endif

