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
class QReflect_Vec2f;
			} ;
namespace osg{ 
class QReflect_Vec3f;
			} ;
namespace osg{ 
class QReflect_Vec4f;
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
QReflect_Image(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Image( );
//Image
// GLenum  computeFormatDataType( GLenum );
// GLenum  computePixelFormat( GLenum );
// GLenum  getDataType();
// GLenum  getPixelFormat();
// GLint  getInternalTextureFormat();
// Vec4  getColor(const  Vec2 &);
// Vec4  getColor(const  Vec3 &);
// Vec4  getColor( unsigned int  , unsigned   , unsigned  );
// bool  isPackedType( GLenum );
// unsigned char * data();
// unsigned char * data( unsigned int  , unsigned int  , unsigned int );
// unsigned char * getMipmapData( unsigned int );
// unsigned int  computeBlockSize( GLenum  , GLenum );
// unsigned int  computeImageSizeInBytes( int  , int  , int  , GLenum  , GLenum  , int  , int  , int );
// unsigned int  computeNumComponents( GLenum );
// unsigned int  computePixelSizeInBits( GLenum  , GLenum );
// unsigned int  computeRowWidthInBytes( int  , GLenum  , GLenum  , int );
// void  addDimensionsChangedCallback( DimensionsChangedCallback *);
//virtual  void  allocateImage( int  , int  , int  , GLenum  , GLenum  , int );
// void  ensureValidSizeForTexturing( GLint );
//virtual  void  readImageFromCurrentTexture( unsigned int  , bool  , GLenum  , unsigned int );
//virtual  void  readPixels( int  , int  , int  , int  , GLenum  , GLenum  , int );
// void  removeDimensionsChangedCallback( DimensionsChangedCallback *);
//virtual  void  scaleImage( int  , int  , int  , GLenum );
// void  setDataType( GLenum );
//virtual  void  setImage( int  , int  , int  , GLint  , GLenum  , GLenum  , unsigned char * , AllocationMode  , int  , int );
// void  setInternalTextureFormat( GLint );
// void  setMipmapLevels(const  MipmapDataType &);
// void  setPixelFormat( GLenum );
//virtual  void  update( NodeVisitor *);
//virtual const  GLvoid * getDataPointer();
//const  MipmapDataType & getMipmapLevels();
//const  unsigned char * data();
//const  unsigned char * data( unsigned int  , unsigned int  , unsigned int );
//const  unsigned char * getMipmapData( unsigned int );
Q_INVOKABLE  bool  isCompressed()const;
Q_INVOKABLE  bool  isDataContiguous()const;
Q_INVOKABLE  bool  isImageTranslucent()const;
Q_INVOKABLE  bool  isMipmap()const;
Q_INVOKABLE  bool  isSameKindAs(osg::QReflect_Object *)const;
Q_INVOKABLE  bool  requiresUpdateCall()const;
Q_INVOKABLE  bool  sendFocusHint( bool );
Q_INVOKABLE  bool  sendKeyEvent( int  , bool );
Q_INVOKABLE  bool  sendPointerEvent( int  , int  , int );
Q_INVOKABLE  bool  supportsTextureSubloading()const;
Q_INVOKABLE  bool  valid()const;
Q_INVOKABLE  int  compare(osg::QReflect_Image *)const;
Q_INVOKABLE  int  computeNearestPowerOfTwo( int  , float );
Q_INVOKABLE  int  computeNumberOfMipmapLevels( int  , int  , int );
Q_INVOKABLE  int  r()const;
Q_INVOKABLE  int  s()const;
Q_INVOKABLE  int  t()const;
Q_INVOKABLE  osg::QReflect_PixelBufferObject * getPixelBufferObject()const;
Q_INVOKABLE  unsigned int  getImageSizeInBytes()const;
Q_INVOKABLE  unsigned int  getImageStepInBytes()const;
Q_INVOKABLE  unsigned int  getMipmapOffset( unsigned int )const;
Q_INVOKABLE  unsigned int  getNumMipmapLevels()const;
Q_INVOKABLE  unsigned int  getPixelSizeInBits()const;
Q_INVOKABLE  unsigned int  getRowSizeInBytes()const;
Q_INVOKABLE  unsigned int  getRowStepInBytes()const;
Q_INVOKABLE  unsigned int  getTotalDataSize()const;
Q_INVOKABLE  unsigned int  getTotalSizeInBytes()const;
Q_INVOKABLE  unsigned int  getTotalSizeInBytesIncludingMipmaps()const;
Q_INVOKABLE const  char*  className()const;
Q_INVOKABLE const  char*  libraryName()const;
Q_INVOKABLE const QString  getFileName()const;
Q_INVOKABLE const float  getPixelAspectRatio()const;
Q_INVOKABLE const int  getRowLength()const;
Q_INVOKABLE const unsigned int  getPacking()const;
Q_INVOKABLE osg::QReflect_Image*  asImage();
Q_INVOKABLE osg::QReflect_Image*  asImage()const;
Q_INVOKABLE osg::QReflect_Image::AllocationMode  getAllocationMode()const;
Q_INVOKABLE osg::QReflect_Image::Origin  getOrigin()const;
Q_INVOKABLE osg::QReflect_Image::WriteHint  getWriteHint()const;
Q_INVOKABLE osg::QReflect_Object*  clone(osg::QReflect_CopyOp *)const;
Q_INVOKABLE osg::QReflect_Object*  cloneType()const;
Q_INVOKABLE void  copySubImage( int  , int  , int  ,osg::QReflect_Image *);
Q_INVOKABLE void  flipDepth();
Q_INVOKABLE void  flipHorizontal();
Q_INVOKABLE void  flipVertical();
Q_INVOKABLE void  scaleImage( int  , int  , int );
Q_INVOKABLE void  setAllocationMode(osg::QReflect_Image::AllocationMode );
Q_INVOKABLE void  setColor(osg::QReflect_Vec4f * , unsigned int  , unsigned int  , unsigned int );
Q_INVOKABLE void  setColor(osg::QReflect_Vec4f * ,osg::QReflect_Vec2f *);
Q_INVOKABLE void  setColor(osg::QReflect_Vec4f * ,osg::QReflect_Vec3f *);
Q_INVOKABLE void  setFrameLastRendered(osg::QReflect_FrameStamp *);
Q_INVOKABLE void  setOrigin(osg::QReflect_Image::Origin );
Q_INVOKABLE void  setWriteHint(osg::QReflect_Image::WriteHint );
Q_INVOKABLE void  swap(osg::QReflect_Image *);
Q_INVOKABLE void pmoc_reverse_setPixelBufferObject( osg::QReflect_PixelBufferObject *par=0);
Q_INVOKABLE void setFileName(const QString &);
Q_INVOKABLE void setPacking(const unsigned int &);
Q_INVOKABLE void setPixelAspectRatio(const float &);
Q_INVOKABLE void setPixelBufferObject( osg::QReflect_PixelBufferObject *par);
Q_INVOKABLE void setRowLength(const int &);
Q_PROPERTY(QString FileName  READ getFileName WRITE setFileName NOTIFY FileNameChanged)
Q_PROPERTY(float PixelAspectRatio  READ getPixelAspectRatio WRITE setPixelAspectRatio NOTIFY PixelAspectRatioChanged)
Q_PROPERTY(int RowLength  READ getRowLength WRITE setRowLength NOTIFY RowLengthChanged)
Q_PROPERTY(unsigned int Packing  READ getPacking WRITE setPacking NOTIFY PackingChanged)
signals: void FileNameChanged(const QString&);
public:
signals: void PackingChanged(const unsigned int&);
public:
signals: void PixelAspectRatioChanged(const float&);
public:
signals: void PixelBufferObjectChanged(const osg::QReflect_PixelBufferObject*);
public:
signals: void RowLengthChanged(const int&);
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

#endif //osg_Image_pmocHPP

