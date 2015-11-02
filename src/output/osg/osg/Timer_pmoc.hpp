#ifndef osg_Timer_pmocHPP
#define  osg_Timer_pmocHPP 1
#include <osg/Timer_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Timer;
			} ;
#include <osg/Timer>

#include <MetaQQuickClass.h>
namespace osg{
class QReflect_Timer: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 0;}

/// inheritance simulated via composition
Timer * _model;
QReflect_Timer(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Timer( );
//Timer
// Timer_t  getStartTick();
// Timer_t  tick();
// double  delta_m( Timer_t  , Timer_t );
// double  delta_n( Timer_t  , Timer_t );
// double  delta_s( Timer_t  , Timer_t );
// double  delta_u( Timer_t  , Timer_t );
// void  setStartTick( Timer_t );
Q_INVOKABLE  double  getSecondsPerTick()const;
Q_INVOKABLE  double  time_m()const;
Q_INVOKABLE  double  time_n()const;
Q_INVOKABLE  double  time_s()const;
Q_INVOKABLE  double  time_u()const;
Q_INVOKABLE osg::QReflect_Timer*  instance();
Q_INVOKABLE void  setStartTick();
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Timer: public pmoc::MetaQQuickClass{
protected:
std::set<osg::Timer* 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_Timer();
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
#include <osg/Timer_pmoc.hpp>
#include <QObject>
#include <osg/Timer>

#include <MetaQQuickClass.h>
namespace osg{
class QReflect_ElapsedTime: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 0;}

/// inheritance simulated via composition
ElapsedTime * _model;
QReflect_ElapsedTime(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_ElapsedTime( );
//ElapsedTime
Q_INVOKABLE  double  elapsedTime()const;
Q_INVOKABLE  double  elapsedTime_m()const;
Q_INVOKABLE  double  elapsedTime_n()const;
Q_INVOKABLE  double  elapsedTime_u()const;
Q_INVOKABLE void  finish();
Q_INVOKABLE void  reset();
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_ElapsedTime: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ElapsedTime* 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_ElapsedTime();
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

#endif //osg_Timer_pmocHPP

