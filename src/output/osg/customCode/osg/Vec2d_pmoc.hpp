#ifndef osg_Vec2d_customHPP
#define  osg_Vec2d_customHPP 1

//includes
#include <osg/Vec2d_pmoc.hpp>
#include <QObject>
#include <osg/Vec2d>

#include <osg/Vec2d_pmoc.hpp>
namespace osg{
class  QMLVec2d: public QReflect_Vec2d
{
Q_OBJECT
Q_PROPERTY(float x READ x WRITE x NOTIFY xChanged)
Q_PROPERTY(float y READ y WRITE y NOTIFY yChanged)


public:

float x()const{return _model->x();}
void x(float f){if(f!=x()){(*_model)[0]=f;emit xChanged(f);}}

float y()const{return _model->y();}
void y(float f){if(f!=y()){(*_model)[1]=f;emit yChanged(f);}}


QMLVec2d(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

 signals:
 void xChanged(float);
 void yChanged(float);

};
class   MetaQMLVec2d :public MetaQReflect_Vec2d{};

}
  Q_DECLARE_METATYPE(osg::QMLVec2d)

#endif //osg_Vec2d_customHPP

