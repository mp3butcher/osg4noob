#ifndef osgParticle_Operator_pmocHPP
#define  osgParticle_Operator_pmocHPP 1


#include <osgParticle/Particle_pmoc.hpp>
#include <QObject>
#include <osgParticle/Operator_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Object;
			} ;
namespace osgParticle{ 
class QReflect_ParticleSystem;
			} ;
namespace osgParticle{ 
class QReflect_Program;
			} ;
#include <osg/ref_ptr>
#include <osgParticle/Operator>
#include <osgParticle/Operator>

#include <MetaQQuickClass.h>
namespace osgParticle{
class QReflect_Operator: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
Operator * _model;
QReflect_Operator(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Operator( );
//Operator
Q_INVOKABLE  bool  isEnabled()const;
Q_INVOKABLE  bool  isSameKindAs(osg::QReflect_Object *)const;
Q_INVOKABLE const  char*  className()const;
Q_INVOKABLE const  char*  libraryName()const;
Q_INVOKABLE void  beginOperate(osgParticle::QReflect_Program *);
Q_INVOKABLE void  endOperate();
Q_INVOKABLE void  operateParticles(osgParticle::QReflect_ParticleSystem * , double );
Q_INVOKABLE void  setEnabled( bool );
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Operator: public pmoc::MetaQQuickClass{
protected:
   public:
MetaQReflect_Operator();
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


#endif //osgParticle_Operator_pmocHPP

