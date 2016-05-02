#ifndef osg_Vec2ub_customHPP
#define  osg_Vec2ub_customHPP 1

//includes
#include <osg/Vec2ub_pmoc.hpp>
#include <QObject>
#include <osg/Vec2ub>

#include <osg/Vec2ub_pmoc.hpp>
namespace osg{
class  QMLVec2ub: public QReflect_Vec2ub
{
Q_OBJECT
public:
QMLVec2ub(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLVec2ub :public MetaQReflect_Vec2ub{};

}
  Q_DECLARE_METATYPE(osg::QMLVec2ub)

#endif //osg_Vec2ub_customHPP

