#ifndef osg_Vec4f_pmocHPP
#define  osg_Vec4f_pmocHPP 1
#include <osg/Vec4f_pmoc.hpp>
#include <QObject>
#include <osg/Vec4f>

#include <MetaQQuickClass.h>
namespace osg{
class QReflect_Vec4f: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 0;}

/// inheritance simulated via composition
Vec4f * _model;
QReflect_Vec4f(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Vec4f( );
//Vec4f
// Vec4f  operator*( value_type );
// Vec4f & operator*=( value_type );
// Vec4f  operator+(const  Vec4f &);
// Vec4f & operator+=(const  Vec4f &);
// Vec4f  operator-(const  Vec4f &);
// Vec4f & operator-=(const  Vec4f &);
// Vec4f  operator/( value_type );
// Vec4f & operator/=( value_type );
// bool  operator!=(const  Vec4f &);
// bool  operator<(const  Vec4f &);
// bool  operator==(const  Vec4f &);
// value_type  operator*(const  Vec4f &);
// value_type  operator[]( unsigned int );
// value_type & operator[]( unsigned int );
//const  Vec4f  operator-();
Q_INVOKABLE  bool  isNaN()const;
Q_INVOKABLE  bool  valid()const;
Q_INVOKABLE  float  a()const;
Q_INVOKABLE  float  b()const;
Q_INVOKABLE  float  g()const;
Q_INVOKABLE  float  length()const;
Q_INVOKABLE  float  length2()const;
Q_INVOKABLE  float  normalize();
Q_INVOKABLE  float  r()const;
Q_INVOKABLE  float  w()const;
Q_INVOKABLE  float  x()const;
Q_INVOKABLE  float  y()const;
Q_INVOKABLE  float  z()const;
Q_INVOKABLE  float&  a();
Q_INVOKABLE  float&  b();
Q_INVOKABLE  float&  g();
Q_INVOKABLE  float&  r();
Q_INVOKABLE  float&  w();
Q_INVOKABLE  float&  x();
Q_INVOKABLE  float&  y();
Q_INVOKABLE  float&  z();
Q_INVOKABLE  float*  ptr();
Q_INVOKABLE  unsigned int  asABGR()const;
Q_INVOKABLE  unsigned int  asRGBA()const;
Q_INVOKABLE const  float*  ptr()const;
Q_INVOKABLE void  set( float  , float  , float  , float );
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Vec4f: public pmoc::MetaQQuickClass{
protected:
std::set<osg::Vec4f* 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_Vec4f();
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

#endif //osg_Vec4f_pmocHPP

