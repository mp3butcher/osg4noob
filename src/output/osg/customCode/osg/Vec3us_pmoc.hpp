#ifndef osg_Vec3us_customHPP
#define  osg_Vec3us_customHPP 1

//includes
#include <osg/Vec3us_pmoc.hpp>
#include <QObject>
#include <osg/Vec3us>

#include <osg/Vec3us_pmoc.hpp>
namespace osg{
class  QMLVec3us: public QReflect_Vec3us
{
Q_OBJECT
public:
QMLVec3us(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLVec3us :public MetaQReflect_Vec3us{};

}
  Q_DECLARE_METATYPE(osg::QMLVec3us)

#endif //osg_Vec3us_customHPP

