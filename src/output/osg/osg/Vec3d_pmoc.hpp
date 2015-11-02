#ifndef osg_Vec3d_pmocHPP
#define  osg_Vec3d_pmocHPP 1
#include <osg/Vec3d_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Vec3d;
			} ;
#include <osg/Vec3d>

#include <MetaQQuickClass.h>
namespace osg{
class QReflect_Vec3d: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 0;}

/// inheritance simulated via composition
Vec3d * _model;
QReflect_Vec3d(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Vec3d( );
//Vec3d
// Vec3d & operator*=( value_type );
// Vec3d & operator+=(const  Vec3d &);
// Vec3d & operator-=(const  Vec3d &);
// Vec3d & operator/=( value_type );
// bool  operator!=(const  Vec3d &);
// bool  operator<(const  Vec3d &);
// bool  operator==(const  Vec3d &);
// value_type  operator*(const  Vec3d &);
// value_type  operator[]( int );
// value_type & operator[]( int );
//const  Vec3d  operator*( value_type );
//const  Vec3d  operator+(const  Vec3d &);
//const  Vec3d  operator-();
//const  Vec3d  operator-(const  Vec3d &);
//const  Vec3d  operator/( value_type );
//const  Vec3d  operator^(const  Vec3d &);
Q_INVOKABLE  bool  isNaN()const;
Q_INVOKABLE  bool  valid()const;
Q_INVOKABLE  double  length()const;
Q_INVOKABLE  double  length2()const;
Q_INVOKABLE  double  normalize();
Q_INVOKABLE  double  x()const;
Q_INVOKABLE  double  y()const;
Q_INVOKABLE  double  z()const;
Q_INVOKABLE  double&  x();
Q_INVOKABLE  double&  y();
Q_INVOKABLE  double&  z();
Q_INVOKABLE  double*  ptr();
Q_INVOKABLE const  double*  ptr()const;
Q_INVOKABLE void  set( double  , double  , double );
Q_INVOKABLE void  set(osg::QReflect_Vec3d *);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Vec3d: public pmoc::MetaQQuickClass{
protected:
std::set<osg::Vec3d* 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_Vec3d();
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

#endif //osg_Vec3d_pmocHPP

