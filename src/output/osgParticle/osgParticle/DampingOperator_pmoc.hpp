#ifndef osgParticle_DampingOperator_pmocHPP
#define  osgParticle_DampingOperator_pmocHPP 1


#include <osgParticle/DampingOperator_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Vec3f;
			} ;
namespace osgParticle{ 
class QReflect_Particle;
			} ;
#include <osg/ref_ptr>
#include <osgParticle/DampingOperator>
#include <osgParticle/DampingOperator>

#include <MetaQQuickClass.h>
namespace osgParticle{
class QReflect_DampingOperator: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
DampingOperator * _model;
QReflect_DampingOperator(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_DampingOperator( );
//DampingOperator
//const  osg::Vec3 & getDamping();
Q_INVOKABLE  float  getCutoffHigh()const;
Q_INVOKABLE  float  getCutoffLow()const;
Q_INVOKABLE void  getCutoff( float &low , float &high)const;
Q_INVOKABLE void  getDamping( float &x , float &y , float &z)const;
Q_INVOKABLE void  operate(osgParticle::QReflect_Particle *P , double dt);
Q_INVOKABLE void  setCutoff( float low , float high);
Q_INVOKABLE void  setCutoffHigh( float low);
Q_INVOKABLE void  setCutoffLow( float low);
Q_INVOKABLE void  setDamping( float x , float y , float z);
Q_INVOKABLE void  setDamping( float x);
Q_INVOKABLE void  setDamping(osg::QReflect_Vec3f *damping);
Q_PROPERTY(float  CutoffHigh  READ getCutoffHigh WRITE setCutoffHigh NOTIFY CutoffHighChanged)
Q_PROPERTY(float  CutoffLow  READ getCutoffLow WRITE setCutoffLow NOTIFY CutoffLowChanged)
signals: void CutoffHighChanged();
public:
signals: void CutoffLowChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_DampingOperator: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osgParticle::DampingOperator> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_DampingOperator();
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



#endif //osgParticle_DampingOperator_pmocHPP

