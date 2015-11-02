#ifndef osgParticle_ParticleSystemUpdater_customHPP
#define  osgParticle_ParticleSystemUpdater_customHPP 1

//includes


#include <osgParticle/ParticleSystemUpdater_pmoc.hpp>
#include <QObject>
#include <osg/Node_pmoc.hpp>
#include <osgParticle/ParticleSystemUpdater>

#include <osgParticle/ParticleSystemUpdater_pmoc.hpp>
namespace osgParticle{
class  QMLParticleSystemUpdater: public QReflect_ParticleSystemUpdater
{
Q_OBJECT
public:
QMLParticleSystemUpdater(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLParticleSystemUpdater :public MetaQReflect_ParticleSystemUpdater{};

}
  Q_DECLARE_METATYPE(osgParticle::QMLParticleSystemUpdater)


#endif //osgParticle_ParticleSystemUpdater_customHPP

