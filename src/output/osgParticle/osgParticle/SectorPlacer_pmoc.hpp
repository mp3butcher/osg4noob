#ifndef osgParticle_SectorPlacer_pmocHPP
#define  osgParticle_SectorPlacer_pmocHPP 1


#include <osgParticle/SectorPlacer_pmoc.hpp>
#include <QObject>
namespace osgParticle{ 
class QReflect_Particle;
			} ;
#include <osg/ref_ptr>
#include <osgParticle/SectorPlacer>
#include <osgParticle/SectorPlacer>

#include <MetaQQuickClass.h>
namespace osgParticle{
class QReflect_SectorPlacer: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
SectorPlacer * _model;
QReflect_SectorPlacer(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_SectorPlacer( );
//SectorPlacer
// osg::Vec3  getControlPosition();
// void  setPhiRange(const  rangef &);
// void  setRadiusRange(const  rangef &);
//const  rangef & getPhiRange();
//const  rangef & getRadiusRange();
Q_INVOKABLE  float  volume()const;
Q_INVOKABLE void  place(osgParticle::QReflect_Particle *P)const;
Q_INVOKABLE void  setPhiRange( float r1 , float r2);
Q_INVOKABLE void  setRadiusRange( float r1 , float r2);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_SectorPlacer: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osgParticle::SectorPlacer> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_SectorPlacer();
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



#endif //osgParticle_SectorPlacer_pmocHPP

