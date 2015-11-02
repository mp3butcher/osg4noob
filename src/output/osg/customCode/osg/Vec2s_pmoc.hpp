#ifndef osg_Vec2s_customHPP
#define  osg_Vec2s_customHPP 1

//includes
#include <osg/Vec2s_pmoc.hpp>
#include <QObject>
#include <osg/Vec2s>

#include <osg/Vec2s_pmoc.hpp>
namespace osg{
class  QMLVec2s: public QReflect_Vec2s
{
Q_OBJECT
public:
QMLVec2s(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLVec2s :public MetaQReflect_Vec2s{};

}
  Q_DECLARE_METATYPE(osg::QMLVec2s)

#endif //osg_Vec2s_customHPP

