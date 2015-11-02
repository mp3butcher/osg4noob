#ifndef osg_BufferIndexBinding_customHPP
#define  osg_BufferIndexBinding_customHPP 1

//includes
#include <osg/BufferIndexBinding_pmoc.hpp>
#include <QObject>
namespace osg{
class QReflect_BufferObject;
			} ;
#include <osg/BufferIndexBinding>

#include <osg/BufferObject>
#include <osg/BufferObject_pmoc.hpp>
#include <osg/StateAttribute_pmoc.hpp>
#include <osg/BufferIndexBinding_pmoc.hpp>
namespace osg{
class  QMLBufferIndexBinding: public QReflect_BufferIndexBinding
{
Q_OBJECT
public:
QMLBufferIndexBinding(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLBufferIndexBinding :public MetaQReflect_BufferIndexBinding{};

}
  Q_DECLARE_METATYPE(osg::QMLBufferIndexBinding)
#include <osg/BufferIndexBinding_pmoc.hpp>
#include <QObject>
#include <osg/BufferIndexBinding>

#include <osg/BufferIndexBinding_pmoc.hpp>
#include <osg/BufferIndexBinding_pmoc.hpp>
namespace osg{
class  QMLTransformFeedbackBufferBinding: public QReflect_TransformFeedbackBufferBinding
{
Q_OBJECT
public:
QMLTransformFeedbackBufferBinding(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLTransformFeedbackBufferBinding :public MetaQReflect_TransformFeedbackBufferBinding{};

}
  Q_DECLARE_METATYPE(osg::QMLTransformFeedbackBufferBinding)
#include <osg/BufferIndexBinding_pmoc.hpp>
#include <QObject>
#include <osg/BufferIndexBinding>

#include <osg/BufferIndexBinding_pmoc.hpp>
#include <osg/BufferIndexBinding_pmoc.hpp>
namespace osg{
class  QMLAtomicCounterBufferBinding: public QReflect_AtomicCounterBufferBinding
{
Q_OBJECT
public:
QMLAtomicCounterBufferBinding(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLAtomicCounterBufferBinding :public MetaQReflect_AtomicCounterBufferBinding{};

}
  Q_DECLARE_METATYPE(osg::QMLAtomicCounterBufferBinding)
#include <osg/BufferIndexBinding_pmoc.hpp>
#include <QObject>
#include <osg/BufferIndexBinding>

#include <osg/BufferIndexBinding_pmoc.hpp>
#include <osg/BufferIndexBinding_pmoc.hpp>
namespace osg{
class  QMLUniformBufferBinding: public QReflect_UniformBufferBinding
{
Q_OBJECT
public:
QMLUniformBufferBinding(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLUniformBufferBinding :public MetaQReflect_UniformBufferBinding{};

}
  Q_DECLARE_METATYPE(osg::QMLUniformBufferBinding)
#include <osg/BufferIndexBinding_pmoc.hpp>
#include <QObject>
#include <osg/BufferIndexBinding>

#include <osg/BufferIndexBinding_pmoc.hpp>
#include <osg/BufferIndexBinding_pmoc.hpp>
namespace osg{
class  QMLShaderStorageBufferBinding: public QReflect_ShaderStorageBufferBinding
{
Q_OBJECT
public:
QMLShaderStorageBufferBinding(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLShaderStorageBufferBinding :public MetaQReflect_ShaderStorageBufferBinding{};

}
  Q_DECLARE_METATYPE(osg::QMLShaderStorageBufferBinding)

#endif //osg_BufferIndexBinding_customHPP

