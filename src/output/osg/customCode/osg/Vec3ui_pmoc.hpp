#ifndef osg_Vec3ui_customHPP
#define  osg_Vec3ui_customHPP 1

//includes
#include <osg/Vec3ui_pmoc.hpp>
#include <QObject>
#include <osg/Vec3ui>

#include <osg/Vec3ui_pmoc.hpp>
namespace osg{
class  QMLVec3ui: public QReflect_Vec3ui
{
Q_OBJECT
Q_PROPERTY(unsigned int x READ x WRITE x NOTIFY xChanged)
Q_PROPERTY(unsigned int y READ y WRITE y NOTIFY yChanged)
Q_PROPERTY(unsigned int z READ z WRITE z NOTIFY zChanged)


public:

unsigned int x()const{return _model->x();}
void x(unsigned int f){if(f!=x()){(*_model)[0]=f;emit xChanged(f);}}

unsigned int y()const{return _model->y();}
void y(unsigned int f){if(f!=y()){(*_model)[1]=f;emit yChanged(f);}}

unsigned int z()const{return _model->z();}
void z(unsigned int f){if(f!=z()){(*_model)[2]=f;emit zChanged(f);}}

QMLVec3ui(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

 signals:
 void xChanged(unsigned int);
 void yChanged(unsigned int);
 void zChanged(unsigned int);

};
class   MetaQMLVec3ui :public MetaQReflect_Vec3ui{};

}
  Q_DECLARE_METATYPE(osg::QMLVec3ui)

#endif //osg_Vec3ui_customHPP

