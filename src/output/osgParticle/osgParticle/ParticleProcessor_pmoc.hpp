#ifndef osgParticle_ParticleProcessor_pmocHPP
#define  osgParticle_ParticleProcessor_pmocHPP 1


#include <osgParticle/ParticleProcessor_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Object;
			} ;
namespace osg{ 
class QReflect_NodeVisitor;
			} ;
namespace osgParticle{ 
class QReflect_ParticleSystem;
			} ;
#include <osg/ref_ptr>
#include <osgParticle/ParticleProcessor>
#include <osgParticle/ParticleProcessor>

#include<osgParticle/ParticleProcessor_pmoc.hpp>
#include <MetaQQuickClass.h>
namespace osgParticle{
class QReflect_ParticleProcessor: public pmoc::QQModel
{
Q_OBJECT
public:
 enum ReferenceFrame{
RELATIVE_RF =ParticleProcessor::RELATIVE_RF,
ABSOLUTE_RF =ParticleProcessor::ABSOLUTE_RF};
  Q_ENUMS(ReferenceFrame)
private:
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
ParticleProcessor * _model;
QReflect_ParticleProcessor(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_ParticleProcessor( );
//ParticleProcessor
//virtual  osg::BoundingSphere  computeBound();
// osg::Vec3  rotateLocalToWorld(const  osg::Vec3 &);
// osg::Vec3  rotateWorldToLocal(const  osg::Vec3 &);
// osg::Vec3  transformLocalToWorld(const  osg::Vec3 &);
// osg::Vec3  transformWorldToLocal(const  osg::Vec3 &);
//const  osg::Matrix & getLocalToWorldMatrix();
//const  osg::Matrix & getPreviousLocalToWorldMatrix();
//const  osg::Matrix & getPreviousWorldToLocalMatrix();
//const  osg::Matrix & getWorldToLocalMatrix();
Q_INVOKABLE  bool  getEnabled()const;
Q_INVOKABLE  bool  getEndless()const;
Q_INVOKABLE  bool  isAlive()const;
Q_INVOKABLE  bool  isEnabled()const;
Q_INVOKABLE  bool  isEndless()const;
Q_INVOKABLE  bool  isSameKindAs(osg::QReflect_Object *obj)const;
Q_INVOKABLE  double  getCurrentTime()const;
Q_INVOKABLE  double  getLifeTime()const;
Q_INVOKABLE  double  getResetTime()const;
Q_INVOKABLE  double  getStartTime()const;
Q_INVOKABLE const  char*  className()const;
Q_INVOKABLE const  char*  libraryName()const;
Q_INVOKABLE osgParticle::QReflect_ParticleProcessor::ReferenceFrame  getReferenceFrame()const;
Q_INVOKABLE osgParticle::QReflect_ParticleSystem*  getParticleSystem();
Q_INVOKABLE osgParticle::QReflect_ParticleSystem*  getParticleSystem()const;
Q_INVOKABLE void  accept(osg::QReflect_NodeVisitor *nv);
Q_INVOKABLE void  setCurrentTime( double t);
Q_INVOKABLE void  setEnabled( bool v);
Q_INVOKABLE void  setEndless( bool type);
Q_INVOKABLE void  setLifeTime( double t);
Q_INVOKABLE void  setParticleSystem(osgParticle::QReflect_ParticleSystem *ps);
Q_INVOKABLE void  setReferenceFrame(osgParticle::QReflect_ParticleProcessor::ReferenceFrame rf);
Q_INVOKABLE void  setResetTime( double t);
Q_INVOKABLE void  setStartTime( double t);
Q_INVOKABLE void  traverse(osg::QReflect_NodeVisitor *nv);
Q_PROPERTY(bool  Enabled  READ getEnabled WRITE setEnabled NOTIFY EnabledChanged)
Q_PROPERTY(bool  Endless  READ getEndless WRITE setEndless NOTIFY EndlessChanged)
Q_PROPERTY(double  CurrentTime  READ getCurrentTime WRITE setCurrentTime NOTIFY CurrentTimeChanged)
Q_PROPERTY(double  LifeTime  READ getLifeTime WRITE setLifeTime NOTIFY LifeTimeChanged)
Q_PROPERTY(double  ResetTime  READ getResetTime WRITE setResetTime NOTIFY ResetTimeChanged)
Q_PROPERTY(double  StartTime  READ getStartTime WRITE setStartTime NOTIFY StartTimeChanged)
Q_PROPERTY(osgParticle::QReflect_ParticleProcessor::ReferenceFrame  ReferenceFrame  READ getReferenceFrame WRITE setReferenceFrame NOTIFY ReferenceFrameChanged)
Q_PROPERTY(osgParticle::QReflect_ParticleSystem * ParticleSystem  READ getParticleSystem WRITE setParticleSystem NOTIFY ParticleSystemChanged)
signals: void CurrentTimeChanged();
public:
signals: void EnabledChanged();
public:
signals: void EndlessChanged();
public:
signals: void LifeTimeChanged();
public:
signals: void ParticleSystemChanged();
public:
signals: void ReferenceFrameChanged();
public:
signals: void ResetTimeChanged();
public:
signals: void StartTimeChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_ParticleProcessor: public pmoc::MetaQQuickClass{
protected:
   public:
MetaQReflect_ParticleProcessor();
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



#endif //osgParticle_ParticleProcessor_pmocHPP

