#ifndef osg_Vec2i_customHPP
#define  osg_Vec2i_customHPP 1

//includes
#include <osg/Vec2i_pmoc.hpp>
#include <QObject>
#include <osg/Vec2i>

#include <osg/Vec2i_pmoc.hpp>
namespace osg{
class  QMLVec2i: public QReflect_Vec2i
{
Q_OBJECT
public:
QMLVec2i(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLVec2i :public MetaQReflect_Vec2i{};

}
  Q_DECLARE_METATYPE(osg::QMLVec2i)

#endif //osg_Vec2i_customHPP

