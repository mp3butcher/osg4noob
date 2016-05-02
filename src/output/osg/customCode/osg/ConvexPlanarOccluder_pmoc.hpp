#ifndef osg_ConvexPlanarOccluder_customHPP
#define  osg_ConvexPlanarOccluder_customHPP 1

//includes
#include <osg/ConvexPlanarOccluder_pmoc.hpp>
#include <QObject>
namespace osg{
class QReflect_ConvexPlanarPolygon;
			} ;
#include <osg/ConvexPlanarOccluder>

#include <osg/ConvexPlanarPolygon>
#include <osg/ConvexPlanarPolygon_pmoc.hpp>
#include <osg/Object_pmoc.hpp>
#include <osg/ConvexPlanarOccluder_pmoc.hpp>
namespace osg{
class  QMLConvexPlanarOccluder: public QReflect_ConvexPlanarOccluder
{
Q_OBJECT
public:
QMLConvexPlanarOccluder(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLConvexPlanarOccluder :public MetaQReflect_ConvexPlanarOccluder{};

}
  Q_DECLARE_METATYPE(osg::QMLConvexPlanarOccluder)

#endif //osg_ConvexPlanarOccluder_customHPP

