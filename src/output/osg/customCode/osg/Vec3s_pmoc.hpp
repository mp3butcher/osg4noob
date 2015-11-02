#ifndef osg_Vec3s_customHPP
#define  osg_Vec3s_customHPP 1

//includes
#include <osg/Vec3s_pmoc.hpp>
#include <QObject>
#include <osg/Vec3s>

#include <osg/Vec3s_pmoc.hpp>
namespace osg{
class  QMLVec3s: public QReflect_Vec3s
{
Q_OBJECT
public:
QMLVec3s(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLVec3s :public MetaQReflect_Vec3s{};

}
  Q_DECLARE_METATYPE(osg::QMLVec3s)

#endif //osg_Vec3s_customHPP

