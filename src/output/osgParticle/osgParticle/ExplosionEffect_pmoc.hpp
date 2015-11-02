#ifndef osgParticle_ExplosionEffect_pmocHPP
#define  osgParticle_ExplosionEffect_pmocHPP 1


#include <osgParticle/ExplosionEffect_pmoc.hpp>
#include <QObject>
namespace osgParticle{ 
class QReflect_Emitter;
			} ;
namespace osgParticle{ 
class QReflect_Program;
			} ;
#include <osg/ref_ptr>
#include <osgParticle/ExplosionEffect>
#include <osgParticle/ExplosionEffect>

#include <MetaQQuickClass.h>
namespace osgParticle{
class QReflect_ExplosionEffect: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
ExplosionEffect * _model;
QReflect_ExplosionEffect(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_ExplosionEffect( );
//ExplosionEffect
Q_INVOKABLE osgParticle::QReflect_Emitter*  getEmitter();
Q_INVOKABLE osgParticle::QReflect_Emitter*  getEmitter()const;
Q_INVOKABLE osgParticle::QReflect_Program*  getProgram();
Q_INVOKABLE osgParticle::QReflect_Program*  getProgram()const;
Q_INVOKABLE void  setDefaults();
Q_INVOKABLE void  setUpEmitterAndProgram();
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_ExplosionEffect: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osgParticle::ExplosionEffect> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_ExplosionEffect();
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


#endif //osgParticle_ExplosionEffect_pmocHPP

