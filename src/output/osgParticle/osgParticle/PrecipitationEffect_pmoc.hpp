#ifndef osgParticle_PrecipitationEffect_pmocHPP
#define  osgParticle_PrecipitationEffect_pmocHPP 1


#include <osgParticle/PrecipitationEffect_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Fog;
			} ;
namespace osg{ 
class QReflect_Object;
			} ;
namespace osg{ 
class QReflect_StateSet;
			} ;
namespace osg{ 
class QReflect_Vec4f;
			} ;
namespace osg{ 
class QReflect_Vec3f;
			} ;
namespace osg{ 
class QReflect_Geometry;
			} ;
#include <osg/ref_ptr>
#include <osgParticle/PrecipitationEffect>
#include <osgParticle/PrecipitationEffect>

#include <MetaQQuickClass.h>
namespace osgParticle{
class QReflect_PrecipitationEffect: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
PrecipitationEffect * _model;
QReflect_PrecipitationEffect(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_PrecipitationEffect( );
//PrecipitationEffect
//virtual  void  accept( osg::NodeVisitor &);
//virtual  void  traverse( osg::NodeVisitor &);
//const  osg::Vec3 & getCellSize();
//const  osg::Vec3 & getPosition();
//const  osg::Vec3 & getWind();
//const  osg::Vec4 & getParticleColor();
Q_INVOKABLE  bool  isSameKindAs(osg::QReflect_Object *)const;
Q_INVOKABLE  osg::QReflect_Fog * getFog()const;
Q_INVOKABLE const  char*  className()const;
Q_INVOKABLE const  char*  libraryName()const;
Q_INVOKABLE const bool  getUseFarLineSegments()const;
Q_INVOKABLE const float  getFarTransition()const;
Q_INVOKABLE const float  getMaximumParticleDensity()const;
Q_INVOKABLE const float  getNearTransition()const;
Q_INVOKABLE const float  getParticleSize()const;
Q_INVOKABLE const float  getParticleSpeed()const;
Q_INVOKABLE osg::QReflect_Geometry*  getLineGeometry();
Q_INVOKABLE osg::QReflect_Geometry*  getPointGeometry();
Q_INVOKABLE osg::QReflect_Geometry*  getQuadGeometry();
Q_INVOKABLE osg::QReflect_StateSet*  getLineStateSet();
Q_INVOKABLE osg::QReflect_StateSet*  getPointStateSet();
Q_INVOKABLE osg::QReflect_StateSet*  getQuadStateSet();
Q_INVOKABLE void  rain( float );
Q_INVOKABLE void  setCellSize(osg::QReflect_Vec3f *);
Q_INVOKABLE void  setParticleColor(osg::QReflect_Vec4f *);
Q_INVOKABLE void  setPosition(osg::QReflect_Vec3f *);
Q_INVOKABLE void  setWind(osg::QReflect_Vec3f *);
Q_INVOKABLE void  snow( float );
Q_INVOKABLE void pmoc_reverse_setFog( osg::QReflect_Fog *par=0);
Q_INVOKABLE void setFarTransition(const float &);
Q_INVOKABLE void setFog( osg::QReflect_Fog *par);
Q_INVOKABLE void setMaximumParticleDensity(const float &);
Q_INVOKABLE void setNearTransition(const float &);
Q_INVOKABLE void setParticleSize(const float &);
Q_INVOKABLE void setParticleSpeed(const float &);
Q_INVOKABLE void setUseFarLineSegments(const bool &);
Q_PROPERTY(bool UseFarLineSegments  READ getUseFarLineSegments WRITE setUseFarLineSegments NOTIFY UseFarLineSegmentsChanged)
Q_PROPERTY(float FarTransition  READ getFarTransition WRITE setFarTransition NOTIFY FarTransitionChanged)
Q_PROPERTY(float MaximumParticleDensity  READ getMaximumParticleDensity WRITE setMaximumParticleDensity NOTIFY MaximumParticleDensityChanged)
Q_PROPERTY(float NearTransition  READ getNearTransition WRITE setNearTransition NOTIFY NearTransitionChanged)
Q_PROPERTY(float ParticleSize  READ getParticleSize WRITE setParticleSize NOTIFY ParticleSizeChanged)
Q_PROPERTY(float ParticleSpeed  READ getParticleSpeed WRITE setParticleSpeed NOTIFY ParticleSpeedChanged)
signals: void FarTransitionChanged(const float&);
public:
signals: void FogChanged(const osg::QReflect_Fog*);
public:
signals: void MaximumParticleDensityChanged(const float&);
public:
signals: void NearTransitionChanged(const float&);
public:
signals: void ParticleSizeChanged(const float&);
public:
signals: void ParticleSpeedChanged(const float&);
public:
signals: void UseFarLineSegmentsChanged(const bool&);
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_PrecipitationEffect: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osgParticle::PrecipitationEffect> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_PrecipitationEffect();
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



#endif //osgParticle_PrecipitationEffect_pmocHPP

