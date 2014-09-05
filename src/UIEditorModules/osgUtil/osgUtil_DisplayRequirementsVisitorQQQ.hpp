#ifndef EDITOR_META_CLASS_osgUtil_DisplayRequirementsVisitorQQQ_H
#define EDITOR_META_CLASS_osgUtil_DisplayRequirementsVisitorQQQ_H

#include "Export.h"
#include <MetaQQuickClass.h>
#include <osgUtil/DisplayRequirementsVisitor>

namespace pmoc{
class QQModel;
class  METAQQUICKLIBRARY_osgUtil_EXPORT  osgUtil_DisplayRequirementsVisitorQQQ_QModel: public QQModel{
Q_OBJECT
protected:
    osgUtil::DisplayRequirementsVisitor* _model;///the effective model to watch
public:
    ///Constructor////////////////
osgUtil_DisplayRequirementsVisitorQQQ_QModel(Instance* i=0,QObject* parent = 0);
  ///Copy Constructor////////////////
osgUtil_DisplayRequirementsVisitorQQQ_QModel(const osgUtil_DisplayRequirementsVisitorQQQ_QModel&o);
///Destruction////////////////
   ~osgUtil_DisplayRequirementsVisitorQQQ_QModel();
     inline osgUtil::DisplayRequirementsVisitor* getModel(){return  _model;}
    virtual QQuickItem *connect2View(QQuickItem*i);
};





/////////////////////////////////////////METAQQQ CLASS ////////////////////////////////////////////
class  METAQQUICKLIBRARY_osgUtil_EXPORT  osgUtil_DisplayRequirementsVisitorQQQ: public MetaQQuickClass{
protected:
public:
    virtual QQModel* createQQModel(Instance*i);
   osgUtil_DisplayRequirementsVisitorQQQ():MetaQQuickClass( "osgUtil::DisplayRequirementsVisitor"){_typeid=&typeid(osgUtil::DisplayRequirementsVisitor );};
    virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
}
Q_DECLARE_METATYPE(pmoc::osgUtil_DisplayRequirementsVisitorQQQ_QModel)
#endif

