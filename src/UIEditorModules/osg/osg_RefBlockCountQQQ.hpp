#ifndef EDITOR_META_CLASS_osg_RefBlockCountQQQ_H
#define EDITOR_META_CLASS_osg_RefBlockCountQQQ_H

#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/OperationThread>

namespace pmoc{
class QQModel;
class  METAQQUICKLIBRARY_osg_EXPORT  osg_RefBlockCountQQQ_QModel: public QQModel{
Q_OBJECT
protected:
    osg::RefBlockCount* _model;///the effective model to watch
public:
    ///Constructor////////////////
osg_RefBlockCountQQQ_QModel(Instance* i=0,QObject* parent = 0);
  ///Copy Constructor////////////////
osg_RefBlockCountQQQ_QModel(const osg_RefBlockCountQQQ_QModel&o);
///Destruction////////////////
   ~osg_RefBlockCountQQQ_QModel();
     inline osg::RefBlockCount* getModel(){return  _model;}
    virtual QQuickItem *connect2View(QQuickItem*i);
};





/////////////////////////////////////////METAQQQ CLASS ////////////////////////////////////////////
class  METAQQUICKLIBRARY_osg_EXPORT  osg_RefBlockCountQQQ: public MetaQQuickClass{
protected:
public:
    virtual QQModel* createQQModel(Instance*i);
   osg_RefBlockCountQQQ():MetaQQuickClass( "osg::RefBlockCount"){_typeid=&typeid(osg::RefBlockCount );};
    virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
}
Q_DECLARE_METATYPE(pmoc::osg_RefBlockCountQQQ_QModel)
#endif

