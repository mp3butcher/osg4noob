#ifndef EDITOR_META_CLASS_osg_MatrixTransformQQQ_H
#define EDITOR_META_CLASS_osg_MatrixTransformQQQ_H

#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/MatrixTransform>



#include <QtGui/QColor>
#include <QtGui/QVector3D>


namespace pmoc
{
class QQModel;
class  METAQQUICKLIBRARY_osg_EXPORT  osg_MatrixTransformQQQ_QModel: public QQModel
{
    Q_OBJECT
    QVector3D _position;
    QVector3D _scale;
    QColor _rotation;
    Q_PROPERTY(QVector3D position READ getposition WRITE setposition NOTIFY positionChanged)
    Q_PROPERTY(QVector3D scale READ getscale WRITE setscale NOTIFY scaleChanged)
    Q_PROPERTY(QColor rotation READ getrotation WRITE setrotation NOTIFY rotationChanged)
public:
signals:
    void positionChanged(const QVector3D  &);
    void scaleChanged(const QVector3D  &);
    void rotationChanged(const QColor  &);

public:
    void setposition(QVector3D&color);
    QVector3D getposition()const;
    void setscale(QVector3D&color);
    QVector3D getscale()const;
    void setrotation(QColor&color);
    QColor getrotation()const;

protected:
    osg::MatrixTransform* _model;///the effective model to watch
public:
    osg_MatrixTransformQQQ_QModel(Instance*i=0,QObject* parent = 0);
    osg_MatrixTransformQQQ_QModel(const osg_MatrixTransformQQQ_QModel&o);
 ~osg_MatrixTransformQQQ_QModel();
    inline osg::MatrixTransform* getModel()
    {
        return  _model;
    }
    virtual QQuickItem *connect2View(QQuickItem*i);
};





/////////////////////////////////////////METAQQQ CLASS ////////////////////////////////////////////
class  METAQQUICKLIBRARY_osg_EXPORT  osg_MatrixTransformQQQ: public MetaQQuickClass
{
protected:
public:
    virtual QQModel* createQQModel(Instance*i);
    osg_MatrixTransformQQQ():MetaQQuickClass( "osg::MatrixTransform")
    {
        _typeid=&typeid(osg::MatrixTransform );
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
Q_DECLARE_METATYPE(pmoc::osg_MatrixTransformQQQ_QModel)
#endif

