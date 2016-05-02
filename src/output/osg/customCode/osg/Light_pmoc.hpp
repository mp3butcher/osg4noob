#ifndef osg_Light_customHPP
#define  osg_Light_customHPP 1

//includes
#include <osg/Light_pmoc.hpp>
#include <QObject>
#include <QVector3D>
#include <QVector4D>
#include <QColor>
#include <osg/Light>

#include <osg/StateAttribute_pmoc.hpp>
#include <osg/Light_pmoc.hpp>
namespace osg
{
class  QMLLight: public QReflect_Light
{
    Q_OBJECT
    Q_PROPERTY(QVector4D position READ position WRITE position NOTIFY positionChanged)
    Q_PROPERTY(QVector3D direction READ direction WRITE direction NOTIFY directionChanged)
    Q_PROPERTY(QColor ambient READ ambient WRITE ambient NOTIFY ambientChanged())
    Q_PROPERTY(QColor diffuse READ diffuse WRITE diffuse NOTIFY diffuseChanged)
    Q_PROPERTY(QColor specular READ specular WRITE specular NOTIFY specularChanged)
public slots:
virtual void updateModel();
public:
    QMLLight(const pmoc::Instance *i=0,QObject* parent=0);
    virtual QQuickItem * connect2View(QQuickItem*);

    QVector4D position()
    {
        osg::Vec4 p=_model->getPosition();
        return QVector4D(p.x(),p.y(),p.z(),p.w());
    }
    void  position(QVector4D n)
    {
        if (n!=position())
        {
            osg::Vec4 p=osg::Vec4(n.x(),n.y(),n.z(),n.w());
            _model->setPosition(p);
            emit positionChanged(n);
        }
    }
    QVector3D direction()
    {
        osg::Vec3 p=_model->getDirection();
        return QVector3D(p.x(),p.y(),p.z());
    }
    void  direction(QVector3D n)
    {
        if (n!=direction())
        {
            osg::Vec3 p=osg::Vec3(n.x(),n.y(),n.z());
            _model->setDirection(p);
            emit directionChanged(n);
        }
    }
    QColor ambient()
    {
        osg::Vec4 p=_model->getAmbient();
        return QColor(p.x(),p.y(),p.z(),p.w());
    }
    void  ambient(QColor n)
    {
        if (n!=ambient())
        {
            osg::Vec4 p=osg::Vec4(n.redF(),n.greenF(),n.blueF(),n.alphaF());
            _model->setAmbient(p);
            emit ambientChanged(n);
        }
    }
    QColor diffuse()
    {
        osg::Vec4 p=_model->getDiffuse();
        return QColor(p.x(),p.y(),p.z(),p.w());
    }
    void  diffuse(QColor n)
    {
        if (n!=diffuse())
        {
            osg::Vec4 p=osg::Vec4(n.redF(),n.greenF(),n.blueF(),n.alphaF());
            _model->setDiffuse(p);
            emit diffuseChanged(n);
        }
    }
    QColor specular()
    {
        osg::Vec4 p=_model->getSpecular();
        return QColor(p.x(),p.y(),p.z(),p.w());
    }
    void  specular(QColor n)
    {
        if (n!=specular())
        {
            osg::Vec4 p=osg::Vec4(n.redF(),n.greenF(),n.blueF(),n.alphaF());
            _model->setSpecular(p);
            emit specularChanged(n);
        }
    }
signals:
    void positionChanged(QVector4D);
    void directionChanged(QVector3D);
    void ambientChanged(QColor);
    void diffuseChanged(QColor);
    void specularChanged(QColor);
};
class  MetaQMLLight:public MetaQReflect_Light{};
}
Q_DECLARE_METATYPE(osg::QMLLight)

#endif //osg_Light_customHPP

