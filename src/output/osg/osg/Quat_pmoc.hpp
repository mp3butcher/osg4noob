#ifndef osg_Quat_pmocHPP
#define  osg_Quat_pmocHPP 1


#include <osg/Quat_pmoc.hpp>
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
class QReflect_Matrixf;
			} ;
namespace osg{ 
class QReflect_Matrixd;
			} ;
namespace osg{ 
class QReflect_Quat;
			} ;
namespace osg{ 
class QReflect_Vec4d;
			} ;
#include <osg/Quat>

#include <MetaQQuickClass.h>
namespace osg{
class QReflect_Quat: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 0;}

/// inheritance simulated via composition
Quat * _model;
QReflect_Quat(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Quat( );
//Quat
// Quat  conj();
// Quat & operator*=( value_type );
// Quat & operator*=(const  Quat &);
// Quat & operator+=(const  Quat &);
// Quat & operator-=(const  Quat &);
// Quat  operator/( value_type );
// Quat & operator/=( value_type );
// Quat & operator/=(const  Quat &);
// Quat & operator=(const  Quat &);
// Vec3d  asVec3();
// Vec3d  operator*(const  Vec3d &);
// Vec3f  operator*(const  Vec3f &);
// Vec4d  asVec4();
//const  Quat  inverse();
//const  Quat  operator*( value_type );
//const  Quat  operator*(const  Quat &);
//const  Quat  operator+(const  Quat &);
//const  Quat  operator-();
//const  Quat  operator-(const  Quat &);
//const  Quat  operator/(const  Quat &);
Q_INVOKABLE  bool  operator!=(osg::QReflect_Quat &v)const;
Q_INVOKABLE  bool  operator<(osg::QReflect_Quat &v)const;
Q_INVOKABLE  bool  operator==(osg::QReflect_Quat &v)const;
Q_INVOKABLE  bool  zeroRotation()const;
Q_INVOKABLE  double  length()const;
Q_INVOKABLE  double  length2()const;
Q_INVOKABLE  double  operator[]( int i)const;
Q_INVOKABLE  double  w()const;
Q_INVOKABLE  double  x()const;
Q_INVOKABLE  double  y()const;
Q_INVOKABLE  double  z()const;
Q_INVOKABLE  double&  operator[]( int i);
Q_INVOKABLE  double&  w();
Q_INVOKABLE  double&  x();
Q_INVOKABLE  double&  y();
Q_INVOKABLE  double&  z();
Q_INVOKABLE void  get(osg::QReflect_Matrixd *matrix)const;
Q_INVOKABLE void  get(osg::QReflect_Matrixf *matrix)const;
Q_INVOKABLE void  getRotate( double &angle , double &x , double &y , double &z)const;
Q_INVOKABLE void  getRotate( double &angle ,osg::QReflect_Vec3d *vec)const;
Q_INVOKABLE void  getRotate( double &angle ,osg::QReflect_Vec3f *vec)const;
Q_INVOKABLE void  makeRotate( double angle , double x , double y , double z);
Q_INVOKABLE void  makeRotate( double angle ,osg::QReflect_Vec3d *vec);
Q_INVOKABLE void  makeRotate( double angle ,osg::QReflect_Vec3f *vec);
Q_INVOKABLE void  makeRotate( double angle1 ,osg::QReflect_Vec3d *axis1 , double angle2 ,osg::QReflect_Vec3d *axis2 , double angle3 ,osg::QReflect_Vec3d *axis3);
Q_INVOKABLE void  makeRotate( double angle1 ,osg::QReflect_Vec3f *axis1 , double angle2 ,osg::QReflect_Vec3f *axis2 , double angle3 ,osg::QReflect_Vec3f *axis3);
Q_INVOKABLE void  makeRotate(osg::QReflect_Vec3d *vec1 ,osg::QReflect_Vec3d *vec2);
Q_INVOKABLE void  makeRotate(osg::QReflect_Vec3f *vec1 ,osg::QReflect_Vec3f *vec2);
Q_INVOKABLE void  makeRotate_original(osg::QReflect_Vec3d *vec1 ,osg::QReflect_Vec3d *vec2);
Q_INVOKABLE void  set( double x , double y , double z , double w);
Q_INVOKABLE void  set(osg::QReflect_Matrixd *matrix);
Q_INVOKABLE void  set(osg::QReflect_Matrixf *matrix);
Q_INVOKABLE void  set(osg::QReflect_Vec4d *v);
Q_INVOKABLE void  set(osg::QReflect_Vec4f *v);
Q_INVOKABLE void  slerp( double t ,osg::QReflect_Quat *from ,osg::QReflect_Quat *to);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Quat: public pmoc::MetaQQuickClass{
protected:
std::set<osg::Quat* 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_Quat();
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


#endif //osg_Quat_pmocHPP

