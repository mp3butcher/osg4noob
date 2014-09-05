#ifndef EDITOR_META_CLASS_osg_GeometryQQQ_H
#define EDITOR_META_CLASS_osg_GeometryQQQ_H

#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/Geometry>
#include <QVector3D>
namespace pmoc
{
class QQModel;
class  METAQQUICKLIBRARY_osg_EXPORT  osg_GeometryQQQ_QModel: public QQModel
{
    Q_OBJECT
    Q_PROPERTY(QVector3D minBound READ getminBound )
    Q_PROPERTY(QVector3D maxBound READ getmaxBound )
    Q_PROPERTY( bool useVBO READ getuseVBO WRITE setuseVBO NOTIFY useVBOChanged)
    Q_PROPERTY( bool useDisplayList READ getuseDisplayList WRITE setuseDisplayList NOTIFY useDisplayListChanged)

    QVector3D getminBound()const
    {

        const osg::BoundingBox &box= _model->getBound();
        return QVector3D(box.xMin(),box.yMin(),box.zMin());

    }

    QVector3D getmaxBound()const
    {
        const osg::BoundingBox &box= _model->getBound();
        return QVector3D(box.xMax(),box.yMax(),box.zMax());
    }
    bool getuseDisplayList()const
    {
        return _model->getUseDisplayList();
    }
    void setuseDisplayList(bool b)
    {

        if(b!=getuseDisplayList())
        {
            _model->setUseDisplayList(b);
            emit useDisplayListChanged(b);
        }
    }

    bool getuseVBO()const
    {
        return _model->getUseVertexBufferObjects();
    }
    void setuseVBO(bool b)
    {

        if(b!=getuseVBO())
        {
            _model->setUseVertexBufferObjects(b);
            emit useVBOChanged(b);
        }
    }
signals:
    void useDisplayListChanged(bool);
    void useVBOChanged(bool);

protected:
    osg::Geometry* _model;///the effective model to watch
public:
    ///Constructor////////////////
    osg_GeometryQQQ_QModel(Instance* i=0,QObject* parent = 0);
    ///Copy Constructor////////////////
    osg_GeometryQQQ_QModel(const osg_GeometryQQQ_QModel&o);
///Destruction////////////////
    ~osg_GeometryQQQ_QModel();
    inline osg::Geometry* getModel()
    {
        return  _model;
    }
    virtual QQuickItem *connect2View(QQuickItem*i);

    /*public slots:
            void createStateSet();
    signals :
        void createSS();*/

};





/////////////////////////////////////////METAQQQ CLASS ////////////////////////////////////////////
class  METAQQUICKLIBRARY_osg_EXPORT  osg_GeometryQQQ: public MetaQQuickClass
{
protected:
public:
    virtual QQModel* createQQModel(Instance*i);
    osg_GeometryQQQ():MetaQQuickClass( "osg::Geometry")
    {
        _typeid=&typeid(osg::Geometry );
    };
    virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
}
Q_DECLARE_METATYPE(pmoc::osg_GeometryQQQ_QModel)
#endif

