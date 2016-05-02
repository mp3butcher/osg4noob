#ifndef osgParticle_BoxPlacer_customHPP
#define  osgParticle_BoxPlacer_customHPP 1

//includes


#include <osgParticle/BoxPlacer_pmoc.hpp>
#include <QObject>
#include <osgParticle/BoxPlacer>

#include <osgParticle/CenteredPlacer_pmoc.hpp>
#include <osgParticle/BoxPlacer_pmoc.hpp>
namespace osgParticle{
class  QMLBoxPlacer: public QReflect_BoxPlacer
{
Q_OBJECT
public:
QMLBoxPlacer(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLBoxPlacer :public MetaQReflect_BoxPlacer{};

}
  Q_DECLARE_METATYPE(osgParticle::QMLBoxPlacer)


#endif //osgParticle_BoxPlacer_customHPP

