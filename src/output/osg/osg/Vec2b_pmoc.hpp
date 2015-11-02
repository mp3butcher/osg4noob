#ifndef osg_Vec2b_pmocHPP
#define  osg_Vec2b_pmocHPP 1
#include <osg/Vec2b_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Vec2b;
			} ;
#include <osg/Vec2b>

#include <MetaQQuickClass.h>
namespace osg{
class QReflect_Vec2b: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 0;}

/// inheritance simulated via composition
Vec2b * _model;
QReflect_Vec2b(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Vec2b( );
//Vec2b
// Vec2b  operator*( float );
// Vec2b & operator*=( float );
// Vec2b  operator+(const  Vec2b &);
// Vec2b & operator+=(const  Vec2b &);
// Vec2b  operator-(const  Vec2b &);
// Vec2b & operator-=(const  Vec2b &);
// Vec2b  operator/( float );
// Vec2b & operator/=( float );
// bool  operator!=(const  Vec2b &);
// bool  operator<(const  Vec2b &);
// bool  operator==(const  Vec2b &);
// value_type  g();
// value_type & g();
// value_type  operator[]( int );
// value_type & operator[]( int );
// value_type * ptr();
// value_type  r();
// value_type & r();
// value_type  x();
// value_type & x();
// value_type  y();
// value_type & y();
// void  set( value_type  , value_type );
//const  value_type * ptr();
Q_INVOKABLE void  set(osg::QReflect_Vec2b *);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Vec2b: public pmoc::MetaQQuickClass{
protected:
std::set<osg::Vec2b* 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_Vec2b();
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

#endif //osg_Vec2b_pmocHPP

