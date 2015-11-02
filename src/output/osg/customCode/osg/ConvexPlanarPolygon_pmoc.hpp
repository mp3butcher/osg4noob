#ifndef osg_ConvexPlanarPolygon_customHPP
#define  osg_ConvexPlanarPolygon_customHPP 1

//includes
#include <osg/ConvexPlanarPolygon_pmoc.hpp>
#include <QObject>
#include <osg/ConvexPlanarPolygon>

#include <osg/ConvexPlanarPolygon_pmoc.hpp>
namespace osg{
class  QMLConvexPlanarPolygon: public QReflect_ConvexPlanarPolygon
{
Q_OBJECT
public:
QMLConvexPlanarPolygon(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLConvexPlanarPolygon :public MetaQReflect_ConvexPlanarPolygon{};

}
  Q_DECLARE_METATYPE(osg::QMLConvexPlanarPolygon)

#endif //osg_ConvexPlanarPolygon_customHPP

