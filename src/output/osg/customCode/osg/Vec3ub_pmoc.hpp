#ifndef osg_Vec3ub_customHPP
#define  osg_Vec3ub_customHPP 1

//includes
#include <osg/Vec3ub_pmoc.hpp>
#include <QObject>
#include <osg/Vec3ub>

#include <osg/Vec3ub_pmoc.hpp>
namespace osg{
class  QMLVec3ub: public QReflect_Vec3ub
{
Q_OBJECT
public:
QMLVec3ub(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLVec3ub :public MetaQReflect_Vec3ub{};

}
  Q_DECLARE_METATYPE(osg::QMLVec3ub)

#endif //osg_Vec3ub_customHPP

