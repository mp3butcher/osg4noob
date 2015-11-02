#ifndef osgParticle_RandomRateCounter_pmocHPP
#define  osgParticle_RandomRateCounter_pmocHPP 1
#include <osgParticle/RandomRateCounter_pmoc.hpp>
#include <QObject>
#include <osg/ref_ptr>
#include <osgParticle/RandomRateCounter>
#include <osgParticle/RandomRateCounter>

#include <MetaQQuickClass.h>
namespace osgParticle{
class QReflect_RandomRateCounter: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
RandomRateCounter * _model;
QReflect_RandomRateCounter(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_RandomRateCounter( );
//RandomRateCounter
Q_INVOKABLE  int  numParticlesToCreate( double )const;
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_RandomRateCounter: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osgParticle::RandomRateCounter> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_RandomRateCounter();
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


#endif //osgParticle_RandomRateCounter_pmocHPP

