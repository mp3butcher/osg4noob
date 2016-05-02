#ifndef osgParticle_BoxPlacer_pmocHPP
#define  osgParticle_BoxPlacer_pmocHPP 1


#include <osgParticle/BoxPlacer_pmoc.hpp>
#include <QObject>
namespace osgParticle{ 
class QReflect_Particle;
			} ;
#include <osg/ref_ptr>
#include <osgParticle/BoxPlacer>
#include <osgParticle/BoxPlacer>

#include <MetaQQuickClass.h>
namespace osgParticle{
class QReflect_BoxPlacer: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
BoxPlacer * _model;
QReflect_BoxPlacer(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_BoxPlacer( );
//BoxPlacer
// osg::Vec3  getControlPosition();
// void  setXRange(const  rangef &);
// void  setYRange(const  rangef &);
// void  setZRange(const  rangef &);
//const  rangef & getXRange();
//const  rangef & getYRange();
//const  rangef & getZRange();
Q_INVOKABLE  float  volume()const;
Q_INVOKABLE void  place(osgParticle::QReflect_Particle *P)const;
Q_INVOKABLE void  setXRange( float r1 , float r2);
Q_INVOKABLE void  setYRange( float r1 , float r2);
Q_INVOKABLE void  setZRange( float r1 , float r2);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_BoxPlacer: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osgParticle::BoxPlacer> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_BoxPlacer();
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



#endif //osgParticle_BoxPlacer_pmocHPP

