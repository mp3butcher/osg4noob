#ifndef EDITOR_META_CLASS_osgUtil_ShaderGenVisitorQQQ_H
#define EDITOR_META_CLASS_osgUtil_ShaderGenVisitorQQQ_H

#include "Export.h"
#include <MetaQQuickClass.h>
#include <osgUtil/ShaderGen>

namespace pmoc{
class QQModel;
class  METAQQUICKLIBRARY_osgUtil_EXPORT  osgUtil_ShaderGenVisitorQQQ_QModel: public QQModel{
Q_OBJECT
protected:
    osgUtil::ShaderGenVisitor* _model;///the effective model to watch
public:
    ///Constructor////////////////
osgUtil_ShaderGenVisitorQQQ_QModel(Instance* i=0,QObject* parent = 0);
  ///Copy Constructor////////////////
osgUtil_ShaderGenVisitorQQQ_QModel(const osgUtil_ShaderGenVisitorQQQ_QModel&o);
///Destruction////////////////
   ~osgUtil_ShaderGenVisitorQQQ_QModel();
     inline osgUtil::ShaderGenVisitor* getModel(){return  _model;}
    virtual QQuickItem *connect2View(QQuickItem*i);
};





/////////////////////////////////////////METAQQQ CLASS ////////////////////////////////////////////
class  METAQQUICKLIBRARY_osgUtil_EXPORT  osgUtil_ShaderGenVisitorQQQ: public MetaQQuickClass{
protected:
public:
    virtual QQModel* createQQModel(Instance*i);
   osgUtil_ShaderGenVisitorQQQ():MetaQQuickClass( "osgUtil::ShaderGenVisitor"){_typeid=&typeid(osgUtil::ShaderGenVisitor );};
    virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
}
Q_DECLARE_METATYPE(pmoc::osgUtil_ShaderGenVisitorQQQ_QModel)
#endif

