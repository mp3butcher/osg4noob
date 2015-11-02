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
QReflect_ParticleProcessor(pmoc::Instance *i=0,QObject* parent=0);
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
Q_INVOKABLE  bool  isAlive()const;
Q_INVOKABLE  bool  isEnabled()const;
Q_INVOKABLE  bool  isEndless()const;
Q_INVOKABLE  bool  isSameKindAs(osg::QReflect_Object *)const;
Q_INVOKABLE  osgParticle::QReflect_ParticleSystem * getParticleSystem()const;
Q_INVOKABLE const  char*  className()const;
Q_INVOKABLE const  char*  libraryName()const;
Q_INVOKABLE const bool  getEnabled()const;
Q_INVOKABLE const bool  getEndless()const;
Q_INVOKABLE const double  getCurrentTime()const;
Q_INVOKABLE const double  getLifeTime()const;
Q_INVOKABLE const double  getResetTime()const;
Q_INVOKABLE const double  getStartTime()const;
Q_INVOKABLE osgParticle::QReflect_ParticleProcessor::ReferenceFrame  getReferenceFrame()const;
Q_INVOKABLE void  accept(osg::QReflect_NodeVisitor *);
Q_INVOKABLE void  setReferenceFrame(osgParticle::QReflect_ParticleProcessor::ReferenceFrame );
Q_INVOKABLE void  traverse(osg::QReflect_NodeVisitor *);
Q_INVOKABLE void pmoc_reverse_setParticleSystem( osgParticle::QReflect_ParticleSystem *par=0);
Q_INVOKABLE void setCurrentTime(const double &);
Q_INVOKABLE void setEnabled(const bool &);
Q_INVOKABLE void setEndless(const bool &);
Q_INVOKABLE void setLifeTime(const double &);
Q_INVOKABLE void setParticleSystem( osgParticle::QReflect_ParticleSystem *par);
Q_INVOKABLE void setResetTime(const double &);
Q_INVOKABLE void setStartTime(const double &);
Q_PROPERTY(bool Enabled  READ getEnabled WRITE setEnabled NOTIFY EnabledChanged)
Q_PROPERTY(bool Endless  READ getEndless WRITE setEndless NOTIFY EndlessChanged)
Q_PROPERTY(double CurrentTime  READ getCurrentTime WRITE setCurrentTime NOTIFY CurrentTimeChanged)
Q_PROPERTY(double LifeTime  READ getLifeTime WRITE setLifeTime NOTIFY LifeTimeChanged)
Q_PROPERTY(double ResetTime  READ getResetTime WRITE setResetTime NOTIFY ResetTimeChanged)
Q_PROPERTY(double StartTime  READ getStartTime WRITE setStartTime NOTIFY StartTimeChanged)
signals: void CurrentTimeChanged(const double&);
public:
signals: void EnabledChanged(const bool&);
public:
signals: void EndlessChanged(const bool&);
public:
signals: void LifeTimeChanged(const double&);
public:
signals: void ParticleSystemChanged(const osgParticle::QReflect_ParticleSystem*);
public:
signals: void ResetTimeChanged(const double&);
public:
signals: void StartTimeChanged(const double&);
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


#endif //osgParticle_ParticleProcessor_pmocHPP

