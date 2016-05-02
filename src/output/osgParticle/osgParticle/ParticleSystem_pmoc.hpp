#ifndef osgParticle_ParticleSystem_pmocHPP
#define  osgParticle_ParticleSystem_pmocHPP 1


#include <osgParticle/ParticleSystem_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Vec3f;
			} ;
namespace osg{ 
class QReflect_NodeVisitor;
			} ;
namespace osgParticle{ 
class QReflect_Particle;
			} ;
namespace osg{ 
class QReflect_RenderInfo;
			} ;
#include <osg/ref_ptr>
#include <osgParticle/ParticleSystem>
#include <osgParticle/ParticleSystem>

#include<osgParticle/ParticleSystem_pmoc.hpp>
#include <MetaQQuickClass.h>
namespace osgParticle{
class QReflect_ParticleSystem: public pmoc::QQModel
{
Q_OBJECT
public:
 enum Alignment{
BILLBOARD =ParticleSystem::BILLBOARD,
FIXED =ParticleSystem::FIXED};
  Q_ENUMS(Alignment)
private:
public:
 enum ParticleScaleReferenceFrame{
LOCAL_COORDINATES =ParticleSystem::LOCAL_COORDINATES,
WORLD_COORDINATES =ParticleSystem::WORLD_COORDINATES};
  Q_ENUMS(ParticleScaleReferenceFrame)
private:
public:
 enum SortMode{
NO_SORT =ParticleSystem::NO_SORT,
SORT_FRONT_TO_BACK =ParticleSystem::SORT_FRONT_TO_BACK,
SORT_BACK_TO_FRONT =ParticleSystem::SORT_BACK_TO_FRONT};
  Q_ENUMS(SortMode)
private:
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
ParticleSystem * _model;
QReflect_ParticleSystem(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_ParticleSystem( );
//ParticleSystem
// Particle & getDefaultParticleTemplate();
// ReadWriterMutex * getReadWriteMutex();
//virtual  osg::BoundingBox  computeBoundingBox();
// void  setDefaultBoundingBox(const  osg::BoundingBox &);
//const  Particle & getDefaultParticleTemplate();
//const  osg::BoundingBox & getDefaultBoundingBox();
//const  osg::Vec3 & getAlignVectorX();
//const  osg::Vec3 & getAlignVectorY();
Q_INVOKABLE  bool  areAllParticlesDead()const;
Q_INVOKABLE  bool  getDoublePassRendering()const;
Q_INVOKABLE  bool  getFreezeOnCull()const;
Q_INVOKABLE  bool  getFrozen()const;
Q_INVOKABLE  bool  getUseShaders()const;
Q_INVOKABLE  bool  getUseVertexArray()const;
Q_INVOKABLE  bool  isFrozen()const;
Q_INVOKABLE  double  getVisibilityDistance()const;
Q_INVOKABLE  double&  getDeltaTime( double currentTime);
Q_INVOKABLE  int  getLevelOfDetail()const;
Q_INVOKABLE  int  numDeadParticles()const;
Q_INVOKABLE  int  numParticles()const;
Q_INVOKABLE  unsigned int  getLastFrameNumber()const;
Q_INVOKABLE osgParticle::QReflect_Particle*  createParticle(osgParticle::QReflect_Particle *ptemplate);
Q_INVOKABLE osgParticle::QReflect_Particle*  getParticle( int i);
Q_INVOKABLE osgParticle::QReflect_Particle*  getParticle( int i)const;
Q_INVOKABLE osgParticle::QReflect_ParticleSystem::Alignment  getParticleAlignment()const;
Q_INVOKABLE osgParticle::QReflect_ParticleSystem::ParticleScaleReferenceFrame  getParticleScaleReferenceFrame()const;
Q_INVOKABLE osgParticle::QReflect_ParticleSystem::SortMode  getSortMode()const;
Q_INVOKABLE void  destroyParticle( int i);
Q_INVOKABLE void  drawImplementation(osg::QReflect_RenderInfo *renderInfo)const;
Q_INVOKABLE void  reuseParticle( int i);
Q_INVOKABLE void  setAlignVectorX(osg::QReflect_Vec3f *v);
Q_INVOKABLE void  setAlignVectorY(osg::QReflect_Vec3f *v);
Q_INVOKABLE void  setAlignVectors(osg::QReflect_Vec3f *X ,osg::QReflect_Vec3f *Y);
Q_INVOKABLE void  setDefaultAttributes(const  QString &texturefile , bool emissive_particles , bool lighting , int texture_unit);
Q_INVOKABLE void  setDefaultAttributesUsingShaders(const  QString &texturefile , bool emissive_particles , int texture_unit);
Q_INVOKABLE void  setDefaultParticleTemplate(osgParticle::QReflect_Particle *p);
Q_INVOKABLE void  setDoublePassRendering( bool v);
Q_INVOKABLE void  setFreezeOnCull( bool v);
Q_INVOKABLE void  setFrozen( bool v);
Q_INVOKABLE void  setLevelOfDetail( int v);
Q_INVOKABLE void  setParticleAlignment(osgParticle::QReflect_ParticleSystem::Alignment a);
Q_INVOKABLE void  setParticleScaleReferenceFrame(osgParticle::QReflect_ParticleSystem::ParticleScaleReferenceFrame rf);
Q_INVOKABLE void  setSortMode(osgParticle::QReflect_ParticleSystem::SortMode mode);
Q_INVOKABLE void  setUseShaders( bool v);
Q_INVOKABLE void  setUseVertexArray( bool v);
Q_INVOKABLE void  setVisibilityDistance( double distance);
Q_INVOKABLE void  update( double dt ,osg::QReflect_NodeVisitor *nv);
Q_PROPERTY(bool  DoublePassRendering  READ getDoublePassRendering WRITE setDoublePassRendering NOTIFY DoublePassRenderingChanged)
Q_PROPERTY(bool  FreezeOnCull  READ getFreezeOnCull WRITE setFreezeOnCull NOTIFY FreezeOnCullChanged)
Q_PROPERTY(bool  Frozen  READ getFrozen WRITE setFrozen NOTIFY FrozenChanged)
Q_PROPERTY(bool  UseShaders  READ getUseShaders WRITE setUseShaders NOTIFY UseShadersChanged)
Q_PROPERTY(bool  UseVertexArray  READ getUseVertexArray WRITE setUseVertexArray NOTIFY UseVertexArrayChanged)
Q_PROPERTY(double  VisibilityDistance  READ getVisibilityDistance WRITE setVisibilityDistance NOTIFY VisibilityDistanceChanged)
Q_PROPERTY(int  LevelOfDetail  READ getLevelOfDetail WRITE setLevelOfDetail NOTIFY LevelOfDetailChanged)
Q_PROPERTY(osgParticle::QReflect_ParticleSystem::Alignment  ParticleAlignment  READ getParticleAlignment WRITE setParticleAlignment NOTIFY ParticleAlignmentChanged)
Q_PROPERTY(osgParticle::QReflect_ParticleSystem::ParticleScaleReferenceFrame  ParticleScaleReferenceFrame  READ getParticleScaleReferenceFrame WRITE setParticleScaleReferenceFrame NOTIFY ParticleScaleReferenceFrameChanged)
Q_PROPERTY(osgParticle::QReflect_ParticleSystem::SortMode  SortMode  READ getSortMode WRITE setSortMode NOTIFY SortModeChanged)
signals: void DoublePassRenderingChanged();
public:
signals: void FreezeOnCullChanged();
public:
signals: void FrozenChanged();
public:
signals: void LevelOfDetailChanged();
public:
signals: void ParticleAlignmentChanged();
public:
signals: void ParticleScaleReferenceFrameChanged();
public:
signals: void SortModeChanged();
public:
signals: void UseShadersChanged();
public:
signals: void UseVertexArrayChanged();
public:
signals: void VisibilityDistanceChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_ParticleSystem: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osgParticle::ParticleSystem> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_ParticleSystem();
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



#endif //osgParticle_ParticleSystem_pmocHPP

