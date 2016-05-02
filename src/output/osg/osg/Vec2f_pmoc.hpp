#ifndef osg_Vec2f_pmocHPP
#define  osg_Vec2f_pmocHPP 1


#include <osg/Vec2f_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Vec2f;
			} ;
#include <osg/Vec2f>

#include <MetaQQuickClass.h>
namespace osg{
class QReflect_Vec2f: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 0;}

/// inheritance simulated via composition
Vec2f * _model;
QReflect_Vec2f(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Vec2f( );
//Vec2f
// Vec2f & operator*=( value_type );
// Vec2f & operator+=(const  Vec2f &);
// Vec2f & operator-=(const  Vec2f &);
// Vec2f & operator/=( value_type );
//const  Vec2f  operator*( value_type );
//const  Vec2f  operator+(const  Vec2f &);
//const  Vec2f  operator-();
//const  Vec2f  operator-(const  Vec2f &);
//const  Vec2f  operator/( value_type );
Q_INVOKABLE  bool  isNaN()const;
Q_INVOKABLE  bool  operator!=(osg::QReflect_Vec2f &v)const;
Q_INVOKABLE  bool  operator<(osg::QReflect_Vec2f &v)const;
Q_INVOKABLE  bool  operator==(osg::QReflect_Vec2f &v)const;
Q_INVOKABLE  bool  valid()const;
Q_INVOKABLE  float  length()const;
Q_INVOKABLE  float  length2()const;
Q_INVOKABLE  float  normalize();
Q_INVOKABLE  float  operator*(osg::QReflect_Vec2f &rhs)const;
Q_INVOKABLE  float  operator[]( int i)const;
Q_INVOKABLE  float  x()const;
Q_INVOKABLE  float  y()const;
Q_INVOKABLE  float&  operator[]( int i);
Q_INVOKABLE  float&  x();
Q_INVOKABLE  float&  y();
Q_INVOKABLE  float*  ptr();
Q_INVOKABLE const  float*  ptr()const;
Q_INVOKABLE void  set( float x , float y);
Q_INVOKABLE void  set(osg::QReflect_Vec2f *rhs);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Vec2f: public pmoc::MetaQQuickClass{
protected:
std::set<osg::Vec2f* 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_Vec2f();
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


#endif //osg_Vec2f_pmocHPP

