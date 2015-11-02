#ifndef osgParticle_ExplosionEffect_customHPP
#define  osgParticle_ExplosionEffect_customHPP 1

//includes


#include <osgParticle/ExplosionEffect_pmoc.hpp>
#include <QObject>
#include <osgParticle/ExplosionEffect>

#include <osgParticle/ParticleEffect_pmoc.hpp>
#include <osgParticle/ExplosionEffect_pmoc.hpp>
namespace osgParticle{
class  QMLExplosionEffect: public QReflect_ExplosionEffect
{
Q_OBJECT
public:
QMLExplosionEffect(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLExplosionEffect :public MetaQReflect_ExplosionEffect{};

}
  Q_DECLARE_METATYPE(osgParticle::QMLExplosionEffect)


#endif //osgParticle_ExplosionEffect_customHPP

