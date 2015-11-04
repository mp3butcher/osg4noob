#ifndef osgParticle_ParticleEffect_pmocHPP
#define  osgParticle_ParticleEffect_pmocHPP 1


#include <osgParticle/ParticleEffect_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Object;
			} ;
namespace osg{ 
class QReflect_Vec3f;
			} ;
namespace osgParticle{ 
class QReflect_ParticleSystem;
			} ;
namespace osgParticle{ 
class QReflect_Particle;
			} ;
#include <osg/ref_ptr>
#include <osgParticle/ParticleEffect>
#include <osgParticle/ParticleEffect>

#include <MetaQQuickClass.h>
namespace osgParticle{
class QReflect_ParticleEffect: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
ParticleEffect * _model;
QReflect_ParticleEffect(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_ParticleEffect( );
//ParticleEffect
//virtual  void  accept( osg::NodeVisitor &);
//const  Particle & getDefaultParticleTemplate();
//const  osg::Vec3 & getPosition();
//const  osg::Vec3 & getWind();
Q_INVOKABLE  bool  areAllParticlesDead()const;
Q_INVOKABLE  bool  isSameKindAs(osg::QReflect_Object *)const;
Q_INVOKABLE  osgParticle::QReflect_ParticleSystem * getParticleSystem()const;
Q_INVOKABLE const  char*  className()const;
Q_INVOKABLE const  char*  libraryName()const;
Q_INVOKABLE const QString  getTextureFileName()const;
Q_INVOKABLE const bool  getAutomaticSetup()const;
Q_INVOKABLE const bool  getUseLocalParticleSystem()const;
Q_INVOKABLE const double  getEmitterDuration()const;
Q_INVOKABLE const double  getParticleDuration()const;
Q_INVOKABLE const double  getStartTime()const;
Q_INVOKABLE const float  getIntensity()const;
Q_INVOKABLE const float  getScale()const;
Q_INVOKABLE void  buildEffect();
Q_INVOKABLE void  setDefaultParticleTemplate(osgParticle::QReflect_Particle *);
Q_INVOKABLE void  setDefaults();
Q_INVOKABLE void  setPosition(osg::QReflect_Vec3f *);
Q_INVOKABLE void  setWind(osg::QReflect_Vec3f *);
Q_INVOKABLE void pmoc_reverse_setParticleSystem( osgParticle::QReflect_ParticleSystem *par=0);
Q_INVOKABLE void setAutomaticSetup(const bool &);
Q_INVOKABLE void setEmitterDuration(const double &);
Q_INVOKABLE void setIntensity(const float &);
Q_INVOKABLE void setParticleDuration(const double &);
Q_INVOKABLE void setParticleSystem( osgParticle::QReflect_ParticleSystem *par);
Q_INVOKABLE void setScale(const float &);
Q_INVOKABLE void setStartTime(const double &);
Q_INVOKABLE void setTextureFileName(const QString &);
Q_INVOKABLE void setUseLocalParticleSystem(const bool &);
Q_PROPERTY(QString TextureFileName  READ getTextureFileName WRITE setTextureFileName NOTIFY TextureFileNameChanged)
Q_PROPERTY(bool AutomaticSetup  READ getAutomaticSetup WRITE setAutomaticSetup NOTIFY AutomaticSetupChanged)
Q_PROPERTY(bool UseLocalParticleSystem  READ getUseLocalParticleSystem WRITE setUseLocalParticleSystem NOTIFY UseLocalParticleSystemChanged)
Q_PROPERTY(double EmitterDuration  READ getEmitterDuration WRITE setEmitterDuration NOTIFY EmitterDurationChanged)
Q_PROPERTY(double ParticleDuration  READ getParticleDuration WRITE setParticleDuration NOTIFY ParticleDurationChanged)
Q_PROPERTY(double StartTime  READ getStartTime WRITE setStartTime NOTIFY StartTimeChanged)
Q_PROPERTY(float Intensity  READ getIntensity WRITE setIntensity NOTIFY IntensityChanged)
Q_PROPERTY(float Scale  READ getScale WRITE setScale NOTIFY ScaleChanged)
signals: void AutomaticSetupChanged(const bool&);
public:
signals: void EmitterDurationChanged(const double&);
public:
signals: void IntensityChanged(const float&);
public:
signals: void ParticleDurationChanged(const double&);
public:
signals: void ParticleSystemChanged(const osgParticle::QReflect_ParticleSystem*);
public:
signals: void ScaleChanged(const float&);
public:
signals: void StartTimeChanged(const double&);
public:
signals: void TextureFileNameChanged(const QString&);
public:
signals: void UseLocalParticleSystemChanged(const bool&);
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_ParticleEffect: public pmoc::MetaQQuickClass{
protected:
   public:
MetaQReflect_ParticleEffect();
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


#endif //osgParticle_ParticleEffect_pmocHPP

