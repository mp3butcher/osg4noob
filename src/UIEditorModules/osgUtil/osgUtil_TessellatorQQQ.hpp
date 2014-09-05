#ifndef EDITOR_META_CLASS_osgUtil_TessellatorQQQ_H
#define EDITOR_META_CLASS_osgUtil_TessellatorQQQ_H

#include "Export.h"
#include <MetaQQuickClass.h>
#include <osgUtil/Tessellator>

namespace pmoc{
class QQModel;
class  METAQQUICKLIBRARY_osgUtil_EXPORT  osgUtil_TessellatorQQQ_QModel: public QQModel{
Q_OBJECT
protected:
    osgUtil::Tessellator* _model;///the effective model to watch
public:
    ///Constructor////////////////
osgUtil_TessellatorQQQ_QModel(Instance* i=0,QObject* parent = 0);
  ///Copy Constructor////////////////
osgUtil_TessellatorQQQ_QModel(const osgUtil_TessellatorQQQ_QModel&o);
///Destruction////////////////
   ~osgUtil_TessellatorQQQ_QModel();
     inline osgUtil::Tessellator* getModel(){return  _model;}
    virtual QQuickItem *connect2View(QQuickItem*i);
};





/////////////////////////////////////////METAQQQ CLASS ////////////////////////////////////////////
class  METAQQUICKLIBRARY_osgUtil_EXPORT  osgUtil_TessellatorQQQ: public MetaQQuickClass{
protected:
public:
    virtual QQModel* createQQModel(Instance*i);
   osgUtil_TessellatorQQQ():MetaQQuickClass( "osgUtil::Tessellator"){_typeid=&typeid(osgUtil::Tessellator );};
    virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
}
Q_DECLARE_METATYPE(pmoc::osgUtil_TessellatorQQQ_QModel)
#endif

