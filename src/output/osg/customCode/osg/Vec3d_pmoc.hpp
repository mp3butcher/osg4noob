#ifndef osg_Vec3d_customHPP
#define  osg_Vec3d_customHPP 1

//includes
#include <osg/Vec3d_pmoc.hpp>
#include <QObject>
#include <osg/Vec3d>

#include <osg/Vec3d_pmoc.hpp>
#include <QVector3D>
namespace osg{
class  QMLVec3d: public QReflect_Vec3d
{
Q_PROPERTY(float x READ x WRITE x NOTIFY xChanged)
Q_PROPERTY(float y READ y WRITE y NOTIFY yChanged)
Q_PROPERTY(float z READ z WRITE z NOTIFY zChanged)

Q_OBJECT
public:

float x()const{return _model->x();}
void x(float f){if(f!=x()){(*_model)[0]=f;emit xChanged(f);}}

float y()const{return _model->y();}
void y(float f){if(f!=y()){(*_model)[1]=f;emit yChanged(f);}}

float z()const{return _model->z();}
void z(float f){if(f!=z()){(*_model)[2]=f;emit zChanged(f);}}

QMLVec3d(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

 signals:
 void xChanged(float);
 void yChanged(float);
 void zChanged(float);
};

 class  MetaQMLVec3d :public MetaQReflect_Vec3d{};
}
  Q_DECLARE_METATYPE(osg::QMLVec3d)

#endif //osg_Vec3d_customHPP

