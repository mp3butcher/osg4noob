#ifndef osg_Vec3s_pmocHPP
#define  osg_Vec3s_pmocHPP 1


#include <osg/Vec3s_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Vec3s;
			} ;
#include <osg/Vec3s>

#include <MetaQQuickClass.h>
namespace osg{
class QReflect_Vec3s: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 0;}

/// inheritance simulated via composition
Vec3s * _model;
QReflect_Vec3s(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Vec3s( );
//Vec3s
// Vec3s  operator*( value_type );
// Vec3s  operator*(const  Vec3s &);
// Vec3s & operator*=( value_type );
// Vec3s  operator+(const  Vec3s &);
// Vec3s & operator+=(const  Vec3s &);
// Vec3s  operator-();
// Vec3s  operator-(const  Vec3s &);
// Vec3s & operator-=(const  Vec3s &);
// Vec3s  operator/( value_type );
// Vec3s & operator/=( value_type );
Q_INVOKABLE  bool  operator!=(osg::QReflect_Vec3s &v)const;
Q_INVOKABLE  bool  operator<(osg::QReflect_Vec3s &v)const;
Q_INVOKABLE  bool  operator==(osg::QReflect_Vec3s &v)const;
Q_INVOKABLE  short  b()const;
Q_INVOKABLE  short  g()const;
Q_INVOKABLE  short  operator[]( unsigned int i)const;
Q_INVOKABLE  short  r()const;
Q_INVOKABLE  short  x()const;
Q_INVOKABLE  short  y()const;
Q_INVOKABLE  short  z()const;
Q_INVOKABLE  short&  b();
Q_INVOKABLE  short&  g();
Q_INVOKABLE  short&  operator[]( unsigned int i);
Q_INVOKABLE  short&  r();
Q_INVOKABLE  short&  x();
Q_INVOKABLE  short&  y();
Q_INVOKABLE  short&  z();
Q_INVOKABLE  short*  ptr();
Q_INVOKABLE const  short*  ptr()const;
Q_INVOKABLE void  set( short r , short g , short b);
Q_INVOKABLE void  set(osg::QReflect_Vec3s *rhs);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Vec3s: public pmoc::MetaQQuickClass{
protected:
std::set<osg::Vec3s* 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_Vec3s();
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


#endif //osg_Vec3s_pmocHPP

