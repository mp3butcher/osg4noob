#ifndef osg_Vec3ui_pmocHPP
#define  osg_Vec3ui_pmocHPP 1
#include <osg/Vec3ui_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Vec3ui;
			} ;
#include <osg/Vec3ui>

#include <MetaQQuickClass.h>
namespace osg{
class QReflect_Vec3ui: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 0;}

/// inheritance simulated via composition
Vec3ui * _model;
QReflect_Vec3ui(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Vec3ui( );
//Vec3ui
// Vec3ui  operator*( value_type );
// Vec3ui  operator*(const  Vec3ui &);
// Vec3ui  operator+( value_type );
// Vec3ui  operator+(const  Vec3ui &);
// Vec3ui  operator-( value_type );
// Vec3ui  operator-(const  Vec3ui &);
// Vec3ui  operator/( value_type );
// bool  operator!=(const  Vec3ui &);
// bool  operator<(const  Vec3ui &);
// bool  operator==(const  Vec3ui &);
// value_type  operator[]( unsigned int );
// value_type & operator[]( unsigned int );
Q_INVOKABLE  unsigned int  b()const;
Q_INVOKABLE  unsigned int  g()const;
Q_INVOKABLE  unsigned int  r()const;
Q_INVOKABLE  unsigned int  x()const;
Q_INVOKABLE  unsigned int  y()const;
Q_INVOKABLE  unsigned int  z()const;
Q_INVOKABLE  unsigned int&  b();
Q_INVOKABLE  unsigned int&  g();
Q_INVOKABLE  unsigned int&  r();
Q_INVOKABLE  unsigned int&  x();
Q_INVOKABLE  unsigned int&  y();
Q_INVOKABLE  unsigned int&  z();
Q_INVOKABLE  unsigned int*  ptr();
Q_INVOKABLE const  unsigned int*  ptr()const;
Q_INVOKABLE void  set( unsigned int  , unsigned int  , unsigned int );
Q_INVOKABLE void  set(osg::QReflect_Vec3ui *);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Vec3ui: public pmoc::MetaQQuickClass{
protected:
std::set<osg::Vec3ui* 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_Vec3ui();
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

#endif //osg_Vec3ui_pmocHPP

