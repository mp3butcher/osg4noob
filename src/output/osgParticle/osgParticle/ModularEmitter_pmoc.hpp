#ifndef osgParticle_ModularEmitter_pmocHPP
#define  osgParticle_ModularEmitter_pmocHPP 1


#include <osgParticle/ModularEmitter_pmoc.hpp>
#include <QObject>
namespace osgParticle{ 
class QReflect_Placer;
			} ;
namespace osgParticle{ 
class QReflect_Counter;
			} ;
namespace osgParticle{ 
class QReflect_Shooter;
			} ;
#include <osg/ref_ptr>
#include <osgParticle/ModularEmitter>
#include <osgParticle/ModularEmitter>

#include <MetaQQuickClass.h>
namespace osgParticle{
class QReflect_ModularEmitter: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
ModularEmitter * _model;
QReflect_ModularEmitter(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_ModularEmitter( );
//ModularEmitter
Q_INVOKABLE  float  getNumParticlesToCreateMovementCompensationRatio()const;
Q_INVOKABLE osgParticle::QReflect_Counter*  getCounter();
Q_INVOKABLE osgParticle::QReflect_Counter*  getCounter()const;
Q_INVOKABLE osgParticle::QReflect_Placer*  getPlacer();
Q_INVOKABLE osgParticle::QReflect_Placer*  getPlacer()const;
Q_INVOKABLE osgParticle::QReflect_Shooter*  getShooter();
Q_INVOKABLE osgParticle::QReflect_Shooter*  getShooter()const;
Q_INVOKABLE void  setCounter(osgParticle::QReflect_Counter *c);
Q_INVOKABLE void  setNumParticlesToCreateMovementCompensationRatio( float r);
Q_INVOKABLE void  setPlacer(osgParticle::QReflect_Placer *p);
Q_INVOKABLE void  setShooter(osgParticle::QReflect_Shooter *s);
Q_PROPERTY(float  NumParticlesToCreateMovementCompensationRatio  READ getNumParticlesToCreateMovementCompensationRatio WRITE setNumParticlesToCreateMovementCompensationRatio NOTIFY NumParticlesToCreateMovementCompensationRatioChanged)
Q_PROPERTY(osgParticle::QReflect_Counter * Counter  READ getCounter WRITE setCounter NOTIFY CounterChanged)
Q_PROPERTY(osgParticle::QReflect_Placer * Placer  READ getPlacer WRITE setPlacer NOTIFY PlacerChanged)
Q_PROPERTY(osgParticle::QReflect_Shooter * Shooter  READ getShooter WRITE setShooter NOTIFY ShooterChanged)
signals: void CounterChanged();
public:
signals: void NumParticlesToCreateMovementCompensationRatioChanged();
public:
signals: void PlacerChanged();
public:
signals: void ShooterChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_ModularEmitter: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osgParticle::ModularEmitter> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_ModularEmitter();
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



#endif //osgParticle_ModularEmitter_pmocHPP

