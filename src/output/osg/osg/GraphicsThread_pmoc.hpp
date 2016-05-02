#ifndef osg_GraphicsThread_pmocHPP
#define  osg_GraphicsThread_pmocHPP 1


#include <osg/GraphicsThread_pmoc.hpp>
#include <QObject>
#include <osg/GraphicsThread>
#include <osg/GraphicsThread>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_GraphicsThread: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
GraphicsThread * _model;
QReflect_GraphicsThread(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_GraphicsThread( );
//GraphicsThread
Q_INVOKABLE void  run();
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_GraphicsThread: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::GraphicsThread> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_GraphicsThread();
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
#include <osg/GraphicsThread_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_State;
			} ;
#include <osg/GraphicsThread>
#include <osg/GraphicsThread>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_EndOfDynamicDrawBlock: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 0;}

/// inheritance simulated via composition
EndOfDynamicDrawBlock * _model;
QReflect_EndOfDynamicDrawBlock(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_EndOfDynamicDrawBlock( );
//EndOfDynamicDrawBlock
Q_INVOKABLE void  completed(osg::QReflect_State *state);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_EndOfDynamicDrawBlock: public pmoc::MetaQQuickClass{
protected:
   public:
MetaQReflect_EndOfDynamicDrawBlock();
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
#include <osg/GraphicsThread_pmoc.hpp>
#include <QObject>
#include <osg/GraphicsThread>
#include <osg/GraphicsThread>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_BarrierOperation: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
struct BarrierOperation * _model;
QReflect_BarrierOperation(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_BarrierOperation( );
//BarrierOperation
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_BarrierOperation: public pmoc::MetaQQuickClass{
protected:
   public:
MetaQReflect_BarrierOperation();
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
#include <osg/GraphicsThread_pmoc.hpp>
#include <QObject>
#include <osg/GraphicsThread>
#include <osg/GraphicsThread>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_GraphicsOperation: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
struct GraphicsOperation * _model;
QReflect_GraphicsOperation(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_GraphicsOperation( );
//GraphicsOperation
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_GraphicsOperation: public pmoc::MetaQQuickClass{
protected:
   public:
MetaQReflect_GraphicsOperation();
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
#include <osg/GraphicsThread_pmoc.hpp>
#include <QObject>
#include <osg/GraphicsThread>
#include <osg/GraphicsThread>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_FlushDeletedGLObjectsOperation: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
struct FlushDeletedGLObjectsOperation * _model;
QReflect_FlushDeletedGLObjectsOperation(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_FlushDeletedGLObjectsOperation( );
//FlushDeletedGLObjectsOperation
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_FlushDeletedGLObjectsOperation: public pmoc::MetaQQuickClass{
protected:
   public:
MetaQReflect_FlushDeletedGLObjectsOperation();
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
#include <osg/GraphicsThread_pmoc.hpp>
#include <QObject>
#include <osg/GraphicsThread>
#include <osg/GraphicsThread>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_SwapBuffersOperation: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
struct SwapBuffersOperation * _model;
QReflect_SwapBuffersOperation(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_SwapBuffersOperation( );
//SwapBuffersOperation
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_SwapBuffersOperation: public pmoc::MetaQQuickClass{
protected:
   public:
MetaQReflect_SwapBuffersOperation();
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
#include <osg/GraphicsThread_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_GraphicsContext;
			} ;
#include <osg/GraphicsThread>
#include <osg/GraphicsThread>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_RunOperations: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
RunOperations * _model;
QReflect_RunOperations(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_RunOperations( );
//RunOperations
Q_INVOKABLE void  operator()(osg::QReflect_GraphicsContext *context);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_RunOperations: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::RunOperations> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_RunOperations();
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
#include <osg/GraphicsThread_pmoc.hpp>
#include <QObject>
#include <osg/GraphicsThread>
#include <osg/GraphicsThread>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_ReleaseContext_Block_MakeCurrentOperation: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 2;}

/// inheritance simulated via composition
struct ReleaseContext_Block_MakeCurrentOperation * _model;
QReflect_ReleaseContext_Block_MakeCurrentOperation(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_ReleaseContext_Block_MakeCurrentOperation( );
//ReleaseContext_Block_MakeCurrentOperation
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_ReleaseContext_Block_MakeCurrentOperation: public pmoc::MetaQQuickClass{
protected:
   public:
MetaQReflect_ReleaseContext_Block_MakeCurrentOperation();
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
#include <osg/GraphicsThread_pmoc.hpp>
#include <QObject>
#include <osg/GraphicsThread>
#include <osg/GraphicsThread>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_BlockAndFlushOperation: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
struct BlockAndFlushOperation * _model;
QReflect_BlockAndFlushOperation(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_BlockAndFlushOperation( );
//BlockAndFlushOperation
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_BlockAndFlushOperation: public pmoc::MetaQQuickClass{
protected:
   public:
MetaQReflect_BlockAndFlushOperation();
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


#endif //osg_GraphicsThread_pmocHPP

