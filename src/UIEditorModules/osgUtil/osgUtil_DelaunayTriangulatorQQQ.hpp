#ifndef EDITOR_META_CLASS_osgUtil_DelaunayTriangulatorQQQ_H
#define EDITOR_META_CLASS_osgUtil_DelaunayTriangulatorQQQ_H

#include "Export.h"
#include <MetaQQuickClass.h>
#include <osgUtil/DelaunayTriangulator>

namespace pmoc{
class QQModel;
class  METAQQUICKLIBRARY_osgUtil_EXPORT  osgUtil_DelaunayTriangulatorQQQ_QModel: public QQModel{
Q_OBJECT
protected:
    osgUtil::DelaunayTriangulator* _model;///the effective model to watch
public:
    ///Constructor////////////////
osgUtil_DelaunayTriangulatorQQQ_QModel(Instance* i=0,QObject* parent = 0);
  ///Copy Constructor////////////////
osgUtil_DelaunayTriangulatorQQQ_QModel(const osgUtil_DelaunayTriangulatorQQQ_QModel&o);
///Destruction////////////////
   ~osgUtil_DelaunayTriangulatorQQQ_QModel();
     inline osgUtil::DelaunayTriangulator* getModel(){return  _model;}
    virtual QQuickItem *connect2View(QQuickItem*i);
};





/////////////////////////////////////////METAQQQ CLASS ////////////////////////////////////////////
class  METAQQUICKLIBRARY_osgUtil_EXPORT  osgUtil_DelaunayTriangulatorQQQ: public MetaQQuickClass{
protected:
public:
    virtual QQModel* createQQModel(Instance*i);
   osgUtil_DelaunayTriangulatorQQQ():MetaQQuickClass( "osgUtil::DelaunayTriangulator"){_typeid=&typeid(osgUtil::DelaunayTriangulator );};
    virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
}
Q_DECLARE_METATYPE(pmoc::osgUtil_DelaunayTriangulatorQQQ_QModel)
#endif

