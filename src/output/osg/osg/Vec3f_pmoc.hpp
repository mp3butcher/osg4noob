#ifndef osg_Vec3f_pmocHPP
#define  osg_Vec3f_pmocHPP 1
#include <osg/Vec3f_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Vec3f;
			} ;
#include <osg/Vec3f>

#include <MetaQQuickClass.h>
namespace osg{
class QReflect_Vec3f: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 0;}

/// inheritance simulated via composition
Vec3f * _model;
QReflect_Vec3f(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Vec3f( );
//Vec3f
// Vec3f & operator*=( value_type );
// Vec3f & operator+=(const  Vec3f &);
// Vec3f & operator-=(const  Vec3f &);
// Vec3f & operator/=( value_type );
// bool  operator!=(const  Vec3f &);
// bool  operator<(const  Vec3f &);
// bool  operator==(const  Vec3f &);
// value_type  operator*(const  Vec3f &);
// value_type  operator[]( int );
// value_type & operator[]( int );
//const  Vec3f  operator*( value_type );
//const  Vec3f  operator+(const  Vec3f &);
//const  Vec3f  operator-();
//const  Vec3f  operator-(const  Vec3f &);
//const  Vec3f  operator/( value_type );
//const  Vec3f  operator^(const  Vec3f &);
Q_INVOKABLE  bool  isNaN()const;
Q_INVOKABLE  bool  valid()const;
Q_INVOKABLE  float  length()const;
Q_INVOKABLE  float  length2()const;
Q_INVOKABLE  float  normalize();
Q_INVOKABLE  float  x()const;
Q_INVOKABLE  float  y()const;
Q_INVOKABLE  float  z()const;
Q_INVOKABLE  float&  x();
Q_INVOKABLE  float&  y();
Q_INVOKABLE  float&  z();
Q_INVOKABLE  float*  ptr();
Q_INVOKABLE const  float*  ptr()const;
Q_INVOKABLE void  set( float  , float  , float );
Q_INVOKABLE void  set(osg::QReflect_Vec3f *);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Vec3f: public pmoc::MetaQQuickClass{
protected:
std::set<osg::Vec3f* 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_Vec3f();
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

#endif //osg_Vec3f_pmocHPP

