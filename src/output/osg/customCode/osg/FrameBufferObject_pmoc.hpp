#ifndef osg_FrameBufferObject_customHPP
#define  osg_FrameBufferObject_customHPP 1

//includes

#include <osg/FrameBufferObject_pmoc.hpp>
#include <QObject>
#include <osg/FrameBufferObject>

#include <osg/FrameBufferObject_pmoc.hpp>
namespace osg{
class  QMLGLRenderBufferManager: public QReflect_GLRenderBufferManager
{
Q_OBJECT
public:
QMLGLRenderBufferManager(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLGLRenderBufferManager :public MetaQReflect_GLRenderBufferManager{};

}
  Q_DECLARE_METATYPE(osg::QMLGLRenderBufferManager)
#include <osg/FrameBufferObject_pmoc.hpp>
#include <QObject>
#include <osg/FrameBufferObject>

#include <osg/FrameBufferObject_pmoc.hpp>
namespace osg{
class  QMLFrameBufferAttachment: public QReflect_FrameBufferAttachment
{
Q_OBJECT
public:
QMLFrameBufferAttachment(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLFrameBufferAttachment :public MetaQReflect_FrameBufferAttachment{};

}
  Q_DECLARE_METATYPE(osg::QMLFrameBufferAttachment)
#include <osg/FrameBufferObject_pmoc.hpp>
#include <QObject>
#include <osg/FrameBufferObject>

#include <osg/Object_pmoc.hpp>
#include <osg/FrameBufferObject_pmoc.hpp>
namespace osg{
class  QMLRenderBuffer: public QReflect_RenderBuffer
{
Q_OBJECT
public:
QMLRenderBuffer(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLRenderBuffer :public MetaQReflect_RenderBuffer{};

}
  Q_DECLARE_METATYPE(osg::QMLRenderBuffer)
#include <osg/FrameBufferObject_pmoc.hpp>
#include <QObject>
#include <osg/FrameBufferObject>

#include <osg/FrameBufferObject_pmoc.hpp>
namespace osg{
class  QMLGLFrameBufferObjectManager: public QReflect_GLFrameBufferObjectManager
{
Q_OBJECT
public:
QMLGLFrameBufferObjectManager(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLGLFrameBufferObjectManager :public MetaQReflect_GLFrameBufferObjectManager{};

}
  Q_DECLARE_METATYPE(osg::QMLGLFrameBufferObjectManager)
#include <osg/FrameBufferObject_pmoc.hpp>
#include <QObject>
#include <osg/FrameBufferObject>

#include <osg/StateAttribute_pmoc.hpp>
#include <osg/FrameBufferObject_pmoc.hpp>
namespace osg{
class  QMLFrameBufferObject: public QReflect_FrameBufferObject
{
Q_OBJECT
public:
QMLFrameBufferObject(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLFrameBufferObject :public MetaQReflect_FrameBufferObject{};

}
  Q_DECLARE_METATYPE(osg::QMLFrameBufferObject)

#endif //osg_FrameBufferObject_customHPP

