#ifndef EDITOR_META_CLASS_osg_UniformQQQ_H
#define EDITOR_META_CLASS_osg_UniformQQQ_H

#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/Uniform>

namespace pmoc{
class QQModel;
class  METAQQUICKLIBRARY_osg_EXPORT  osg_UniformQQQ_QModel: public QQModel{
Q_OBJECT
protected:
    osg::Uniform* _model;///the effective model to watch
public:
    ///Constructor////////////////
osg_UniformQQQ_QModel(Instance* i=0,QObject* parent = 0);
  ///Copy Constructor////////////////
osg_UniformQQQ_QModel(const osg_UniformQQQ_QModel&o);
///Destruction////////////////
   ~osg_UniformQQQ_QModel();
     inline osg::Uniform* getModel(){return  _model;}
    virtual QQuickItem *connect2View(QQuickItem*i);
};





/////////////////////////////////////////METAQQQ CLASS ////////////////////////////////////////////
class  METAQQUICKLIBRARY_osg_EXPORT  osg_UniformQQQ: public MetaQQuickClass{
protected:
public:
    virtual QQModel* createQQModel(Instance*i);
   osg_UniformQQQ():MetaQQuickClass( "osg::Uniform"){_typeid=&typeid(osg::Uniform );};
    virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
}
Q_DECLARE_METATYPE(pmoc::osg_UniformQQQ_QModel)
#endif

