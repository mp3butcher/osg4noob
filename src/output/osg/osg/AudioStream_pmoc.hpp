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
QReflect_AudioStream(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_AudioStream( );
//AudioStream
Q_INVOKABLE  bool  isSameKindAs(osg::QReflect_Object *)const;
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
QReflect_AudioSink(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_AudioSink( );
//AudioSink
Q_INVOKABLE const  char*  className()const;
Q_INVOKABLE const  char*  libraryName()const;
Q_PROPERTY(double Delay  READ getDelay WRITE setDelay NOTIFY DelayChanged)
Q_PROPERTY(float Volume  READ getVolume WRITE setVolume NOTIFY VolumeChanged)
virtual Q_INVOKABLE const double  getDelay()const;
virtual Q_INVOKABLE const float  getVolume()const;
virtual Q_INVOKABLE void setDelay(const double &);
virtual Q_INVOKABLE void setVolume(const float &);
signals: void DelayChanged(const double&);
public:
signals: void VolumeChanged(const float&);
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

#endif //osg_AudioStream_pmocHPP

