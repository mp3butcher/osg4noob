#ifndef osg_Vec3f_customHPP
#define  osg_Vec3f_customHPP 1

//includes
#include <osg/Vec3f_pmoc.hpp>
#include <QObject>
#include <osg/Vec3f>

#include <osg/Vec3f_pmoc.hpp>
namespace osg{
class  QMLVec3f: public QReflect_Vec3f
{
Q_OBJECT
Q_PROPERTY(float x READ x WRITE x NOTIFY xChanged)
Q_PROPERTY(float y READ y WRITE y NOTIFY yChanged)
Q_PROPERTY(float z READ z WRITE z NOTIFY zChanged)


public:

float x()const{return _model->x();}
void x(float f){if(f!=x()){(*_model)[0]=f;emit xChanged(f);}}

float y()const{return _model->y();}
void y(float f){if(f!=y()){(*_model)[1]=f;emit yChanged(f);}}

float z()const{return _model->z();}
void z(float f){if(f!=z()){(*_model)[2]=f;emit zChanged(f);}}

QMLVec3f(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

 signals:
 void xChanged(float);
 void yChanged(float);
 void zChanged(float);


};
class   MetaQMLVec3f :public MetaQReflect_Vec3f{};

}
  Q_DECLARE_METATYPE(osg::QMLVec3f)

#endif //osg_Vec3f_customHPP

