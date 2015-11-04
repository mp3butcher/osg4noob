#ifndef osgParticle_ConnectedParticleSystem_pmocHPP
#define  osgParticle_ConnectedParticleSystem_pmocHPP 1


#include <osgParticle/ConnectedParticleSystem_pmoc.hpp>
#include <QObject>
namespace osgParticle{ 
class QReflect_Particle;
			} ;
#include <osg/ref_ptr>
#include <osgParticle/ConnectedParticleSystem>
#include <osgParticle/ConnectedParticleSystem>

#include <MetaQQuickClass.h>
namespace osgParticle{
class QReflect_ConnectedParticleSystem: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
ConnectedParticleSystem * _model;
QReflect_ConnectedParticleSystem(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_ConnectedParticleSystem( );
//ConnectedParticleSystem
//virtual  void  drawImplementation( osg::RenderInfo &);
Q_INVOKABLE const unsigned int  getMaxNumberOfParticlesToSkip()const;
Q_INVOKABLE osgParticle::QReflect_Particle*  createParticle(osgParticle::QReflect_Particle *);
Q_INVOKABLE osgParticle::QReflect_Particle*  getStartParticle();
Q_INVOKABLE osgParticle::QReflect_Particle*  getStartParticle()const;
Q_INVOKABLE void  reuseParticle( int );
Q_INVOKABLE void setMaxNumberOfParticlesToSkip(const unsigned int &);
Q_PROPERTY(unsigned int MaxNumberOfParticlesToSkip  READ getMaxNumberOfParticlesToSkip WRITE setMaxNumberOfParticlesToSkip NOTIFY MaxNumberOfParticlesToSkipChanged)
signals: void MaxNumberOfParticlesToSkipChanged(const unsigned int&);
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_ConnectedParticleSystem: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osgParticle::ConnectedParticleSystem> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_ConnectedParticleSystem();
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


#endif //osgParticle_ConnectedParticleSystem_pmocHPP

