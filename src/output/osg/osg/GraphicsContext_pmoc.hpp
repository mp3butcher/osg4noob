#ifndef osg_GraphicsContext_pmocHPP
#define  osg_GraphicsContext_pmocHPP 1


#include <osg/GraphicsContext_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_GraphicsContext;
			} ;
#include <osg/GraphicsContext>
#include <osg/GraphicsContext>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_SyncSwapBuffersCallback: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 0;}

/// inheritance simulated via composition
SyncSwapBuffersCallback * _model;
QReflect_SyncSwapBuffersCallback(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_SyncSwapBuffersCallback( );
//SyncSwapBuffersCallback
Q_INVOKABLE void  swapBuffersImplementation(osg::QReflect_GraphicsContext *gc);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_SyncSwapBuffersCallback: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::SyncSwapBuffersCallback> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_SyncSwapBuffersCallback();
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
#include <osg/GraphicsContext_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Object;
			} ;
namespace osg{ 
class QReflect_State;
			} ;
namespace osg{ 
class QReflect_Vec4f;
			} ;
namespace osg{ 
class QReflect_GraphicsContext;
			} ;
namespace osg{ 
class QReflect_GraphicsThread;
			} ;
namespace osg{ 
class QReflect_RefBlock;
			} ;
namespace osg{ 
class QReflect_Operation;
			} ;
#include <osg/GraphicsContext>
#include <osg/GraphicsContext>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_GraphicsContext: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
GraphicsContext * _model;
QReflect_GraphicsContext(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_GraphicsContext( );
//GraphicsContext
// Cameras & getCameras();
// GraphicsContext * createGraphicsContext( Traits *);
// GraphicsContexts  getAllRegisteredGraphicsContexts();
// GraphicsContexts  getRegisteredGraphicsContexts( unsigned int );
// GraphicsOperationQueue & getOperationsQueue();
// OpenThreads::Mutex * getOperationsMutex();
// ResizedCallback * getResizedCallback();
// SwapCallback * getSwapCallback();
// WindowingSystemInterface * getWindowingSystemInterface();
// void  setResizedCallback( ResizedCallback *);
// void  setSwapCallback( SwapCallback *);
// void  setWindowingSystemInterface( WindowingSystemInterface *);
//const  Cameras & getCameras();
//const  ResizedCallback * getResizedCallback();
//const  SwapCallback * getSwapCallback();
//const  Traits * getTraits();
//const  Vec4 & getClearColor();
Q_INVOKABLE  GLbitfield  getClearMask()const;
Q_INVOKABLE  GLuint  getDefaultFboId()const;
Q_INVOKABLE  bool  isCurrent()const;
Q_INVOKABLE  bool  isRealized()const;
Q_INVOKABLE  bool  isSameKindAs(osg::QReflect_Object *object)const;
Q_INVOKABLE  bool  makeContextCurrent(osg::QReflect_GraphicsContext *readContext);
Q_INVOKABLE  bool  makeCurrent();
Q_INVOKABLE  bool  realize();
Q_INVOKABLE  bool  releaseContext();
Q_INVOKABLE  double  getTimeSinceLastClear()const;
Q_INVOKABLE  unsigned int  createNewContextID();
Q_INVOKABLE  unsigned int  getMaxContextID();
Q_INVOKABLE const  char*  className()const;
Q_INVOKABLE const  char*  libraryName()const;
Q_INVOKABLE osg::QReflect_GraphicsContext*  getCompileContext( unsigned int contextID);
Q_INVOKABLE osg::QReflect_GraphicsContext*  getOrCreateCompileContext( unsigned int contextID);
Q_INVOKABLE osg::QReflect_GraphicsThread*  getGraphicsThread();
Q_INVOKABLE osg::QReflect_GraphicsThread*  getGraphicsThread()const;
Q_INVOKABLE osg::QReflect_Operation*  getCurrentOperation();
Q_INVOKABLE osg::QReflect_RefBlock*  getOperationsBlock();
Q_INVOKABLE osg::QReflect_State*  getState();
Q_INVOKABLE osg::QReflect_State*  getState()const;
Q_INVOKABLE void  add(osg::QReflect_Operation *operation);
Q_INVOKABLE void  bindPBufferToTexture( GLenum buffer);
Q_INVOKABLE void  clear();
Q_INVOKABLE void  close( bool callCloseImplementation);
Q_INVOKABLE void  createGraphicsThread();
Q_INVOKABLE void  decrementContextIDUsageCount( unsigned int contextID);
Q_INVOKABLE void  incrementContextIDUsageCount( unsigned int contextID);
Q_INVOKABLE void  remove(const  QString &name);
Q_INVOKABLE void  remove(osg::QReflect_Operation *operation);
Q_INVOKABLE void  removeAllOperations();
Q_INVOKABLE void  resized( int x , int y , int width , int height);
Q_INVOKABLE void  resizedImplementation( int x , int y , int width , int height);
Q_INVOKABLE void  runOperations();
Q_INVOKABLE void  setClearColor(osg::QReflect_Vec4f *color);
Q_INVOKABLE void  setClearMask( GLbitfield mask);
Q_INVOKABLE void  setCompileContext( unsigned int contextID ,osg::QReflect_GraphicsContext *gc);
Q_INVOKABLE void  setDefaultFboId( GLuint i);
Q_INVOKABLE void  setGraphicsThread(osg::QReflect_GraphicsThread *gt);
Q_INVOKABLE void  setState(osg::QReflect_State *state);
Q_INVOKABLE void  swapBuffers();
Q_INVOKABLE void  swapBuffersCallbackOrImplemenation();
Q_PROPERTY(GLbitfield  ClearMask  READ getClearMask WRITE setClearMask NOTIFY ClearMaskChanged)
Q_PROPERTY(GLuint  DefaultFboId  READ getDefaultFboId WRITE setDefaultFboId NOTIFY DefaultFboIdChanged)
Q_PROPERTY(osg::QReflect_GraphicsThread * GraphicsThread  READ getGraphicsThread WRITE setGraphicsThread NOTIFY GraphicsThreadChanged)
Q_PROPERTY(osg::QReflect_State * State  READ getState WRITE setState NOTIFY StateChanged)
signals: void ClearMaskChanged();
public:
signals: void DefaultFboIdChanged();
public:
signals: void GraphicsThreadChanged();
public:
signals: void StateChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_GraphicsContext: public pmoc::MetaQQuickClass{
protected:
   public:
MetaQReflect_GraphicsContext();
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


#endif //osg_GraphicsContext_pmocHPP

