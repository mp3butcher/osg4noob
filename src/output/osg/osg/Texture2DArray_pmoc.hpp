#ifndef osg_Texture2DArray_pmocHPP
#define  osg_Texture2DArray_pmocHPP 1


#include <osg/Texture2DArray_pmoc.hpp>
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
#include <osg/Texture2DArray>
#include <osg/Texture2DArray>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_Texture2DArray: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
Texture2DArray * _model;
QReflect_Texture2DArray(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Texture2DArray( );
//Texture2DArray
// SubloadCallback * getSubloadCallback();
//virtual  bool  getModeUsage( StateAttribute::ModeUsage &);
// void  setSubloadCallback( SubloadCallback *);
//const  SubloadCallback * getSubloadCallback();
Q_INVOKABLE  GLenum  getTextureTarget()const;
Q_INVOKABLE  int  compare(osg::QReflect_StateAttribute *rhs)const;
Q_INVOKABLE  int  getTextureDepth()const;
Q_INVOKABLE  int  getTextureHeight()const;
Q_INVOKABLE  int  getTextureWidth()const;
Q_INVOKABLE  unsigned int  getNumImages()const;
Q_INVOKABLE  unsigned int  getNumMipmapLevels()const;
Q_INVOKABLE  unsigned int&  getModifiedCount( unsigned int layer , unsigned int contextID)const;
Q_INVOKABLE osg::QReflect_Image*  getImage( unsigned int layer);
Q_INVOKABLE osg::QReflect_Image*  getImage( unsigned int layer)const;
Q_INVOKABLE void  apply(osg::QReflect_State *state)const;
Q_INVOKABLE void  copyTexSubImage2DArray(osg::QReflect_State *state , int xoffset , int yoffset , int zoffset , int x , int y , int width , int height);
Q_INVOKABLE void  setImage( unsigned int layer ,osg::QReflect_Image *image);
Q_INVOKABLE void  setNumMipmapLevels( unsigned int num)const;
Q_INVOKABLE void  setTextureDepth( int depth);
Q_INVOKABLE void  setTextureHeight( int height);
Q_INVOKABLE void  setTextureSize( int width , int height , int depth);
Q_INVOKABLE void  setTextureWidth( int width);
Q_PROPERTY(int  TextureDepth  READ getTextureDepth WRITE setTextureDepth NOTIFY TextureDepthChanged)
Q_PROPERTY(int  TextureHeight  READ getTextureHeight WRITE setTextureHeight NOTIFY TextureHeightChanged)
Q_PROPERTY(int  TextureWidth  READ getTextureWidth WRITE setTextureWidth NOTIFY TextureWidthChanged)
Q_PROPERTY(unsigned int  NumMipmapLevels  READ getNumMipmapLevels WRITE setNumMipmapLevels NOTIFY NumMipmapLevelsChanged)
signals: void NumMipmapLevelsChanged();
public:
signals: void TextureDepthChanged();
public:
signals: void TextureHeightChanged();
public:
signals: void TextureWidthChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Texture2DArray: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::Texture2DArray> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_Texture2DArray();
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


#endif //osg_Texture2DArray_pmocHPP

