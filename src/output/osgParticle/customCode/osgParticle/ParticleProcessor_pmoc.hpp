#ifndef osgParticle_ParticleProcessor_customHPP
#define  osgParticle_ParticleProcessor_customHPP 1

//includes


#include <osgParticle/ParticleProcessor_pmoc.hpp>
#include <QObject>
namespace osgParticle{
class QReflect_ParticleSystem;
			} ;
#include <osg/Node_pmoc.hpp>
#include <osgParticle/ParticleProcessor>

#include <osgParticle/ParticleSystem>
#include <osgParticle/ParticleSystem_pmoc.hpp>
#include <osgParticle/ParticleProcessor_pmoc.hpp>
namespace osgParticle{
class  QMLParticleProcessor: public QReflect_ParticleProcessor
{
Q_OBJECT
public:
QMLParticleProcessor(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLParticleProcessor :public MetaQReflect_ParticleProcessor{};

}
  Q_DECLARE_METATYPE(osgParticle::QMLParticleProcessor)


#endif //osgParticle_ParticleProcessor_customHPP

