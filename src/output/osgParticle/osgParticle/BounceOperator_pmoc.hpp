#ifndef osgParticle_BounceOperator_pmocHPP
#define  osgParticle_BounceOperator_pmocHPP 1


#include <osgParticle/BounceOperator_pmoc.hpp>
#include <QObject>
#include <osg/ref_ptr>
#include <osgParticle/BounceOperator>
#include <osgParticle/BounceOperator>

#include <MetaQQuickClass.h>
namespace osgParticle{
class QReflect_BounceOperator: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
BounceOperator * _model;
QReflect_BounceOperator(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_BounceOperator( );
//BounceOperator
Q_INVOKABLE  float  getCutoff()const;
Q_INVOKABLE  float  getFriction()const;
Q_INVOKABLE  float  getResilience()const;
Q_INVOKABLE void  setCutoff( float v);
Q_INVOKABLE void  setFriction( float f);
Q_INVOKABLE void  setResilience( float r);
Q_PROPERTY(float  Cutoff  READ getCutoff WRITE setCutoff NOTIFY CutoffChanged)
Q_PROPERTY(float  Friction  READ getFriction WRITE setFriction NOTIFY FrictionChanged)
Q_PROPERTY(float  Resilience  READ getResilience WRITE setResilience NOTIFY ResilienceChanged)
signals: void CutoffChanged();
public:
signals: void FrictionChanged();
public:
signals: void ResilienceChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_BounceOperator: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osgParticle::BounceOperator> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_BounceOperator();
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



#endif //osgParticle_BounceOperator_pmocHPP

