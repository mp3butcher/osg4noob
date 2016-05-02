#ifndef osgParticle_PrecipitationEffect_pmocHPP
#define  osgParticle_PrecipitationEffect_pmocHPP 1


#include <osgParticle/PrecipitationEffect_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Object;
			} ;
namespace osg{ 
class QReflect_StateSet;
			} ;
namespace osg{ 
class QReflect_Vec3f;
			} ;
namespace osg{ 
class QReflect_Vec4f;
			} ;
namespace osg{ 
class QReflect_NodeVisitor;
			} ;
namespace osg{ 
class QReflect_Geometry;
			} ;
namespace osg{ 
class QReflect_Fog;
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
QReflect_PrecipitationEffect(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_PrecipitationEffect( );
//PrecipitationEffect
//const  osg::Vec3 & getCellSize();
//const  osg::Vec3 & getPosition();
//const  osg::Vec3 & getWind();
//const  osg::Vec4 & getParticleColor();
Q_INVOKABLE  bool  getUseFarLineSegments()const;
Q_INVOKABLE  bool  isSameKindAs(osg::QReflect_Object *obj)const;
Q_INVOKABLE  float  getFarTransition()const;
Q_INVOKABLE  float  getMaximumParticleDensity()const;
Q_INVOKABLE  float  getNearTransition()const;
Q_INVOKABLE  float  getParticleSize()const;
Q_INVOKABLE  float  getParticleSpeed()const;
Q_INVOKABLE const  char*  className()const;
Q_INVOKABLE const  char*  libraryName()const;
Q_INVOKABLE osg::QReflect_Fog*  getFog();
Q_INVOKABLE osg::QReflect_Fog*  getFog()const;
Q_INVOKABLE osg::QReflect_Geometry*  getLineGeometry();
Q_INVOKABLE osg::QReflect_Geometry*  getPointGeometry();
Q_INVOKABLE osg::QReflect_Geometry*  getQuadGeometry();
Q_INVOKABLE osg::QReflect_StateSet*  getLineStateSet();
Q_INVOKABLE osg::QReflect_StateSet*  getPointStateSet();
Q_INVOKABLE osg::QReflect_StateSet*  getQuadStateSet();
Q_INVOKABLE void  accept(osg::QReflect_NodeVisitor *nv);
Q_INVOKABLE void  rain( float intensity);
Q_INVOKABLE void  setCellSize(osg::QReflect_Vec3f *cellSize);
Q_INVOKABLE void  setFarTransition( float farTransition);
Q_INVOKABLE void  setFog(osg::QReflect_Fog *fog);
Q_INVOKABLE void  setMaximumParticleDensity( float density);
Q_INVOKABLE void  setNearTransition( float nearTransition);
Q_INVOKABLE void  setParticleColor(osg::QReflect_Vec4f *color);
Q_INVOKABLE void  setParticleSize( float particleSize);
Q_INVOKABLE void  setParticleSpeed( float particleSpeed);
Q_INVOKABLE void  setPosition(osg::QReflect_Vec3f *position);
Q_INVOKABLE void  setUseFarLineSegments( bool useFarLineSegments);
Q_INVOKABLE void  setWind(osg::QReflect_Vec3f *wind);
Q_INVOKABLE void  snow( float intensity);
Q_INVOKABLE void  traverse(osg::QReflect_NodeVisitor *nv);
Q_PROPERTY(bool  UseFarLineSegments  READ getUseFarLineSegments WRITE setUseFarLineSegments NOTIFY UseFarLineSegmentsChanged)
Q_PROPERTY(float  FarTransition  READ getFarTransition WRITE setFarTransition NOTIFY FarTransitionChanged)
Q_PROPERTY(float  MaximumParticleDensity  READ getMaximumParticleDensity WRITE setMaximumParticleDensity NOTIFY MaximumParticleDensityChanged)
Q_PROPERTY(float  NearTransition  READ getNearTransition WRITE setNearTransition NOTIFY NearTransitionChanged)
Q_PROPERTY(float  ParticleSize  READ getParticleSize WRITE setParticleSize NOTIFY ParticleSizeChanged)
Q_PROPERTY(float  ParticleSpeed  READ getParticleSpeed WRITE setParticleSpeed NOTIFY ParticleSpeedChanged)
Q_PROPERTY(osg::QReflect_Fog * Fog  READ getFog WRITE setFog NOTIFY FogChanged)
signals: void FarTransitionChanged();
public:
signals: void FogChanged();
public:
signals: void MaximumParticleDensityChanged();
public:
signals: void NearTransitionChanged();
public:
signals: void ParticleSizeChanged();
public:
signals: void ParticleSpeedChanged();
public:
signals: void UseFarLineSegmentsChanged();
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



#endif //osgParticle_PrecipitationEffect_pmocHPP

