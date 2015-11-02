#ifndef osg_Vec3ub_pmocHPP
#define  osg_Vec3ub_pmocHPP 1
#include <osg/Vec3ub_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Vec3ub;
			} ;
#include <osg/Vec3ub>

#include <MetaQQuickClass.h>
namespace osg{
class QReflect_Vec3ub: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 0;}

/// inheritance simulated via composition
Vec3ub * _model;
QReflect_Vec3ub(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Vec3ub( );
//Vec3ub
// Vec3ub  operator*( float );
// Vec3ub & operator*=( float );
// Vec3ub  operator+(const  Vec3ub &);
// Vec3ub & operator+=(const  Vec3ub &);
// Vec3ub  operator-(const  Vec3ub &);
// Vec3ub & operator-=(const  Vec3ub &);
// Vec3ub  operator/( float );
// Vec3ub & operator/=( float );
// bool  operator!=(const  Vec3ub &);
// bool  operator<(const  Vec3ub &);
// bool  operator==(const  Vec3ub &);
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
Q_INVOKABLE void  set(osg::QReflect_Vec3ub *);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Vec3ub: public pmoc::MetaQQuickClass{
protected:
std::set<osg::Vec3ub* 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_Vec3ub();
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

#endif //osg_Vec3ub_pmocHPP

