#ifndef osg_Vec2f_customHPP
#define  osg_Vec2f_customHPP 1

//includes
#include <osg/Vec2f_pmoc.hpp>
#include <QObject>
#include <osg/Vec2f>

#include <osg/Vec2f_pmoc.hpp>
namespace osg{
class  QMLVec2f: public QReflect_Vec2f
{
Q_OBJECT
Q_PROPERTY(float x READ x WRITE x NOTIFY xChanged)
Q_PROPERTY(float y READ y WRITE y NOTIFY yChanged)


public:

float x()const{return _model->x();}
void x(float f){if(f!=x()){(*_model)[0]=f;emit xChanged(f);}}

float y()const{return _model->y();}
void y(float f){if(f!=y()){(*_model)[1]=f;emit yChanged(f);}}


QMLVec2f(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

 signals:
 void xChanged(float);
 void yChanged(float);
};
class   MetaQMLVec2f :public MetaQReflect_Vec2f{};

}
  Q_DECLARE_METATYPE(osg::QMLVec2f)

#endif //osg_Vec2f_customHPP

