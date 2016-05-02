#ifndef osg_Vec3i_customHPP
#define  osg_Vec3i_customHPP 1

//includes
#include <osg/Vec3i_pmoc.hpp>
#include <QObject>
#include <osg/Vec3i>

#include <osg/Vec3i_pmoc.hpp>
namespace osg{
class  QMLVec3i: public QReflect_Vec3i
{
Q_OBJECT
public:
Q_PROPERTY(int x READ x WRITE x NOTIFY xChanged)
Q_PROPERTY(int y READ y WRITE y NOTIFY yChanged)
Q_PROPERTY(int z READ z WRITE z NOTIFY zChanged)


public:

int x()const{return _model->x();}
void x(int f){if(f!=x()){(*_model)[0]=f;emit xChanged(f);}}

int y()const{return _model->y();}
void y(int f){if(f!=y()){(*_model)[1]=f;emit yChanged(f);}}

int z()const{return _model->z();}
void z(int f){if(f!=z()){(*_model)[2]=f;emit zChanged(f);}}

QMLVec3i(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

 signals:
 void xChanged(int);
 void yChanged(int);
 void zChanged(int);
};
class   MetaQMLVec3i :public MetaQReflect_Vec3i{};

}
  Q_DECLARE_METATYPE(osg::QMLVec3i)

#endif //osg_Vec3i_customHPP

