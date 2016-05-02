#ifndef osg_AudioStream_customHPP
#define  osg_AudioStream_customHPP 1

//includes
#include <osg/AudioStream_pmoc.hpp>
#include <QObject>
#include <osg/AudioStream>

#include <osg/Object_pmoc.hpp>
#include <osg/AudioStream_pmoc.hpp>
namespace osg{
class  QMLAudioStream: public QReflect_AudioStream
{
Q_OBJECT
public:
QMLAudioStream(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLAudioStream :public MetaQReflect_AudioStream{};

}
  Q_DECLARE_METATYPE(osg::QMLAudioStream)
#include <osg/AudioStream_pmoc.hpp>
#include <QObject>
#include <osg/AudioStream>

#include <osg/Object_pmoc.hpp>
#include <osg/AudioStream_pmoc.hpp>
namespace osg{
class  QMLAudioSink: public QReflect_AudioSink
{
Q_OBJECT
public:
QMLAudioSink(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLAudioSink :public MetaQReflect_AudioSink{};

}
  Q_DECLARE_METATYPE(osg::QMLAudioSink)

#endif //osg_AudioStream_customHPP

