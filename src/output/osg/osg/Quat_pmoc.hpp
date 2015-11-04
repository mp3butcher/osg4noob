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
class QReflect_Vec4d;
			} ;
namespace osg{ 
class QReflect_Vec3d;
			} ;
namespace osg{ 
class QReflect_Quat;
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
QReflect_Quat(pmoc::Instance *i=0,QObject* parent=0);
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
// bool  operator!=(const  Quat &);
// bool  operator<(const  Quat &);
// bool  operator==(const  Quat &);
// value_type  operator[]( int );
// value_type & operator[]( int );
// void  get( Matrixd &);
// void  get( Matrixf &);
// void  getRotate( value_type & , Vec3d &);
// void  getRotate( value_type & , Vec3f &);
// void  getRotate( value_type & , value_type & , value_type & , value_type &);
// void  set(const  Matrixd &);
// void  set(const  Matrixf &);
//const  Quat  inverse();
//const  Quat  operator*( value_type );
//const  Quat  operator*(const  Quat &);
//const  Quat  operator+(const  Quat &);
//const  Quat  operator-();
//const  Quat  operator-(const  Quat &);
//const  Quat  operator/(const  Quat &);
Q_INVOKABLE  bool  zeroRotation()const;
Q_INVOKABLE  double  length()const;
Q_INVOKABLE  double  length2()const;
Q_INVOKABLE  double  w()const;
Q_INVOKABLE  double  x()const;
Q_INVOKABLE  double  y()const;
Q_INVOKABLE  double  z()const;
Q_INVOKABLE  double&  w();
Q_INVOKABLE  double&  x();
Q_INVOKABLE  double&  y();
Q_INVOKABLE  double&  z();
Q_INVOKABLE void  makeRotate( double  , double  , double  , double );
Q_INVOKABLE void  makeRotate( double  ,osg::QReflect_Vec3d * , double  ,osg::QReflect_Vec3d * , double  ,osg::QReflect_Vec3d *);
Q_INVOKABLE void  makeRotate( double  ,osg::QReflect_Vec3d *);
Q_INVOKABLE void  makeRotate( double  ,osg::QReflect_Vec3f * , double  ,osg::QReflect_Vec3f * , double  ,osg::QReflect_Vec3f *);
Q_INVOKABLE void  makeRotate( double  ,osg::QReflect_Vec3f *);
Q_INVOKABLE void  makeRotate(osg::QReflect_Vec3d * ,osg::QReflect_Vec3d *);
Q_INVOKABLE void  makeRotate(osg::QReflect_Vec3f * ,osg::QReflect_Vec3f *);
Q_INVOKABLE void  makeRotate_original(osg::QReflect_Vec3d * ,osg::QReflect_Vec3d *);
Q_INVOKABLE void  set( double  , double  , double  , double );
Q_INVOKABLE void  set(osg::QReflect_Vec4d *);
Q_INVOKABLE void  set(osg::QReflect_Vec4f *);
Q_INVOKABLE void  slerp( double  ,osg::QReflect_Quat * ,osg::QReflect_Quat *);
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

#endif //osg_Quat_pmocHPP

