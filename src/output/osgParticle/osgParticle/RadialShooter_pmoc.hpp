#ifndef osgParticle_RadialShooter_pmocHPP
#define  osgParticle_RadialShooter_pmocHPP 1


#include <osgParticle/RadialShooter_pmoc.hpp>
#include <QObject>
namespace osgParticle{ 
class QReflect_Particle;
			} ;
namespace osg{ 
class QReflect_Vec3f;
			} ;
#include <osg/ref_ptr>
#include <osgParticle/RadialShooter>
#include <osgParticle/RadialShooter>

#include <MetaQQuickClass.h>
namespace osgParticle{
class QReflect_RadialShooter: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
RadialShooter * _model;
QReflect_RadialShooter(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_RadialShooter( );
//RadialShooter
// void  setInitialRotationalSpeedRange(const  rangev3 &);
// void  setInitialSpeedRange(const  rangef &);
// void  setPhiRange(const  rangef &);
// void  setThetaRange(const  rangef &);
//const  rangef & getInitialSpeedRange();
//const  rangef & getPhiRange();
//const  rangef & getThetaRange();
//const  rangev3 & getInitialRotationalSpeedRange();
Q_INVOKABLE void  setInitialRotationalSpeedRange(osg::QReflect_Vec3f * ,osg::QReflect_Vec3f *);
Q_INVOKABLE void  setInitialSpeedRange( float  , float );
Q_INVOKABLE void  setPhiRange( float  , float );
Q_INVOKABLE void  setThetaRange( float  , float );
Q_INVOKABLE void  shoot(osgParticle::QReflect_Particle *)const;
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_RadialShooter: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osgParticle::RadialShooter> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_RadialShooter();
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


#endif //osgParticle_RadialShooter_pmocHPP

