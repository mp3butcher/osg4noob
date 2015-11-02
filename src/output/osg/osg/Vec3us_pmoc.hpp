#ifndef osg_Vec3us_pmocHPP
#define  osg_Vec3us_pmocHPP 1
#include <osg/Vec3us_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Vec3us;
			} ;
#include <osg/Vec3us>

#include <MetaQQuickClass.h>
namespace osg{
class QReflect_Vec3us: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 0;}

/// inheritance simulated via composition
Vec3us * _model;
QReflect_Vec3us(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Vec3us( );
//Vec3us
// Vec3us  operator*( value_type );
// Vec3us  operator*(const  Vec3us &);
// Vec3us & operator*=( value_type );
// Vec3us  operator+(const  Vec3us &);
// Vec3us & operator+=(const  Vec3us &);
// Vec3us  operator-(const  Vec3us &);
// Vec3us & operator-=(const  Vec3us &);
// Vec3us  operator/( value_type );
// Vec3us & operator/=( value_type );
// bool  operator!=(const  Vec3us &);
// bool  operator<(const  Vec3us &);
// bool  operator==(const  Vec3us &);
// value_type  b();
// value_type & b();
// value_type  g();
// value_type & g();
// value_type  operator[]( unsigned int );
// value_type & operator[]( unsigned int );
// value_type * ptr();
// value_type  r();
// value_type & r();
// value_type  x();
// value_type & x();
// value_type  y();
// value_type & y();
// value_type  z();
// value_type & z();
// void  set( value_type  , value_type  , value_type );
//const  value_type * ptr();
Q_INVOKABLE void  set(osg::QReflect_Vec3us *);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Vec3us: public pmoc::MetaQQuickClass{
protected:
std::set<osg::Vec3us* 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_Vec3us();
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

#endif //osg_Vec3us_pmocHPP

