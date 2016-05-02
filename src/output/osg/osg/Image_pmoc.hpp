#ifndef osg_Image_pmocHPP
#define  osg_Image_pmocHPP 1


#include <osg/Image_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Object;
			} ;
namespace osg{ 
class QReflect_Image;
			} ;
namespace osg{ 
class QReflect_CopyOp;
			} ;
namespace osg{ 
class QReflect_NodeVisitor;
			} ;
namespace osg{ 
class QReflect_Vec4f;
			} ;
namespace osg{ 
class QReflect_Vec3f;
			} ;
namespace osg{ 
class QReflect_Vec2f;
			} ;
namespace osg{ 
class QReflect_FrameStamp;
			} ;
namespace osg{ 
class QReflect_PixelBufferObject;
			} ;
#include <osg/Image>
#include <osg/Image>

#include <osg/ref_ptr>
#include<osg/Image_pmoc.hpp>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_Image: public pmoc::QQModel
{
Q_OBJECT
public:
 enum AllocationMode{
NO_DELETE =Image::NO_DELETE,
USE_NEW_DELETE =Image::USE_NEW_DELETE,
USE_MALLOC_FREE =Image::USE_MALLOC_FREE};
  Q_ENUMS(AllocationMode)
private:
public:
 enum Origin{
BOTTOM_LEFT =Image::BOTTOM_LEFT,
TOP_LEFT =Image::TOP_LEFT};
  Q_ENUMS(Origin)
private:
public:
 enum WriteHint{
NO_PREFERENCE =Image::NO_PREFERENCE,
STORE_INLINE =Image::STORE_INLINE,
EXTERNAL_FILE =Image::EXTERNAL_FILE};
  Q_ENUMS(WriteHint)
private:
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
Image * _model;
QReflect_Image(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Image( );
//Image
// Vec4  getColor(const  Vec2 &);
// Vec4  getColor(const  Vec3 &);
// Vec4  getColor( unsigned int  , unsigned   , unsigned  );
// unsigned char * data();
// unsigned char * data( unsigned int  , unsigned int  , unsigned int );
// unsigned char * getMipmapData( unsigned int );
// void  addDimensionsChangedCallback( DimensionsChangedCallback *);
// void  removeDimensionsChangedCallback( DimensionsChangedCallback *);
//virtual  void  setImage( int  , int  , int  , GLint  , GLenum  , GLenum  , unsigned char * , AllocationMode  , int  , int );
// void  setMipmapLevels(const  MipmapDataType &);
//const  MipmapDataType & getMipmapLevels();
//const  unsigned char * data();
//const  unsigned char * data( unsigned int  , unsigned int  , unsigned int );
//const  unsigned char * getMipmapData( unsigned int );
Q_INVOKABLE  GLenum  computeFormatDataType( GLenum pixelFormat);
Q_INVOKABLE  GLenum  computePixelFormat( GLenum pixelFormat);
Q_INVOKABLE  GLenum  getDataType()const;
Q_INVOKABLE  GLenum  getPixelFormat()const;
Q_INVOKABLE  GLint  getInternalTextureFormat()const;
Q_INVOKABLE  bool  isCompressed()const;
Q_INVOKABLE  bool  isDataContiguous()const;
Q_INVOKABLE  bool  isImageTranslucent()const;
Q_INVOKABLE  bool  isMipmap()const;
Q_INVOKABLE  bool  isPackedType( GLenum type);
Q_INVOKABLE  bool  isSameKindAs(osg::QReflect_Object *obj)const;
Q_INVOKABLE  bool  requiresUpdateCall()const;
Q_INVOKABLE  bool  sendFocusHint( bool );
Q_INVOKABLE  bool  sendKeyEvent( int  , bool );
Q_INVOKABLE  bool  sendPointerEvent( int  , int  , int );
Q_INVOKABLE  bool  supportsTextureSubloading()const;
Q_INVOKABLE  bool  valid()const;
Q_INVOKABLE  float  getPixelAspectRatio()const;
Q_INVOKABLE  int  compare(osg::QReflect_Image *rhs)const;
Q_INVOKABLE  int  computeNearestPowerOfTwo( int s , float bias);
Q_INVOKABLE  int  computeNumberOfMipmapLevels( int s , int t , int r);
Q_INVOKABLE  int  getRowLength()const;
Q_INVOKABLE  int  r()const;
Q_INVOKABLE  int  s()const;
Q_INVOKABLE  int  t()const;
Q_INVOKABLE  unsigned int  computeBlockSize( GLenum pixelFormat , GLenum packing);
Q_INVOKABLE  unsigned int  computeImageSizeInBytes( int width , int height , int depth , GLenum pixelFormat , GLenum type , int packing , int slice_packing , int image_packing);
Q_INVOKABLE  unsigned int  computeNumComponents( GLenum pixelFormat);
Q_INVOKABLE  unsigned int  computePixelSizeInBits( GLenum pixelFormat , GLenum type);
Q_INVOKABLE  unsigned int  computeRowWidthInBytes( int width , GLenum pixelFormat , GLenum type , int packing);
Q_INVOKABLE  unsigned int  getImageSizeInBytes()const;
Q_INVOKABLE  unsigned int  getImageStepInBytes()const;
Q_INVOKABLE  unsigned int  getMipmapOffset( unsigned int mipmapLevel)const;
Q_INVOKABLE  unsigned int  getNumMipmapLevels()const;
Q_INVOKABLE  unsigned int  getPacking()const;
Q_INVOKABLE  unsigned int  getPixelSizeInBits()const;
Q_INVOKABLE  unsigned int  getRowSizeInBytes()const;
Q_INVOKABLE  unsigned int  getRowStepInBytes()const;
Q_INVOKABLE  unsigned int  getTotalDataSize()const;
Q_INVOKABLE  unsigned int  getTotalSizeInBytes()const;
Q_INVOKABLE  unsigned int  getTotalSizeInBytesIncludingMipmaps()const;
Q_INVOKABLE QString  getFileName()const;
Q_INVOKABLE const  GLvoid*  getDataPointer()const;
Q_INVOKABLE const  char*  className()const;
Q_INVOKABLE const  char*  libraryName()const;
Q_INVOKABLE osg::QReflect_Image*  asImage();
Q_INVOKABLE osg::QReflect_Image*  asImage()const;
Q_INVOKABLE osg::QReflect_Image::AllocationMode  getAllocationMode()const;
Q_INVOKABLE osg::QReflect_Image::Origin  getOrigin()const;
Q_INVOKABLE osg::QReflect_Image::WriteHint  getWriteHint()const;
Q_INVOKABLE osg::QReflect_Object*  clone(osg::QReflect_CopyOp *copyop)const;
Q_INVOKABLE osg::QReflect_Object*  cloneType()const;
Q_INVOKABLE osg::QReflect_PixelBufferObject*  getPixelBufferObject();
Q_INVOKABLE osg::QReflect_PixelBufferObject*  getPixelBufferObject()const;
Q_INVOKABLE void  allocateImage( int s , int t , int r , GLenum pixelFormat , GLenum type , int packing);
Q_INVOKABLE void  copySubImage( int s_offset , int t_offset , int r_offset ,osg::QReflect_Image *source);
Q_INVOKABLE void  ensureValidSizeForTexturing( GLint maxTextureSize);
Q_INVOKABLE void  flipDepth();
Q_INVOKABLE void  flipHorizontal();
Q_INVOKABLE void  flipVertical();
Q_INVOKABLE void  readImageFromCurrentTexture( unsigned int contextID , bool copyMipMapsIfAvailable , GLenum type , unsigned int face);
Q_INVOKABLE void  readPixels( int x , int y , int width , int height , GLenum pixelFormat , GLenum type , int packing);
Q_INVOKABLE void  scaleImage( int s , int t , int r , GLenum newDataType);
Q_INVOKABLE void  scaleImage( int s , int t , int r);
Q_INVOKABLE void  setAllocationMode(osg::QReflect_Image::AllocationMode mode);
Q_INVOKABLE void  setColor(osg::QReflect_Vec4f *color , unsigned int s , unsigned int t , unsigned int r);
Q_INVOKABLE void  setColor(osg::QReflect_Vec4f *color ,osg::QReflect_Vec2f *texcoord);
Q_INVOKABLE void  setColor(osg::QReflect_Vec4f *color ,osg::QReflect_Vec3f *texcoord);
Q_INVOKABLE void  setDataType( GLenum dataType);
Q_INVOKABLE void  setFileName(const  QString &fileName);
Q_INVOKABLE void  setFrameLastRendered(osg::QReflect_FrameStamp *);
Q_INVOKABLE void  setInternalTextureFormat( GLint internalFormat);
Q_INVOKABLE void  setOrigin(osg::QReflect_Image::Origin origin);
Q_INVOKABLE void  setPacking( unsigned int packing);
Q_INVOKABLE void  setPixelAspectRatio( float pixelAspectRatio);
Q_INVOKABLE void  setPixelBufferObject(osg::QReflect_PixelBufferObject *buffer);
Q_INVOKABLE void  setPixelFormat( GLenum pixelFormat);
Q_INVOKABLE void  setRowLength( int length);
Q_INVOKABLE void  setWriteHint(osg::QReflect_Image::WriteHint writeHint);
Q_INVOKABLE void  swap(osg::QReflect_Image *rhs);
Q_INVOKABLE void  update(osg::QReflect_NodeVisitor *);
Q_PROPERTY(GLenum  DataType  READ getDataType WRITE setDataType NOTIFY DataTypeChanged)
Q_PROPERTY(GLenum  PixelFormat  READ getPixelFormat WRITE setPixelFormat NOTIFY PixelFormatChanged)
Q_PROPERTY(GLint  InternalTextureFormat  READ getInternalTextureFormat WRITE setInternalTextureFormat NOTIFY InternalTextureFormatChanged)
Q_PROPERTY(QString  FileName  READ getFileName WRITE setFileName NOTIFY FileNameChanged)
Q_PROPERTY(float  PixelAspectRatio  READ getPixelAspectRatio WRITE setPixelAspectRatio NOTIFY PixelAspectRatioChanged)
Q_PROPERTY(int  RowLength  READ getRowLength WRITE setRowLength NOTIFY RowLengthChanged)
Q_PROPERTY(osg::QReflect_Image::AllocationMode  AllocationMode  READ getAllocationMode WRITE setAllocationMode NOTIFY AllocationModeChanged)
Q_PROPERTY(osg::QReflect_Image::Origin  Origin  READ getOrigin WRITE setOrigin NOTIFY OriginChanged)
Q_PROPERTY(osg::QReflect_Image::WriteHint  WriteHint  READ getWriteHint WRITE setWriteHint NOTIFY WriteHintChanged)
Q_PROPERTY(osg::QReflect_PixelBufferObject * PixelBufferObject  READ getPixelBufferObject WRITE setPixelBufferObject NOTIFY PixelBufferObjectChanged)
Q_PROPERTY(unsigned int  Packing  READ getPacking WRITE setPacking NOTIFY PackingChanged)
signals: void AllocationModeChanged();
public:
signals: void DataTypeChanged();
public:
signals: void DimensionsChangedCallbackCollectionChanged();
public:
signals: void FileNameChanged();
public:
signals: void InternalTextureFormatChanged();
public:
signals: void OriginChanged();
public:
signals: void PackingChanged();
public:
signals: void PixelAspectRatioChanged();
public:
signals: void PixelBufferObjectChanged();
public:
signals: void PixelFormatChanged();
public:
signals: void RowLengthChanged();
public:
signals: void WriteHintChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Image: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::Image> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_Image();
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


#endif //osg_Image_pmocHPP

