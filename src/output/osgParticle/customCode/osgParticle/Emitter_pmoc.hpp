#ifndef osgParticle_Emitter_customHPP
#define  osgParticle_Emitter_customHPP 1

//includes


#include <osgParticle/Emitter_pmoc.hpp>
#include <QObject>
namespace osgParticle{
class QReflect_Particle;
			} ;
#include <osgParticle/Emitter>

#include <osgParticle/Particle>
#include <osgParticle/ParticleProcessor_pmoc.hpp>
#include <osgParticle/Particle_pmoc.hpp>
#include <osgParticle/Emitter_pmoc.hpp>
namespace osgParticle{
class  QMLEmitter: public QReflect_Emitter
{
Q_OBJECT
public:
QMLEmitter(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLEmitter :public MetaQReflect_Emitter{};

}
  Q_DECLARE_METATYPE(osgParticle::QMLEmitter)


#endif //osgParticle_Emitter_customHPP

