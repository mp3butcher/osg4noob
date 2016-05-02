#ifndef osg_Observer_pmocHPP
#define  osg_Observer_pmocHPP 1


#include <osg/Observer_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Observer;
			} ;
namespace osg{ 
class QReflect_Referenced;
			} ;
#include <osg/Observer>
#include <osg/Observer>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_ObserverSet: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
ObserverSet * _model;
QReflect_ObserverSet(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_ObserverSet( );
//ObserverSet
// Observers & getObservers();
// OpenThreads::Mutex * getObserverSetMutex();
// void  signalObjectDeleted( void *);
//const  Observers & getObservers();
Q_INVOKABLE osg::QReflect_Referenced*  addRefLock();
Q_INVOKABLE osg::QReflect_Referenced*  getObserverdObject();
Q_INVOKABLE osg::QReflect_Referenced*  getObserverdObject()const;
Q_INVOKABLE void  addObserver(osg::QReflect_Observer *observer);
Q_INVOKABLE void  removeObserver(osg::QReflect_Observer *observer);
signals: void ObserverCollectionChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_ObserverSet: public pmoc::MetaQQuickClass{
protected:
   public:
MetaQReflect_ObserverSet();
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
#include <osg/Observer_pmoc.hpp>
#include <QObject>
#include <osg/Observer>

#include <MetaQQuickClass.h>
namespace osg{
class QReflect_Observer: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 0;}

/// inheritance simulated via composition
Observer * _model;
QReflect_Observer(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Observer( );
//Observer
//virtual  void  objectDeleted( void *);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Observer: public pmoc::MetaQQuickClass{
protected:
std::set<osg::Observer* 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_Observer();
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


#endif //osg_Observer_pmocHPP

