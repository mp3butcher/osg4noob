#ifndef EDITOR_META_CLASS_osg_BufferDataQQQ_H
#define EDITOR_META_CLASS_osg_BufferDataQQQ_H

#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/BufferObject>

namespace pmoc{
class QQModel;
class  METAQQUICKLIBRARY_osg_EXPORT  osg_BufferDataQQQ_QModel: public QQModel{
Q_OBJECT
protected:
    osg::BufferData* _model;///the effective model to watch
public:
    ///Constructor////////////////
osg_BufferDataQQQ_QModel(Instance* i=0,QObject* parent = 0);
  ///Copy Constructor////////////////
osg_BufferDataQQQ_QModel(const osg_BufferDataQQQ_QModel&o);
///Destruction////////////////
   ~osg_BufferDataQQQ_QModel();
     inline osg::BufferData* getModel(){return  _model;}
    virtual QQuickItem *connect2View(QQuickItem*i);
};





/////////////////////////////////////////METAQQQ CLASS ////////////////////////////////////////////
class  METAQQUICKLIBRARY_osg_EXPORT  osg_BufferDataQQQ: public MetaQQuickClass{
protected:
public:
    virtual QQModel* createQQModel(Instance*i);
   osg_BufferDataQQQ():MetaQQuickClass( "osg::BufferData"){_typeid=&typeid(osg::BufferData );};
    virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
}
Q_DECLARE_METATYPE(pmoc::osg_BufferDataQQQ_QModel)
#endif

