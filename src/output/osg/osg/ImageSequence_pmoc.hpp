#ifndef osg_ImageSequence_pmocHPP
#define  osg_ImageSequence_pmocHPP 1


#include <osg/ImageSequence_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Object;
			} ;
namespace osg{ 
class QReflect_Image;
			} ;
namespace osg{ 
class QReflect_Referenced;
			} ;
namespace osg{ 
class QReflect_CopyOp;
			} ;
namespace osg{ 
class QReflect_NodeVisitor;
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
QReflect_ImageSequence(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_ImageSequence( );
//ImageSequence
// ImageDataList & getImageDataList();
// void  setImage( int  , int  , int  , GLint  , GLenum  , GLenum  , unsigned char * , AllocationMode  , int );
//const  ImageDataList & getImageDataList();
Q_INVOKABLE  bool  isSameKindAs(osg::QReflect_Object *obj)const;
Q_INVOKABLE  bool  requiresUpdateCall()const;
Q_INVOKABLE  double  getLength()const;
Q_INVOKABLE  double  getReferenceTime()const;
Q_INVOKABLE  double  getTimeMultiplier()const;
Q_INVOKABLE  int  compare(osg::QReflect_Image *rhs)const;
Q_INVOKABLE  unsigned int  getNumImageData()const;
Q_INVOKABLE QString  getImageFile( unsigned int pos)const;
Q_INVOKABLE const  char*  className()const;
Q_INVOKABLE const  char*  libraryName()const;
Q_INVOKABLE osg::QReflect_Image*  getImage( unsigned int pos);
Q_INVOKABLE osg::QReflect_Image*  getImage( unsigned int pos)const;
Q_INVOKABLE osg::QReflect_ImageSequence::Mode  getMode()const;
Q_INVOKABLE osg::QReflect_Object*  clone(osg::QReflect_CopyOp *copyop)const;
Q_INVOKABLE osg::QReflect_Object*  cloneType()const;
Q_INVOKABLE osg::QReflect_Referenced*  getReadOptions();
Q_INVOKABLE osg::QReflect_Referenced*  getReadOptions()const;
Q_INVOKABLE void  addImage(osg::QReflect_Image *image);
Q_INVOKABLE void  addImageFile(const  QString &fileName);
Q_INVOKABLE void  pause();
Q_INVOKABLE void  play();
Q_INVOKABLE void  rewind();
Q_INVOKABLE void  seek( double time);
Q_INVOKABLE void  setImage( unsigned int pos ,osg::QReflect_Image *image);
Q_INVOKABLE void  setImageFile( unsigned int pos ,const  QString &fileName);
Q_INVOKABLE void  setLength( double length);
Q_INVOKABLE void  setMode(osg::QReflect_ImageSequence::Mode mode);
Q_INVOKABLE void  setReadOptions(osg::QReflect_Referenced *options);
Q_INVOKABLE void  setReferenceTime( double t);
Q_INVOKABLE void  setTimeMultiplier( double tm);
Q_INVOKABLE void  update(osg::QReflect_NodeVisitor *nv);
Q_PROPERTY(double  Length  READ getLength WRITE setLength NOTIFY LengthChanged)
Q_PROPERTY(double  ReferenceTime  READ getReferenceTime WRITE setReferenceTime NOTIFY ReferenceTimeChanged)
Q_PROPERTY(double  TimeMultiplier  READ getTimeMultiplier WRITE setTimeMultiplier NOTIFY TimeMultiplierChanged)
Q_PROPERTY(osg::QReflect_ImageSequence::Mode  Mode  READ getMode WRITE setMode NOTIFY ModeChanged)
Q_PROPERTY(osg::QReflect_Referenced * ReadOptions  READ getReadOptions WRITE setReadOptions NOTIFY ReadOptionsChanged)
signals: void LengthChanged();
public:
signals: void ModeChanged();
public:
signals: void ReadOptionsChanged();
public:
signals: void ReferenceTimeChanged();
public:
signals: void TimeMultiplierChanged();
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


#endif //osg_ImageSequence_pmocHPP

