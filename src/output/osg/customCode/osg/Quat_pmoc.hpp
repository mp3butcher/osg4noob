#ifndef osg_Quat_customHPP
#define  osg_Quat_customHPP 1

//includes
#include <osg/Quat_pmoc.hpp>
#include <QObject>
#include <osg/Quat>

#include <osg/Quat_pmoc.hpp>
namespace osg{
class  QMLQuat: public QReflect_Quat
{
Q_OBJECT

Q_PROPERTY(float x READ x WRITE x NOTIFY xChanged)
Q_PROPERTY(float y READ y WRITE y NOTIFY yChanged)
Q_PROPERTY(float z READ z WRITE z NOTIFY zChanged)
Q_PROPERTY(float w READ w WRITE w NOTIFY wChanged)

public:

float x()const{return _model->x();}
void x(float f){if(f!=x()){(*_model)[0]=f;emit xChanged(f);}}

float y()const{return _model->y();}
void y(float f){if(f!=y()){(*_model)[1]=f;emit yChanged(f);}}

float z()const{return _model->z();}
void z(float f){if(f!=z()){(*_model)[2]=f;emit zChanged(f);}}

float w()const{return _model->w();}
void w(float f){if(f!=w()){(*_model)[3]=f;emit wChanged(f);}}

public:
QMLQuat(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();
 signals:
 void xChanged(float);
 void yChanged(float);
 void zChanged(float);
 void wChanged(float);
};

class  MetaQMLQuat:public MetaQReflect_Quat{};
}
  Q_DECLARE_METATYPE(osg::QMLQuat)

#endif //osg_Quat_customHPP

