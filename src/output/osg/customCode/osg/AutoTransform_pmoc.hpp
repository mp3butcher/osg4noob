#ifndef osg_AutoTransform_customHPP
#define  osg_AutoTransform_customHPP 1

//includes

#include <osg/AutoTransform_pmoc.hpp>
#include <QObject>
namespace osg{
class QReflect_Vec3d;
			} ;
namespace osg{
class QReflect_Quat;
			} ;
#include <osg/AutoTransform>

#include <osg/Quat>
#include <osg/Quat_pmoc.hpp>
#include <osg/Transform_pmoc.hpp>
#include <osg/Vec3d>
#include <osg/Vec3d_pmoc.hpp>
#include <osg/AutoTransform_pmoc.hpp>
namespace osg{
class  QMLAutoTransform: public QReflect_AutoTransform
{
Q_OBJECT
public:
QMLAutoTransform(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLAutoTransform :public MetaQReflect_AutoTransform{};

}
  Q_DECLARE_METATYPE(osg::QMLAutoTransform)

#endif //osg_AutoTransform_customHPP

