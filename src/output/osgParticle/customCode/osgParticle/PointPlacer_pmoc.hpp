#ifndef osgParticle_PointPlacer_customHPP
#define  osgParticle_PointPlacer_customHPP 1

//includes


#include <osgParticle/PointPlacer_pmoc.hpp>
#include <QObject>
#include <osgParticle/CenteredPlacer_pmoc.hpp>
#include <osgParticle/PointPlacer>

#include <osgParticle/PointPlacer_pmoc.hpp>
namespace osgParticle{
class  QMLPointPlacer: public QReflect_PointPlacer
{
Q_OBJECT
public:
QMLPointPlacer(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLPointPlacer :public MetaQReflect_PointPlacer{};

}
  Q_DECLARE_METATYPE(osgParticle::QMLPointPlacer)


#endif //osgParticle_PointPlacer_customHPP

