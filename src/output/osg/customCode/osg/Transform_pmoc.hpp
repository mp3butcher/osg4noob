#ifndef osg_Transform_customHPP
#define  osg_Transform_customHPP 1

//includes

#include <osg/Transform_pmoc.hpp>
#include <QObject>
#include <osg/Group_pmoc.hpp>
#include <osg/Transform>

#include <osg/Transform_pmoc.hpp>
#include <osgManipulator/Dragger>
namespace osgManipulator{
class Dragger;
}
namespace osg{
class  QMLTransform: public QReflect_Transform
{
Q_OBJECT
public:
QMLTransform(pmoc::Instance *i=0,QObject* parent=0);
~QMLTransform();
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();
 protected:
  osg::ref_ptr<osgManipulator::Dragger> _dragger;
};
class   MetaQMLTransform :public MetaQReflect_Transform{};

}
  Q_DECLARE_METATYPE(osg::QMLTransform)

#endif //osg_Transform_customHPP

