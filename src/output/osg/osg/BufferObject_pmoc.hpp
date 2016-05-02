#ifndef osg_BufferObject_pmocHPP
#define  osg_BufferObject_pmocHPP 1


#include <osg/BufferObject_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_FrameStamp;
			} ;
namespace osg{ 
class QReflect_BufferObjectProfile;
			} ;
namespace osg{ 
class QReflect_GLBufferObjectSet;
			} ;
namespace osg{ 
class QReflect_GLBufferObject;
			} ;
#include <osg/BufferObject>
#include <osg/BufferObject>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_GLBufferObjectManager: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
GLBufferObjectManager * _model;
QReflect_GLBufferObjectManager(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_GLBufferObjectManager( );
//GLBufferObjectManager
// osg::ref_ptr<GLBufferObject>  generateGLBufferObject(const  osg::BufferObject *);
// osg::ref_ptr<GLBufferObjectManager> & getGLBufferObjectManager( unsigned int );
// void  recomputeStats( std::ostream &);
// void  reportStats( std::ostream &);
Q_INVOKABLE  bool  hasSpace( unsigned int size)const;
Q_INVOKABLE  bool  makeSpace( unsigned int size);
Q_INVOKABLE  double&  getApplyTime();
Q_INVOKABLE  double&  getDeleteTime();
Q_INVOKABLE  double&  getGenerateTime();
Q_INVOKABLE  unsigned int  getContextID()const;
Q_INVOKABLE  unsigned int  getCurrGLBufferObjectPoolSize()const;
Q_INVOKABLE  unsigned int  getMaxGLBufferObjectPoolSize()const;
Q_INVOKABLE  unsigned int  getNumberActiveGLBufferObjects()const;
Q_INVOKABLE  unsigned int  getNumberOrphanedGLBufferObjects()const;
Q_INVOKABLE  unsigned int&  getCurrGLBufferObjectPoolSize();
Q_INVOKABLE  unsigned int&  getFrameNumber();
Q_INVOKABLE  unsigned int&  getNumberActiveGLBufferObjects();
Q_INVOKABLE  unsigned int&  getNumberApplied();
Q_INVOKABLE  unsigned int&  getNumberDeleted();
Q_INVOKABLE  unsigned int&  getNumberFrames();
Q_INVOKABLE  unsigned int&  getNumberGenerated();
Q_INVOKABLE  unsigned int&  getNumberOrphanedGLBufferObjects();
Q_INVOKABLE osg::QReflect_GLBufferObjectSet*  getGLBufferObjectSet(osg::QReflect_BufferObjectProfile *profile);
Q_INVOKABLE void  deleteAllGLBufferObjects();
Q_INVOKABLE void  discardAllDeletedGLBufferObjects();
Q_INVOKABLE void  discardAllGLBufferObjects();
Q_INVOKABLE void  flushAllDeletedGLBufferObjects();
Q_INVOKABLE void  flushDeletedGLBufferObjects( double currentTime , double &availableTime);
Q_INVOKABLE void  handlePendingOrphandedGLBufferObjects();
Q_INVOKABLE void  newFrame(osg::QReflect_FrameStamp *fs);
Q_INVOKABLE void  releaseGLBufferObject(osg::QReflect_GLBufferObject *to);
Q_INVOKABLE void  resetStats();
Q_INVOKABLE void  setCurrGLBufferObjectPoolSize( unsigned int size);
Q_INVOKABLE void  setMaxGLBufferObjectPoolSize( unsigned int size);
Q_INVOKABLE void  setNumberActiveGLBufferObjects( unsigned int size);
Q_INVOKABLE void  setNumberOrphanedGLBufferObjects( unsigned int size);
Q_PROPERTY(unsigned int  CurrGLBufferObjectPoolSize  READ getCurrGLBufferObjectPoolSize WRITE setCurrGLBufferObjectPoolSize NOTIFY CurrGLBufferObjectPoolSizeChanged)
Q_PROPERTY(unsigned int  MaxGLBufferObjectPoolSize  READ getMaxGLBufferObjectPoolSize WRITE setMaxGLBufferObjectPoolSize NOTIFY MaxGLBufferObjectPoolSizeChanged)
Q_PROPERTY(unsigned int  NumberActiveGLBufferObjects  READ getNumberActiveGLBufferObjects WRITE setNumberActiveGLBufferObjects NOTIFY NumberActiveGLBufferObjectsChanged)
Q_PROPERTY(unsigned int  NumberOrphanedGLBufferObjects  READ getNumberOrphanedGLBufferObjects WRITE setNumberOrphanedGLBufferObjects NOTIFY NumberOrphanedGLBufferObjectsChanged)
signals: void CurrGLBufferObjectPoolSizeChanged();
public:
signals: void MaxGLBufferObjectPoolSizeChanged();
public:
signals: void NumberActiveGLBufferObjectsChanged();
public:
signals: void NumberOrphanedGLBufferObjectsChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_GLBufferObjectManager: public pmoc::MetaQQuickClass{
protected:
   public:
MetaQReflect_GLBufferObjectManager();
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
#include <osg/BufferObject_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_BufferObjectProfile;
			} ;
#include <osg/BufferObject>

#include <MetaQQuickClass.h>
namespace osg{
class QReflect_BufferObjectProfile: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 0;}

/// inheritance simulated via composition
BufferObjectProfile * _model;
QReflect_BufferObjectProfile(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_BufferObjectProfile( );
//BufferObjectProfile
// BufferObjectProfile & operator=(const  BufferObjectProfile &);
Q_INVOKABLE  bool  operator<(osg::QReflect_BufferObjectProfile &rhs)const;
Q_INVOKABLE  bool  operator==(osg::QReflect_BufferObjectProfile &rhs)const;
Q_INVOKABLE void  setProfile( GLenum target , GLenum usage , unsigned int size);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_BufferObjectProfile: public pmoc::MetaQQuickClass{
protected:
std::set<osg::BufferObjectProfile* 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_BufferObjectProfile();
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
#include <osg/BufferObject_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_GLBufferObjectSet;
			} ;
namespace osg{ 
class QReflect_GLBufferObjectManager;
			} ;
namespace osg{ 
class QReflect_GLBufferObject;
			} ;
#include <osg/BufferObject>
#include <osg/BufferObject>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_GLBufferObjectSet: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
GLBufferObjectSet * _model;
QReflect_GLBufferObjectSet(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_GLBufferObjectSet( );
//GLBufferObjectSet
// osg::ref_ptr<GLBufferObject>  takeFromOrphans( BufferObject *);
// osg::ref_ptr<GLBufferObject>  takeOrGenerate( BufferObject *);
//const  BufferObjectProfile & getProfile();
Q_INVOKABLE  bool  checkConsistency()const;
Q_INVOKABLE  bool  makeSpace( unsigned int &size);
Q_INVOKABLE  unsigned int  computeNumGLBufferObjectsInList()const;
Q_INVOKABLE  unsigned int  getNumOfGLBufferObjects()const;
Q_INVOKABLE  unsigned int  getNumOrphans()const;
Q_INVOKABLE  unsigned int  getNumPendingOrphans()const;
Q_INVOKABLE  unsigned int  size()const;
Q_INVOKABLE osg::QReflect_GLBufferObjectManager*  getParent();
Q_INVOKABLE void  addToBack(osg::QReflect_GLBufferObject *to);
Q_INVOKABLE void  deleteAllGLBufferObjects();
Q_INVOKABLE void  discardAllDeletedGLBufferObjects();
Q_INVOKABLE void  discardAllGLBufferObjects();
Q_INVOKABLE void  flushAllDeletedGLBufferObjects();
Q_INVOKABLE void  flushDeletedGLBufferObjects( double currentTime , double &availableTime);
Q_INVOKABLE void  handlePendingOrphandedGLBufferObjects();
Q_INVOKABLE void  moveToBack(osg::QReflect_GLBufferObject *to);
Q_INVOKABLE void  moveToSet(osg::QReflect_GLBufferObject *to ,osg::QReflect_GLBufferObjectSet *set);
Q_INVOKABLE void  orphan(osg::QReflect_GLBufferObject *to);
Q_INVOKABLE void  remove(osg::QReflect_GLBufferObject *to);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_GLBufferObjectSet: public pmoc::MetaQQuickClass{
protected:
   public:
MetaQReflect_GLBufferObjectSet();
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
#include <osg/BufferObject_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Object;
			} ;
namespace osg{ 
class QReflect_State;
			} ;
namespace osg{ 
class QReflect_BufferData;
			} ;
namespace osg{ 
class QReflect_GLBufferObject;
			} ;
#include <osg/BufferObject>
#include <osg/BufferObject>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_BufferObject: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
BufferObject * _model;
QReflect_BufferObject(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_BufferObject( );
//BufferObject
// BufferObjectProfile & getProfile();
//const  BufferObjectProfile & getProfile();
Q_INVOKABLE  GLenum  getTarget()const;
Q_INVOKABLE  GLenum  getUsage()const;
Q_INVOKABLE  bool  getCopyDataAndReleaseGLBufferObject()const;
Q_INVOKABLE  bool  isSameKindAs(osg::QReflect_Object *obj)const;
Q_INVOKABLE  unsigned int  addBufferData(osg::QReflect_BufferData *bd);
Q_INVOKABLE  unsigned int  computeRequiredBufferSize()const;
Q_INVOKABLE  unsigned int  getNumBufferData()const;
Q_INVOKABLE const  char*  className()const;
Q_INVOKABLE const  char*  libraryName()const;
Q_INVOKABLE osg::QReflect_BufferData*  getBufferData( unsigned int index);
Q_INVOKABLE osg::QReflect_BufferData*  getBufferData( unsigned int index)const;
Q_INVOKABLE osg::QReflect_GLBufferObject*  getGLBufferObject( unsigned int contextID)const;
Q_INVOKABLE osg::QReflect_GLBufferObject*  getOrCreateGLBufferObject( unsigned int contextID)const;
Q_INVOKABLE void  deleteBufferObject( unsigned int contextID , GLuint globj);
Q_INVOKABLE void  dirty();
Q_INVOKABLE void  releaseGLObjects(osg::QReflect_State *state)const;
Q_INVOKABLE void  removeBufferData( unsigned int index);
Q_INVOKABLE void  removeBufferData(osg::QReflect_BufferData *bd);
Q_INVOKABLE void  resizeGLObjectBuffers( unsigned int maxSize);
Q_INVOKABLE void  setBufferData( unsigned int index ,osg::QReflect_BufferData *bd);
Q_INVOKABLE void  setCopyDataAndReleaseGLBufferObject( bool copyAndRelease);
Q_INVOKABLE void  setGLBufferObject( unsigned int contextID ,osg::QReflect_GLBufferObject *glbo);
Q_INVOKABLE void  setTarget( GLenum target);
Q_INVOKABLE void  setUsage( GLenum usage);
Q_PROPERTY(GLenum  Target  READ getTarget WRITE setTarget NOTIFY TargetChanged)
Q_PROPERTY(GLenum  Usage  READ getUsage WRITE setUsage NOTIFY UsageChanged)
Q_PROPERTY(bool  CopyDataAndReleaseGLBufferObject  READ getCopyDataAndReleaseGLBufferObject WRITE setCopyDataAndReleaseGLBufferObject NOTIFY CopyDataAndReleaseGLBufferObjectChanged)
signals: void BufferDataCollectionChanged();
public:
signals: void CopyDataAndReleaseGLBufferObjectChanged();
public:
signals: void TargetChanged();
public:
signals: void UsageChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_BufferObject: public pmoc::MetaQQuickClass{
protected:
   public:
MetaQReflect_BufferObject();
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
#include <osg/BufferObject_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Object;
			} ;
namespace osg{ 
class QReflect_Image;
			} ;
namespace osg{ 
class QReflect_Array;
			} ;
namespace osg{ 
class QReflect_PrimitiveSet;
			} ;
namespace osg{ 
class QReflect_State;
			} ;
namespace osg{ 
class QReflect_BufferObject;
			} ;
namespace osg{ 
class QReflect_GLBufferObject;
			} ;
#include <osg/BufferObject>
#include <osg/BufferObject>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_BufferData: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
BufferData * _model;
QReflect_BufferData(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_BufferData( );
//BufferData
// ModifiedCallback * getModifiedCallback();
// void  setModifiedCallback( ModifiedCallback *);
//const  ModifiedCallback * getModifiedCallback();
Q_INVOKABLE  bool  isSameKindAs(osg::QReflect_Object *obj)const;
Q_INVOKABLE  unsigned int  getBufferIndex()const;
Q_INVOKABLE  unsigned int  getModifiedCount()const;
Q_INVOKABLE  unsigned int  getNumClients()const;
Q_INVOKABLE const  char*  className()const;
Q_INVOKABLE const  char*  libraryName()const;
Q_INVOKABLE osg::QReflect_Array*  asArray();
Q_INVOKABLE osg::QReflect_Array*  asArray()const;
Q_INVOKABLE osg::QReflect_BufferObject*  getBufferObject();
Q_INVOKABLE osg::QReflect_BufferObject*  getBufferObject()const;
Q_INVOKABLE osg::QReflect_GLBufferObject*  getGLBufferObject( unsigned int contextID)const;
Q_INVOKABLE osg::QReflect_GLBufferObject*  getOrCreateGLBufferObject( unsigned int contextID)const;
Q_INVOKABLE osg::QReflect_Image*  asImage();
Q_INVOKABLE osg::QReflect_Image*  asImage()const;
Q_INVOKABLE osg::QReflect_PrimitiveSet*  asPrimitiveSet();
Q_INVOKABLE osg::QReflect_PrimitiveSet*  asPrimitiveSet()const;
Q_INVOKABLE void  addClient(osg::QReflect_Object *);
Q_INVOKABLE void  dirty();
Q_INVOKABLE void  releaseGLObjects(osg::QReflect_State *state)const;
Q_INVOKABLE void  removeClient(osg::QReflect_Object *);
Q_INVOKABLE void  resizeGLObjectBuffers( unsigned int maxSize);
Q_INVOKABLE void  setBufferIndex( unsigned int index);
Q_INVOKABLE void  setBufferObject(osg::QReflect_BufferObject *bufferObject);
Q_INVOKABLE void  setModifiedCount( unsigned int value);
Q_PROPERTY(osg::QReflect_BufferObject * BufferObject  READ getBufferObject WRITE setBufferObject NOTIFY BufferObjectChanged)
Q_PROPERTY(unsigned int  BufferIndex  READ getBufferIndex WRITE setBufferIndex NOTIFY BufferIndexChanged)
Q_PROPERTY(unsigned int  ModifiedCount  READ getModifiedCount WRITE setModifiedCount NOTIFY ModifiedCountChanged)
signals: void BufferIndexChanged();
public:
signals: void BufferObjectChanged();
public:
signals: void ClientCollectionChanged();
public:
signals: void ModifiedCountChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_BufferData: public pmoc::MetaQQuickClass{
protected:
   public:
MetaQReflect_BufferData();
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
#include <osg/BufferObject_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Array;
			} ;
#include <osg/BufferObject>
#include <osg/BufferObject>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_VertexBufferObject: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
VertexBufferObject * _model;
QReflect_VertexBufferObject(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_VertexBufferObject( );
//VertexBufferObject
Q_INVOKABLE  unsigned int  addArray(osg::QReflect_Array *array);
Q_INVOKABLE osg::QReflect_Array*  getArray( unsigned int i);
Q_INVOKABLE osg::QReflect_Array*  getArray( unsigned int i)const;
Q_INVOKABLE void  removeArray(osg::QReflect_Array *array);
Q_INVOKABLE void  setArray( unsigned int i ,osg::QReflect_Array *array);
signals: void ArrayCollectionChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_VertexBufferObject: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::VertexBufferObject> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_VertexBufferObject();
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
#include <osg/BufferObject_pmoc.hpp>
#include <QObject>
#include <osg/BufferObject>
#include <osg/BufferObject>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_UniformBufferObject: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
UniformBufferObject * _model;
QReflect_UniformBufferObject(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_UniformBufferObject( );
//UniformBufferObject
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_UniformBufferObject: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::UniformBufferObject> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_UniformBufferObject();
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
#include <osg/BufferObject_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Image;
			} ;
#include <osg/BufferObject>
#include <osg/BufferObject>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_PixelBufferObject: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
PixelBufferObject * _model;
QReflect_PixelBufferObject(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_PixelBufferObject( );
//PixelBufferObject
Q_INVOKABLE  bool  isPBOSupported( unsigned int contextID)const;
Q_INVOKABLE osg::QReflect_Image*  getImage();
Q_INVOKABLE osg::QReflect_Image*  getImage()const;
Q_INVOKABLE void  setImage(osg::QReflect_Image *image);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_PixelBufferObject: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::PixelBufferObject> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_PixelBufferObject();
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
#include <osg/BufferObject_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_BufferData;
			} ;
namespace osg{ 
class QReflect_BufferObject;
			} ;
namespace osg{ 
class QReflect_BufferObjectProfile;
			} ;
namespace osg{ 
class QReflect_GLBufferObject;
			} ;
#include <osg/BufferObject>
#include <osg/BufferObject>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_GLBufferObject: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
GLBufferObject * _model;
QReflect_GLBufferObject(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_GLBufferObject( );
//GLBufferObject
// osg::ref_ptr<GLBufferObject>  createGLBufferObject( unsigned int  ,const  BufferObject *);
//const  BufferObjectProfile & getProfile();
Q_INVOKABLE  GLuint  getGLObjectID()const;
Q_INVOKABLE  GLuint&  getGLObjectID();
Q_INVOKABLE  bool  hasAllBufferDataBeenRead()const;
Q_INVOKABLE  bool  isDirty()const;
Q_INVOKABLE  bool  isPBOSupported()const;
Q_INVOKABLE  int  getOffset( unsigned int i)const;
Q_INVOKABLE  unsigned int  getContextID()const;
Q_INVOKABLE osg::QReflect_BufferObject*  getBufferObject();
Q_INVOKABLE void  assign(osg::QReflect_BufferObject *bufferObject);
Q_INVOKABLE void  bindBuffer();
Q_INVOKABLE void  clear();
Q_INVOKABLE void  compileBuffer();
Q_INVOKABLE void  deleteAllBufferObjects( unsigned int contextID);
Q_INVOKABLE void  deleteGLObject();
Q_INVOKABLE void  dirty();
Q_INVOKABLE void  discardAllBufferObjects( unsigned int contextID);
Q_INVOKABLE void  discardAllDeletedBufferObjects( unsigned int contextID);
Q_INVOKABLE void  flushAllDeletedBufferObjects( unsigned int contextID);
Q_INVOKABLE void  flushDeletedBufferObjects( unsigned int contextID , double currentTime , double &availbleTime);
Q_INVOKABLE void  releaseGLBufferObject( unsigned int contextID ,osg::QReflect_GLBufferObject *to);
Q_INVOKABLE void  setBufferDataHasBeenRead(osg::QReflect_BufferData *bd);
Q_INVOKABLE void  setBufferObject(osg::QReflect_BufferObject *bufferObject);
Q_INVOKABLE void  setProfile(osg::QReflect_BufferObjectProfile *profile);
Q_INVOKABLE void  unbindBuffer();
Q_PROPERTY(osg::QReflect_BufferObject * BufferObject  READ getBufferObject WRITE setBufferObject NOTIFY BufferObjectChanged)
signals: void BufferObjectChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_GLBufferObject: public pmoc::MetaQQuickClass{
protected:
   public:
MetaQReflect_GLBufferObject();
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
#include <osg/BufferObject_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_DrawElements;
			} ;
#include <osg/BufferObject>
#include <osg/BufferObject>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_ElementBufferObject: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
ElementBufferObject * _model;
QReflect_ElementBufferObject(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_ElementBufferObject( );
//ElementBufferObject
Q_INVOKABLE  unsigned int  addDrawElements(osg::QReflect_DrawElements *PrimitiveSet);
Q_INVOKABLE osg::QReflect_DrawElements*  getDrawElements( unsigned int i);
Q_INVOKABLE osg::QReflect_DrawElements*  getDrawElements( unsigned int i)const;
Q_INVOKABLE void  removeDrawElements(osg::QReflect_DrawElements *PrimitiveSet);
Q_INVOKABLE void  setDrawElements( unsigned int i ,osg::QReflect_DrawElements *PrimitiveSet);
signals: void DrawElementsCollectionChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_ElementBufferObject: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::ElementBufferObject> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_ElementBufferObject();
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
#include <osg/BufferObject_pmoc.hpp>
#include <QObject>
#include <osg/BufferObject>
#include <osg/BufferObject>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_AtomicCounterBufferObject: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
AtomicCounterBufferObject * _model;
QReflect_AtomicCounterBufferObject(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_AtomicCounterBufferObject( );
//AtomicCounterBufferObject
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_AtomicCounterBufferObject: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::AtomicCounterBufferObject> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_AtomicCounterBufferObject();
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
#include <osg/BufferObject_pmoc.hpp>
#include <QObject>
#include <osg/BufferObject>
#include <osg/BufferObject>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_ShaderStorageBufferObject: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
ShaderStorageBufferObject * _model;
QReflect_ShaderStorageBufferObject(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_ShaderStorageBufferObject( );
//ShaderStorageBufferObject
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_ShaderStorageBufferObject: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::ShaderStorageBufferObject> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_ShaderStorageBufferObject();
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
#include <osg/BufferObject_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_State;
			} ;
#include <osg/BufferObject>
#include <osg/BufferObject>

#include <osg/ref_ptr>
#include<osg/BufferObject_pmoc.hpp>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_PixelDataBufferObject: public pmoc::QQModel
{
Q_OBJECT
public:
 enum Mode{
NONE =PixelDataBufferObject::NONE,
READ =PixelDataBufferObject::READ,
WRITE =PixelDataBufferObject::WRITE};
  Q_ENUMS(Mode)
private:
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
PixelDataBufferObject * _model;
QReflect_PixelDataBufferObject(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_PixelDataBufferObject( );
//PixelDataBufferObject
Q_INVOKABLE  unsigned int  getDataSize()const;
Q_INVOKABLE osg::QReflect_PixelDataBufferObject::Mode  getMode( unsigned int contextID)const;
Q_INVOKABLE void  bindBufferInReadMode(osg::QReflect_State *state);
Q_INVOKABLE void  bindBufferInWriteMode(osg::QReflect_State *state);
Q_INVOKABLE void  compileBuffer(osg::QReflect_State *state)const;
Q_INVOKABLE void  resizeGLObjectBuffers( unsigned int maxSize);
Q_INVOKABLE void  setDataSize( unsigned int size);
Q_INVOKABLE void  unbindBuffer( unsigned int contextID)const;
Q_PROPERTY(unsigned int  DataSize  READ getDataSize WRITE setDataSize NOTIFY DataSizeChanged)
signals: void DataSizeChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_PixelDataBufferObject: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::PixelDataBufferObject> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_PixelDataBufferObject();
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


#endif //osg_BufferObject_pmocHPP

