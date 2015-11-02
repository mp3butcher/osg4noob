#ifndef osgParticle_MultiSegmentPlacer_customHPP
#define  osgParticle_MultiSegmentPlacer_customHPP 1

//includes


#include <osgParticle/MultiSegmentPlacer_pmoc.hpp>
#include <QObject>
#include <osgParticle/MultiSegmentPlacer>

#include <osgParticle/Placer_pmoc.hpp>
#include <osgParticle/MultiSegmentPlacer_pmoc.hpp>
namespace osgParticle{
class  QMLMultiSegmentPlacer: public QReflect_MultiSegmentPlacer
{
Q_OBJECT
public:
QMLMultiSegmentPlacer(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLMultiSegmentPlacer :public MetaQReflect_MultiSegmentPlacer{};

}
  Q_DECLARE_METATYPE(osgParticle::QMLMultiSegmentPlacer)


#endif //osgParticle_MultiSegmentPlacer_customHPP

