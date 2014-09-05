#ifndef EDITOR_META_CLASS_osg_TextureRectangleQQQ_H
#define EDITOR_META_CLASS_osg_TextureRectangleQQQ_H

#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/TextureRectangle>

namespace pmoc{
class QQModel;
class  METAQQUICKLIBRARY_osg_EXPORT  osg_TextureRectangleQQQ_QModel: public QQModel{
Q_OBJECT
protected:
    osg::TextureRectangle* _model;///the effective model to watch
public:
    ///Constructor////////////////
osg_TextureRectangleQQQ_QModel(Instance* i=0,QObject* parent = 0);
  ///Copy Constructor////////////////
osg_TextureRectangleQQQ_QModel(const osg_TextureRectangleQQQ_QModel&o);
///Destruction////////////////
   ~osg_TextureRectangleQQQ_QModel();
     inline osg::TextureRectangle* getModel(){return  _model;}
    virtual QQuickItem *connect2View(QQuickItem*i);
};





/////////////////////////////////////////METAQQQ CLASS ////////////////////////////////////////////
class  METAQQUICKLIBRARY_osg_EXPORT  osg_TextureRectangleQQQ: public MetaQQuickClass{
protected:
public:
    virtual QQModel* createQQModel(Instance*i);
   osg_TextureRectangleQQQ():MetaQQuickClass( "osg::TextureRectangle"){_typeid=&typeid(osg::TextureRectangle );};
    virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
}
Q_DECLARE_METATYPE(pmoc::osg_TextureRectangleQQQ_QModel)
#endif

