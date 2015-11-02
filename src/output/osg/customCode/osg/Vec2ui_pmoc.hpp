#ifndef osg_Vec2ui_customHPP
#define  osg_Vec2ui_customHPP 1

//includes
#include <osg/Vec2ui_pmoc.hpp>
#include <QObject>
#include <osg/Vec2ui>

#include <osg/Vec2ui_pmoc.hpp>
namespace osg{
class  QMLVec2ui: public QReflect_Vec2ui
{
Q_OBJECT

Q_PROPERTY(unsigned int x READ x WRITE x NOTIFY xChanged)
Q_PROPERTY(unsigned int y READ y WRITE y NOTIFY yChanged)


public:

unsigned int x()const{return _model->x();}
void x(unsigned int f){if(f!=x()){(*_model)[0]=f;emit xChanged(f);}}

unsigned int y()const{return _model->y();}
void y(unsigned int f){if(f!=y()){(*_model)[1]=f;emit yChanged(f);}}



QMLVec2ui(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

 signals:
 void xChanged(unsigned int);
 void yChanged(unsigned int);



};
class   MetaQMLVec2ui :public MetaQReflect_Vec2ui{};

}
  Q_DECLARE_METATYPE(osg::QMLVec2ui)

#endif //osg_Vec2ui_customHPP

