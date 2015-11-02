#ifndef osg_Plane_customHPP
#define  osg_Plane_customHPP 1

//includes
#include <osg/Plane_pmoc.hpp>
#include <QObject>
#include <osg/Plane>

#include <osg/Plane_pmoc.hpp>
namespace osg{
class  QMLPlane: public QReflect_Plane
{
Q_OBJECT
public:
QMLPlane(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLPlane :public MetaQReflect_Plane{};

}
  Q_DECLARE_METATYPE(osg::QMLPlane)

#endif //osg_Plane_customHPP

