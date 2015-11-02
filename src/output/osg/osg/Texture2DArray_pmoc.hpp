#ifndef osg_Texture2DArray_pmocHPP
#define  osg_Texture2DArray_pmocHPP 1
#include <osg/Texture2DArray_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_State;
			} ;
namespace osg{ 
class QReflect_Image;
			} ;
namespace osg{ 
class QReflect_StateAttribute;
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
QReflect_Texture2DArray(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Texture2DArray( );
//Texture2DArray
//virtual  GLenum  getTextureTarget();
// SubloadCallback * getSubloadCallback();
//virtual  bool  getModeUsage( StateAttribute::ModeUsage &);
// void  setSubloadCallback( SubloadCallback *);
//const  SubloadCallback * getSubloadCallback();
Q_INVOKABLE  int  compare(osg::QReflect_StateAttribute *)const;
Q_INVOKABLE  unsigned int  getNumImages()const;
Q_INVOKABLE  unsigned int&  getModifiedCount( unsigned int  , unsigned int )const;
Q_INVOKABLE const unsigned int  getNumMipmapLevels()const;
Q_INVOKABLE osg::QReflect_Image*  getImage( unsigned int );
Q_INVOKABLE osg::QReflect_Image*  getImage( unsigned int )const;
Q_INVOKABLE void  apply(osg::QReflect_State *)const;
Q_INVOKABLE void  copyTexSubImage2DArray(osg::QReflect_State * , int  , int  , int  , int  , int  , int  , int );
Q_INVOKABLE void  setImage( unsigned int  ,osg::QReflect_Image *);
Q_INVOKABLE void  setTextureSize( int  , int  , int );
Q_INVOKABLE void setNumMipmapLevels(const unsigned int &);
Q_PROPERTY(int TextureDepth  READ getTextureDepth WRITE setTextureDepth NOTIFY TextureDepthChanged)
Q_PROPERTY(int TextureHeight  READ getTextureHeight WRITE setTextureHeight NOTIFY TextureHeightChanged)
Q_PROPERTY(int TextureWidth  READ getTextureWidth WRITE setTextureWidth NOTIFY TextureWidthChanged)
Q_PROPERTY(unsigned int NumMipmapLevels  READ getNumMipmapLevels WRITE setNumMipmapLevels NOTIFY NumMipmapLevelsChanged)
virtual Q_INVOKABLE const int  getTextureDepth()const;
virtual Q_INVOKABLE const int  getTextureHeight()const;
virtual Q_INVOKABLE const int  getTextureWidth()const;
virtual Q_INVOKABLE void setTextureDepth(const int &);
virtual Q_INVOKABLE void setTextureHeight(const int &);
virtual Q_INVOKABLE void setTextureWidth(const int &);
signals: void NumMipmapLevelsChanged(const unsigned int&);
public:
signals: void TextureDepthChanged(const int&);
public:
signals: void TextureHeightChanged(const int&);
public:
signals: void TextureWidthChanged(const int&);
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

#endif //osg_Texture2DArray_pmocHPP

