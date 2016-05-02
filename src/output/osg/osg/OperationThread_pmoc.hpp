#ifndef osg_OperationThread_pmocHPP
#define  osg_OperationThread_pmocHPP 1


#include <osg/OperationThread_pmoc.hpp>
#include <QObject>
#include <osg/OperationThread>
#include <osg/OperationThread>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_RefBlockCount: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
RefBlockCount * _model;
QReflect_RefBlockCount(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_RefBlockCount( );
//RefBlockCount
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_RefBlockCount: public pmoc::MetaQQuickClass{
protected:
   public:
MetaQReflect_RefBlockCount();
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
#include <osg/OperationThread_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Object;
			} ;
namespace osg{ 
class QReflect_Operation;
			} ;
namespace osg{ 
class QReflect_OperationQueue;
			} ;
#include <osg/OperationThread>
#include <osg/OperationThread>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_OperationThread: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
OperationThread * _model;
QReflect_OperationThread(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_OperationThread( );
//OperationThread
// osg::ref_ptr<Operation>  getCurrentOperation();
Q_INVOKABLE  bool  getDone()const;
Q_INVOKABLE  int  cancel();
Q_INVOKABLE osg::QReflect_Object*  getParent();
Q_INVOKABLE osg::QReflect_Object*  getParent()const;
Q_INVOKABLE osg::QReflect_OperationQueue*  getOperationQueue();
Q_INVOKABLE osg::QReflect_OperationQueue*  getOperationQueue()const;
Q_INVOKABLE void  add(osg::QReflect_Operation *operation);
Q_INVOKABLE void  remove(const  QString &name);
Q_INVOKABLE void  remove(osg::QReflect_Operation *operation);
Q_INVOKABLE void  removeAllOperations();
Q_INVOKABLE void  run();
Q_INVOKABLE void  setDone( bool done);
Q_INVOKABLE void  setOperationQueue(osg::QReflect_OperationQueue *opq);
Q_INVOKABLE void  setParent(osg::QReflect_Object *parent);
Q_PROPERTY(bool  Done  READ getDone WRITE setDone NOTIFY DoneChanged)
Q_PROPERTY(osg::QReflect_Object * Parent  READ getParent WRITE setParent NOTIFY ParentChanged)
Q_PROPERTY(osg::QReflect_OperationQueue * OperationQueue  READ getOperationQueue WRITE setOperationQueue NOTIFY OperationQueueChanged)
signals: void DoneChanged();
public:
signals: void OperationQueueChanged();
public:
signals: void ParentChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_OperationThread: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::OperationThread> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_OperationThread();
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
#include <osg/OperationThread_pmoc.hpp>
#include <QObject>
#include <osg/OperationThread>
#include <osg/OperationThread>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_Operation: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
Operation * _model;
QReflect_Operation(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Operation( );
//Operation
Q_INVOKABLE  bool  getKeep()const;
Q_INVOKABLE QString  getName()const;
Q_INVOKABLE void  release();
Q_INVOKABLE void  setKeep( bool keep);
Q_INVOKABLE void  setName(const  QString &name);
Q_PROPERTY(QString  Name  READ getName WRITE setName NOTIFY NameChanged)
Q_PROPERTY(bool  Keep  READ getKeep WRITE setKeep NOTIFY KeepChanged)
signals: void KeepChanged();
public:
signals: void NameChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Operation: public pmoc::MetaQQuickClass{
protected:
   public:
MetaQReflect_Operation();
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
#include <osg/OperationThread_pmoc.hpp>
#include <QObject>
#include <osg/OperationThread>
#include <osg/OperationThread>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_RefBlock: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
RefBlock * _model;
QReflect_RefBlock(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_RefBlock( );
//RefBlock
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_RefBlock: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::RefBlock> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_RefBlock();
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
#include <osg/OperationThread_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Object;
			} ;
namespace osg{ 
class QReflect_Operation;
			} ;
#include <osg/OperationThread>
#include <osg/OperationThread>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_OperationQueue: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
OperationQueue * _model;
QReflect_OperationQueue(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_OperationQueue( );
//OperationQueue
// osg::ref_ptr<Operation>  getNextOperation( bool );
//const  OperationThreads & getOperationThreads();
Q_INVOKABLE  bool  empty();
Q_INVOKABLE  unsigned int  getNumOperationsInQueue();
Q_INVOKABLE void  add(osg::QReflect_Operation *operation);
Q_INVOKABLE void  releaseAllOperations();
Q_INVOKABLE void  releaseOperationsBlock();
Q_INVOKABLE void  remove(const  QString &name);
Q_INVOKABLE void  remove(osg::QReflect_Operation *operation);
Q_INVOKABLE void  removeAllOperations();
Q_INVOKABLE void  runOperations(osg::QReflect_Object *callingObject);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_OperationQueue: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::OperationQueue> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_OperationQueue();
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


#endif //osg_OperationThread_pmocHPP

