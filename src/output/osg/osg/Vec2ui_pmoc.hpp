#ifndef osg_Vec2ui_pmocHPP
#define  osg_Vec2ui_pmocHPP 1
#include <osg/Vec2ui_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Vec2ui;
			} ;
#include <osg/Vec2ui>

#include <MetaQQuickClass.h>
namespace osg{
class QReflect_Vec2ui: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 0;}

/// inheritance simulated via composition
Vec2ui * _model;
QReflect_Vec2ui(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Vec2ui( );
//Vec2ui
// Vec2ui  operator*( value_type );
// Vec2ui  operator*(const  Vec2ui &);
// Vec2ui  operator+( value_type );
// Vec2ui  operator+(const  Vec2ui &);
// Vec2ui  operator-( value_type );
// Vec2ui  operator-(const  Vec2ui &);
// Vec2ui  operator/( value_type );
// bool  operator!=(const  Vec2ui &);
// bool  operator<(const  Vec2ui &);
// bool  operator==(const  Vec2ui &);
// value_type  operator[]( int );
// value_type & operator[]( int );
Q_INVOKABLE  unsigned int  g()const;
Q_INVOKABLE  unsigned int  r()const;
Q_INVOKABLE  unsigned int  x()const;
Q_INVOKABLE  unsigned int  y()const;
Q_INVOKABLE  unsigned int&  g();
Q_INVOKABLE  unsigned int&  r();
Q_INVOKABLE  unsigned int&  x();
Q_INVOKABLE  unsigned int&  y();
Q_INVOKABLE  unsigned int*  ptr();
Q_INVOKABLE const  unsigned int*  ptr()const;
Q_INVOKABLE void  set( unsigned int  , unsigned int );
Q_INVOKABLE void  set(osg::QReflect_Vec2ui *);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Vec2ui: public pmoc::MetaQQuickClass{
protected:
std::set<osg::Vec2ui* 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_Vec2ui();
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

#endif //osg_Vec2ui_pmocHPP

