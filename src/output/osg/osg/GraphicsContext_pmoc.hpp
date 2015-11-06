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
QReflect_SyncSwapBuffersCallback(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_SyncSwapBuffersCallback( );
//SyncSwapBuffersCallback
Q_INVOKABLE void  swapBuffersImplementation(osg::QReflect_GraphicsContext *);
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
namespace osg{
class QReflect_Operation; 
}


#include <MetaQQuickClass.h>
namespace osg{
class QReflect_GraphicsContext: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
GraphicsContext * _model;
QReflect_GraphicsContext(pmoc::Instance *i=0,QObject* parent=0);
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
Q_INVOKABLE  bool  isSameKindAs(osg::QReflect_Object *)const;
Q_INVOKABLE  bool  makeContextCurrent(osg::QReflect_GraphicsContext *);
Q_INVOKABLE  bool  makeCurrent();
Q_INVOKABLE  bool  realize();
Q_INVOKABLE  bool  releaseContext();
Q_INVOKABLE  double  getTimeSinceLastClear()const;
Q_INVOKABLE  osg::QReflect_GraphicsThread * getGraphicsThread()const;
Q_INVOKABLE  osg::QReflect_State * getState()const;
Q_INVOKABLE  unsigned int  createNewContextID();
Q_INVOKABLE  unsigned int  getMaxContextID();
Q_INVOKABLE const  char*  className()const;
Q_INVOKABLE const  char*  libraryName()const;
Q_INVOKABLE osg::QReflect_GraphicsContext*  getCompileContext( unsigned int );
Q_INVOKABLE osg::QReflect_GraphicsContext*  getOrCreateCompileContext( unsigned int );
Q_INVOKABLE osg::QReflect_Operation*  getCurrentOperation();
Q_INVOKABLE osg::QReflect_RefBlock*  getOperationsBlock();
Q_INVOKABLE void   add( osg::QReflect_Operation *par);//{return new osg::QReflect_Operation(_model->get());}
Q_INVOKABLE void  bindPBufferToTexture( GLenum );
Q_INVOKABLE void  clear();
Q_INVOKABLE void  close( bool );
Q_INVOKABLE void  createGraphicsThread();
Q_INVOKABLE void  decrementContextIDUsageCount( unsigned int );
Q_INVOKABLE void  incrementContextIDUsageCount( unsigned int );
Q_INVOKABLE void  remove(const  QString &);
Q_INVOKABLE void  removeAllOperations();
Q_INVOKABLE void  resized( int  , int  , int  , int );
Q_INVOKABLE void  resizedImplementation( int  , int  , int  , int );
Q_INVOKABLE void  runOperations();
Q_INVOKABLE void  setClearColor(osg::QReflect_Vec4f *);
Q_INVOKABLE void  setClearMask( GLbitfield );
Q_INVOKABLE void  setCompileContext( unsigned int  ,osg::QReflect_GraphicsContext *);
Q_INVOKABLE void  setDefaultFboId( GLuint );
Q_INVOKABLE void  swapBuffers();
Q_INVOKABLE void  swapBuffersCallbackOrImplemenation();
Q_INVOKABLE void pmoc_reverse_add( osg::QReflect_Operation *par);//{_model->set(par->_model);emit CollectionChanged(par);}
Q_INVOKABLE void pmoc_reverse_setGraphicsThread( osg::QReflect_GraphicsThread *par=0);
Q_INVOKABLE void pmoc_reverse_setState( osg::QReflect_State *par=0);
Q_INVOKABLE void setGraphicsThread( osg::QReflect_GraphicsThread *par);
Q_INVOKABLE void setState( osg::QReflect_State *par);
signals: void CollectionChanged();
public:
signals: void GraphicsThreadChanged(const osg::QReflect_GraphicsThread*);
public:
signals: void StateChanged(const osg::QReflect_State*);
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

#endif //osg_GraphicsContext_pmocHPP

