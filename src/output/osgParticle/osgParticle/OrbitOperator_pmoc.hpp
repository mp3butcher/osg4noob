#ifndef osgParticle_OrbitOperator_pmocHPP
#define  osgParticle_OrbitOperator_pmocHPP 1


#include <osgParticle/OrbitOperator_pmoc.hpp>
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
#include <osgParticle/OrbitOperator>
#include <osgParticle/OrbitOperator>

#include <MetaQQuickClass.h>
namespace osgParticle{
class QReflect_OrbitOperator: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
OrbitOperator * _model;
QReflect_OrbitOperator(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_OrbitOperator( );
//OrbitOperator
//const  osg::Vec3 & getCenter();
Q_INVOKABLE const float  getEpsilon()const;
Q_INVOKABLE const float  getMagnitude()const;
Q_INVOKABLE const float  getMaxRadius()const;
Q_INVOKABLE void  beginOperate(osgParticle::QReflect_Program *);
Q_INVOKABLE void  operate(osgParticle::QReflect_Particle * , double );
Q_INVOKABLE void  setCenter(osg::QReflect_Vec3f *);
Q_INVOKABLE void setEpsilon(const float &);
Q_INVOKABLE void setMagnitude(const float &);
Q_INVOKABLE void setMaxRadius(const float &);
Q_PROPERTY(float Epsilon  READ getEpsilon WRITE setEpsilon NOTIFY EpsilonChanged)
Q_PROPERTY(float Magnitude  READ getMagnitude WRITE setMagnitude NOTIFY MagnitudeChanged)
Q_PROPERTY(float MaxRadius  READ getMaxRadius WRITE setMaxRadius NOTIFY MaxRadiusChanged)
signals: void EpsilonChanged(const float&);
public:
signals: void MagnitudeChanged(const float&);
public:
signals: void MaxRadiusChanged(const float&);
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_OrbitOperator: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osgParticle::OrbitOperator> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_OrbitOperator();
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


#endif //osgParticle_OrbitOperator_pmocHPP

