#ifndef osgParticle_ExplosionDebrisEffect_customHPP
#define  osgParticle_ExplosionDebrisEffect_customHPP 1

//includes


#include <osgParticle/ExplosionDebrisEffect_pmoc.hpp>
#include <QObject>
#include <osgParticle/ExplosionDebrisEffect>

#include <osgParticle/ParticleEffect_pmoc.hpp>
#include <osgParticle/ExplosionDebrisEffect_pmoc.hpp>
namespace osgParticle{
class  QMLExplosionDebrisEffect: public QReflect_ExplosionDebrisEffect
{
Q_OBJECT
public:
QMLExplosionDebrisEffect(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLExplosionDebrisEffect :public MetaQReflect_ExplosionDebrisEffect{};

}
  Q_DECLARE_METATYPE(osgParticle::QMLExplosionDebrisEffect)


#endif //osgParticle_ExplosionDebrisEffect_customHPP

