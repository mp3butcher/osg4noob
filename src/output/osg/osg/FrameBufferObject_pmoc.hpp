#ifndef osg_FrameBufferObject_pmocHPP
#define  osg_FrameBufferObject_pmocHPP 1


#include <osg/FrameBufferObject_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Texture;
			} ;
namespace osg{ 
class QReflect_State;
			} ;
namespace osg{ 
class QReflect_GLExtensions;
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
QReflect_FrameBufferAttachment(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_FrameBufferAttachment( );
//FrameBufferAttachment
// FrameBufferAttachment & operator=(const  FrameBufferAttachment &);
Q_INVOKABLE  bool  isMultisample()const;
Q_INVOKABLE  int  compare(osg::QReflect_FrameBufferAttachment *fa)const;
Q_INVOKABLE  unsigned int  getCubeMapFace()const;
Q_INVOKABLE  unsigned int  getTexture3DZOffset()const;
Q_INVOKABLE  unsigned int  getTextureArrayLayer()const;
Q_INVOKABLE  unsigned int  getTextureLevel()const;
Q_INVOKABLE osg::QReflect_RenderBuffer*  getRenderBuffer();
Q_INVOKABLE osg::QReflect_RenderBuffer*  getRenderBuffer()const;
Q_INVOKABLE osg::QReflect_Texture*  getTexture();
Q_INVOKABLE osg::QReflect_Texture*  getTexture()const;
Q_INVOKABLE void  attach(osg::QReflect_State *state , GLenum target , GLenum attachment_point ,osg::QReflect_GLExtensions *ext)const;
Q_INVOKABLE void  createRequiredTexturesAndApplyGenerateMipMap(osg::QReflect_State *state ,osg::QReflect_GLExtensions *ext)const;
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
#include <osg/FrameBufferObject_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_State;
			} ;
namespace osg{ 
class QReflect_GLExtensions;
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
QReflect_RenderBuffer(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_RenderBuffer( );
//RenderBuffer
Q_INVOKABLE  GLenum  getInternalFormat()const;
Q_INVOKABLE  GLuint  getObjectID( unsigned int contextID ,osg::QReflect_GLExtensions *ext)const;
Q_INVOKABLE  int  compare(osg::QReflect_RenderBuffer *rb)const;
Q_INVOKABLE  int  getColorSamples()const;
Q_INVOKABLE  int  getHeight()const;
Q_INVOKABLE  int  getMaxSamples( unsigned int contextID ,osg::QReflect_GLExtensions *ext);
Q_INVOKABLE  int  getSamples()const;
Q_INVOKABLE  int  getWidth()const;
Q_INVOKABLE void  deleteRenderBuffer( unsigned int contextID , GLuint rb);
Q_INVOKABLE void  discardDeletedRenderBuffers( unsigned int contextID);
Q_INVOKABLE void  flushDeletedRenderBuffers( unsigned int contextID , double currentTime , double &availableTime);
Q_INVOKABLE void  releaseGLObjects(osg::QReflect_State *)const;
Q_INVOKABLE void  resizeGLObjectBuffers( unsigned int maxSize);
Q_INVOKABLE void  setColorSamples( int colorSamples);
Q_INVOKABLE void  setHeight( int h);
Q_INVOKABLE void  setInternalFormat( GLenum format);
Q_INVOKABLE void  setSamples( int samples);
Q_INVOKABLE void  setSize( int w , int h);
Q_INVOKABLE void  setWidth( int w);
Q_PROPERTY(GLenum  InternalFormat  READ getInternalFormat WRITE setInternalFormat NOTIFY InternalFormatChanged)
Q_PROPERTY(int  ColorSamples  READ getColorSamples WRITE setColorSamples NOTIFY ColorSamplesChanged)
Q_PROPERTY(int  Height  READ getHeight WRITE setHeight NOTIFY HeightChanged)
Q_PROPERTY(int  Samples  READ getSamples WRITE setSamples NOTIFY SamplesChanged)
Q_PROPERTY(int  Width  READ getWidth WRITE setWidth NOTIFY WidthChanged)
signals: void ColorSamplesChanged();
public:
signals: void HeightChanged();
public:
signals: void InternalFormatChanged();
public:
signals: void SamplesChanged();
public:
signals: void WidthChanged();
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
#include<osg/FrameBufferObject_pmoc.hpp>
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
QReflect_FrameBufferObject(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_FrameBufferObject( );
//FrameBufferObject
// bool  hasAttachment( BufferComponent );
// void  setAttachment( BufferComponent  ,const  FrameBufferAttachment &);
//const  AttachmentMap & getAttachmentMap();
//const  FrameBufferAttachment & getAttachment( BufferComponent );
//const  MultipleRenderingTargets & getMultipleRenderingTargets();
Q_INVOKABLE  GLuint  getHandle( unsigned int contextID)const;
Q_INVOKABLE  bool  hasMultipleRenderingTargets()const;
Q_INVOKABLE  bool  isMultisample()const;
Q_INVOKABLE  int  compare(osg::QReflect_StateAttribute *sa)const;
Q_INVOKABLE void  apply(osg::QReflect_State *state ,osg::QReflect_FrameBufferObject::BindTarget target)const;
Q_INVOKABLE void  apply(osg::QReflect_State *state)const;
Q_INVOKABLE void  deleteFrameBufferObject( unsigned int contextID , GLuint program);
Q_INVOKABLE void  discardDeletedFrameBufferObjects( unsigned int contextID);
Q_INVOKABLE void  flushDeletedFrameBufferObjects( unsigned int contextID , double currentTime , double &availableTime);
Q_INVOKABLE void  releaseGLObjects(osg::QReflect_State *)const;
Q_INVOKABLE void  resizeGLObjectBuffers( unsigned int maxSize);
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


#endif //osg_FrameBufferObject_pmocHPP

