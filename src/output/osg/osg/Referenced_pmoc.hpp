#ifndef osg_Referenced_pmocHPP
#define  osg_Referenced_pmocHPP 1


#include <osg/Referenced_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_DeleteHandler;
			} ;
namespace osg{ 
class QReflect_Observer;
			} ;
namespace osg{ 
class QReflect_ObserverSet;
			} ;
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
QReflect_Referenced(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Referenced( );
//Referenced
// OpenThreads::Mutex * getGlobalReferencedMutex();
// OpenThreads::Mutex * getRefMutex();
// Referenced & operator=(const  Referenced &);
Q_INVOKABLE  bool  getThreadSafeRefUnref()const;
Q_INVOKABLE  bool  getThreadSafeReferenceCounting();
Q_INVOKABLE  int  ref()const;
Q_INVOKABLE  int  referenceCount()const;
Q_INVOKABLE  int  unref()const;
Q_INVOKABLE  int  unref_nodelete()const;
Q_INVOKABLE osg::QReflect_DeleteHandler*  getDeleteHandler();
Q_INVOKABLE osg::QReflect_ObserverSet*  getObserverSet()const;
Q_INVOKABLE osg::QReflect_ObserverSet*  getOrCreateObserverSet()const;
Q_INVOKABLE void  addObserver(osg::QReflect_Observer *observer)const;
Q_INVOKABLE void  removeObserver(osg::QReflect_Observer *observer)const;
Q_INVOKABLE void  setDeleteHandler(osg::QReflect_DeleteHandler *handler);
Q_INVOKABLE void  setThreadSafeRefUnref( bool threadSafe);
Q_INVOKABLE void  setThreadSafeReferenceCounting( bool enableThreadSafeReferenceCounting);
Q_PROPERTY(bool  ThreadSafeRefUnref  READ getThreadSafeRefUnref WRITE setThreadSafeRefUnref NOTIFY ThreadSafeRefUnrefChanged)
Q_PROPERTY(bool  ThreadSafeReferenceCounting  READ getThreadSafeReferenceCounting WRITE setThreadSafeReferenceCounting NOTIFY ThreadSafeReferenceCountingChanged)
Q_PROPERTY(osg::QReflect_DeleteHandler * DeleteHandler  READ getDeleteHandler WRITE setDeleteHandler NOTIFY DeleteHandlerChanged)
signals: void DeleteHandlerChanged();
public:
signals: void ThreadSafeRefUnrefChanged();
public:
signals: void ThreadSafeReferenceCountingChanged();
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


#endif //osg_Referenced_pmocHPP

