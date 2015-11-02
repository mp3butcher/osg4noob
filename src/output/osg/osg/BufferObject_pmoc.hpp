#ifndef osg_BufferObject_pmocHPP
#define  osg_BufferObject_pmocHPP 1
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
QReflect_GLBufferObjectSet(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_GLBufferObjectSet( );
//GLBufferObjectSet
// osg::ref_ptr<GLBufferObject>  takeFromOrphans( BufferObject *);
// osg::ref_ptr<GLBufferObject>  takeOrGenerate( BufferObject *);
//const  BufferObjectProfile & getProfile();
Q_INVOKABLE  bool  checkConsistency()const;
Q_INVOKABLE  bool  makeSpace( unsigned int &);
Q_INVOKABLE  unsigned int  computeNumGLBufferObjectsInList()const;
Q_INVOKABLE  unsigned int  getNumOfGLBufferObjects()const;
Q_INVOKABLE  unsigned int  getNumOrphans()const;
Q_INVOKABLE  unsigned int  getNumPendingOrphans()const;
Q_INVOKABLE  unsigned int  size()const;
Q_INVOKABLE osg::QReflect_GLBufferObjectManager*  getParent();
Q_INVOKABLE void  addToBack(osg::QReflect_GLBufferObject *);
Q_INVOKABLE void  deleteAllGLBufferObjects();
Q_INVOKABLE void  discardAllDeletedGLBufferObjects();
Q_INVOKABLE void  discardAllGLBufferObjects();
Q_INVOKABLE void  flushAllDeletedGLBufferObjects();
Q_INVOKABLE void  flushDeletedGLBufferObjects( double  , double &);
Q_INVOKABLE void  handlePendingOrphandedGLBufferObjects();
Q_INVOKABLE void  moveToBack(osg::QReflect_GLBufferObject *);
Q_INVOKABLE void  moveToSet(osg::QReflect_GLBufferObject * ,osg::QReflect_GLBufferObjectSet *);
Q_INVOKABLE void  orphan(osg::QReflect_GLBufferObject *);
Q_INVOKABLE void  remove(osg::QReflect_GLBufferObject *);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_GLBufferObjectSet: public pmoc::MetaQQuickClass{
protected:
   public:
MetaQReflect_GLBufferObjectSet();
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
#include <osg/BufferObject>

#include <MetaQQuickClass.h>
namespace osg{
class QReflect_GLBufferObject: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 0;}

/// inheritance simulated via composition
GLBufferObject * _model;
QReflect_GLBufferObject(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_GLBufferObject( );
//GLBufferObject
// GLuint  getGLObjectID();
// GLuint & getGLObjectID();
//const  BufferObjectProfile & getProfile();
Q_INVOKABLE  bool  hasAllBufferDataBeenRead()const;
Q_INVOKABLE  bool  isDirty()const;
Q_INVOKABLE  bool  isPBOSupported()const;
Q_INVOKABLE  int  getOffset( unsigned int )const;
Q_INVOKABLE  osg::QReflect_BufferObject * getBufferObject()const;
Q_INVOKABLE  unsigned int  getContextID()const;
Q_INVOKABLE void  assign(osg::QReflect_BufferObject *);
Q_INVOKABLE void  bindBuffer();
Q_INVOKABLE void  clear();
Q_INVOKABLE void  compileBuffer();
Q_INVOKABLE void  deleteGLObject();
Q_INVOKABLE void  dirty();
Q_INVOKABLE void  release();
Q_INVOKABLE void  setBufferDataHasBeenRead(osg::QReflect_BufferData *);
Q_INVOKABLE void  setProfile(osg::QReflect_BufferObjectProfile *);
Q_INVOKABLE void  unbindBuffer();
Q_INVOKABLE void pmoc_reverse_setBufferObject( osg::QReflect_BufferObject *par=0);
Q_INVOKABLE void setBufferObject( osg::QReflect_BufferObject *par);
signals: void BufferObjectChanged(const osg::QReflect_BufferObject*);
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
#include <osg/BufferObject_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Object;
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
namespace osg{
class QReflect_BufferData; 
}


#include <MetaQQuickClass.h>
namespace osg{
class QReflect_BufferObject: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
BufferObject * _model;
QReflect_BufferObject(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_BufferObject( );
//BufferObject
// BufferObjectProfile & getProfile();
// GLenum  getTarget();
// GLenum  getUsage();
// void  deleteBufferObject( unsigned int  , GLuint );
// void  releaseGLObjects( State *);
// void  setTarget( GLenum );
// void  setUsage( GLenum );
//const  BufferObjectProfile & getProfile();
Q_INVOKABLE  bool  isSameKindAs(osg::QReflect_Object *)const;
Q_INVOKABLE  unsigned int  computeRequiredBufferSize()const;
Q_INVOKABLE  unsigned int  getNumBufferData()const;
Q_INVOKABLE const  char*  className()const;
Q_INVOKABLE const  char*  libraryName()const;
Q_INVOKABLE const bool  getCopyDataAndReleaseGLBufferObject()const;
Q_INVOKABLE osg::QReflect_BufferData*  getBufferData( unsigned int );
Q_INVOKABLE osg::QReflect_BufferData*  getBufferData( unsigned int )const;
Q_INVOKABLE osg::QReflect_GLBufferObject*  getGLBufferObject( unsigned int )const;
Q_INVOKABLE osg::QReflect_GLBufferObject*  getOrCreateGLBufferObject( unsigned int )const;
Q_INVOKABLE void   addBufferData( osg::QReflect_BufferData *par);//{return new osg::QReflect_BufferData(_model->getBufferData());}
Q_INVOKABLE void  dirty();
Q_INVOKABLE void  removeBufferData( unsigned int );
Q_INVOKABLE void  resizeGLObjectBuffers( unsigned int );
Q_INVOKABLE void  setBufferData( unsigned int  ,osg::QReflect_BufferData *);
Q_INVOKABLE void  setGLBufferObject( unsigned int  ,osg::QReflect_GLBufferObject *);
Q_INVOKABLE void pmoc_reverse_addBufferData( osg::QReflect_BufferData *par);//{_model->setBufferData(par->_model);emit BufferDataCollectionChanged(par);}
Q_INVOKABLE void setCopyDataAndReleaseGLBufferObject(const bool &);
Q_PROPERTY(bool CopyDataAndReleaseGLBufferObject  READ getCopyDataAndReleaseGLBufferObject WRITE setCopyDataAndReleaseGLBufferObject NOTIFY CopyDataAndReleaseGLBufferObjectChanged)
signals: void BufferDataCollectionChanged();
public:
signals: void CopyDataAndReleaseGLBufferObjectChanged(const bool&);
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
QReflect_AtomicCounterBufferObject(pmoc::Instance *i=0,QObject* parent=0);
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
#include <osg/BufferObject_pmoc.hpp>
#include <QObject>
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
QReflect_VertexBufferObject(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_VertexBufferObject( );
//VertexBufferObject
// Array * getArray( unsigned int );
// unsigned int  addArray( osg::Array *);
// void  removeArray( osg::Array *);
// void  setArray( unsigned int  , Array *);
//const  Array * getArray( unsigned int );
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
QReflect_ShaderStorageBufferObject(pmoc::Instance *i=0,QObject* parent=0);
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
#include <osg/BufferObject_pmoc.hpp>
#include <QObject>
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
QReflect_PixelBufferObject(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_PixelBufferObject( );
//PixelBufferObject
// Image * getImage();
// void  setImage( osg::Image *);
//const  Image * getImage();
Q_INVOKABLE  bool  isPBOSupported( unsigned int )const;
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
#include <osg/BufferObject>

#include <MetaQQuickClass.h>
namespace osg{
class QReflect_GLBufferObjectManager: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 0;}

/// inheritance simulated via composition
GLBufferObjectManager * _model;
QReflect_GLBufferObjectManager(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_GLBufferObjectManager( );
//GLBufferObjectManager
// osg::ref_ptr<GLBufferObject>  generateGLBufferObject(const  osg::BufferObject *);
// void  recomputeStats( std::ostream &);
// void  reportStats( std::ostream &);
Q_INVOKABLE  bool  hasSpace( unsigned int )const;
Q_INVOKABLE  bool  makeSpace( unsigned int );
Q_INVOKABLE  double&  getApplyTime();
Q_INVOKABLE  double&  getDeleteTime();
Q_INVOKABLE  double&  getGenerateTime();
Q_INVOKABLE  unsigned int&  getFrameNumber();
Q_INVOKABLE  unsigned int&  getNumberApplied();
Q_INVOKABLE  unsigned int&  getNumberDeleted();
Q_INVOKABLE  unsigned int&  getNumberFrames();
Q_INVOKABLE  unsigned int&  getNumberGenerated();
Q_INVOKABLE const unsigned int  getCurrGLBufferObjectPoolSize()const;
Q_INVOKABLE const unsigned int  getMaxGLBufferObjectPoolSize()const;
Q_INVOKABLE const unsigned int  getNumberActiveGLBufferObjects()const;
Q_INVOKABLE const unsigned int  getNumberOrphanedGLBufferObjects()const;
Q_INVOKABLE osg::QReflect_GLBufferObjectSet*  getGLBufferObjectSet(osg::QReflect_BufferObjectProfile *);
Q_INVOKABLE void  deleteAllGLObjects();
Q_INVOKABLE void  discardAllDeletedGLObjects();
Q_INVOKABLE void  discardAllGLObjects();
Q_INVOKABLE void  flushAllDeletedGLObjects();
Q_INVOKABLE void  flushDeletedGLObjects( double  , double &);
Q_INVOKABLE void  handlePendingOrphandedGLBufferObjects();
Q_INVOKABLE void  newFrame(osg::QReflect_FrameStamp *);
Q_INVOKABLE void  resetStats();
Q_INVOKABLE void setCurrGLBufferObjectPoolSize(const unsigned int &);
Q_INVOKABLE void setMaxGLBufferObjectPoolSize(const unsigned int &);
Q_INVOKABLE void setNumberActiveGLBufferObjects(const unsigned int &);
Q_INVOKABLE void setNumberOrphanedGLBufferObjects(const unsigned int &);
Q_PROPERTY(unsigned int CurrGLBufferObjectPoolSize  READ getCurrGLBufferObjectPoolSize WRITE setCurrGLBufferObjectPoolSize NOTIFY CurrGLBufferObjectPoolSizeChanged)
Q_PROPERTY(unsigned int MaxGLBufferObjectPoolSize  READ getMaxGLBufferObjectPoolSize WRITE setMaxGLBufferObjectPoolSize NOTIFY MaxGLBufferObjectPoolSizeChanged)
Q_PROPERTY(unsigned int NumberActiveGLBufferObjects  READ getNumberActiveGLBufferObjects WRITE setNumberActiveGLBufferObjects NOTIFY NumberActiveGLBufferObjectsChanged)
Q_PROPERTY(unsigned int NumberOrphanedGLBufferObjects  READ getNumberOrphanedGLBufferObjects WRITE setNumberOrphanedGLBufferObjects NOTIFY NumberOrphanedGLBufferObjectsChanged)
signals: void CurrGLBufferObjectPoolSizeChanged(const unsigned int&);
public:
signals: void MaxGLBufferObjectPoolSizeChanged(const unsigned int&);
public:
signals: void NumberActiveGLBufferObjectsChanged(const unsigned int&);
public:
signals: void NumberOrphanedGLBufferObjectsChanged(const unsigned int&);
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
#include <osg/BufferObject_pmoc.hpp>
#include <QObject>
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
QReflect_ElementBufferObject(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_ElementBufferObject( );
//ElementBufferObject
// DrawElements * getDrawElements( unsigned int );
// unsigned int  addDrawElements( osg::DrawElements *);
// void  removeDrawElements( osg::DrawElements *);
// void  setDrawElements( unsigned int  , DrawElements *);
//const  DrawElements * getDrawElements( unsigned int );
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
#include <osg/BufferObject_pmoc.hpp>
#include <QObject>
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
QReflect_BufferObjectProfile(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_BufferObjectProfile( );
//BufferObjectProfile
// BufferObjectProfile & operator=(const  BufferObjectProfile &);
// bool  operator<(const  BufferObjectProfile &);
// bool  operator==(const  BufferObjectProfile &);
// void  setProfile( GLenum  , GLenum  , unsigned int );
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
QReflect_UniformBufferObject(pmoc::Instance *i=0,QObject* parent=0);
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
#include <osg/BufferObject_pmoc.hpp>
#include <QObject>
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
QReflect_PixelDataBufferObject(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_PixelDataBufferObject( );
//PixelDataBufferObject
//virtual  void  bindBufferInReadMode( State &);
//virtual  void  bindBufferInWriteMode( State &);
//virtual  void  compileBuffer( State &);
Q_INVOKABLE const unsigned int  getDataSize()const;
Q_INVOKABLE osg::QReflect_PixelDataBufferObject::Mode  getMode( unsigned int )const;
Q_INVOKABLE void  resizeGLObjectBuffers( unsigned int );
Q_INVOKABLE void  unbindBuffer( unsigned int )const;
Q_INVOKABLE void setDataSize(const unsigned int &);
Q_PROPERTY(unsigned int DataSize  READ getDataSize WRITE setDataSize NOTIFY DataSizeChanged)
signals: void DataSizeChanged(const unsigned int&);
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
#include <osg/BufferObject_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Object;
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
namespace osg{
class QReflect_Object; 
}


#include <MetaQQuickClass.h>
namespace osg{
class QReflect_BufferData: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
BufferData * _model;
QReflect_BufferData(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_BufferData( );
//BufferData
// ModifiedCallback * getModifiedCallback();
//virtual  osg::Array * asArray();
//virtual  osg::Image * asImage();
//virtual  osg::PrimitiveSet * asPrimitiveSet();
// void  releaseGLObjects( State *);
// void  setModifiedCallback( ModifiedCallback *);
//const  ModifiedCallback * getModifiedCallback();
//virtual const  osg::Array * asArray();
//virtual const  osg::Image * asImage();
//virtual const  osg::PrimitiveSet * asPrimitiveSet();
Q_INVOKABLE  bool  isSameKindAs(osg::QReflect_Object *)const;
Q_INVOKABLE  osg::QReflect_BufferObject * getBufferObject()const;
Q_INVOKABLE  unsigned int  getNumClients()const;
Q_INVOKABLE const  char*  className()const;
Q_INVOKABLE const  char*  libraryName()const;
Q_INVOKABLE const unsigned int  getBufferIndex()const;
Q_INVOKABLE const unsigned int  getModifiedCount()const;
Q_INVOKABLE osg::QReflect_GLBufferObject*  getGLBufferObject( unsigned int )const;
Q_INVOKABLE osg::QReflect_GLBufferObject*  getOrCreateGLBufferObject( unsigned int )const;
Q_INVOKABLE void   addClient( osg::QReflect_Object *par);//{return new osg::QReflect_Object(_model->getClient());}
Q_INVOKABLE void  dirty();
Q_INVOKABLE void  resizeGLObjectBuffers( unsigned int );
Q_INVOKABLE void pmoc_reverse_addClient( osg::QReflect_Object *par);//{_model->setClient(par->_model);emit ClientCollectionChanged(par);}
Q_INVOKABLE void pmoc_reverse_setBufferObject( osg::QReflect_BufferObject *par=0);
Q_INVOKABLE void setBufferIndex(const unsigned int &);
Q_INVOKABLE void setBufferObject( osg::QReflect_BufferObject *par);
Q_INVOKABLE void setModifiedCount(const unsigned int &);
Q_PROPERTY(unsigned int BufferIndex  READ getBufferIndex WRITE setBufferIndex NOTIFY BufferIndexChanged)
Q_PROPERTY(unsigned int ModifiedCount  READ getModifiedCount WRITE setModifiedCount NOTIFY ModifiedCountChanged)
signals: void BufferIndexChanged(const unsigned int&);
public:
signals: void BufferObjectChanged(const osg::QReflect_BufferObject*);
public:
signals: void ClientCollectionChanged();
public:
signals: void ModifiedCountChanged(const unsigned int&);
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

#endif //osg_BufferObject_pmocHPP

