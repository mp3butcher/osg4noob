#ifndef osg_Vec2d_pmocHPP
#define  osg_Vec2d_pmocHPP 1


#include <osg/Vec2d_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Vec2d;
			} ;
#include <osg/Vec2d>

#include <MetaQQuickClass.h>
namespace osg{
class QReflect_Vec2d: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 0;}

/// inheritance simulated via composition
Vec2d * _model;
QReflect_Vec2d(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Vec2d( );
//Vec2d
// Vec2d & operator*=( value_type );
// Vec2d & operator+=(const  Vec2d &);
// Vec2d & operator-=(const  Vec2d &);
// Vec2d & operator/=( value_type );
//const  Vec2d  operator*( value_type );
//const  Vec2d  operator+(const  Vec2d &);
//const  Vec2d  operator-();
//const  Vec2d  operator-(const  Vec2d &);
//const  Vec2d  operator/( value_type );
Q_INVOKABLE  bool  isNaN()const;
Q_INVOKABLE  bool  operator!=(osg::QReflect_Vec2d &v)const;
Q_INVOKABLE  bool  operator<(osg::QReflect_Vec2d &v)const;
Q_INVOKABLE  bool  operator==(osg::QReflect_Vec2d &v)const;
Q_INVOKABLE  bool  valid()const;
Q_INVOKABLE  double  length()const;
Q_INVOKABLE  double  length2()const;
Q_INVOKABLE  double  normalize();
Q_INVOKABLE  double  operator*(osg::QReflect_Vec2d &rhs)const;
Q_INVOKABLE  double  operator[]( int i)const;
Q_INVOKABLE  double  x()const;
Q_INVOKABLE  double  y()const;
Q_INVOKABLE  double&  operator[]( int i);
Q_INVOKABLE  double&  x();
Q_INVOKABLE  double&  y();
Q_INVOKABLE  double*  ptr();
Q_INVOKABLE const  double*  ptr()const;
Q_INVOKABLE void  set( double x , double y);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Vec2d: public pmoc::MetaQQuickClass{
protected:
std::set<osg::Vec2d* 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_Vec2d();
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


#endif //osg_Vec2d_pmocHPP

