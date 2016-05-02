#ifndef osgParticle_AccelOperator_pmocHPP
#define  osgParticle_AccelOperator_pmocHPP 1


#include <osgParticle/AccelOperator_pmoc.hpp>
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
#include <osgParticle/AccelOperator>
#include <osgParticle/AccelOperator>

#include <MetaQQuickClass.h>
namespace osgParticle{
class QReflect_AccelOperator: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
AccelOperator * _model;
QReflect_AccelOperator(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_AccelOperator( );
//AccelOperator
//const  osg::Vec3 & getAcceleration();
Q_INVOKABLE void  beginOperate(osgParticle::QReflect_Program *prg);
Q_INVOKABLE void  operate(osgParticle::QReflect_Particle *P , double dt);
Q_INVOKABLE void  setAcceleration(osg::QReflect_Vec3f *v);
Q_INVOKABLE void  setToGravity( float scale);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_AccelOperator: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osgParticle::AccelOperator> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_AccelOperator();
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



#endif //osgParticle_AccelOperator_pmocHPP

