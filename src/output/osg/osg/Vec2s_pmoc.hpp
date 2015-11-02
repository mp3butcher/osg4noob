#ifndef osg_Vec2s_pmocHPP
#define  osg_Vec2s_pmocHPP 1
#include <osg/Vec2s_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Vec2s;
			} ;
#include <osg/Vec2s>

#include <MetaQQuickClass.h>
namespace osg{
class QReflect_Vec2s: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 0;}

/// inheritance simulated via composition
Vec2s * _model;
QReflect_Vec2s(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Vec2s( );
//Vec2s
// Vec2s  operator*( value_type );
// Vec2s  operator*(const  Vec2s &);
// Vec2s & operator*=( value_type );
// Vec2s  operator+(const  Vec2s &);
// Vec2s & operator+=(const  Vec2s &);
// Vec2s  operator-();
// Vec2s  operator-(const  Vec2s &);
// Vec2s & operator-=(const  Vec2s &);
// Vec2s  operator/( value_type );
// Vec2s & operator/=( value_type );
// bool  operator!=(const  Vec2s &);
// bool  operator<(const  Vec2s &);
// bool  operator==(const  Vec2s &);
// value_type  operator[]( int );
// value_type & operator[]( int );
Q_INVOKABLE  short  g()const;
Q_INVOKABLE  short  r()const;
Q_INVOKABLE  short  x()const;
Q_INVOKABLE  short  y()const;
Q_INVOKABLE  short&  g();
Q_INVOKABLE  short&  r();
Q_INVOKABLE  short&  x();
Q_INVOKABLE  short&  y();
Q_INVOKABLE  short*  ptr();
Q_INVOKABLE const  short*  ptr()const;
Q_INVOKABLE void  set( short  , short );
Q_INVOKABLE void  set(osg::QReflect_Vec2s *);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Vec2s: public pmoc::MetaQQuickClass{
protected:
std::set<osg::Vec2s* 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_Vec2s();
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

#endif //osg_Vec2s_pmocHPP

