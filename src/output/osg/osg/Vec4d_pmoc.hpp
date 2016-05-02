#ifndef osg_Vec4d_pmocHPP
#define  osg_Vec4d_pmocHPP 1


#include <osg/Vec4d_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Vec4d;
			} ;
#include <osg/Vec4d>

#include <MetaQQuickClass.h>
namespace osg{
class QReflect_Vec4d: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 0;}

/// inheritance simulated via composition
Vec4d * _model;
QReflect_Vec4d(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Vec4d( );
//Vec4d
// Vec4d  operator*( value_type );
// Vec4d & operator*=( value_type );
// Vec4d  operator+(const  Vec4d &);
// Vec4d & operator+=(const  Vec4d &);
// Vec4d  operator-(const  Vec4d &);
// Vec4d & operator-=(const  Vec4d &);
// Vec4d  operator/( value_type );
// Vec4d & operator/=( value_type );
//const  Vec4d  operator-();
Q_INVOKABLE  bool  isNaN()const;
Q_INVOKABLE  bool  operator!=(osg::QReflect_Vec4d &v)const;
Q_INVOKABLE  bool  operator<(osg::QReflect_Vec4d &v)const;
Q_INVOKABLE  bool  operator==(osg::QReflect_Vec4d &v)const;
Q_INVOKABLE  bool  valid()const;
Q_INVOKABLE  double  a()const;
Q_INVOKABLE  double  b()const;
Q_INVOKABLE  double  g()const;
Q_INVOKABLE  double  length()const;
Q_INVOKABLE  double  length2()const;
Q_INVOKABLE  double  normalize();
Q_INVOKABLE  double  operator*(osg::QReflect_Vec4d &rhs)const;
Q_INVOKABLE  double  operator[]( unsigned int i)const;
Q_INVOKABLE  double  r()const;
Q_INVOKABLE  double  w()const;
Q_INVOKABLE  double  x()const;
Q_INVOKABLE  double  y()const;
Q_INVOKABLE  double  z()const;
Q_INVOKABLE  double&  a();
Q_INVOKABLE  double&  b();
Q_INVOKABLE  double&  g();
Q_INVOKABLE  double&  operator[]( unsigned int i);
Q_INVOKABLE  double&  r();
Q_INVOKABLE  double&  w();
Q_INVOKABLE  double&  x();
Q_INVOKABLE  double&  y();
Q_INVOKABLE  double&  z();
Q_INVOKABLE  double*  ptr();
Q_INVOKABLE  unsigned int  asABGR()const;
Q_INVOKABLE  unsigned int  asRGBA()const;
Q_INVOKABLE const  double*  ptr()const;
Q_INVOKABLE void  set( double x , double y , double z , double w);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Vec4d: public pmoc::MetaQQuickClass{
protected:
std::set<osg::Vec4d* 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_Vec4d();
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


#endif //osg_Vec4d_pmocHPP

