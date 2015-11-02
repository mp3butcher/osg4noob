#ifndef osgParticle_CenteredPlacer_pmocHPP
#define  osgParticle_CenteredPlacer_pmocHPP 1
#include <osgParticle/CenteredPlacer_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Object;
			} ;
namespace osg{ 
class QReflect_Vec3f;
			} ;
#include <osg/ref_ptr>
#include <osgParticle/CenteredPlacer>
#include <osgParticle/CenteredPlacer>

#include <MetaQQuickClass.h>
namespace osgParticle{
class QReflect_CenteredPlacer: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
CenteredPlacer * _model;
QReflect_CenteredPlacer(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_CenteredPlacer( );
//CenteredPlacer
//const  osg::Vec3 & getCenter();
Q_INVOKABLE  bool  isSameKindAs(osg::QReflect_Object *)const;
Q_INVOKABLE const  char*  className()const;
Q_INVOKABLE const  char*  libraryName()const;
Q_INVOKABLE void  setCenter( float  , float  , float );
Q_INVOKABLE void  setCenter(osg::QReflect_Vec3f *);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_CenteredPlacer: public pmoc::MetaQQuickClass{
protected:
   public:
MetaQReflect_CenteredPlacer();
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


#endif //osgParticle_CenteredPlacer_pmocHPP

