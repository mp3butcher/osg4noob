#ifndef osg_Image_customHPP
#define  osg_Image_customHPP 1

//includes
#include <osg/Image_pmoc.hpp>
#include <QObject>
namespace osg
{
class QReflect_PixelBufferObject;
} ;
#include <osg/BufferObject>
#include <osg/BufferObject_pmoc.hpp>
#include <osg/Image>

#include <osg/Image_pmoc.hpp>
namespace osg
{
class  QMLImage: public QReflect_Image
{
    // AllocationMode  getAllocationMode();
// GLenum  computeFormatDataType( GLenum );
// GLenum  computePixelFormat( GLenum );
// GLenum  getDataType();
// GLenum  getPixelFormat();
// GLint  getInternalTextureFormat();
// Origin  getOrigin();
// Vec4  getColor(const  Vec2 &);
// Vec4  getColor(const  Vec3 &);
// Vec4  getColor( unsigned int  , unsigned   , unsigned  );
// WriteHint  getWriteHint();
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
// void  setAllocationMode( AllocationMode );
// void  setDataType( GLenum );
//virtual  void  setImage( int  , int  , int  , GLint  , GLenum  , GLenum  , unsigned char * , AllocationMode  , int  , int );
// void  setInternalTextureFormat( GLint );
// void  setMipmapLevels(const  MipmapDataType &);
// void  setOrigin( Origin );
// void  setPixelFormat( GLenum );
// void  setWriteHint( WriteHint );
//virtual  void  update( NodeVisitor *);
//virtual const  GLvoid * getDataPointer();
//const  MipmapDataType & getMipmapLevels();
//const  unsigned char * data();
//const  unsigned char * data( unsigned int  , unsigned int  , unsigned int );
//const  unsigned char * getMipmapData( unsigned int );
    Q_OBJECT
     Q_PROPERTY(QString qtimage READ getqtimage WRITE setqtimage NOTIFY qtimageChanged)
    Q_PROPERTY(QUrl filename READ getfilename WRITE setfilename NOTIFY filenameChanged)
    Q_PROPERTY(int internalTextureFormat READ internalTextureFormat WRITE internalTextureFormat NOTIFY internalTextureFormatChanged )
public:
    void internalTextureFormat(int i);
    int internalTextureFormat()const;
    Q_INVOKABLE void allocateImage( int w,int h,int d,QString,QString);
    Q_INVOKABLE void writeToFile(QString filename,QString options="");

public:
    QMLImage(pmoc::Instance *i=0,QObject* parent=0);
    virtual QQuickItem * connect2View(QQuickItem*);

    inline QString getqtimage()const
    {
        return _qtimage;
    }
    void setqtimage(QString s)
    {
        if(s!=_qtimage)
        {
            _qtimage=s;
            emit qtimageChanged(s);
        }
    }
     QUrl getfilename()const;

    void setfilename(QUrl s);
signals:
    void bordercolorChanged(QColor);
    void borderwidthChanged(int);
    void filenameChanged(QUrl);
    void qtimageChanged(QString);
protected:
    QString _qtimage;
    QUrl _filename;
public slots:
    virtual void  updateModel();
signals:
    void internalTextureFormatChanged(int);
};
class   MetaQMLImage :public MetaQReflect_Image {};

}
Q_DECLARE_METATYPE(osg::QMLImage)

#endif //osg_Image_customHPP

