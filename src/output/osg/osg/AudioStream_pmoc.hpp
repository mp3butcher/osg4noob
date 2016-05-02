#ifndef osg_AudioStream_pmocHPP
#define  osg_AudioStream_pmocHPP 1


#include <osg/AudioStream_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Object;
			} ;
#include <osg/AudioStream>
#include <osg/AudioStream>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_AudioStream: public pmoc::QQModel
{
Q_OBJECT
public:
 enum SampleFormat{
SAMPLE_FORMAT_U8 =AudioStream::SAMPLE_FORMAT_U8,
SAMPLE_FORMAT_S16 =AudioStream::SAMPLE_FORMAT_S16,
SAMPLE_FORMAT_S24 =AudioStream::SAMPLE_FORMAT_S24,
SAMPLE_FORMAT_S32 =AudioStream::SAMPLE_FORMAT_S32,
SAMPLE_FORMAT_F32 =AudioStream::SAMPLE_FORMAT_F32};
  Q_ENUMS(SampleFormat)
private:
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
AudioStream * _model;
QReflect_AudioStream(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_AudioStream( );
//AudioStream
Q_INVOKABLE  bool  isSameKindAs(osg::QReflect_Object *obj)const;
Q_INVOKABLE const  char*  className()const;
Q_INVOKABLE const  char*  libraryName()const;
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_AudioStream: public pmoc::MetaQQuickClass{
protected:
   public:
MetaQReflect_AudioStream();
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
#include <osg/AudioStream_pmoc.hpp>
#include <QObject>
#include <osg/AudioStream>
#include <osg/AudioStream>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_AudioSink: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
AudioSink * _model;
QReflect_AudioSink(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_AudioSink( );
//AudioSink
Q_INVOKABLE  double  getDelay()const;
Q_INVOKABLE  float  getVolume()const;
Q_INVOKABLE const  char*  className()const;
Q_INVOKABLE const  char*  libraryName()const;
Q_INVOKABLE void  setDelay(const  double delay);
Q_INVOKABLE void  setVolume( float );
Q_PROPERTY(double  Delay  READ getDelay WRITE setDelay NOTIFY DelayChanged)
Q_PROPERTY(float  Volume  READ getVolume WRITE setVolume NOTIFY VolumeChanged)
signals: void DelayChanged();
public:
signals: void VolumeChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_AudioSink: public pmoc::MetaQQuickClass{
protected:
   public:
MetaQReflect_AudioSink();
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


#endif //osg_AudioStream_pmocHPP

