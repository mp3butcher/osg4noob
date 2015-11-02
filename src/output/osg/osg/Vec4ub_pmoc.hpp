#ifndef osg_Vec4ub_pmocHPP
#define  osg_Vec4ub_pmocHPP 1
#include <osg/Vec4ub_pmoc.hpp>
#include <QObject>
#include <osg/Vec4ub>

#include <MetaQQuickClass.h>
namespace osg{
class QReflect_Vec4ub: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 0;}

/// inheritance simulated via composition
Vec4ub * _model;
QReflect_Vec4ub(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Vec4ub( );
//Vec4ub
// Vec4ub  operator*( float );
// Vec4ub & operator*=( float );
// Vec4ub  operator+(const  Vec4ub &);
// Vec4ub & operator+=(const  Vec4ub &);
// Vec4ub  operator-(const  Vec4ub &);
// Vec4ub & operator-=(const  Vec4ub &);
// Vec4ub  operator/( float );
// Vec4ub & operator/=( float );
// bool  operator!=(const  Vec4ub &);
// bool  operator<(const  Vec4ub &);
// bool  operator==(const  Vec4ub &);
// value_type  a();
// value_type & a();
// value_type  b();
// value_type & b();
// value_type  g();
// value_type & g();
// value_type  operator[]( unsigned int );
// value_type & operator[]( unsigned int );
// value_type * ptr();
// value_type  r();
// value_type & r();
// void  set( value_type  , value_type  , value_type  , value_type );
//const  value_type * ptr();
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Vec4ub: public pmoc::MetaQQuickClass{
protected:
std::set<osg::Vec4ub* 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_Vec4ub();
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

#endif //osg_Vec4ub_pmocHPP

