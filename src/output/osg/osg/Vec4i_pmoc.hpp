#ifndef osg_Vec4i_pmocHPP
#define  osg_Vec4i_pmocHPP 1
#include <osg/Vec4i_pmoc.hpp>
#include <QObject>
#include <osg/Vec4i>

#include <MetaQQuickClass.h>
namespace osg{
class QReflect_Vec4i: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 0;}

/// inheritance simulated via composition
Vec4i * _model;
QReflect_Vec4i(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Vec4i( );
//Vec4i
// Vec4i  operator*( value_type );
// Vec4i  operator*(const  Vec4i &);
// Vec4i  operator+( value_type );
// Vec4i  operator+(const  Vec4i &);
// Vec4i  operator-( value_type );
// Vec4i  operator-(const  Vec4i &);
// Vec4i  operator/( value_type );
// bool  operator!=(const  Vec4i &);
// bool  operator<(const  Vec4i &);
// bool  operator==(const  Vec4i &);
// value_type  operator[]( unsigned int );
// value_type & operator[]( unsigned int );
Q_INVOKABLE  int  a()const;
Q_INVOKABLE  int  b()const;
Q_INVOKABLE  int  g()const;
Q_INVOKABLE  int  r()const;
Q_INVOKABLE  int  w()const;
Q_INVOKABLE  int  x()const;
Q_INVOKABLE  int  y()const;
Q_INVOKABLE  int  z()const;
Q_INVOKABLE  int&  a();
Q_INVOKABLE  int&  b();
Q_INVOKABLE  int&  g();
Q_INVOKABLE  int&  r();
Q_INVOKABLE  int&  w();
Q_INVOKABLE  int&  x();
Q_INVOKABLE  int&  y();
Q_INVOKABLE  int&  z();
Q_INVOKABLE  int*  ptr();
Q_INVOKABLE const  int*  ptr()const;
Q_INVOKABLE void  set( int  , int  , int  , int );
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Vec4i: public pmoc::MetaQQuickClass{
protected:
std::set<osg::Vec4i* 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_Vec4i();
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

#endif //osg_Vec4i_pmocHPP

