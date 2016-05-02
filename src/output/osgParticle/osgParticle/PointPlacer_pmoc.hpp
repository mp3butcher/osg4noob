#ifndef osgParticle_PointPlacer_pmocHPP
#define  osgParticle_PointPlacer_pmocHPP 1


#include <osgParticle/PointPlacer_pmoc.hpp>
#include <QObject>
namespace osgParticle{ 
class QReflect_Particle;
			} ;
#include <osg/ref_ptr>
#include <osgParticle/PointPlacer>
#include <osgParticle/PointPlacer>

#include <MetaQQuickClass.h>
namespace osgParticle{
class QReflect_PointPlacer: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
PointPlacer * _model;
QReflect_PointPlacer(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_PointPlacer( );
//PointPlacer
// osg::Vec3  getControlPosition();
Q_INVOKABLE void  place(osgParticle::QReflect_Particle *P)const;
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_PointPlacer: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osgParticle::PointPlacer> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_PointPlacer();
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



#endif //osgParticle_PointPlacer_pmocHPP

