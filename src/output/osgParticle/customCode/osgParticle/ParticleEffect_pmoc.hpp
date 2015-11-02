#ifndef osgParticle_ParticleEffect_customHPP
#define  osgParticle_ParticleEffect_customHPP 1

//includes


#include <osgParticle/ParticleEffect_pmoc.hpp>
#include <QObject>
namespace osgParticle{
class QReflect_ParticleSystem;
			} ;
namespace osgParticle{
class QReflect_Particle;
			} ;
#include <osg/Group_pmoc.hpp>
#include <osgParticle/Particle>
#include <osgParticle/ParticleEffect>

#include <osgParticle/ParticleSystem>
#include <osgParticle/ParticleSystem_pmoc.hpp>
#include <osgParticle/Particle_pmoc.hpp>
#include <osgParticle/ParticleEffect_pmoc.hpp>
namespace osgParticle{
class  QMLParticleEffect: public QReflect_ParticleEffect
{
Q_OBJECT
public:
QMLParticleEffect(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLParticleEffect :public MetaQReflect_ParticleEffect{};

}
  Q_DECLARE_METATYPE(osgParticle::QMLParticleEffect)


#endif //osgParticle_ParticleEffect_customHPP

