#ifndef osgParticle_Interpolator_pmocHPP
#define  osgParticle_Interpolator_pmocHPP 1
#include <osgParticle/Interpolator_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Object;
			} ;
#include <osg/ref_ptr>
#include <osgParticle/Interpolator>
#include <osgParticle/Interpolator>

#include <MetaQQuickClass.h>
namespace osgParticle{
class QReflect_Interpolator: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
Interpolator * _model;
QReflect_Interpolator(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Interpolator( );
//Interpolator
// ValueType  interpolate( float  ,const  range<ValueType> &);
//virtual  osg::Vec2  interpolate( float  ,const  osg::Vec2 & ,const  osg::Vec2 &);
//virtual  osg::Vec3  interpolate( float  ,const  osg::Vec3 & ,const  osg::Vec3 &);
//virtual  osg::Vec4  interpolate( float  ,const  osg::Vec4 & ,const  osg::Vec4 &);
Q_INVOKABLE  bool  isSameKindAs(osg::QReflect_Object *)const;
Q_INVOKABLE const  char*  className()const;
Q_INVOKABLE const  char*  libraryName()const;
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Interpolator: public pmoc::MetaQQuickClass{
protected:
   public:
MetaQReflect_Interpolator();
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


#endif //osgParticle_Interpolator_pmocHPP

