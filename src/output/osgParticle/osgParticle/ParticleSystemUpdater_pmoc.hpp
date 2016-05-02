#ifndef osgParticle_ParticleSystemUpdater_pmocHPP
#define  osgParticle_ParticleSystemUpdater_pmocHPP 1


#include <osgParticle/ParticleSystemUpdater_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_NodeVisitor;
			} ;
namespace osgParticle{ 
class QReflect_ParticleSystem;
			} ;
#include <osg/ref_ptr>
#include <osgParticle/ParticleSystemUpdater>
#include <osgParticle/ParticleSystemUpdater>

#include <MetaQQuickClass.h>
namespace osgParticle{
class QReflect_ParticleSystemUpdater: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
ParticleSystemUpdater * _model;
QReflect_ParticleSystemUpdater(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_ParticleSystemUpdater( );
//ParticleSystemUpdater
//virtual  osg::BoundingSphere  computeBound();
Q_INVOKABLE  bool  addParticleSystem(osgParticle::QReflect_ParticleSystem *ps);
Q_INVOKABLE  bool  containsParticleSystem(osgParticle::QReflect_ParticleSystem *ps)const;
Q_INVOKABLE  bool  removeParticleSystem( unsigned int i , unsigned int numParticleSystemsToRemove);
Q_INVOKABLE  bool  removeParticleSystem(osgParticle::QReflect_ParticleSystem *ps);
Q_INVOKABLE  bool  replaceParticleSystem(osgParticle::QReflect_ParticleSystem *origPS ,osgParticle::QReflect_ParticleSystem *newPS);
Q_INVOKABLE  bool  setParticleSystem( unsigned int i ,osgParticle::QReflect_ParticleSystem *ps);
Q_INVOKABLE  unsigned int  getNumParticleSystems()const;
Q_INVOKABLE  unsigned int  getParticleSystemIndex(osgParticle::QReflect_ParticleSystem *ps)const;
Q_INVOKABLE osgParticle::QReflect_ParticleSystem*  getParticleSystem( unsigned int i);
Q_INVOKABLE osgParticle::QReflect_ParticleSystem*  getParticleSystem( unsigned int i)const;
Q_INVOKABLE void  traverse(osg::QReflect_NodeVisitor *nv);
signals: void ParticleSystemCollectionChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_ParticleSystemUpdater: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osgParticle::ParticleSystemUpdater> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_ParticleSystemUpdater();
 virtual pmoc::Instance createInstance();
public:
    virtual pmoc::QQModel* createQQModel(const pmoc::Instance*i);
       virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
  
} 



#endif //osgParticle_ParticleSystemUpdater_pmocHPP

