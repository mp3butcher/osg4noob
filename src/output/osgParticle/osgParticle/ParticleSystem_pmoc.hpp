#ifndef osgParticle_ParticleSystem_pmocHPP
#define  osgParticle_ParticleSystem_pmocHPP 1


#include <osgParticle/ParticleSystem_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_NodeVisitor;
			} ;
namespace osg{ 
class QReflect_Vec3f;
			} ;
namespace osg{ 
class QReflect_RenderInfo;
			} ;
namespace osgParticle{ 
class QReflect_Particle;
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
QReflect_ParticleSystem(pmoc::Instance *i=0,QObject* parent=0);
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
Q_INVOKABLE  bool  isFrozen()const;
Q_INVOKABLE  double&  getDeltaTime( double );
Q_INVOKABLE  int  numDeadParticles()const;
Q_INVOKABLE  int  numParticles()const;
Q_INVOKABLE  unsigned int  getLastFrameNumber()const;
Q_INVOKABLE const bool  getDoublePassRendering()const;
Q_INVOKABLE const bool  getFreezeOnCull()const;
Q_INVOKABLE const bool  getFrozen()const;
Q_INVOKABLE const bool  getUseShaders()const;
Q_INVOKABLE const bool  getUseVertexArray()const;
Q_INVOKABLE const double  getVisibilityDistance()const;
Q_INVOKABLE const int  getLevelOfDetail()const;
Q_INVOKABLE osgParticle::QReflect_Particle*  createParticle(osgParticle::QReflect_Particle *);
Q_INVOKABLE osgParticle::QReflect_Particle*  getParticle( int );
Q_INVOKABLE osgParticle::QReflect_Particle*  getParticle( int )const;
Q_INVOKABLE osgParticle::QReflect_ParticleSystem::Alignment  getParticleAlignment()const;
Q_INVOKABLE osgParticle::QReflect_ParticleSystem::ParticleScaleReferenceFrame  getParticleScaleReferenceFrame()const;
Q_INVOKABLE osgParticle::QReflect_ParticleSystem::SortMode  getSortMode()const;
Q_INVOKABLE void  destroyParticle( int );
Q_INVOKABLE void  drawImplementation(osg::QReflect_RenderInfo *)const;
Q_INVOKABLE void  reuseParticle( int );
Q_INVOKABLE void  setAlignVectorX(osg::QReflect_Vec3f *);
Q_INVOKABLE void  setAlignVectorY(osg::QReflect_Vec3f *);
Q_INVOKABLE void  setAlignVectors(osg::QReflect_Vec3f * ,osg::QReflect_Vec3f *);
Q_INVOKABLE void  setDefaultAttributes(const  QString & , bool  , bool  , int );
Q_INVOKABLE void  setDefaultAttributesUsingShaders(const  QString & , bool  , int );
Q_INVOKABLE void  setDefaultParticleTemplate(osgParticle::QReflect_Particle *);
Q_INVOKABLE void  setParticleAlignment(osgParticle::QReflect_ParticleSystem::Alignment );
Q_INVOKABLE void  setParticleScaleReferenceFrame(osgParticle::QReflect_ParticleSystem::ParticleScaleReferenceFrame );
Q_INVOKABLE void  setSortMode(osgParticle::QReflect_ParticleSystem::SortMode );
Q_INVOKABLE void  update( double  ,osg::QReflect_NodeVisitor *);
Q_INVOKABLE void setDoublePassRendering(const bool &);
Q_INVOKABLE void setFreezeOnCull(const bool &);
Q_INVOKABLE void setFrozen(const bool &);
Q_INVOKABLE void setLevelOfDetail(const int &);
Q_INVOKABLE void setUseShaders(const bool &);
Q_INVOKABLE void setUseVertexArray(const bool &);
Q_INVOKABLE void setVisibilityDistance(const double &);
Q_PROPERTY(bool DoublePassRendering  READ getDoublePassRendering WRITE setDoublePassRendering NOTIFY DoublePassRenderingChanged)
Q_PROPERTY(bool FreezeOnCull  READ getFreezeOnCull WRITE setFreezeOnCull NOTIFY FreezeOnCullChanged)
Q_PROPERTY(bool Frozen  READ getFrozen WRITE setFrozen NOTIFY FrozenChanged)
Q_PROPERTY(bool UseShaders  READ getUseShaders WRITE setUseShaders NOTIFY UseShadersChanged)
Q_PROPERTY(bool UseVertexArray  READ getUseVertexArray WRITE setUseVertexArray NOTIFY UseVertexArrayChanged)
Q_PROPERTY(double VisibilityDistance  READ getVisibilityDistance WRITE setVisibilityDistance NOTIFY VisibilityDistanceChanged)
Q_PROPERTY(int LevelOfDetail  READ getLevelOfDetail WRITE setLevelOfDetail NOTIFY LevelOfDetailChanged)
signals: void DoublePassRenderingChanged(const bool&);
public:
signals: void FreezeOnCullChanged(const bool&);
public:
signals: void FrozenChanged(const bool&);
public:
signals: void LevelOfDetailChanged(const int&);
public:
signals: void UseShadersChanged(const bool&);
public:
signals: void UseVertexArrayChanged(const bool&);
public:
signals: void VisibilityDistanceChanged(const double&);
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


#endif //osgParticle_ParticleSystem_pmocHPP

