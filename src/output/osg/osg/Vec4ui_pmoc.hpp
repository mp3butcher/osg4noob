#ifndef osg_Vec4ui_pmocHPP
#define  osg_Vec4ui_pmocHPP 1


#include <osg/Vec4ui_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Vec4ui;
			} ;
#include <osg/Vec4ui>

#include <MetaQQuickClass.h>
namespace osg{
class QReflect_Vec4ui: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 0;}

/// inheritance simulated via composition
Vec4ui * _model;
QReflect_Vec4ui(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Vec4ui( );
//Vec4ui
// Vec4ui  operator*( value_type );
// Vec4ui  operator*(const  Vec4ui &);
// Vec4ui  operator+( value_type );
// Vec4ui  operator+(const  Vec4ui &);
// Vec4ui  operator-( value_type );
// Vec4ui  operator-(const  Vec4ui &);
// Vec4ui  operator/( value_type );
Q_INVOKABLE  bool  operator!=(osg::QReflect_Vec4ui &v)const;
Q_INVOKABLE  bool  operator<(osg::QReflect_Vec4ui &v)const;
Q_INVOKABLE  bool  operator==(osg::QReflect_Vec4ui &v)const;
Q_INVOKABLE  unsigned int  a()const;
Q_INVOKABLE  unsigned int  b()const;
Q_INVOKABLE  unsigned int  g()const;
Q_INVOKABLE  unsigned int  operator[]( unsigned int i)const;
Q_INVOKABLE  unsigned int  r()const;
Q_INVOKABLE  unsigned int  w()const;
Q_INVOKABLE  unsigned int  x()const;
Q_INVOKABLE  unsigned int  y()const;
Q_INVOKABLE  unsigned int  z()const;
Q_INVOKABLE  unsigned int&  a();
Q_INVOKABLE  unsigned int&  b();
Q_INVOKABLE  unsigned int&  g();
Q_INVOKABLE  unsigned int&  operator[]( unsigned int i);
Q_INVOKABLE  unsigned int&  r();
Q_INVOKABLE  unsigned int&  w();
Q_INVOKABLE  unsigned int&  x();
Q_INVOKABLE  unsigned int&  y();
Q_INVOKABLE  unsigned int&  z();
Q_INVOKABLE  unsigned int*  ptr();
Q_INVOKABLE const  unsigned int*  ptr()const;
Q_INVOKABLE void  set( unsigned int x , unsigned int y , unsigned int z , unsigned int w);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Vec4ui: public pmoc::MetaQQuickClass{
protected:
std::set<osg::Vec4ui* 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_Vec4ui();
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


#endif //osg_Vec4ui_pmocHPP

