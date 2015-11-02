#ifndef osgParticle_ConnectedParticleSystem_customHPP
#define  osgParticle_ConnectedParticleSystem_customHPP 1

//includes


#include <osgParticle/ConnectedParticleSystem_pmoc.hpp>
#include <QObject>
#include <osgParticle/ConnectedParticleSystem>

#include <osgParticle/ParticleSystem_pmoc.hpp>
#include <osgParticle/ConnectedParticleSystem_pmoc.hpp>
namespace osgParticle{
class  QMLConnectedParticleSystem: public QReflect_ConnectedParticleSystem
{
Q_OBJECT
public:
QMLConnectedParticleSystem(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};

class   MetaQMLConnectedParticleSystem :public MetaQReflect_ConnectedParticleSystem{};
}
  Q_DECLARE_METATYPE(osgParticle::QMLConnectedParticleSystem)


#endif //osgParticle_ConnectedParticleSystem_customHPP

