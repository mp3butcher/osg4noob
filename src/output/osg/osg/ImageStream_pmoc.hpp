#ifndef osg_ImageStream_pmocHPP
#define  osg_ImageStream_pmocHPP 1
#include <osg/ImageStream_pmoc.hpp>
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
#include <osg/ImageStream>
#include <osg/ImageStream>

#include <osg/ref_ptr>
#include<osg/ImageStream_pmoc.hpp>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_ImageStream: public pmoc::QQModel
{
Q_OBJECT
public:
 enum LoopingMode{
NO_LOOPING =ImageStream::NO_LOOPING,
LOOPING =ImageStream::LOOPING};
  Q_ENUMS(LoopingMode)
private:
public:
 enum StreamStatus{
INVALID =ImageStream::INVALID,
PLAYING =ImageStream::PLAYING,
PAUSED =ImageStream::PAUSED,
REWINDING =ImageStream::REWINDING};
  Q_ENUMS(StreamStatus)
private:
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
ImageStream * _model;
QReflect_ImageStream(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_ImageStream( );
//ImageStream
// AudioStreams & getAudioStreams();
//virtual  osg::Texture * createSuitableTexture();
// void  setAudioStreams(const  AudioStreams &);
//const  AudioStreams & getAudioStreams();
Q_INVOKABLE  bool  isSameKindAs(osg::QReflect_Object *)const;
Q_INVOKABLE  double  getCreationTime()const;
Q_INVOKABLE  double  getCurrentTime()const;
Q_INVOKABLE  double  getFrameRate()const;
Q_INVOKABLE  double  getLength()const;
Q_INVOKABLE  int  compare(osg::QReflect_Image *)const;
Q_INVOKABLE const  char*  className()const;
Q_INVOKABLE const  char*  libraryName()const;
Q_INVOKABLE osg::QReflect_ImageStream::LoopingMode  getLoopingMode()const;
Q_INVOKABLE osg::QReflect_ImageStream::StreamStatus  getStatus()const;
Q_INVOKABLE osg::QReflect_Object*  clone(osg::QReflect_CopyOp *)const;
Q_INVOKABLE osg::QReflect_Object*  cloneType()const;
Q_INVOKABLE void  pause();
Q_INVOKABLE void  play();
Q_INVOKABLE void  quit( bool );
Q_INVOKABLE void  rewind();
Q_INVOKABLE void  seek( double );
Q_INVOKABLE void  setLoopingMode(osg::QReflect_ImageStream::LoopingMode );
Q_PROPERTY(double ReferenceTime  READ getReferenceTime WRITE setReferenceTime NOTIFY ReferenceTimeChanged)
Q_PROPERTY(double TimeMultiplier  READ getTimeMultiplier WRITE setTimeMultiplier NOTIFY TimeMultiplierChanged)
Q_PROPERTY(float AudioBalance  READ getAudioBalance WRITE setAudioBalance NOTIFY AudioBalanceChanged)
Q_PROPERTY(float Volume  READ getVolume WRITE setVolume NOTIFY VolumeChanged)
virtual Q_INVOKABLE const double  getReferenceTime()const;
virtual Q_INVOKABLE const double  getTimeMultiplier()const;
virtual Q_INVOKABLE const float  getAudioBalance()const;
virtual Q_INVOKABLE const float  getVolume()const;
virtual Q_INVOKABLE void setAudioBalance(const float &);
virtual Q_INVOKABLE void setReferenceTime(const double &);
virtual Q_INVOKABLE void setTimeMultiplier(const double &);
virtual Q_INVOKABLE void setVolume(const float &);
signals: void AudioBalanceChanged(const float&);
public:
signals: void ReferenceTimeChanged(const double&);
public:
signals: void TimeMultiplierChanged(const double&);
public:
signals: void VolumeChanged(const float&);
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_ImageStream: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::ImageStream> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_ImageStream();
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

#endif //osg_ImageStream_pmocHPP

