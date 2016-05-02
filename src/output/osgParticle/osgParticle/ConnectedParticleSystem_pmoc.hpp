#ifndef osgParticle_ConnectedParticleSystem_pmocHPP
#define  osgParticle_ConnectedParticleSystem_pmocHPP 1


#include <osgParticle/ConnectedParticleSystem_pmoc.hpp>
#include <QObject>
namespace osgParticle{ 
class QReflect_Particle;
			} ;
namespace osg{ 
class QReflect_RenderInfo;
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
QReflect_ConnectedParticleSystem(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_ConnectedParticleSystem( );
//ConnectedParticleSystem
Q_INVOKABLE  unsigned int  getMaxNumberOfParticlesToSkip();
Q_INVOKABLE osgParticle::QReflect_Particle*  createParticle(osgParticle::QReflect_Particle *ptemplate);
Q_INVOKABLE osgParticle::QReflect_Particle*  getStartParticle();
Q_INVOKABLE osgParticle::QReflect_Particle*  getStartParticle()const;
Q_INVOKABLE void  drawImplementation(osg::QReflect_RenderInfo *renderInfo)const;
Q_INVOKABLE void  reuseParticle( int i);
Q_INVOKABLE void  setMaxNumberOfParticlesToSkip( unsigned int maxNumberofParticlesToSkip);
Q_PROPERTY(unsigned int  MaxNumberOfParticlesToSkip  READ getMaxNumberOfParticlesToSkip WRITE setMaxNumberOfParticlesToSkip NOTIFY MaxNumberOfParticlesToSkipChanged)
signals: void MaxNumberOfParticlesToSkipChanged();
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



#endif //osgParticle_ConnectedParticleSystem_pmocHPP

