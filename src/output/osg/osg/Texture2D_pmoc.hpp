#ifndef osg_Texture2D_pmocHPP
#define  osg_Texture2D_pmocHPP 1


#include <osg/Texture2D_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Image;
			} ;
namespace osg{ 
class QReflect_StateAttribute;
			} ;
namespace osg{ 
class QReflect_State;
			} ;
#include <osg/Texture2D>
#include <osg/Texture2D>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_Texture2D: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
Texture2D * _model;
QReflect_Texture2D(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Texture2D( );
//Texture2D
// SubloadCallback * getSubloadCallback();
// void  setSubloadCallback( SubloadCallback *);
//const  SubloadCallback * getSubloadCallback();
Q_INVOKABLE  GLenum  getTextureTarget()const;
Q_INVOKABLE  int  compare(osg::QReflect_StateAttribute *rhs)const;
Q_INVOKABLE  int  getTextureDepth()const;
Q_INVOKABLE  int  getTextureHeight()const;
Q_INVOKABLE  int  getTextureWidth()const;
Q_INVOKABLE  unsigned int  getNumImages()const;
Q_INVOKABLE  unsigned int  getNumMipmapLevels()const;
Q_INVOKABLE  unsigned int&  getModifiedCount( unsigned int contextID)const;
Q_INVOKABLE osg::QReflect_Image*  getImage( unsigned int );
Q_INVOKABLE osg::QReflect_Image*  getImage( unsigned int )const;
Q_INVOKABLE osg::QReflect_Image*  getImage();
Q_INVOKABLE osg::QReflect_Image*  getImage()const;
Q_INVOKABLE void  apply(osg::QReflect_State *state)const;
Q_INVOKABLE void  copyTexImage2D(osg::QReflect_State *state , int x , int y , int width , int height);
Q_INVOKABLE void  copyTexSubImage2D(osg::QReflect_State *state , int xoffset , int yoffset , int x , int y , int width , int height);
Q_INVOKABLE void  setImage( unsigned int  ,osg::QReflect_Image *image);
Q_INVOKABLE void  setImage(osg::QReflect_Image *image);
Q_INVOKABLE void  setNumMipmapLevels( unsigned int num)const;
Q_INVOKABLE void  setTextureHeight( int height);
Q_INVOKABLE void  setTextureSize( int width , int height)const;
Q_INVOKABLE void  setTextureWidth( int width);
Q_PROPERTY(int  TextureHeight  READ getTextureHeight WRITE setTextureHeight NOTIFY TextureHeightChanged)
Q_PROPERTY(int  TextureWidth  READ getTextureWidth WRITE setTextureWidth NOTIFY TextureWidthChanged)
Q_PROPERTY(osg::QReflect_Image * Image  READ getImage WRITE setImage NOTIFY ImageChanged)
Q_PROPERTY(unsigned int  NumMipmapLevels  READ getNumMipmapLevels WRITE setNumMipmapLevels NOTIFY NumMipmapLevelsChanged)
signals: void ImageChanged();
public:
signals: void NumMipmapLevelsChanged();
public:
signals: void TextureHeightChanged();
public:
signals: void TextureWidthChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Texture2D: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::Texture2D> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_Texture2D();
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


#endif //osg_Texture2D_pmocHPP

