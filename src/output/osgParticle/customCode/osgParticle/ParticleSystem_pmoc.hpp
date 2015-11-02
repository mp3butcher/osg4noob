#ifndef osgParticle_ParticleSystem_customHPP
#define  osgParticle_ParticleSystem_customHPP 1

//includes

#include <QObject>

#include <osgParticle/ParticleSystem_pmoc.hpp>
#include <QObject>
namespace osgParticle{
class QReflect_Particle;
			} ;
#include <osg/Drawable_pmoc.hpp>
#include <osgParticle/Particle>
#include <osgParticle/ParticleSystem>

#include <osgParticle/Particle_pmoc.hpp>
#include <osgParticle/ParticleSystem_pmoc.hpp>
namespace osgParticle{
class  QMLParticleSystem: public QReflect_ParticleSystem
{
Q_OBJECT
public:
Q_INVOKABLE void setDefaultParticleTemplate(osgParticle::QReflect_Particle*par){_model->setDefaultParticleTemplate(*par->_model);}
Q_INVOKABLE osgParticle::QReflect_Particle* getDefaultParticleTemplate( )const ;
Q_INVOKABLE void pmoc_reverse_setDefaultParticleTemplate(osgParticle::QReflect_Particle*par){//nothing
}


QMLParticleSystem(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};


class   MetaQMLParticleSystem :public MetaQReflect_ParticleSystem{};
}
  Q_DECLARE_METATYPE(osgParticle::QMLParticleSystem)


#endif //osgParticle_ParticleSystem_customHPP

