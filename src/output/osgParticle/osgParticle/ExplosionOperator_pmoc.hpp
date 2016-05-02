#ifndef osgParticle_ExplosionOperator_pmocHPP
#define  osgParticle_ExplosionOperator_pmocHPP 1


#include <osgParticle/ExplosionOperator_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Vec3f;
			} ;
namespace osgParticle{ 
class QReflect_Particle;
			} ;
namespace osgParticle{ 
class QReflect_Program;
			} ;
#include <osg/ref_ptr>
#include <osgParticle/ExplosionOperator>
#include <osgParticle/ExplosionOperator>

#include <MetaQQuickClass.h>
namespace osgParticle{
class QReflect_ExplosionOperator: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
ExplosionOperator * _model;
QReflect_ExplosionOperator(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_ExplosionOperator( );
//ExplosionOperator
//const  osg::Vec3 & getCenter();
Q_INVOKABLE  float  getEpsilon()const;
Q_INVOKABLE  float  getMagnitude()const;
Q_INVOKABLE  float  getRadius()const;
Q_INVOKABLE  float  getSigma()const;
Q_INVOKABLE void  beginOperate(osgParticle::QReflect_Program *prg);
Q_INVOKABLE void  operate(osgParticle::QReflect_Particle *P , double dt);
Q_INVOKABLE void  setCenter(osg::QReflect_Vec3f *c);
Q_INVOKABLE void  setEpsilon( float eps);
Q_INVOKABLE void  setMagnitude( float mag);
Q_INVOKABLE void  setRadius( float r);
Q_INVOKABLE void  setSigma( float s);
Q_PROPERTY(float  Epsilon  READ getEpsilon WRITE setEpsilon NOTIFY EpsilonChanged)
Q_PROPERTY(float  Magnitude  READ getMagnitude WRITE setMagnitude NOTIFY MagnitudeChanged)
Q_PROPERTY(float  Radius  READ getRadius WRITE setRadius NOTIFY RadiusChanged)
Q_PROPERTY(float  Sigma  READ getSigma WRITE setSigma NOTIFY SigmaChanged)
signals: void EpsilonChanged();
public:
signals: void MagnitudeChanged();
public:
signals: void RadiusChanged();
public:
signals: void SigmaChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_ExplosionOperator: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osgParticle::ExplosionOperator> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_ExplosionOperator();
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



#endif //osgParticle_ExplosionOperator_pmocHPP

