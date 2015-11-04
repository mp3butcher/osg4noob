#ifndef osg_FrameBufferObject_pmocHPP
#define  osg_FrameBufferObject_pmocHPP 1

#include <osg/FrameBufferObject_pmoc.hpp>
#include <QObject>
#include <osg/FrameBufferObject>

#include <MetaQQuickClass.h>
namespace osg{
class QReflect_GLFrameBufferObjectManager: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 0;}

/// inheritance simulated via composition
GLFrameBufferObjectManager * _model;
QReflect_GLFrameBufferObjectManager(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_GLFrameBufferObjectManager( );
//GLFrameBufferObjectManager
Q_INVOKABLE void  deleteGLObject( GLuint );
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_GLFrameBufferObjectManager: public pmoc::MetaQQuickClass{
protected:
   public:
MetaQReflect_GLFrameBufferObjectManager();
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
#include <osg/FrameBufferObject_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Texture;
			} ;
namespace osg{ 
class QReflect_RenderBuffer;
			} ;
namespace osg{ 
class QReflect_FrameBufferAttachment;
			} ;
#include <osg/FrameBufferObject>

#include <MetaQQuickClass.h>
namespace osg{
class QReflect_FrameBufferAttachment: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 0;}

/// inheritance simulated via composition
FrameBufferAttachment * _model;
QReflect_FrameBufferAttachment(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_FrameBufferAttachment( );
//FrameBufferAttachment
// FrameBufferAttachment & operator=(const  FrameBufferAttachment &);
// void  attach( State & , GLenum  , GLenum  ,const  GLExtensions *);
// void  createRequiredTexturesAndApplyGenerateMipMap( State & ,const  GLExtensions *);
Q_INVOKABLE  bool  isMultisample()const;
Q_INVOKABLE  int  compare(osg::QReflect_FrameBufferAttachment *)const;
Q_INVOKABLE  unsigned int  getCubeMapFace()const;
Q_INVOKABLE  unsigned int  getTexture3DZOffset()const;
Q_INVOKABLE  unsigned int  getTextureArrayLayer()const;
Q_INVOKABLE  unsigned int  getTextureLevel()const;
Q_INVOKABLE osg::QReflect_RenderBuffer*  getRenderBuffer();
Q_INVOKABLE osg::QReflect_RenderBuffer*  getRenderBuffer()const;
Q_INVOKABLE osg::QReflect_Texture*  getTexture();
Q_INVOKABLE osg::QReflect_Texture*  getTexture()const;
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_FrameBufferAttachment: public pmoc::MetaQQuickClass{
protected:
std::set<osg::FrameBufferAttachment* 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_FrameBufferAttachment();
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
#include <osg/FrameBufferObject_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_GLExtensions;
			} ;
namespace osg{ 
class QReflect_State;
			} ;
namespace osg{ 
class QReflect_RenderBuffer;
			} ;
#include <osg/FrameBufferObject>
#include <osg/FrameBufferObject>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_RenderBuffer: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
RenderBuffer * _model;
QReflect_RenderBuffer(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_RenderBuffer( );
//RenderBuffer
// GLenum  getInternalFormat();
// void  setInternalFormat( GLenum );
Q_INVOKABLE  GLuint  getObjectID( unsigned int  ,osg::QReflect_GLExtensions *)const;
Q_INVOKABLE  int  compare(osg::QReflect_RenderBuffer *)const;
Q_INVOKABLE  int  getMaxSamples( unsigned int  ,osg::QReflect_GLExtensions *);
Q_INVOKABLE const int  getColorSamples()const;
Q_INVOKABLE const int  getHeight()const;
Q_INVOKABLE const int  getSamples()const;
Q_INVOKABLE const int  getWidth()const;
Q_INVOKABLE void  releaseGLObjects(osg::QReflect_State *)const;
Q_INVOKABLE void  resizeGLObjectBuffers( unsigned int );
Q_INVOKABLE void  setSize( int  , int );
Q_INVOKABLE void setColorSamples(const int &);
Q_INVOKABLE void setHeight(const int &);
Q_INVOKABLE void setSamples(const int &);
Q_INVOKABLE void setWidth(const int &);
Q_PROPERTY(int ColorSamples  READ getColorSamples WRITE setColorSamples NOTIFY ColorSamplesChanged)
Q_PROPERTY(int Height  READ getHeight WRITE setHeight NOTIFY HeightChanged)
Q_PROPERTY(int Samples  READ getSamples WRITE setSamples NOTIFY SamplesChanged)
Q_PROPERTY(int Width  READ getWidth WRITE setWidth NOTIFY WidthChanged)
signals: void ColorSamplesChanged(const int&);
public:
signals: void HeightChanged(const int&);
public:
signals: void SamplesChanged(const int&);
public:
signals: void WidthChanged(const int&);
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_RenderBuffer: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::RenderBuffer> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_RenderBuffer();
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
#include <osg/FrameBufferObject_pmoc.hpp>
#include <QObject>
#include <osg/FrameBufferObject>

#include <MetaQQuickClass.h>
namespace osg{
class QReflect_GLRenderBufferManager: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 0;}

/// inheritance simulated via composition
GLRenderBufferManager * _model;
QReflect_GLRenderBufferManager(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_GLRenderBufferManager( );
//GLRenderBufferManager
Q_INVOKABLE void  deleteGLObject( GLuint );
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_GLRenderBufferManager: public pmoc::MetaQQuickClass{
protected:
   public:
MetaQReflect_GLRenderBufferManager();
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
#include <osg/FrameBufferObject_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_StateAttribute;
			} ;
namespace osg{ 
class QReflect_State;
			} ;
#include <osg/FrameBufferObject>
#include <osg/FrameBufferObject>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_FrameBufferObject: public pmoc::QQModel
{
Q_OBJECT
public:
 enum BindTarget{
READ_FRAMEBUFFER =FrameBufferObject::READ_FRAMEBUFFER,
DRAW_FRAMEBUFFER =FrameBufferObject::DRAW_FRAMEBUFFER,
READ_DRAW_FRAMEBUFFER =FrameBufferObject::READ_DRAW_FRAMEBUFFER};
  Q_ENUMS(BindTarget)
private:
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
FrameBufferObject * _model;
QReflect_FrameBufferObject(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_FrameBufferObject( );
//FrameBufferObject
// bool  hasAttachment( BufferComponent );
// void  apply( State &);
// void  apply( State & , BindTarget );
// void  setAttachment( BufferComponent  ,const  FrameBufferAttachment &);
//const  AttachmentMap & getAttachmentMap();
//const  FrameBufferAttachment & getAttachment( BufferComponent );
//const  MultipleRenderingTargets & getMultipleRenderingTargets();
Q_INVOKABLE  GLuint  getHandle( unsigned int )const;
Q_INVOKABLE  bool  hasMultipleRenderingTargets()const;
Q_INVOKABLE  bool  isMultisample()const;
Q_INVOKABLE  int  compare(osg::QReflect_StateAttribute *)const;
Q_INVOKABLE void  releaseGLObjects(osg::QReflect_State *)const;
Q_INVOKABLE void  resizeGLObjectBuffers( unsigned int );
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_FrameBufferObject: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::FrameBufferObject> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_FrameBufferObject();
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

#endif //osg_FrameBufferObject_pmocHPP

