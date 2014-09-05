#ifndef EDITOR_META_CLASS_osgUtil_TangentSpaceGeneratorQQQ_H
#define EDITOR_META_CLASS_osgUtil_TangentSpaceGeneratorQQQ_H

#include "Export.h"
#include <MetaQQuickClass.h>
#include <osgUtil/TangentSpaceGenerator>

namespace pmoc{
class QQModel;
class  METAQQUICKLIBRARY_osgUtil_EXPORT  osgUtil_TangentSpaceGeneratorQQQ_QModel: public QQModel{
Q_OBJECT
protected:
    osgUtil::TangentSpaceGenerator* _model;///the effective model to watch
public:
    ///Constructor////////////////
osgUtil_TangentSpaceGeneratorQQQ_QModel(Instance* i=0,QObject* parent = 0);
  ///Copy Constructor////////////////
osgUtil_TangentSpaceGeneratorQQQ_QModel(const osgUtil_TangentSpaceGeneratorQQQ_QModel&o);
///Destruction////////////////
   ~osgUtil_TangentSpaceGeneratorQQQ_QModel();
     inline osgUtil::TangentSpaceGenerator* getModel(){return  _model;}
    virtual QQuickItem *connect2View(QQuickItem*i);
};





/////////////////////////////////////////METAQQQ CLASS ////////////////////////////////////////////
class  METAQQUICKLIBRARY_osgUtil_EXPORT  osgUtil_TangentSpaceGeneratorQQQ: public MetaQQuickClass{
protected:
public:
    virtual QQModel* createQQModel(Instance*i);
   osgUtil_TangentSpaceGeneratorQQQ():MetaQQuickClass( "osgUtil::TangentSpaceGenerator"){_typeid=&typeid(osgUtil::TangentSpaceGenerator );};
    virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
}
Q_DECLARE_METATYPE(pmoc::osgUtil_TangentSpaceGeneratorQQQ_QModel)
#endif

