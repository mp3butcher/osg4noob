#ifndef EDITOR_META_CLASS_osg_PolytopeQQQ_H
#define EDITOR_META_CLASS_osg_PolytopeQQQ_H

#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/Polytope>

namespace pmoc{
class QQModel;
class  METAQQUICKLIBRARY_osg_EXPORT  osg_PolytopeQQQ_QModel: public QQModel{
Q_OBJECT
protected:
    osg::Polytope* _model;///the effective model to watch
public:
    ///Constructor////////////////
osg_PolytopeQQQ_QModel(Instance* i=0,QObject* parent = 0);
  ///Copy Constructor////////////////
osg_PolytopeQQQ_QModel(const osg_PolytopeQQQ_QModel&o);
///Destruction////////////////
   ~osg_PolytopeQQQ_QModel();
     inline osg::Polytope* getModel(){return  _model;}
    virtual QQuickItem *connect2View(QQuickItem*i);
};





/////////////////////////////////////////METAQQQ CLASS ////////////////////////////////////////////
class  METAQQUICKLIBRARY_osg_EXPORT  osg_PolytopeQQQ: public MetaQQuickClass{
protected:
public:
    virtual QQModel* createQQModel(Instance*i);
   osg_PolytopeQQQ():MetaQQuickClass( "osg::Polytope"){_typeid=&typeid(osg::Polytope );};
    virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
}
Q_DECLARE_METATYPE(pmoc::osg_PolytopeQQQ_QModel)
#endif

