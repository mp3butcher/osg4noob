#ifndef osgParticle_ConstantRateCounter_pmocHPP
#define  osgParticle_ConstantRateCounter_pmocHPP 1
#include <osgParticle/ConstantRateCounter_pmoc.hpp>
#include <QObject>
#include <osg/ref_ptr>
#include <osgParticle/ConstantRateCounter>
#include <osgParticle/ConstantRateCounter>

#include <MetaQQuickClass.h>
namespace osgParticle{
class QReflect_ConstantRateCounter: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
ConstantRateCounter * _model;
QReflect_ConstantRateCounter(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_ConstantRateCounter( );
//ConstantRateCounter
Q_INVOKABLE  int  numParticlesToCreate( double )const;
Q_INVOKABLE const double  getNumberOfParticlesPerSecondToCreate()const;
Q_INVOKABLE const int  getMinimumNumberOfParticlesToCreate()const;
Q_INVOKABLE void setMinimumNumberOfParticlesToCreate(const int &);
Q_INVOKABLE void setNumberOfParticlesPerSecondToCreate(const double &);
Q_PROPERTY(double NumberOfParticlesPerSecondToCreate  READ getNumberOfParticlesPerSecondToCreate WRITE setNumberOfParticlesPerSecondToCreate NOTIFY NumberOfParticlesPerSecondToCreateChanged)
Q_PROPERTY(int MinimumNumberOfParticlesToCreate  READ getMinimumNumberOfParticlesToCreate WRITE setMinimumNumberOfParticlesToCreate NOTIFY MinimumNumberOfParticlesToCreateChanged)
signals: void MinimumNumberOfParticlesToCreateChanged(const int&);
public:
signals: void NumberOfParticlesPerSecondToCreateChanged(const double&);
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_ConstantRateCounter: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osgParticle::ConstantRateCounter> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_ConstantRateCounter();
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


#endif //osgParticle_ConstantRateCounter_pmocHPP

