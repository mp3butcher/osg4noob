#ifndef osgParticle_DomainOperator_pmocHPP
#define  osgParticle_DomainOperator_pmocHPP 1


#include <osgParticle/DomainOperator_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Vec3f;
			} ;
namespace osg{ 
class QReflect_Plane;
			} ;
namespace osgParticle{ 
class QReflect_Program;
			} ;
namespace osgParticle{ 
class QReflect_Particle;
			} ;
#include <osg/ref_ptr>
#include <osgParticle/DomainOperator>
#include <osgParticle/DomainOperator>

#include <MetaQQuickClass.h>
namespace osgParticle{
class QReflect_DomainOperator: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
DomainOperator * _model;
QReflect_DomainOperator(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_DomainOperator( );
//DomainOperator
// void  addDomain(const  Domain &);
//const  Domain & getDomain( unsigned int );
Q_INVOKABLE  unsigned int  getNumDomains()const;
Q_INVOKABLE void  addBoxDomain(osg::QReflect_Vec3f * ,osg::QReflect_Vec3f *);
Q_INVOKABLE void  addDiskDomain(osg::QReflect_Vec3f * ,osg::QReflect_Vec3f * , float  , float );
Q_INVOKABLE void  addLineSegmentDomain(osg::QReflect_Vec3f * ,osg::QReflect_Vec3f *);
Q_INVOKABLE void  addPlaneDomain(osg::QReflect_Plane *);
Q_INVOKABLE void  addPointDomain(osg::QReflect_Vec3f *);
Q_INVOKABLE void  addRectangleDomain(osg::QReflect_Vec3f * ,osg::QReflect_Vec3f * ,osg::QReflect_Vec3f *);
Q_INVOKABLE void  addSphereDomain(osg::QReflect_Vec3f * , float );
Q_INVOKABLE void  addTriangleDomain(osg::QReflect_Vec3f * ,osg::QReflect_Vec3f * ,osg::QReflect_Vec3f *);
Q_INVOKABLE void  beginOperate(osgParticle::QReflect_Program *);
Q_INVOKABLE void  endOperate();
Q_INVOKABLE void  operate(osgParticle::QReflect_Particle * , double );
Q_INVOKABLE void  removeAllDomains();
Q_INVOKABLE void  removeDomain( unsigned int );
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_DomainOperator: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osgParticle::DomainOperator> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_DomainOperator();
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


#endif //osgParticle_DomainOperator_pmocHPP

