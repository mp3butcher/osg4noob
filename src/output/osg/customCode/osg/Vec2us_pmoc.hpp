#ifndef osg_Vec2us_customHPP
#define  osg_Vec2us_customHPP 1

//includes
#include <osg/Vec2us_pmoc.hpp>
#include <QObject>
#include <osg/Vec2us>

#include <osg/Vec2us_pmoc.hpp>
namespace osg{
class  QMLVec2us: public QReflect_Vec2us
{
Q_OBJECT
public:
QMLVec2us(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLVec2us :public MetaQReflect_Vec2us{};

}
  Q_DECLARE_METATYPE(osg::QMLVec2us)

#endif //osg_Vec2us_customHPP

