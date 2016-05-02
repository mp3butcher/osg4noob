#ifndef osgParticle_FluidProgram_pmocHPP
#define  osgParticle_FluidProgram_pmocHPP 1


#include <osgParticle/FluidProgram_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Vec3f;
			} ;
#include <osg/ref_ptr>
#include <osgParticle/FluidProgram>
#include <osgParticle/FluidProgram>

#include <MetaQQuickClass.h>
namespace osgParticle{
class QReflect_FluidProgram: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
FluidProgram * _model;
QReflect_FluidProgram(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_FluidProgram( );
//FluidProgram
//const  osg::Vec3 & getAcceleration();
//const  osg::Vec3 & getWind();
Q_INVOKABLE  float  getFluidDensity()const;
Q_INVOKABLE  float  getFluidViscosity()const;
Q_INVOKABLE void  setAcceleration(osg::QReflect_Vec3f *v);
Q_INVOKABLE void  setFluidDensity( float d);
Q_INVOKABLE void  setFluidToAir();
Q_INVOKABLE void  setFluidToWater();
Q_INVOKABLE void  setFluidViscosity( float v);
Q_INVOKABLE void  setToGravity( float scale);
Q_INVOKABLE void  setWind(osg::QReflect_Vec3f *wind);
Q_PROPERTY(float  FluidDensity  READ getFluidDensity WRITE setFluidDensity NOTIFY FluidDensityChanged)
Q_PROPERTY(float  FluidViscosity  READ getFluidViscosity WRITE setFluidViscosity NOTIFY FluidViscosityChanged)
signals: void FluidDensityChanged();
public:
signals: void FluidViscosityChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_FluidProgram: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osgParticle::FluidProgram> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_FluidProgram();
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



#endif //osgParticle_FluidProgram_pmocHPP

