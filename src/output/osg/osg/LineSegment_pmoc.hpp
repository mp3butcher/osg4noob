#ifndef osg_LineSegment_pmocHPP
#define  osg_LineSegment_pmocHPP 1
#include <osg/LineSegment_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Vec3f;
			} ;
namespace osg{ 
class QReflect_Vec3d;
			} ;
namespace osg{ 
class QReflect_Matrixd;
			} ;
namespace osg{ 
class QReflect_LineSegment;
			} ;
#include <osg/LineSegment>
#include <osg/LineSegment>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_LineSegment: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
LineSegment * _model;
QReflect_LineSegment(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_LineSegment( );
//LineSegment
// LineSegment & operator=(const  LineSegment &);
// bool  intersect(const  BoundingBox &);
// bool  intersect(const  BoundingSphere &);
// bool  intersectAndComputeRatios(const  BoundingBox & , double & , double &);
// bool  intersectAndComputeRatios(const  BoundingBox & , float & , float &);
// bool  intersectAndComputeRatios(const  BoundingSphere & , double & , double &);
// bool  intersectAndComputeRatios(const  BoundingSphere & , float & , float &);
// vec_type & end();
// vec_type & start();
// void  set(const  vec_type & ,const  vec_type &);
//const  vec_type & end();
//const  vec_type & start();
Q_INVOKABLE  bool  intersect(osg::QReflect_Vec3d * ,osg::QReflect_Vec3d * ,osg::QReflect_Vec3d * , double &);
Q_INVOKABLE  bool  intersect(osg::QReflect_Vec3f * ,osg::QReflect_Vec3f * ,osg::QReflect_Vec3f * , float &);
Q_INVOKABLE  bool  valid()const;
Q_INVOKABLE void  mult(osg::QReflect_LineSegment * ,osg::QReflect_Matrixd *);
Q_INVOKABLE void  mult(osg::QReflect_Matrixd * ,osg::QReflect_LineSegment *);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_LineSegment: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::LineSegment> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_LineSegment();
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

#endif //osg_LineSegment_pmocHPP

