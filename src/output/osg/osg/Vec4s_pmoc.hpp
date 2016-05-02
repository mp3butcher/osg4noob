#ifndef osg_Vec4s_pmocHPP
#define  osg_Vec4s_pmocHPP 1


#include <osg/Vec4s_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Vec4s;
			} ;
#include <osg/Vec4s>

#include <MetaQQuickClass.h>
namespace osg{
class QReflect_Vec4s: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 0;}

/// inheritance simulated via composition
Vec4s * _model;
QReflect_Vec4s(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Vec4s( );
//Vec4s
// Vec4s  operator*( value_type );
// Vec4s  operator*(const  Vec4s &);
// Vec4s & operator*=( value_type );
// Vec4s  operator+(const  Vec4s &);
// Vec4s & operator+=(const  Vec4s &);
// Vec4s  operator-();
// Vec4s  operator-(const  Vec4s &);
// Vec4s & operator-=(const  Vec4s &);
// Vec4s  operator/( value_type );
// Vec4s & operator/=( value_type );
Q_INVOKABLE  bool  operator!=(osg::QReflect_Vec4s &v)const;
Q_INVOKABLE  bool  operator<(osg::QReflect_Vec4s &v)const;
Q_INVOKABLE  bool  operator==(osg::QReflect_Vec4s &v)const;
Q_INVOKABLE  short  a()const;
Q_INVOKABLE  short  b()const;
Q_INVOKABLE  short  g()const;
Q_INVOKABLE  short  operator[]( unsigned int i)const;
Q_INVOKABLE  short  r()const;
Q_INVOKABLE  short  w()const;
Q_INVOKABLE  short  x()const;
Q_INVOKABLE  short  y()const;
Q_INVOKABLE  short  z()const;
Q_INVOKABLE  short&  a();
Q_INVOKABLE  short&  b();
Q_INVOKABLE  short&  g();
Q_INVOKABLE  short&  operator[]( unsigned int i);
Q_INVOKABLE  short&  r();
Q_INVOKABLE  short&  w();
Q_INVOKABLE  short&  x();
Q_INVOKABLE  short&  y();
Q_INVOKABLE  short&  z();
Q_INVOKABLE  short*  ptr();
Q_INVOKABLE const  short*  ptr()const;
Q_INVOKABLE void  set( short x , short y , short z , short w);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Vec4s: public pmoc::MetaQQuickClass{
protected:
std::set<osg::Vec4s* 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_Vec4s();
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


#endif //osg_Vec4s_pmocHPP

