#ifndef osg_ValueObject_customHPP
#define  osg_ValueObject_customHPP 1

//includes
#include <osg/Vec3f_pmoc.hpp>
#include <QObject>
#include <osg/Vec2f_pmoc.hpp>
#include <QObject>
#include <osg/Vec2d_pmoc.hpp>
#include <QObject>
#include <osg/Vec3d_pmoc.hpp>
#include <QObject>
#include <osg/ValueObject_pmoc.hpp>
#include <QObject>
#include <osg/Object_pmoc.hpp>
#include <osg/ValueObject>

#include <osg/ValueObject_pmoc.hpp>
namespace osg{
class  QMLValueObject: public QReflect_ValueObject
{
Q_OBJECT
public:
QMLValueObject(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLValueObject :public MetaQReflect_ValueObject{};

}
  Q_DECLARE_METATYPE(osg::QMLValueObject)

#endif //osg_ValueObject_customHPP

