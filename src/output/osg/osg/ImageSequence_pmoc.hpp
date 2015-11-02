#ifndef osg_ImageSequence_pmocHPP
#define  osg_ImageSequence_pmocHPP 1
#include <osg/ImageSequence_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Referenced;
			} ;
namespace osg{ 
class QReflect_Object;
			} ;
namespace osg{ 
class QReflect_Image;
			} ;
namespace osg{ 
class QReflect_CopyOp;
			} ;
#include <osg/ImageSequence>
#include <osg/ImageSequence>

#include <osg/ref_ptr>
#include<osg/ImageSequence_pmoc.hpp>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_ImageSequence: public pmoc::QQModel
{
Q_OBJECT
public:
 enum Mode{
PRE_LOAD_ALL_IMAGES =ImageSequence::PRE_LOAD_ALL_IMAGES,
PAGE_AND_RETAIN_IMAGES =ImageSequence::PAGE_AND_RETAIN_IMAGES,
PAGE_AND_DISCARD_USED_IMAGES =ImageSequence::PAGE_AND_DISCARD_USED_IMAGES,
LOAD_AND_RETAIN_IN_UPDATE_TRAVERSAL =ImageSequence::LOAD_AND_RETAIN_IN_UPDATE_TRAVERSAL,
LOAD_AND_DISCARD_IN_UPDATE_TRAVERSAL =ImageSequence::LOAD_AND_DISCARD_IN_UPDATE_TRAVERSAL};
  Q_ENUMS(Mode)
private:
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
ImageSequence * _model;
QReflect_ImageSequence(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_ImageSequence( );
//ImageSequence
// ImageDataList & getImageDataList();
// void  setImage( int  , int  , int  , GLint  , GLenum  , GLenum  , unsigned char * , AllocationMode  , int );
//virtual  void  update( NodeVisitor *);
//const  ImageDataList & getImageDataList();
Q_INVOKABLE  bool  isSameKindAs(osg::QReflect_Object *)const;
Q_INVOKABLE  bool  requiresUpdateCall()const;
Q_INVOKABLE  int  compare(osg::QReflect_Image *)const;
Q_INVOKABLE  osg::QReflect_Referenced * getReadOptions()const;
Q_INVOKABLE  unsigned int  getNumImageData()const;
Q_INVOKABLE QString  getImageFile( unsigned int )const;
Q_INVOKABLE const  char*  className()const;
Q_INVOKABLE const  char*  libraryName()const;
Q_INVOKABLE osg::QReflect_Image*  getImage( unsigned int );
Q_INVOKABLE osg::QReflect_Image*  getImage( unsigned int )const;
Q_INVOKABLE osg::QReflect_ImageSequence::Mode  getMode()const;
Q_INVOKABLE osg::QReflect_Object*  clone(osg::QReflect_CopyOp *)const;
Q_INVOKABLE osg::QReflect_Object*  cloneType()const;
Q_INVOKABLE void  addImage(osg::QReflect_Image *);
Q_INVOKABLE void  addImageFile(const  QString &);
Q_INVOKABLE void  pause();
Q_INVOKABLE void  play();
Q_INVOKABLE void  rewind();
Q_INVOKABLE void  seek( double );
Q_INVOKABLE void  setImage( unsigned int  ,osg::QReflect_Image *);
Q_INVOKABLE void  setImageFile( unsigned int  ,const  QString &);
Q_INVOKABLE void  setMode(osg::QReflect_ImageSequence::Mode );
Q_INVOKABLE void pmoc_reverse_setReadOptions( osg::QReflect_Referenced *par=0);
Q_INVOKABLE void setReadOptions( osg::QReflect_Referenced *par);
Q_PROPERTY(double Length  READ getLength WRITE setLength NOTIFY LengthChanged)
Q_PROPERTY(double ReferenceTime  READ getReferenceTime WRITE setReferenceTime NOTIFY ReferenceTimeChanged)
Q_PROPERTY(double TimeMultiplier  READ getTimeMultiplier WRITE setTimeMultiplier NOTIFY TimeMultiplierChanged)
virtual Q_INVOKABLE const double  getLength()const;
virtual Q_INVOKABLE const double  getReferenceTime()const;
virtual Q_INVOKABLE const double  getTimeMultiplier()const;
virtual Q_INVOKABLE void setLength(const double &);
virtual Q_INVOKABLE void setReferenceTime(const double &);
virtual Q_INVOKABLE void setTimeMultiplier(const double &);
signals: void LengthChanged(const double&);
public:
signals: void ReadOptionsChanged(const osg::QReflect_Referenced*);
public:
signals: void ReferenceTimeChanged(const double&);
public:
signals: void TimeMultiplierChanged(const double&);
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_ImageSequence: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::ImageSequence> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_ImageSequence();
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

#endif //osg_ImageSequence_pmocHPP

