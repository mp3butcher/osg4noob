#ifndef EDITOR_META_CLASS_osg_AtomicCounterBufferBindingQQQ_H
#define EDITOR_META_CLASS_osg_AtomicCounterBufferBindingQQQ_H

#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/BufferIndexBinding>

namespace pmoc{
class QQModel;
class  METAQQUICKLIBRARY_osg_EXPORT  osg_AtomicCounterBufferBindingQQQ_QModel: public QQModel{
Q_OBJECT
protected:
    osg::AtomicCounterBufferBinding* _model;///the effective model to watch
public:
    ///Constructor////////////////
osg_AtomicCounterBufferBindingQQQ_QModel(Instance* i=0,QObject* parent = 0);
  ///Copy Constructor////////////////
osg_AtomicCounterBufferBindingQQQ_QModel(const osg_AtomicCounterBufferBindingQQQ_QModel&o);
///Destruction////////////////
   ~osg_AtomicCounterBufferBindingQQQ_QModel();
     inline osg::AtomicCounterBufferBinding* getModel(){return  _model;}
    virtual QQuickItem *connect2View(QQuickItem*i);
};





/////////////////////////////////////////METAQQQ CLASS ////////////////////////////////////////////
class  METAQQUICKLIBRARY_osg_EXPORT  osg_AtomicCounterBufferBindingQQQ: public MetaQQuickClass{
protected:
public:
    virtual QQModel* createQQModel(Instance*i);
   osg_AtomicCounterBufferBindingQQQ():MetaQQuickClass( "osg::AtomicCounterBufferBinding"){_typeid=&typeid(osg::AtomicCounterBufferBinding );};
    virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
}
Q_DECLARE_METATYPE(pmoc::osg_AtomicCounterBufferBindingQQQ_QModel)
#endif

