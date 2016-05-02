#ifndef osgParticle_CompositePlacer_pmocHPP
#define  osgParticle_CompositePlacer_pmocHPP 1


#include <osgParticle/CompositePlacer_pmoc.hpp>
#include <QObject>
namespace osgParticle{ 
class QReflect_Placer;
			} ;
namespace osgParticle{ 
class QReflect_Particle;
			} ;
#include <osg/ref_ptr>
#include <osgParticle/CompositePlacer>
#include <osgParticle/CompositePlacer>

#include <MetaQQuickClass.h>
namespace osgParticle{
class QReflect_CompositePlacer: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
CompositePlacer * _model;
QReflect_CompositePlacer(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_CompositePlacer( );
//CompositePlacer
// osg::Vec3  getControlPosition();
Q_INVOKABLE  float  volume()const;
Q_INVOKABLE  unsigned int  getNumPlacers()const;
Q_INVOKABLE osgParticle::QReflect_Placer*  getPlacer( unsigned int i);
Q_INVOKABLE osgParticle::QReflect_Placer*  getPlacer( unsigned int i)const;
Q_INVOKABLE void  addPlacer(osgParticle::QReflect_Placer *p);
Q_INVOKABLE void  place(osgParticle::QReflect_Particle *P)const;
Q_INVOKABLE void  removePlacer( unsigned int i);
Q_INVOKABLE void  setPlacer( unsigned int i ,osgParticle::QReflect_Placer *p);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_CompositePlacer: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osgParticle::CompositePlacer> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_CompositePlacer();
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



#endif //osgParticle_CompositePlacer_pmocHPP

