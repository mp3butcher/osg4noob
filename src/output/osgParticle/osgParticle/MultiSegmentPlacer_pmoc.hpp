#ifndef osgParticle_MultiSegmentPlacer_pmocHPP
#define  osgParticle_MultiSegmentPlacer_pmocHPP 1


#include <osgParticle/MultiSegmentPlacer_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Vec3f;
			} ;
namespace osgParticle{ 
class QReflect_Particle;
			} ;
#include <osg/ref_ptr>
#include <osgParticle/MultiSegmentPlacer>
#include <osgParticle/MultiSegmentPlacer>

#include <MetaQQuickClass.h>
namespace osgParticle{
class QReflect_MultiSegmentPlacer: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
MultiSegmentPlacer * _model;
QReflect_MultiSegmentPlacer(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_MultiSegmentPlacer( );
//MultiSegmentPlacer
// osg::Vec3  getControlPosition();
//const  osg::Vec3 & getVertex( int );
Q_INVOKABLE  float  volume()const;
Q_INVOKABLE  int  numVertices()const;
Q_INVOKABLE void  addVertex( float  , float  , float );
Q_INVOKABLE void  addVertex(osg::QReflect_Vec3f *);
Q_INVOKABLE void  place(osgParticle::QReflect_Particle *)const;
Q_INVOKABLE void  removeVertex( int );
Q_INVOKABLE void  setVertex( int  , float  , float  , float );
Q_INVOKABLE void  setVertex( int  ,osg::QReflect_Vec3f *);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_MultiSegmentPlacer: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osgParticle::MultiSegmentPlacer> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_MultiSegmentPlacer();
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


#endif //osgParticle_MultiSegmentPlacer_pmocHPP

