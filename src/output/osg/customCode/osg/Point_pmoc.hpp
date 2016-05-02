#ifndef osg_Point_customHPP
#define  osg_Point_customHPP 1

//includes
#include <osg/Point_pmoc.hpp>
#include <QObject>
#include <osg/Point>

#include <osg/StateAttribute_pmoc.hpp>
#include <osg/Point_pmoc.hpp>
namespace osg{
class  QMLPoint: public QReflect_Point
{
Q_OBJECT
public:
QMLPoint(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLPoint :public MetaQReflect_Point{};

}
  Q_DECLARE_METATYPE(osg::QMLPoint)

#endif //osg_Point_customHPP

