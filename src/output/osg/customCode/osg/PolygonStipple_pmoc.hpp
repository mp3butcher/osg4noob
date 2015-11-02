#ifndef osg_PolygonStipple_customHPP
#define  osg_PolygonStipple_customHPP 1

//includes
#include <osg/PolygonStipple_pmoc.hpp>
#include <QObject>
#include <osg/PolygonStipple>

#include <osg/StateAttribute_pmoc.hpp>
#include <osg/PolygonStipple_pmoc.hpp>
namespace osg{
class  QMLPolygonStipple: public QReflect_PolygonStipple
{
Q_OBJECT
public:
QMLPolygonStipple(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLPolygonStipple :public MetaQReflect_PolygonStipple{};

}
  Q_DECLARE_METATYPE(osg::QMLPolygonStipple)

#endif //osg_PolygonStipple_customHPP

