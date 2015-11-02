#ifndef osg_Vec3i_pmocHPP
#define  osg_Vec3i_pmocHPP 1
#include <osg/Vec3i_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Vec3i;
			} ;
#include <osg/Vec3i>

#include <MetaQQuickClass.h>
namespace osg{
class QReflect_Vec3i: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 0;}

/// inheritance simulated via composition
Vec3i * _model;
QReflect_Vec3i(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Vec3i( );
//Vec3i
// Vec3i  operator*( value_type );
// Vec3i  operator*(const  Vec3i &);
// Vec3i  operator+( value_type );
// Vec3i  operator+(const  Vec3i &);
// Vec3i  operator-( value_type );
// Vec3i  operator-(const  Vec3i &);
// Vec3i  operator/( value_type );
// bool  operator!=(const  Vec3i &);
// bool  operator<(const  Vec3i &);
// bool  operator==(const  Vec3i &);
// value_type  operator[]( unsigned int );
// value_type & operator[]( unsigned int );
Q_INVOKABLE  int  b()const;
Q_INVOKABLE  int  g()const;
Q_INVOKABLE  int  r()const;
Q_INVOKABLE  int  x()const;
Q_INVOKABLE  int  y()const;
Q_INVOKABLE  int  z()const;
Q_INVOKABLE  int&  b();
Q_INVOKABLE  int&  g();
Q_INVOKABLE  int&  r();
Q_INVOKABLE  int&  x();
Q_INVOKABLE  int&  y();
Q_INVOKABLE  int&  z();
Q_INVOKABLE  int*  ptr();
Q_INVOKABLE const  int*  ptr()const;
Q_INVOKABLE void  set( int  , int  , int );
Q_INVOKABLE void  set(osg::QReflect_Vec3i *);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Vec3i: public pmoc::MetaQQuickClass{
protected:
std::set<osg::Vec3i* 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_Vec3i();
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

#endif //osg_Vec3i_pmocHPP

