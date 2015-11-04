#ifndef osg_Texture_pmocHPP
#define  osg_Texture_pmocHPP 1
#include <osg/Texture_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_FrameStamp;
			} ;
#include <osg/Texture>

#include <MetaQQuickClass.h>
namespace osg{
class QReflect_TextureObjectManager: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 0;}

/// inheritance simulated via composition
TextureObjectManager * _model;
QReflect_TextureObjectManager(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_TextureObjectManager( );
//TextureObjectManager
// TextureObjectSet * getTextureObjectSet(const  Texture::TextureProfile &);
// osg::ref_ptr<Texture::TextureObject>  generateTextureObject(const  Texture * , GLenum );
// osg::ref_ptr<Texture::TextureObject>  generateTextureObject(const  Texture * , GLenum  , GLint  , GLenum  , GLsizei  , GLsizei  , GLsizei  , GLint );
// void  flushDeletedGLObjects( double  , double &);
// void  recomputeStats( std::ostream &);
// void  reportStats( std::ostream &);
Q_INVOKABLE  bool  checkConsistency()const;
Q_INVOKABLE  bool  hasSpace( unsigned int )const;
Q_INVOKABLE  bool  makeSpace( unsigned int );
Q_INVOKABLE  double&  getDeleteTime();
Q_INVOKABLE  double&  getGenerateTime();
Q_INVOKABLE  unsigned int&  getFrameNumber();
Q_INVOKABLE  unsigned int&  getNumberDeleted();
Q_INVOKABLE  unsigned int&  getNumberFrames();
Q_INVOKABLE  unsigned int&  getNumberGenerated();
Q_INVOKABLE const unsigned int  getCurrTexturePoolSize()const;
Q_INVOKABLE const unsigned int  getMaxTexturePoolSize()const;
Q_INVOKABLE const unsigned int  getNumberActiveTextureObjects()const;
Q_INVOKABLE const unsigned int  getNumberOrphanedTextureObjects()const;
Q_INVOKABLE void  deleteAllGLObjects();
Q_INVOKABLE void  discardAllDeletedGLObjects();
Q_INVOKABLE void  discardAllGLObjects();
Q_INVOKABLE void  flushAllDeletedGLObjects();
Q_INVOKABLE void  handlePendingOrphandedTextureObjects();
Q_INVOKABLE void  newFrame(osg::QReflect_FrameStamp *);
Q_INVOKABLE void  resetStats();
Q_INVOKABLE void setCurrTexturePoolSize(const unsigned int &);
Q_INVOKABLE void setMaxTexturePoolSize(const unsigned int &);
Q_INVOKABLE void setNumberActiveTextureObjects(const unsigned int &);
Q_INVOKABLE void setNumberOrphanedTextureObjects(const unsigned int &);
Q_PROPERTY(unsigned int CurrTexturePoolSize  READ getCurrTexturePoolSize WRITE setCurrTexturePoolSize NOTIFY CurrTexturePoolSizeChanged)
Q_PROPERTY(unsigned int MaxTexturePoolSize  READ getMaxTexturePoolSize WRITE setMaxTexturePoolSize NOTIFY MaxTexturePoolSizeChanged)
Q_PROPERTY(unsigned int NumberActiveTextureObjects  READ getNumberActiveTextureObjects WRITE setNumberActiveTextureObjects NOTIFY NumberActiveTextureObjectsChanged)
Q_PROPERTY(unsigned int NumberOrphanedTextureObjects  READ getNumberOrphanedTextureObjects WRITE setNumberOrphanedTextureObjects NOTIFY NumberOrphanedTextureObjectsChanged)
signals: void CurrTexturePoolSizeChanged(const unsigned int&);
public:
signals: void MaxTexturePoolSizeChanged(const unsigned int&);
public:
signals: void NumberActiveTextureObjectsChanged(const unsigned int&);
public:
signals: void NumberOrphanedTextureObjectsChanged(const unsigned int&);
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_TextureObjectManager: public pmoc::MetaQQuickClass{
protected:
   public:
MetaQReflect_TextureObjectManager();
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
#include <osg/Texture_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_TextureObjectManager;
			} ;
#include <osg/Texture>
#include <osg/Texture>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_TextureObjectSet: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
TextureObjectSet * _model;
QReflect_TextureObjectSet(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_TextureObjectSet( );
//TextureObjectSet
// bool  makeSpace( unsigned int &);
// osg::ref_ptr<Texture::TextureObject>  takeFromOrphans( Texture *);
// osg::ref_ptr<Texture::TextureObject>  takeOrGenerate( Texture *);
// void  addToBack( Texture::TextureObject *);
// void  flushDeletedTextureObjects( double  , double &);
// void  moveToBack( Texture::TextureObject *);
// void  moveToSet( Texture::TextureObject * , TextureObjectSet *);
// void  orphan( Texture::TextureObject *);
// void  remove( Texture::TextureObject *);
//const  Texture::TextureProfile & getProfile();
Q_INVOKABLE  bool  checkConsistency()const;
Q_INVOKABLE  unsigned int  computeNumTextureObjectsInList()const;
Q_INVOKABLE  unsigned int  getNumOfTextureObjects()const;
Q_INVOKABLE  unsigned int  getNumOrphans()const;
Q_INVOKABLE  unsigned int  getNumPendingOrphans()const;
Q_INVOKABLE  unsigned int  size()const;
Q_INVOKABLE osg::QReflect_TextureObjectManager*  getParent();
Q_INVOKABLE void  deleteAllTextureObjects();
Q_INVOKABLE void  discardAllDeletedTextureObjects();
Q_INVOKABLE void  discardAllTextureObjects();
Q_INVOKABLE void  flushAllDeletedTextureObjects();
Q_INVOKABLE void  handlePendingOrphandedTextureObjects();
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_TextureObjectSet: public pmoc::MetaQQuickClass{
protected:
   public:
MetaQReflect_TextureObjectSet();
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
#include <osg/Texture_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Object;
			} ;
namespace osg{ 
class QReflect_Texture;
			} ;
namespace osg{ 
class QReflect_State;
			} ;
namespace osg{ 
class QReflect_Vec4d;
			} ;
namespace osg{ 
class QReflect_Vec4i;
			} ;
namespace osg{ 
class QReflect_GraphicsContext;
			} ;
#include <osg/Texture>
#include <osg/Texture>

#include <osg/ref_ptr>
#include<osg/Texture_pmoc.hpp>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_Texture: public pmoc::QQModel
{
Q_OBJECT
public:
 enum FilterMode{
LINEAR =Texture::LINEAR,
LINEAR_MIPMAP_LINEAR =Texture::LINEAR_MIPMAP_LINEAR,
LINEAR_MIPMAP_NEAREST =Texture::LINEAR_MIPMAP_NEAREST,
NEAREST =Texture::NEAREST,
NEAREST_MIPMAP_LINEAR =Texture::NEAREST_MIPMAP_LINEAR,
NEAREST_MIPMAP_NEAREST =Texture::NEAREST_MIPMAP_NEAREST};
  Q_ENUMS(FilterMode)
private:
public:
 enum FilterParameter{
MIN_FILTER =Texture::MIN_FILTER,
MAG_FILTER =Texture::MAG_FILTER};
  Q_ENUMS(FilterParameter)
private:
public:
 enum GenerateMipmapMode{
GENERATE_MIPMAP_NONE =Texture::GENERATE_MIPMAP_NONE,
GENERATE_MIPMAP =Texture::GENERATE_MIPMAP,
GENERATE_MIPMAP_TEX_PARAMETER =Texture::GENERATE_MIPMAP_TEX_PARAMETER};
  Q_ENUMS(GenerateMipmapMode)
private:
public:
 enum ImageAccess{
NOT_USED =Texture::NOT_USED,
READ_ONLY =Texture::READ_ONLY,
WRITE_ONLY =Texture::WRITE_ONLY,
READ_WRITE =Texture::READ_WRITE};
  Q_ENUMS(ImageAccess)
private:
public:
 enum InternalFormatMode{
USE_IMAGE_DATA_FORMAT =Texture::USE_IMAGE_DATA_FORMAT,
USE_USER_DEFINED_FORMAT =Texture::USE_USER_DEFINED_FORMAT,
USE_ARB_COMPRESSION =Texture::USE_ARB_COMPRESSION,
USE_S3TC_DXT1_COMPRESSION =Texture::USE_S3TC_DXT1_COMPRESSION,
USE_S3TC_DXT3_COMPRESSION =Texture::USE_S3TC_DXT3_COMPRESSION,
USE_S3TC_DXT5_COMPRESSION =Texture::USE_S3TC_DXT5_COMPRESSION,
USE_PVRTC_2BPP_COMPRESSION =Texture::USE_PVRTC_2BPP_COMPRESSION,
USE_PVRTC_4BPP_COMPRESSION =Texture::USE_PVRTC_4BPP_COMPRESSION,
USE_ETC_COMPRESSION =Texture::USE_ETC_COMPRESSION,
USE_ETC2_COMPRESSION =Texture::USE_ETC2_COMPRESSION,
USE_RGTC1_COMPRESSION =Texture::USE_RGTC1_COMPRESSION,
USE_RGTC2_COMPRESSION =Texture::USE_RGTC2_COMPRESSION,
USE_S3TC_DXT1c_COMPRESSION =Texture::USE_S3TC_DXT1c_COMPRESSION,
USE_S3TC_DXT1a_COMPRESSION =Texture::USE_S3TC_DXT1a_COMPRESSION};
  Q_ENUMS(InternalFormatMode)
private:
public:
 enum InternalFormatType{
NORMALIZED =Texture::NORMALIZED,
FLOAT =Texture::FLOAT,
SIGNED_INTEGER =Texture::SIGNED_INTEGER,
UNSIGNED_INTEGER =Texture::UNSIGNED_INTEGER};
  Q_ENUMS(InternalFormatType)
private:
public:
 enum ShadowCompareFunc{
NEVER =Texture::NEVER,
LESS =Texture::LESS,
EQUAL =Texture::EQUAL,
LEQUAL =Texture::LEQUAL,
GREATER =Texture::GREATER,
NOTEQUAL =Texture::NOTEQUAL,
GEQUAL =Texture::GEQUAL,
ALWAYS =Texture::ALWAYS};
  Q_ENUMS(ShadowCompareFunc)
private:
public:
 enum ShadowTextureMode{
LUMINANCE =Texture::LUMINANCE,
INTENSITY =Texture::INTENSITY,
ALPHA =Texture::ALPHA};
  Q_ENUMS(ShadowTextureMode)
private:
public:
 enum WrapMode{
CLAMP =Texture::CLAMP,
CLAMP_TO_EDGE =Texture::CLAMP_TO_EDGE,
CLAMP_TO_BORDER =Texture::CLAMP_TO_BORDER,
REPEAT =Texture::REPEAT,
MIRROR =Texture::MIRROR};
  Q_ENUMS(WrapMode)
private:
public:
 enum WrapParameter{
WRAP_S =Texture::WRAP_S,
WRAP_T =Texture::WRAP_T,
WRAP_R =Texture::WRAP_R};
  Q_ENUMS(WrapParameter)
private:
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
Texture * _model;
QReflect_Texture(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Texture( );
//Texture
// GLenum  getSourceFormat();
// GLenum  getSourceType();
// ImageAttachment & getImageAttachment();
// TextureObject * generateAndAssignTextureObject( unsigned int  , GLenum );
// TextureObject * generateAndAssignTextureObject( unsigned int  , GLenum  , GLint  , GLenum  , GLsizei  , GLsizei  , GLsizei  , GLint );
// TextureObject * getTextureObject( unsigned int );
//virtual  Type  getType();
//virtual  bool  getModeUsage( StateAttribute::ModeUsage &);
// osg::ref_ptr<TextureObject>  generateTextureObject(const  Texture * , unsigned int  , GLenum );
// osg::ref_ptr<TextureObject>  generateTextureObject(const  Texture * , unsigned int  , GLenum  , GLint  , GLenum  , GLsizei  , GLsizei  , GLsizei  , GLint );
// void  applyTexImage2D_load( State & , GLenum  ,const  Image * , GLsizei  , GLsizei  , GLsizei );
// void  applyTexImage2D_subload( State & , GLenum  ,const  Image * , GLsizei  , GLsizei  , GLint  , GLsizei );
// void  bindToImageUnit( unsigned int  , GLenum  , GLenum  , int  , bool  , int );
//virtual  void  compileGLObjects( State &);
// void  getCompressedSize( GLenum  , GLint  , GLint  , GLint  , GLint & , GLint &);
// void  setSourceFormat( GLenum );
// void  setSourceType( GLenum );
// void  setTextureObject( unsigned int  , TextureObject *);
//const  ImageAttachment & getImageAttachment();
//const  Vec4d & getBorderColor();
//const  Vec4i & getSwizzle();
Q_INVOKABLE  GLint  getBorderWidth()const;
Q_INVOKABLE  GLint  getInternalFormat()const;
Q_INVOKABLE  bool  areAllTextureObjectsLoaded()const;
Q_INVOKABLE  bool  isCompressedInternalFormat( GLint );
Q_INVOKABLE  bool  isCompressedInternalFormat()const;
Q_INVOKABLE  bool  isSameKindAs(osg::QReflect_Object *)const;
Q_INVOKABLE  bool  isTextureAttribute()const;
Q_INVOKABLE  int  getTextureDepth()const;
Q_INVOKABLE  int  getTextureHeight()const;
Q_INVOKABLE  int  getTextureWidth()const;
Q_INVOKABLE  osg::QReflect_GraphicsContext * getReadPBuffer()const;
Q_INVOKABLE  unsigned int&  getTextureParameterDirty( unsigned int )const;
Q_INVOKABLE const  char*  className()const;
Q_INVOKABLE const  char*  libraryName()const;
Q_INVOKABLE const bool  getClientStorageHint()const;
Q_INVOKABLE const bool  getResizeNonPowerOfTwoHint()const;
Q_INVOKABLE const bool  getShadowComparison()const;
Q_INVOKABLE const bool  getUnRefImageDataAfterApply()const;
Q_INVOKABLE const bool  getUseHardwareMipMapGeneration()const;
Q_INVOKABLE const float  getMaxAnisotropy()const;
Q_INVOKABLE const float  getShadowAmbient()const;
Q_INVOKABLE osg::QReflect_Texture*  asTexture();
Q_INVOKABLE osg::QReflect_Texture*  asTexture()const;
Q_INVOKABLE osg::QReflect_Texture::FilterMode  getFilter(osg::QReflect_Texture::FilterParameter )const;
Q_INVOKABLE osg::QReflect_Texture::InternalFormatMode  getInternalFormatMode()const;
Q_INVOKABLE osg::QReflect_Texture::InternalFormatType  getInternalFormatType()const;
Q_INVOKABLE osg::QReflect_Texture::ShadowCompareFunc  getShadowCompareFunc()const;
Q_INVOKABLE osg::QReflect_Texture::ShadowTextureMode  getShadowTextureMode()const;
Q_INVOKABLE osg::QReflect_Texture::WrapMode  getWrap(osg::QReflect_Texture::WrapParameter )const;
Q_INVOKABLE void  allocateMipmapLevels();
Q_INVOKABLE void  dirtyTextureObject();
Q_INVOKABLE void  dirtyTextureParameters();
Q_INVOKABLE void  releaseGLObjects(osg::QReflect_State *)const;
Q_INVOKABLE void  resizeGLObjectBuffers( unsigned int );
Q_INVOKABLE void  setBorderColor(osg::QReflect_Vec4d *);
Q_INVOKABLE void  setBorderWidth( GLint );
Q_INVOKABLE void  setFilter(osg::QReflect_Texture::FilterParameter  ,osg::QReflect_Texture::FilterMode );
Q_INVOKABLE void  setInternalFormat( GLint );
Q_INVOKABLE void  setInternalFormatMode(osg::QReflect_Texture::InternalFormatMode );
Q_INVOKABLE void  setShadowCompareFunc(osg::QReflect_Texture::ShadowCompareFunc );
Q_INVOKABLE void  setShadowTextureMode(osg::QReflect_Texture::ShadowTextureMode );
Q_INVOKABLE void  setSwizzle(osg::QReflect_Vec4i *);
Q_INVOKABLE void  setWrap(osg::QReflect_Texture::WrapParameter  ,osg::QReflect_Texture::WrapMode );
Q_INVOKABLE void pmoc_reverse_setReadPBuffer( osg::QReflect_GraphicsContext *par=0);
Q_INVOKABLE void setClientStorageHint(const bool &);
Q_INVOKABLE void setMaxAnisotropy(const float &);
Q_INVOKABLE void setReadPBuffer( osg::QReflect_GraphicsContext *par);
Q_INVOKABLE void setResizeNonPowerOfTwoHint(const bool &);
Q_INVOKABLE void setShadowAmbient(const float &);
Q_INVOKABLE void setShadowComparison(const bool &);
Q_INVOKABLE void setUnRefImageDataAfterApply(const bool &);
Q_INVOKABLE void setUseHardwareMipMapGeneration(const bool &);
Q_PROPERTY(bool ClientStorageHint  READ getClientStorageHint WRITE setClientStorageHint NOTIFY ClientStorageHintChanged)
Q_PROPERTY(bool ResizeNonPowerOfTwoHint  READ getResizeNonPowerOfTwoHint WRITE setResizeNonPowerOfTwoHint NOTIFY ResizeNonPowerOfTwoHintChanged)
Q_PROPERTY(bool ShadowComparison  READ getShadowComparison WRITE setShadowComparison NOTIFY ShadowComparisonChanged)
Q_PROPERTY(bool UnRefImageDataAfterApply  READ getUnRefImageDataAfterApply WRITE setUnRefImageDataAfterApply NOTIFY UnRefImageDataAfterApplyChanged)
Q_PROPERTY(bool UseHardwareMipMapGeneration  READ getUseHardwareMipMapGeneration WRITE setUseHardwareMipMapGeneration NOTIFY UseHardwareMipMapGenerationChanged)
Q_PROPERTY(float MaxAnisotropy  READ getMaxAnisotropy WRITE setMaxAnisotropy NOTIFY MaxAnisotropyChanged)
Q_PROPERTY(float ShadowAmbient  READ getShadowAmbient WRITE setShadowAmbient NOTIFY ShadowAmbientChanged)
signals: void ClientStorageHintChanged(const bool&);
public:
signals: void MaxAnisotropyChanged(const float&);
public:
signals: void ReadPBufferChanged(const osg::QReflect_GraphicsContext*);
public:
signals: void ResizeNonPowerOfTwoHintChanged(const bool&);
public:
signals: void ShadowAmbientChanged(const float&);
public:
signals: void ShadowComparisonChanged(const bool&);
public:
signals: void UnRefImageDataAfterApplyChanged(const bool&);
public:
signals: void UseHardwareMipMapGenerationChanged(const bool&);
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Texture: public pmoc::MetaQQuickClass{
protected:
   public:
MetaQReflect_Texture();
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

#endif //osg_Texture_pmocHPP

