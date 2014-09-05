#ifndef EDITOR_META_CLASS_osgUtil_LineSegmentIntersectorQQQ_H
#define EDITOR_META_CLASS_osgUtil_LineSegmentIntersectorQQQ_H

#include "Export.h"
#include <MetaQQuickClass.h>
#include <osgUtil/LineSegmentIntersector>

namespace pmoc{
class QQModel;
class  METAQQUICKLIBRARY_osgUtil_EXPORT  osgUtil_LineSegmentIntersectorQQQ_QModel: public QQModel{
Q_OBJECT
protected:
    osgUtil::LineSegmentIntersector* _model;///the effective model to watch
public:
    ///Constructor////////////////
osgUtil_LineSegmentIntersectorQQQ_QModel(Instance* i=0,QObject* parent = 0);
  ///Copy Constructor////////////////
osgUtil_LineSegmentIntersectorQQQ_QModel(const osgUtil_LineSegmentIntersectorQQQ_QModel&o);
///Destruction////////////////
   ~osgUtil_LineSegmentIntersectorQQQ_QModel();
     inline osgUtil::LineSegmentIntersector* getModel(){return  _model;}
    virtual QQuickItem *connect2View(QQuickItem*i);
};





/////////////////////////////////////////METAQQQ CLASS ////////////////////////////////////////////
class  METAQQUICKLIBRARY_osgUtil_EXPORT  osgUtil_LineSegmentIntersectorQQQ: public MetaQQuickClass{
protected:
public:
    virtual QQModel* createQQModel(Instance*i);
   osgUtil_LineSegmentIntersectorQQQ():MetaQQuickClass( "osgUtil::LineSegmentIntersector"){_typeid=&typeid(osgUtil::LineSegmentIntersector );};
    virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
}
Q_DECLARE_METATYPE(pmoc::osgUtil_LineSegmentIntersectorQQQ_QModel)
#endif

