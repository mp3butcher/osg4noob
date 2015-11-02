#ifndef osg_MatrixTransform_customHPP
#define  osg_MatrixTransform_customHPP 1

//includes

#include <osg/MatrixTransform_pmoc.hpp>
#include <QObject>
#include <osg/MatrixTransform>

#include <osg/Transform_pmoc.hpp>
#include <osg/MatrixTransform_pmoc.hpp>
#include <QVector3D>
namespace osg{
class  QMLMatrixTransform: public QReflect_MatrixTransform
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

public:
QMLMatrixTransform(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();
};
class  MetaQMLMatrixTransform :public MetaQReflect_MatrixTransform{};

}
  Q_DECLARE_METATYPE(osg::QMLMatrixTransform)

#endif //osg_MatrixTransform_customHPP

