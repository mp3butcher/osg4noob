#ifndef EDITOR_META_CLASS_osg_EndOfDynamicDrawBlockQQQ_H
#define EDITOR_META_CLASS_osg_EndOfDynamicDrawBlockQQQ_H

#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/GraphicsThread>

namespace pmoc{
class QQModel;
class  METAQQUICKLIBRARY_osg_EXPORT  osg_EndOfDynamicDrawBlockQQQ_QModel: public QQModel{
Q_OBJECT
protected:
    osg::EndOfDynamicDrawBlock* _model;///the effective model to watch
public:
    ///Constructor////////////////
osg_EndOfDynamicDrawBlockQQQ_QModel(Instance* i=0,QObject* parent = 0);
  ///Copy Constructor////////////////
osg_EndOfDynamicDrawBlockQQQ_QModel(const osg_EndOfDynamicDrawBlockQQQ_QModel&o);
///Destruction////////////////
   ~osg_EndOfDynamicDrawBlockQQQ_QModel();
     inline osg::EndOfDynamicDrawBlock* getModel(){return  _model;}
    virtual QQuickItem *connect2View(QQuickItem*i);
};





/////////////////////////////////////////METAQQQ CLASS ////////////////////////////////////////////
class  METAQQUICKLIBRARY_osg_EXPORT  osg_EndOfDynamicDrawBlockQQQ: public MetaQQuickClass{
protected:
public:
    virtual QQModel* createQQModel(Instance*i);
   osg_EndOfDynamicDrawBlockQQQ():MetaQQuickClass( "osg::EndOfDynamicDrawBlock"){_typeid=&typeid(osg::EndOfDynamicDrawBlock );};
    virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
}
Q_DECLARE_METATYPE(pmoc::osg_EndOfDynamicDrawBlockQQQ_QModel)
#endif

