#ifndef osgParticle_SmokeTrailEffect_customHPP
#define  osgParticle_SmokeTrailEffect_customHPP 1

//includes


#include <osgParticle/SmokeTrailEffect_pmoc.hpp>
#include <QObject>
#include <osgParticle/ParticleEffect_pmoc.hpp>
#include <osgParticle/SmokeTrailEffect>

#include <osgParticle/SmokeTrailEffect_pmoc.hpp>
namespace osgParticle{
class  QMLSmokeTrailEffect: public QReflect_SmokeTrailEffect
{
Q_OBJECT
public:
QMLSmokeTrailEffect(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLSmokeTrailEffect :public MetaQReflect_SmokeTrailEffect{};

}
  Q_DECLARE_METATYPE(osgParticle::QMLSmokeTrailEffect)


#endif //osgParticle_SmokeTrailEffect_customHPP

