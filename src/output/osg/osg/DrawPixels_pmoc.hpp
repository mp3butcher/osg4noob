#ifndef osg_DrawPixels_pmocHPP
#define  osg_DrawPixels_pmocHPP 1


#include <osg/DrawPixels_pmoc.hpp>
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
class QReflect_Vec3f;
			} ;
namespace osg{ 
class QReflect_RenderInfo;
			} ;
#include <osg/DrawPixels>
#include <osg/DrawPixels>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_DrawPixels: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
DrawPixels * _model;
QReflect_DrawPixels(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_DrawPixels( );
//DrawPixels
//virtual  BoundingBox  computeBoundingBox();
// osg::Vec3 & getPosition();
//const  osg::Vec3 & getPosition();
Q_INVOKABLE  bool  getUseSubImage()const;
Q_INVOKABLE  bool  isSameKindAs(osg::QReflect_Object *obj)const;
Q_INVOKABLE const  char*  className()const;
Q_INVOKABLE const  char*  libraryName()const;
Q_INVOKABLE osg::QReflect_Image*  getImage();
Q_INVOKABLE osg::QReflect_Image*  getImage()const;
Q_INVOKABLE osg::QReflect_Object*  clone(osg::QReflect_CopyOp *copyop)const;
Q_INVOKABLE osg::QReflect_Object*  cloneType()const;
Q_INVOKABLE void  drawImplementation(osg::QReflect_RenderInfo *renderInfo)const;
Q_INVOKABLE void  getSubImageDimensions( unsigned int &offsetX , unsigned int &offsetY , unsigned int &width , unsigned int &height)const;
Q_INVOKABLE void  setImage(osg::QReflect_Image *image);
Q_INVOKABLE void  setPosition(osg::QReflect_Vec3f *position);
Q_INVOKABLE void  setSubImageDimensions( unsigned int offsetX , unsigned int offsetY , unsigned int width , unsigned int height);
Q_INVOKABLE void  setUseSubImage( bool useSubImage);
Q_PROPERTY(bool  UseSubImage  READ getUseSubImage WRITE setUseSubImage NOTIFY UseSubImageChanged)
Q_PROPERTY(osg::QReflect_Image * Image  READ getImage WRITE setImage NOTIFY ImageChanged)
signals: void ImageChanged();
public:
signals: void UseSubImageChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_DrawPixels: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::DrawPixels> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_DrawPixels();
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


#endif //osg_DrawPixels_pmocHPP

