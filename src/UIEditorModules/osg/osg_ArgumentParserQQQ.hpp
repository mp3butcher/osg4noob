#ifndef EDITOR_META_CLASS_osg_ArgumentParserQQQ_H
#define EDITOR_META_CLASS_osg_ArgumentParserQQQ_H

#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/ArgumentParser>

namespace pmoc{
class QQModel;
class  METAQQUICKLIBRARY_osg_EXPORT  osg_ArgumentParserQQQ_QModel: public QQModel{
Q_OBJECT
protected:
    osg::ArgumentParser* _model;///the effective model to watch
public:
    ///Constructor////////////////
osg_ArgumentParserQQQ_QModel(Instance* i=0,QObject* parent = 0);
  ///Copy Constructor////////////////
osg_ArgumentParserQQQ_QModel(const osg_ArgumentParserQQQ_QModel&o);
///Destruction////////////////
   ~osg_ArgumentParserQQQ_QModel();
     inline osg::ArgumentParser* getModel(){return  _model;}
    virtual QQuickItem *connect2View(QQuickItem*i);
};





/////////////////////////////////////////METAQQQ CLASS ////////////////////////////////////////////
class  METAQQUICKLIBRARY_osg_EXPORT  osg_ArgumentParserQQQ: public MetaQQuickClass{
protected:
public:
    virtual QQModel* createQQModel(Instance*i);
   osg_ArgumentParserQQQ():MetaQQuickClass( "osg::ArgumentParser"){_typeid=&typeid(osg::ArgumentParser );};
    virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
}
Q_DECLARE_METATYPE(pmoc::osg_ArgumentParserQQQ_QModel)
#endif

