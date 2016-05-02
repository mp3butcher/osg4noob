#ifndef osgParticle_SegmentPlacer_customHPP
#define  osgParticle_SegmentPlacer_customHPP 1

//includes


#include <osgParticle/SegmentPlacer_pmoc.hpp>
#include <QObject>
#include <osgParticle/Placer_pmoc.hpp>
#include <osgParticle/SegmentPlacer>

#include <osgParticle/SegmentPlacer_pmoc.hpp>
namespace osgParticle{
class  QMLSegmentPlacer: public QReflect_SegmentPlacer
{
Q_OBJECT
public:
QMLSegmentPlacer(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLSegmentPlacer :public MetaQReflect_SegmentPlacer{};

}
  Q_DECLARE_METATYPE(osgParticle::QMLSegmentPlacer)


#endif //osgParticle_SegmentPlacer_customHPP

