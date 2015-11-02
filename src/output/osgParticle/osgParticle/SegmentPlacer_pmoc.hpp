#ifndef osgParticle_SegmentPlacer_pmocHPP
#define  osgParticle_SegmentPlacer_pmocHPP 1


#include <osgParticle/SegmentPlacer_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Vec3f;
			} ;
namespace osgParticle{ 
class QReflect_Particle;
			} ;
#include <osg/ref_ptr>
#include <osgParticle/SegmentPlacer>
#include <osgParticle/SegmentPlacer>

#include <MetaQQuickClass.h>
namespace osgParticle{
class QReflect_SegmentPlacer: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
SegmentPlacer * _model;
QReflect_SegmentPlacer(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_SegmentPlacer( );
//SegmentPlacer
// osg::Vec3  getControlPosition();
//const  osg::Vec3 & getVertexA();
//const  osg::Vec3 & getVertexB();
Q_INVOKABLE  float  volume()const;
Q_INVOKABLE void  place(osgParticle::QReflect_Particle *)const;
Q_INVOKABLE void  setSegment(osg::QReflect_Vec3f * ,osg::QReflect_Vec3f *);
Q_INVOKABLE void  setVertexA( float  , float  , float );
Q_INVOKABLE void  setVertexA(osg::QReflect_Vec3f *);
Q_INVOKABLE void  setVertexB( float  , float  , float );
Q_INVOKABLE void  setVertexB(osg::QReflect_Vec3f *);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_SegmentPlacer: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osgParticle::SegmentPlacer> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_SegmentPlacer();
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


#endif //osgParticle_SegmentPlacer_pmocHPP

