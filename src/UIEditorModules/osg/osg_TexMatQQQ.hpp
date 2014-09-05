#ifndef EDITOR_META_CLASS_osg_TexMatQQQ_H
#define EDITOR_META_CLASS_osg_TexMatQQQ_H

#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/TexMat>

namespace pmoc{
class QQModel;
class  METAQQUICKLIBRARY_osg_EXPORT  osg_TexMatQQQ_QModel: public QQModel{
Q_OBJECT
protected:
    osg::TexMat* _model;///the effective model to watch
public:
    ///Constructor////////////////
osg_TexMatQQQ_QModel(Instance* i=0,QObject* parent = 0);
  ///Copy Constructor////////////////
osg_TexMatQQQ_QModel(const osg_TexMatQQQ_QModel&o);
///Destruction////////////////
   ~osg_TexMatQQQ_QModel();
     inline osg::TexMat* getModel(){return  _model;}
    virtual QQuickItem *connect2View(QQuickItem*i);
};





/////////////////////////////////////////METAQQQ CLASS ////////////////////////////////////////////
class  METAQQUICKLIBRARY_osg_EXPORT  osg_TexMatQQQ: public MetaQQuickClass{
protected:
public:
    virtual QQModel* createQQModel(Instance*i);
   osg_TexMatQQQ():MetaQQuickClass( "osg::TexMat"){_typeid=&typeid(osg::TexMat );};
    virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
}
Q_DECLARE_METATYPE(pmoc::osg_TexMatQQQ_QModel)
#endif

