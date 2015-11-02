#ifndef osg_Vec4ui_customHPP
#define  osg_Vec4ui_customHPP 1

//includes
#include <osg/Vec4ui_pmoc.hpp>
#include <QObject>
#include <osg/Vec4ui>

#include <osg/Vec4ui_pmoc.hpp>
namespace osg{
class  QMLVec4ui: public QReflect_Vec4ui
{
Q_OBJECT

Q_PROPERTY(unsigned int x READ x WRITE x NOTIFY xChanged)
Q_PROPERTY(unsigned int y READ y WRITE y NOTIFY yChanged)
Q_PROPERTY(unsigned int z READ z WRITE z NOTIFY zChanged)
Q_PROPERTY(unsigned int w READ w WRITE w NOTIFY wChanged)


public:

unsigned int x()const{return _model->x();}
void x(unsigned int f){if(f!=x()){(*_model)[0]=f;emit xChanged(f);}}

unsigned int y()const{return _model->y();}
void y(unsigned int f){if(f!=y()){(*_model)[1]=f;emit yChanged(f);}}

unsigned int z()const{return _model->z();}
void z(unsigned int f){if(f!=z()){(*_model)[2]=f;emit zChanged(f);}}
unsigned int w()const{return _model->w();}
void w(unsigned int f){if(f!=w()){(*_model)[3]=f;emit wChanged(f);}}

QMLVec4ui(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

 signals:
 void xChanged(unsigned int);
 void yChanged(unsigned int);
 void zChanged(unsigned int);
 void wChanged(unsigned int);

};
class   MetaQMLVec4ui :public MetaQReflect_Vec4ui{};

}
  Q_DECLARE_METATYPE(osg::QMLVec4ui)

#endif //osg_Vec4ui_customHPP

