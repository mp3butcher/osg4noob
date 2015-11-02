#ifndef osg_Notify_pmocHPP
#define  osg_Notify_pmocHPP 1
#include <osg/Notify_pmoc.hpp>
#include <QObject>
#include <osg/Notify>

#include <MetaQQuickClass.h>
namespace osg{
class QReflect_NotifyHandler: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 0;}

/// inheritance simulated via composition
NotifyHandler * _model;
QReflect_NotifyHandler(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_NotifyHandler( );
//NotifyHandler
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_NotifyHandler: public pmoc::MetaQQuickClass{
protected:
   public:
MetaQReflect_NotifyHandler();
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
#include <osg/Notify_pmoc.hpp>
#include <QObject>
#include <osg/Notify>

#include <MetaQQuickClass.h>
namespace osg{
class QReflect_StandardNotifyHandler: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
StandardNotifyHandler * _model;
QReflect_StandardNotifyHandler(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_StandardNotifyHandler( );
//StandardNotifyHandler
// void  notify( osg::NotifySeverity  ,const  char *);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_StandardNotifyHandler: public pmoc::MetaQQuickClass{
protected:
   public:
MetaQReflect_StandardNotifyHandler();
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

#endif //osg_Notify_pmocHPP

