#ifndef osg_PositionAttitudeTransform_customHPP
#define  osg_PositionAttitudeTransform_customHPP 1

//includes

#include <osg/PositionAttitudeTransform_pmoc.hpp>
#include <QObject>
namespace osg{
class QReflect_Vec3d;
			} ;
namespace osg{
class QReflect_Quat;
			} ;
#include <osg/PositionAttitudeTransform>

#include <osg/Quat>
#include <osg/Quat_pmoc.hpp>
#include <osg/Transform_pmoc.hpp>
#include <osg/Vec3d>
#include <osg/Vec3d_pmoc.hpp>
#include <osg/PositionAttitudeTransform_pmoc.hpp>
#include <QVector3D>
#include <QColor>
namespace osg{
class  QMLPositionAttitudeTransform: public QReflect_PositionAttitudeTransform
{
Q_OBJECT
  Q_PROPERTY(QVector3D position READ getposition WRITE setposition NOTIFY positionChanged)
    Q_PROPERTY(QVector3D scale READ getscale WRITE setscale NOTIFY scaleChanged)
    Q_PROPERTY(QColor rotation READ getrotation WRITE setrotation NOTIFY rotationChanged)
public:
Q_INVOKABLE osg::QReflect_Vec3d * getPosition()const;
Q_INVOKABLE osg::QReflect_Vec3d * getScale()const;
Q_INVOKABLE osg::QReflect_Quat * getRotation()const;
/*
Q_INVOKABLE void setPosition( osg::QReflect_Vec3f *p);
Q_INVOKABLE void pmoc_inverse_setPosition( osg::QReflect_Vec3f *p);
*/
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

public:
QMLPositionAttitudeTransform(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLPositionAttitudeTransform : public MetaQReflect_PositionAttitudeTransform{};
}
  Q_DECLARE_METATYPE(osg::QMLPositionAttitudeTransform)

#endif //osg_PositionAttitudeTransform_customHPP

