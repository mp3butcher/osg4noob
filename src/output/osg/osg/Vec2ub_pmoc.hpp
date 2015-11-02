#ifndef osg_Vec2ub_pmocHPP
#define  osg_Vec2ub_pmocHPP 1
#include <osg/Vec2ub_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Vec2ub;
			} ;
#include <osg/Vec2ub>

#include <MetaQQuickClass.h>
namespace osg{
class QReflect_Vec2ub: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 0;}

/// inheritance simulated via composition
Vec2ub * _model;
QReflect_Vec2ub(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Vec2ub( );
//Vec2ub
// Vec2ub  operator*( float );
// Vec2ub & operator*=( float );
// Vec2ub  operator+(const  Vec2ub &);
// Vec2ub & operator+=(const  Vec2ub &);
// Vec2ub  operator-(const  Vec2ub &);
// Vec2ub & operator-=(const  Vec2ub &);
// Vec2ub  operator/( float );
// Vec2ub & operator/=( float );
// bool  operator!=(const  Vec2ub &);
// bool  operator<(const  Vec2ub &);
// bool  operator==(const  Vec2ub &);
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
Q_INVOKABLE void  set(osg::QReflect_Vec2ub *);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Vec2ub: public pmoc::MetaQQuickClass{
protected:
std::set<osg::Vec2ub* 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_Vec2ub();
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

#endif //osg_Vec2ub_pmocHPP

