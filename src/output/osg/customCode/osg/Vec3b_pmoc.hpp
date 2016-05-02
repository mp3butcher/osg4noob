#ifndef osg_Vec3b_customHPP
#define  osg_Vec3b_customHPP 1

//includes
#include <osg/Vec3b_pmoc.hpp>
#include <QObject>
#include <osg/Vec3b>

#include <osg/Vec3b_pmoc.hpp>
namespace osg{
class  QMLVec3b: public QReflect_Vec3b
{
Q_OBJECT
public:
QMLVec3b(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLVec3b :public MetaQReflect_Vec3b{};

}
  Q_DECLARE_METATYPE(osg::QMLVec3b)

#endif //osg_Vec3b_customHPP

