#ifndef EDITOR_META_CLASS_osg_Texture3DQQQ_H
#define EDITOR_META_CLASS_osg_Texture3DQQQ_H

#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/Texture3D>

namespace pmoc{
class QQModel;
class  METAQQUICKLIBRARY_osg_EXPORT  osg_Texture3DQQQ_QModel: public QQModel{
Q_OBJECT
protected:
    osg::Texture3D* _model;///the effective model to watch
public:
    ///Constructor////////////////
osg_Texture3DQQQ_QModel(Instance* i=0,QObject* parent = 0);
  ///Copy Constructor////////////////
osg_Texture3DQQQ_QModel(const osg_Texture3DQQQ_QModel&o);
///Destruction////////////////
   ~osg_Texture3DQQQ_QModel();
     inline osg::Texture3D* getModel(){return  _model;}
    virtual QQuickItem *connect2View(QQuickItem*i);
};





/////////////////////////////////////////METAQQQ CLASS ////////////////////////////////////////////
class  METAQQUICKLIBRARY_osg_EXPORT  osg_Texture3DQQQ: public MetaQQuickClass{
protected:
public:
    virtual QQModel* createQQModel(Instance*i);
   osg_Texture3DQQQ():MetaQQuickClass( "osg::Texture3D"){_typeid=&typeid(osg::Texture3D );};
    virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
}
Q_DECLARE_METATYPE(pmoc::osg_Texture3DQQQ_QModel)
#endif

