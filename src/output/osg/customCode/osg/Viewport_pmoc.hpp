#ifndef osg_Viewport_customHPP
#define  osg_Viewport_customHPP 1

//includes
#include <osg/Viewport_pmoc.hpp>
#include <QObject>
#include <osg/StateAttribute_pmoc.hpp>
#include <osg/Viewport>

#include <osg/Viewport_pmoc.hpp>
namespace osg{
class  QMLViewport: public QReflect_Viewport
{
Q_OBJECT


Q_PROPERTY(float x READ x WRITE x NOTIFY xChanged)
Q_PROPERTY(float y READ y WRITE y NOTIFY yChanged)
Q_PROPERTY(float width READ width WRITE width NOTIFY widthChanged)
Q_PROPERTY(float height READ height WRITE height NOTIFY heightChanged)


public:

float x()const{return _model->x();}
void x(float f){if(f!=x()){_model->x()=f;emit xChanged(f);}}

float y()const{return _model->y();}
void y(float f){if(f!=y()){_model->y()=f;emit yChanged(f);}}

float width()const{return _model->width();}
void width(float f){if(f!=width()){(*_model).width()=f;emit widthChanged(f);}}
float height()const{return _model->height();}
void height(float f){if(f!=height()){_model->height()=f;emit heightChanged(f);}}

QMLViewport(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

 signals:
 void xChanged(float);
 void yChanged(float);
 void widthChanged(float);
 void heightChanged(float);
 };
class   MetaQMLViewport :public MetaQReflect_Viewport{};

}
  Q_DECLARE_METATYPE(osg::QMLViewport)

#endif //osg_Viewport_customHPP

