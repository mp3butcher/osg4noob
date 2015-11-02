#ifndef osg_Referenced_pmocHPP
#define  osg_Referenced_pmocHPP 1
#include <osg/Referenced_pmoc.hpp>
#include <QObject>
#include <osg/Referenced>
#include <osg/Referenced>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_Referenced: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 0;}

/// inheritance simulated via composition
Referenced * _model;
QReflect_Referenced(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Referenced( );
//Referenced
// DeleteHandler * getDeleteHandler();
// ObserverSet * getObserverSet();
// ObserverSet * getOrCreateObserverSet();
// OpenThreads::Mutex * getGlobalReferencedMutex();
// OpenThreads::Mutex * getRefMutex();
// Referenced & operator=(const  Referenced &);
// void  addObserver( Observer *);
// void  removeObserver( Observer *);
// void  setDeleteHandler( DeleteHandler *);
Q_INVOKABLE  int  ref()const;
Q_INVOKABLE  int  referenceCount()const;
Q_INVOKABLE  int  unref()const;
Q_INVOKABLE  int  unref_nodelete()const;
Q_INVOKABLE const bool  getThreadSafeRefUnref()const;
Q_INVOKABLE const bool  getThreadSafeReferenceCounting()const;
Q_INVOKABLE void setThreadSafeRefUnref(const bool &);
Q_INVOKABLE void setThreadSafeReferenceCounting(const bool &);
Q_PROPERTY(bool ThreadSafeRefUnref  READ getThreadSafeRefUnref WRITE setThreadSafeRefUnref NOTIFY ThreadSafeRefUnrefChanged)
Q_PROPERTY(bool ThreadSafeReferenceCounting  READ getThreadSafeReferenceCounting WRITE setThreadSafeReferenceCounting NOTIFY ThreadSafeReferenceCountingChanged)
signals: void ThreadSafeRefUnrefChanged(const bool&);
public:
signals: void ThreadSafeReferenceCountingChanged(const bool&);
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Referenced: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::Referenced> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_Referenced();
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

#endif //osg_Referenced_pmocHPP

