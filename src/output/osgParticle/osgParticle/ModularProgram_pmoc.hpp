#ifndef osgParticle_ModularProgram_pmocHPP
#define  osgParticle_ModularProgram_pmocHPP 1


#include <osgParticle/ModularProgram_pmoc.hpp>
#include <QObject>
namespace osgParticle{ 
class QReflect_Operator;
			} ;
#include <osg/ref_ptr>
#include <osgParticle/ModularProgram>
#include <osgParticle/ModularProgram>

#include <MetaQQuickClass.h>
namespace osgParticle{
class QReflect_ModularProgram: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
ModularProgram * _model;
QReflect_ModularProgram(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_ModularProgram( );
//ModularProgram
Q_INVOKABLE  int  numOperators()const;
Q_INVOKABLE osgParticle::QReflect_Operator*  getOperator( int );
Q_INVOKABLE osgParticle::QReflect_Operator*  getOperator( int )const;
Q_INVOKABLE void  addOperator(osgParticle::QReflect_Operator *);
Q_INVOKABLE void  removeOperator( int );
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_ModularProgram: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osgParticle::ModularProgram> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_ModularProgram();
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


#endif //osgParticle_ModularProgram_pmocHPP

