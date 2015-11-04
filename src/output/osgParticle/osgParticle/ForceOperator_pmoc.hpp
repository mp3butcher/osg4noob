#ifndef osgParticle_ForceOperator_pmocHPP
#define  osgParticle_ForceOperator_pmocHPP 1


#include <osgParticle/ForceOperator_pmoc.hpp>
#include <QObject>
namespace osgParticle{ 
class QReflect_Program;
			} ;
namespace osg{ 
class QReflect_Vec3f;
			} ;
namespace osgParticle{ 
class QReflect_Particle;
			} ;
#include <osg/ref_ptr>
#include <osgParticle/ForceOperator>
#include <osgParticle/ForceOperator>

#include <MetaQQuickClass.h>
namespace osgParticle{
class QReflect_ForceOperator: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
ForceOperator * _model;
QReflect_ForceOperator(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_ForceOperator( );
//ForceOperator
//const  osg::Vec3 & getForce();
Q_INVOKABLE void  beginOperate(osgParticle::QReflect_Program *);
Q_INVOKABLE void  operate(osgParticle::QReflect_Particle * , double );
Q_INVOKABLE void  setForce(osg::QReflect_Vec3f *);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_ForceOperator: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osgParticle::ForceOperator> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_ForceOperator();
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


#endif //osgParticle_ForceOperator_pmocHPP

