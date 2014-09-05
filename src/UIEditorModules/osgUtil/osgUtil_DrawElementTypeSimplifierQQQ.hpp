#ifndef EDITOR_META_CLASS_osgUtil_DrawElementTypeSimplifierQQQ_H
#define EDITOR_META_CLASS_osgUtil_DrawElementTypeSimplifierQQQ_H

#include "Export.h"
#include <MetaQQuickClass.h>
#include <osgUtil/DrawElementTypeSimplifier>

namespace pmoc{
class QQModel;
class  METAQQUICKLIBRARY_osgUtil_EXPORT  osgUtil_DrawElementTypeSimplifierQQQ_QModel: public QQModel{
Q_OBJECT
protected:
    osgUtil::DrawElementTypeSimplifier* _model;///the effective model to watch
public:
    ///Constructor////////////////
osgUtil_DrawElementTypeSimplifierQQQ_QModel(Instance* i=0,QObject* parent = 0);
  ///Copy Constructor////////////////
osgUtil_DrawElementTypeSimplifierQQQ_QModel(const osgUtil_DrawElementTypeSimplifierQQQ_QModel&o);
///Destruction////////////////
   ~osgUtil_DrawElementTypeSimplifierQQQ_QModel();
     inline osgUtil::DrawElementTypeSimplifier* getModel(){return  _model;}
    virtual QQuickItem *connect2View(QQuickItem*i);
};





/////////////////////////////////////////METAQQQ CLASS ////////////////////////////////////////////
class  METAQQUICKLIBRARY_osgUtil_EXPORT  osgUtil_DrawElementTypeSimplifierQQQ: public MetaQQuickClass{
protected:
public:
    virtual QQModel* createQQModel(Instance*i);
   osgUtil_DrawElementTypeSimplifierQQQ():MetaQQuickClass( "osgUtil::DrawElementTypeSimplifier"){_typeid=&typeid(osgUtil::DrawElementTypeSimplifier );};
    virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
}
Q_DECLARE_METATYPE(pmoc::osgUtil_DrawElementTypeSimplifierQQQ_QModel)
#endif

