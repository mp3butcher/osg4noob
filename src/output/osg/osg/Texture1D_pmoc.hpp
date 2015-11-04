#ifndef osg_Texture1D_pmocHPP
#define  osg_Texture1D_pmocHPP 1
#include <osg/Texture1D_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Image;
			} ;
namespace osg{ 
class QReflect_StateAttribute;
			} ;
#include <osg/Texture1D>
#include <osg/Texture1D>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_Texture1D: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
Texture1D * _model;
QReflect_Texture1D(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Texture1D( );
//Texture1D
//virtual  GLenum  getTextureTarget();
// SubloadCallback * getSubloadCallback();
//virtual  void  apply( State &);
// void  copyTexImage1D( State & , int  , int  , int );
// void  copyTexSubImage1D( State & , int  , int  , int  , int );
// void  setSubloadCallback( SubloadCallback *);
//const  SubloadCallback * getSubloadCallback();
Q_INVOKABLE  int  compare(osg::QReflect_StateAttribute *)const;
Q_INVOKABLE  int  getTextureDepth()const;
Q_INVOKABLE  int  getTextureHeight()const;
Q_INVOKABLE  osg::QReflect_Image * getImage()const;
Q_INVOKABLE  unsigned int  getNumImages()const;
Q_INVOKABLE  unsigned int&  getModifiedCount( unsigned int )const;
Q_INVOKABLE const unsigned int  getNumMipmapLevels()const;
Q_INVOKABLE osg::QReflect_Image*  getImage( unsigned int );
Q_INVOKABLE osg::QReflect_Image*  getImage( unsigned int )const;
Q_INVOKABLE void  setImage( unsigned int  ,osg::QReflect_Image *);
Q_INVOKABLE void pmoc_reverse_setImage( osg::QReflect_Image *par=0);
Q_INVOKABLE void setImage( osg::QReflect_Image *par);
Q_INVOKABLE void setNumMipmapLevels(const unsigned int &);
Q_PROPERTY(int TextureWidth  READ getTextureWidth WRITE setTextureWidth NOTIFY TextureWidthChanged)
Q_PROPERTY(unsigned int NumMipmapLevels  READ getNumMipmapLevels WRITE setNumMipmapLevels NOTIFY NumMipmapLevelsChanged)
virtual Q_INVOKABLE const int  getTextureWidth()const;
virtual Q_INVOKABLE void setTextureWidth(const int &);
signals: void ImageChanged(const osg::QReflect_Image*);
public:
signals: void NumMipmapLevelsChanged(const unsigned int&);
public:
signals: void TextureWidthChanged(const int&);
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Texture1D: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::Texture1D> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_Texture1D();
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

#endif //osg_Texture1D_pmocHPP

