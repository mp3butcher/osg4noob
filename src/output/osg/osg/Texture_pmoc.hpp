#ifndef osg_Texture_pmocHPP
#define  osg_Texture_pmocHPP 1


#include <osg/Texture_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Object;
			} ;
namespace osg{ 
class QReflect_Image;
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
QReflect_Texture(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Texture( );
//Texture
// ImageAttachment & getImageAttachment();
// TextureObject * generateAndAssignTextureObject( unsigned int  , GLenum );
// TextureObject * generateAndAssignTextureObject( unsigned int  , GLenum  , GLint  , GLenum  , GLsizei  , GLsizei  , GLsizei  , GLint );
// TextureObject * getTextureObject( unsigned int );
//virtual  Type  getType();
//virtual  bool  getModeUsage( StateAttribute::ModeUsage &);
// osg::ref_ptr<Texture::TextureObjectManager> & getTextureObjectManager( unsigned int );
// osg::ref_ptr<TextureObject>  generateTextureObject(const  Texture * , unsigned int  , GLenum );
// osg::ref_ptr<TextureObject>  generateTextureObject(const  Texture * , unsigned int  , GLenum  , GLint  , GLenum  , GLsizei  , GLsizei  , GLsizei  , GLint );
// void  releaseTextureObject( unsigned int  , TextureObject *);
// void  setTextureObject( unsigned int  , TextureObject *);
//const  ImageAttachment & getImageAttachment();
//const  Vec4d & getBorderColor();
//const  Vec4i & getSwizzle();
Q_INVOKABLE  GLenum  getSourceFormat()const;
Q_INVOKABLE  GLenum  getSourceType()const;
Q_INVOKABLE  GLint  getBorderWidth()const;
Q_INVOKABLE  GLint  getInternalFormat()const;
Q_INVOKABLE  bool  areAllTextureObjectsLoaded()const;
Q_INVOKABLE  bool  getClientStorageHint()const;
Q_INVOKABLE  bool  getResizeNonPowerOfTwoHint()const;
Q_INVOKABLE  bool  getShadowComparison()const;
Q_INVOKABLE  bool  getUnRefImageDataAfterApply()const;
Q_INVOKABLE  bool  getUseHardwareMipMapGeneration()const;
Q_INVOKABLE  bool  isCompressedInternalFormat( GLint internalFormat);
Q_INVOKABLE  bool  isCompressedInternalFormat()const;
Q_INVOKABLE  bool  isSameKindAs(osg::QReflect_Object *obj)const;
Q_INVOKABLE  bool  isTextureAttribute()const;
Q_INVOKABLE  float  getMaxAnisotropy()const;
Q_INVOKABLE  float  getShadowAmbient()const;
Q_INVOKABLE  int  getTextureDepth()const;
Q_INVOKABLE  int  getTextureHeight()const;
Q_INVOKABLE  int  getTextureWidth()const;
Q_INVOKABLE  unsigned int&  getTextureParameterDirty( unsigned int contextID)const;
Q_INVOKABLE const  char*  className()const;
Q_INVOKABLE const  char*  libraryName()const;
Q_INVOKABLE osg::QReflect_GraphicsContext*  getReadPBuffer();
Q_INVOKABLE osg::QReflect_GraphicsContext*  getReadPBuffer()const;
Q_INVOKABLE osg::QReflect_Texture*  asTexture();
Q_INVOKABLE osg::QReflect_Texture*  asTexture()const;
Q_INVOKABLE osg::QReflect_Texture::FilterMode  getFilter(osg::QReflect_Texture::FilterParameter which)const;
Q_INVOKABLE osg::QReflect_Texture::InternalFormatMode  getInternalFormatMode()const;
Q_INVOKABLE osg::QReflect_Texture::InternalFormatType  getInternalFormatType()const;
Q_INVOKABLE osg::QReflect_Texture::ShadowCompareFunc  getShadowCompareFunc()const;
Q_INVOKABLE osg::QReflect_Texture::ShadowTextureMode  getShadowTextureMode()const;
Q_INVOKABLE osg::QReflect_Texture::WrapMode  getWrap(osg::QReflect_Texture::WrapParameter which)const;
Q_INVOKABLE void  allocateMipmapLevels();
Q_INVOKABLE void  applyTexImage2D_load(osg::QReflect_State *state , GLenum target ,osg::QReflect_Image *image , GLsizei width , GLsizei height , GLsizei numMipmapLevels)const;
Q_INVOKABLE void  applyTexImage2D_subload(osg::QReflect_State *state , GLenum target ,osg::QReflect_Image *image , GLsizei width , GLsizei height , GLint inInternalFormat , GLsizei numMipmapLevels)const;
Q_INVOKABLE void  bindToImageUnit( unsigned int unit , GLenum access , GLenum format , int level , bool layered , int layer);
Q_INVOKABLE void  compileGLObjects(osg::QReflect_State *state)const;
Q_INVOKABLE void  deleteAllTextureObjects( unsigned int contextID);
Q_INVOKABLE void  dirtyTextureObject();
Q_INVOKABLE void  dirtyTextureParameters();
Q_INVOKABLE void  discardAllDeletedTextureObjects( unsigned int contextID);
Q_INVOKABLE void  discardAllTextureObjects( unsigned int contextID);
Q_INVOKABLE void  flushAllDeletedTextureObjects( unsigned int contextID);
Q_INVOKABLE void  flushDeletedTextureObjects( unsigned int contextID , double currentTime , double &availableTime);
Q_INVOKABLE void  getCompressedSize( GLenum internalFormat , GLint width , GLint height , GLint depth , GLint &blockSize , GLint &size);
Q_INVOKABLE void  releaseGLObjects(osg::QReflect_State *state)const;
Q_INVOKABLE void  resizeGLObjectBuffers( unsigned int maxSize);
Q_INVOKABLE void  setBorderColor(osg::QReflect_Vec4d *color);
Q_INVOKABLE void  setBorderWidth( GLint width);
Q_INVOKABLE void  setClientStorageHint( bool flag);
Q_INVOKABLE void  setFilter(osg::QReflect_Texture::FilterParameter which ,osg::QReflect_Texture::FilterMode filter);
Q_INVOKABLE void  setInternalFormat( GLint internalFormat);
Q_INVOKABLE void  setInternalFormatMode(osg::QReflect_Texture::InternalFormatMode mode);
Q_INVOKABLE void  setMaxAnisotropy( float anis);
Q_INVOKABLE void  setReadPBuffer(osg::QReflect_GraphicsContext *context);
Q_INVOKABLE void  setResizeNonPowerOfTwoHint( bool flag);
Q_INVOKABLE void  setShadowAmbient( float shadow_ambient);
Q_INVOKABLE void  setShadowCompareFunc(osg::QReflect_Texture::ShadowCompareFunc func);
Q_INVOKABLE void  setShadowComparison( bool flag);
Q_INVOKABLE void  setShadowTextureMode(osg::QReflect_Texture::ShadowTextureMode mode);
Q_INVOKABLE void  setSourceFormat( GLenum sourceFormat);
Q_INVOKABLE void  setSourceType( GLenum sourceType);
Q_INVOKABLE void  setSwizzle(osg::QReflect_Vec4i *swizzle);
Q_INVOKABLE void  setUnRefImageDataAfterApply( bool flag);
Q_INVOKABLE void  setUseHardwareMipMapGeneration( bool useHardwareMipMapGeneration);
Q_INVOKABLE void  setWrap(osg::QReflect_Texture::WrapParameter which ,osg::QReflect_Texture::WrapMode wrap);
Q_PROPERTY(GLenum  SourceFormat  READ getSourceFormat WRITE setSourceFormat NOTIFY SourceFormatChanged)
Q_PROPERTY(GLenum  SourceType  READ getSourceType WRITE setSourceType NOTIFY SourceTypeChanged)
Q_PROPERTY(GLint  BorderWidth  READ getBorderWidth WRITE setBorderWidth NOTIFY BorderWidthChanged)
Q_PROPERTY(GLint  InternalFormat  READ getInternalFormat WRITE setInternalFormat NOTIFY InternalFormatChanged)
Q_PROPERTY(bool  ClientStorageHint  READ getClientStorageHint WRITE setClientStorageHint NOTIFY ClientStorageHintChanged)
Q_PROPERTY(bool  ResizeNonPowerOfTwoHint  READ getResizeNonPowerOfTwoHint WRITE setResizeNonPowerOfTwoHint NOTIFY ResizeNonPowerOfTwoHintChanged)
Q_PROPERTY(bool  ShadowComparison  READ getShadowComparison WRITE setShadowComparison NOTIFY ShadowComparisonChanged)
Q_PROPERTY(bool  UnRefImageDataAfterApply  READ getUnRefImageDataAfterApply WRITE setUnRefImageDataAfterApply NOTIFY UnRefImageDataAfterApplyChanged)
Q_PROPERTY(bool  UseHardwareMipMapGeneration  READ getUseHardwareMipMapGeneration WRITE setUseHardwareMipMapGeneration NOTIFY UseHardwareMipMapGenerationChanged)
Q_PROPERTY(float  MaxAnisotropy  READ getMaxAnisotropy WRITE setMaxAnisotropy NOTIFY MaxAnisotropyChanged)
Q_PROPERTY(float  ShadowAmbient  READ getShadowAmbient WRITE setShadowAmbient NOTIFY ShadowAmbientChanged)
Q_PROPERTY(osg::QReflect_GraphicsContext * ReadPBuffer  READ getReadPBuffer WRITE setReadPBuffer NOTIFY ReadPBufferChanged)
Q_PROPERTY(osg::QReflect_Texture::InternalFormatMode  InternalFormatMode  READ getInternalFormatMode WRITE setInternalFormatMode NOTIFY InternalFormatModeChanged)
Q_PROPERTY(osg::QReflect_Texture::ShadowCompareFunc  ShadowCompareFunc  READ getShadowCompareFunc WRITE setShadowCompareFunc NOTIFY ShadowCompareFuncChanged)
Q_PROPERTY(osg::QReflect_Texture::ShadowTextureMode  ShadowTextureMode  READ getShadowTextureMode WRITE setShadowTextureMode NOTIFY ShadowTextureModeChanged)
signals: void BorderWidthChanged();
public:
signals: void ClientStorageHintChanged();
public:
signals: void InternalFormatChanged();
public:
signals: void InternalFormatModeChanged();
public:
signals: void MaxAnisotropyChanged();
public:
signals: void ReadPBufferChanged();
public:
signals: void ResizeNonPowerOfTwoHintChanged();
public:
signals: void ShadowAmbientChanged();
public:
signals: void ShadowCompareFuncChanged();
public:
signals: void ShadowComparisonChanged();
public:
signals: void ShadowTextureModeChanged();
public:
signals: void SourceFormatChanged();
public:
signals: void SourceTypeChanged();
public:
signals: void UnRefImageDataAfterApplyChanged();
public:
signals: void UseHardwareMipMapGenerationChanged();
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


#endif //osg_Texture_pmocHPP

