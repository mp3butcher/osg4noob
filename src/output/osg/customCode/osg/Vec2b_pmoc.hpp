#ifndef osg_Vec2b_customHPP
#define  osg_Vec2b_customHPP 1

//includes
#include <osg/Vec2b_pmoc.hpp>
#include <QObject>
#include <osg/Vec2b>

#include <osg/Vec2b_pmoc.hpp>
namespace osg{
class  QMLVec2b: public QReflect_Vec2b
{
Q_OBJECT
public:
QMLVec2b(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLVec2b :public MetaQReflect_Vec2b{};

}
  Q_DECLARE_METATYPE(osg::QMLVec2b)

#endif //osg_Vec2b_customHPP

