#ifndef osg_Plane_pmocHPP
#define  osg_Plane_pmocHPP 1


#include <osg/Plane_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Vec4f;
			} ;
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
class QReflect_Vec4d;
			} ;
namespace osg{ 
class QReflect_Plane;
			} ;
#include <osg/Plane>

#include <MetaQQuickClass.h>
namespace osg{
class QReflect_Plane: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 0;}

/// inheritance simulated via composition
Plane * _model;
QReflect_Plane(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Plane( );
//Plane
// Plane & operator=(const  Plane &);
// Vec3_type  getNormal();
// Vec4_type  asVec4();
// int  intersect(const  BoundingBox &);
// int  intersect(const  BoundingSphere &);
// int  intersect(const  std::vector<Vec3d> &);
// int  intersect(const  std::vector<Vec3f> &);
// void  set(const  Vec3_type & , double );
// void  set(const  Vec3_type & ,const  Vec3_type &);
// void  set(const  Vec3_type & ,const  Vec3_type & ,const  Vec3_type &);
Q_INVOKABLE  bool  isNaN()const;
Q_INVOKABLE  bool  operator!=(osg::QReflect_Plane &plane)const;
Q_INVOKABLE  bool  operator<(osg::QReflect_Plane &plane)const;
Q_INVOKABLE  bool  operator==(osg::QReflect_Plane &plane)const;
Q_INVOKABLE  bool  valid()const;
Q_INVOKABLE  double  distance(osg::QReflect_Vec3d *v)const;
Q_INVOKABLE  double  dotProductNormal(osg::QReflect_Vec3d *v)const;
Q_INVOKABLE  double  operator[]( unsigned int i)const;
Q_INVOKABLE  double&  operator[]( unsigned int i);
Q_INVOKABLE  double*  ptr();
Q_INVOKABLE  float  distance(osg::QReflect_Vec3f *v)const;
Q_INVOKABLE  float  dotProductNormal(osg::QReflect_Vec3f *v)const;
Q_INVOKABLE const  double*  ptr()const;
Q_INVOKABLE void  calculateUpperLowerBBCorners();
Q_INVOKABLE void  flip();
Q_INVOKABLE void  makeUnitLength();
Q_INVOKABLE void  set( double a , double b , double c , double d);
Q_INVOKABLE void  set(osg::QReflect_Plane *pl);
Q_INVOKABLE void  set(osg::QReflect_Vec4d *vec);
Q_INVOKABLE void  set(osg::QReflect_Vec4f *vec);
Q_INVOKABLE void  transform(osg::QReflect_Matrixd *matrix);
Q_INVOKABLE void  transformProvidingInverse(osg::QReflect_Matrixd *matrix);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Plane: public pmoc::MetaQQuickClass{
protected:
std::set<osg::Plane* 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_Plane();
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


#endif //osg_Plane_pmocHPP

