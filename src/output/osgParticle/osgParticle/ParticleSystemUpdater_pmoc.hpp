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

namespace osgParticle{
class QReflect_ParticleSystem; 
}


#include <MetaQQuickClass.h>
namespace osgParticle{
class QReflect_ParticleSystemUpdater: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
ParticleSystemUpdater * _model;
QReflect_ParticleSystemUpdater(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_ParticleSystemUpdater( );
//ParticleSystemUpdater
//virtual  osg::BoundingSphere  computeBound();
Q_INVOKABLE  bool  containsParticleSystem(osgParticle::QReflect_ParticleSystem *)const;
Q_INVOKABLE  bool  removeParticleSystem( unsigned int  , unsigned int );
Q_INVOKABLE  bool  replaceParticleSystem(osgParticle::QReflect_ParticleSystem * ,osgParticle::QReflect_ParticleSystem *);
Q_INVOKABLE  bool  setParticleSystem( unsigned int  ,osgParticle::QReflect_ParticleSystem *);
Q_INVOKABLE  unsigned int  getNumParticleSystems()const;
Q_INVOKABLE  unsigned int  getParticleSystemIndex(osgParticle::QReflect_ParticleSystem *)const;
Q_INVOKABLE osgParticle::QReflect_ParticleSystem*  getParticleSystem( unsigned int );
Q_INVOKABLE osgParticle::QReflect_ParticleSystem*  getParticleSystem( unsigned int )const;
Q_INVOKABLE void  traverse(osg::QReflect_NodeVisitor *);
virtual Q_INVOKABLE void   addParticleSystem( osgParticle::QReflect_ParticleSystem *par);//{return new osgParticle::QReflect_ParticleSystem(_model->getParticleSystem());}
virtual Q_INVOKABLE void pmoc_reverse_addParticleSystem( osgParticle::QReflect_ParticleSystem *par);//{_model->setParticleSystem(par->_model);emit ParticleSystemCollectionChanged(par);}
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
    virtual pmoc::QQModel* createQQModel(pmoc::Instance*i);
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

