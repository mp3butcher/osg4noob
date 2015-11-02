#ifndef osg_Vec2i_pmocHPP
#define  osg_Vec2i_pmocHPP 1
#include <osg/Vec2i_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Vec2i;
			} ;
#include <osg/Vec2i>

#include <MetaQQuickClass.h>
namespace osg{
class QReflect_Vec2i: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 0;}

/// inheritance simulated via composition
Vec2i * _model;
QReflect_Vec2i(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Vec2i( );
//Vec2i
// Vec2i  operator*( value_type );
// Vec2i  operator*(const  Vec2i &);
// Vec2i  operator+( value_type );
// Vec2i  operator+(const  Vec2i &);
// Vec2i  operator-( value_type );
// Vec2i  operator-(const  Vec2i &);
// Vec2i  operator/( value_type );
// bool  operator!=(const  Vec2i &);
// bool  operator<(const  Vec2i &);
// bool  operator==(const  Vec2i &);
// value_type  operator[]( int );
// value_type & operator[]( int );
Q_INVOKABLE  int  g()const;
Q_INVOKABLE  int  r()const;
Q_INVOKABLE  int  x()const;
Q_INVOKABLE  int  y()const;
Q_INVOKABLE  int&  g();
Q_INVOKABLE  int&  r();
Q_INVOKABLE  int&  x();
Q_INVOKABLE  int&  y();
Q_INVOKABLE  int*  ptr();
Q_INVOKABLE const  int*  ptr()const;
Q_INVOKABLE void  set( int  , int );
Q_INVOKABLE void  set(osg::QReflect_Vec2i *);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Vec2i: public pmoc::MetaQQuickClass{
protected:
std::set<osg::Vec2i* 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_Vec2i();
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

#endif //osg_Vec2i_pmocHPP

