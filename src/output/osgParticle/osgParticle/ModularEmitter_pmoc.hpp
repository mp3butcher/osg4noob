#ifndef osgParticle_ModularEmitter_pmocHPP
#define  osgParticle_ModularEmitter_pmocHPP 1


#include <osgParticle/ModularEmitter_pmoc.hpp>
#include <QObject>
namespace osgParticle{ 
class QReflect_Counter;
			} ;
namespace osgParticle{ 
class QReflect_Placer;
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
QReflect_ModularEmitter(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_ModularEmitter( );
//ModularEmitter
Q_INVOKABLE  osgParticle::QReflect_Counter * getCounter()const;
Q_INVOKABLE  osgParticle::QReflect_Placer * getPlacer()const;
Q_INVOKABLE  osgParticle::QReflect_Shooter * getShooter()const;
Q_INVOKABLE const float  getNumParticlesToCreateMovementCompensationRatio()const;
Q_INVOKABLE void pmoc_reverse_setCounter( osgParticle::QReflect_Counter *par=0);
Q_INVOKABLE void pmoc_reverse_setPlacer( osgParticle::QReflect_Placer *par=0);
Q_INVOKABLE void pmoc_reverse_setShooter( osgParticle::QReflect_Shooter *par=0);
Q_INVOKABLE void setCounter( osgParticle::QReflect_Counter *par);
Q_INVOKABLE void setNumParticlesToCreateMovementCompensationRatio(const float &);
Q_INVOKABLE void setPlacer( osgParticle::QReflect_Placer *par);
Q_INVOKABLE void setShooter( osgParticle::QReflect_Shooter *par);
Q_PROPERTY(float NumParticlesToCreateMovementCompensationRatio  READ getNumParticlesToCreateMovementCompensationRatio WRITE setNumParticlesToCreateMovementCompensationRatio NOTIFY NumParticlesToCreateMovementCompensationRatioChanged)
signals: void CounterChanged(const osgParticle::QReflect_Counter*);
public:
signals: void NumParticlesToCreateMovementCompensationRatioChanged(const float&);
public:
signals: void PlacerChanged(const osgParticle::QReflect_Placer*);
public:
signals: void ShooterChanged(const osgParticle::QReflect_Shooter*);
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


#endif //osgParticle_ModularEmitter_pmocHPP

