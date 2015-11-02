#ifndef osgParticle_FluidFrictionOperator_pmocHPP
#define  osgParticle_FluidFrictionOperator_pmocHPP 1


#include <osgParticle/Particle_pmoc.hpp>
#include <QObject>
#include <osgParticle/FluidFrictionOperator_pmoc.hpp>
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
#include <osgParticle/FluidFrictionOperator>
#include <osgParticle/FluidFrictionOperator>

#include <MetaQQuickClass.h>
namespace osgParticle{
class QReflect_FluidFrictionOperator: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
FluidFrictionOperator * _model;
QReflect_FluidFrictionOperator(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_FluidFrictionOperator( );
//FluidFrictionOperator
//const  osg::Vec3 & getWind();
Q_INVOKABLE const float  getFluidDensity()const;
Q_INVOKABLE const float  getFluidViscosity()const;
Q_INVOKABLE const float  getOverrideRadius()const;
Q_INVOKABLE void  beginOperate(osgParticle::QReflect_Program *);
Q_INVOKABLE void  operate(osgParticle::QReflect_Particle * , double );
Q_INVOKABLE void  setFluidToAir();
Q_INVOKABLE void  setFluidToWater();
Q_INVOKABLE void  setWind(osg::QReflect_Vec3f *);
Q_INVOKABLE void setFluidDensity(const float &);
Q_INVOKABLE void setFluidViscosity(const float &);
Q_INVOKABLE void setOverrideRadius(const float &);
Q_PROPERTY(float FluidDensity  READ getFluidDensity WRITE setFluidDensity NOTIFY FluidDensityChanged)
Q_PROPERTY(float FluidViscosity  READ getFluidViscosity WRITE setFluidViscosity NOTIFY FluidViscosityChanged)
Q_PROPERTY(float OverrideRadius  READ getOverrideRadius WRITE setOverrideRadius NOTIFY OverrideRadiusChanged)
signals: void FluidDensityChanged(const float&);
public:
signals: void FluidViscosityChanged(const float&);
public:
signals: void OverrideRadiusChanged(const float&);
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_FluidFrictionOperator: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osgParticle::FluidFrictionOperator> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_FluidFrictionOperator();
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


#endif //osgParticle_FluidFrictionOperator_pmocHPP

