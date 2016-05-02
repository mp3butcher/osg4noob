#ifndef osg_GraphicsThread_customHPP
#define  osg_GraphicsThread_customHPP 1

//includes
#include <osg/GraphicsThread_pmoc.hpp>
#include <QObject>
#include <osg/GraphicsThread>

#include <osg/OperationThread_pmoc.hpp>
#include <osg/GraphicsThread_pmoc.hpp>
namespace osg{
class  QMLGraphicsOperation: public QReflect_GraphicsOperation
{
Q_OBJECT
public:
QMLGraphicsOperation(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLGraphicsOperation :public MetaQReflect_GraphicsOperation{};

}
  Q_DECLARE_METATYPE(osg::QMLGraphicsOperation)
#include <osg/GraphicsThread_pmoc.hpp>
#include <QObject>
#include <osg/GraphicsThread>

#include <osg/GraphicsThread_pmoc.hpp>
namespace osg{
class  QMLEndOfDynamicDrawBlock: public QReflect_EndOfDynamicDrawBlock
{
Q_OBJECT
public:
QMLEndOfDynamicDrawBlock(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLEndOfDynamicDrawBlock :public MetaQReflect_EndOfDynamicDrawBlock{};

}
  Q_DECLARE_METATYPE(osg::QMLEndOfDynamicDrawBlock)
#include <osg/GraphicsThread_pmoc.hpp>
#include <QObject>
#include <osg/GraphicsThread>

#include <osg/GraphicsThread_pmoc.hpp>
namespace osg{
class  QMLBlockAndFlushOperation: public QReflect_BlockAndFlushOperation
{
Q_OBJECT
public:
QMLBlockAndFlushOperation(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLBlockAndFlushOperation :public MetaQReflect_BlockAndFlushOperation{};

}
  Q_DECLARE_METATYPE(osg::QMLBlockAndFlushOperation)
#include <osg/GraphicsThread_pmoc.hpp>
#include <QObject>
#include <osg/GraphicsThread>

#include <osg/GraphicsThread_pmoc.hpp>
#include <osg/GraphicsThread_pmoc.hpp>
namespace osg{
class  QMLSwapBuffersOperation: public QReflect_SwapBuffersOperation
{
Q_OBJECT
public:
QMLSwapBuffersOperation(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLSwapBuffersOperation :public MetaQReflect_SwapBuffersOperation{};

}
  Q_DECLARE_METATYPE(osg::QMLSwapBuffersOperation)
#include <osg/GraphicsThread_pmoc.hpp>
#include <QObject>
#include <osg/GraphicsThread>

#include <osg/GraphicsThread_pmoc.hpp>
#include <osg/GraphicsThread_pmoc.hpp>
namespace osg{
class  QMLRunOperations: public QReflect_RunOperations
{
Q_OBJECT
public:
QMLRunOperations(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLRunOperations :public MetaQReflect_RunOperations{};

}
  Q_DECLARE_METATYPE(osg::QMLRunOperations)
#include <osg/GraphicsThread_pmoc.hpp>
#include <QObject>
#include <osg/GraphicsThread>

#include <osg/OperationThread_pmoc.hpp>
#include <osg/GraphicsThread_pmoc.hpp>
namespace osg{
class  QMLGraphicsThread: public QReflect_GraphicsThread
{
Q_OBJECT
public:
QMLGraphicsThread(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLGraphicsThread :public MetaQReflect_GraphicsThread{};

}
  Q_DECLARE_METATYPE(osg::QMLGraphicsThread)
#include <osg/GraphicsThread_pmoc.hpp>
#include <QObject>
#include <osg/GraphicsThread>

#include <osg/GraphicsThread_pmoc.hpp>
#include <osg/GraphicsThread_pmoc.hpp>
namespace osg{
class  QMLFlushDeletedGLObjectsOperation: public QReflect_FlushDeletedGLObjectsOperation
{
Q_OBJECT
public:
QMLFlushDeletedGLObjectsOperation(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLFlushDeletedGLObjectsOperation :public MetaQReflect_FlushDeletedGLObjectsOperation{};

}
  Q_DECLARE_METATYPE(osg::QMLFlushDeletedGLObjectsOperation)
#include <osg/GraphicsThread_pmoc.hpp>
#include <QObject>
#include <osg/GraphicsThread>

#include <osg/GraphicsThread_pmoc.hpp>
namespace osg{
class  QMLBarrierOperation: public QReflect_BarrierOperation
{
Q_OBJECT
public:
QMLBarrierOperation(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLBarrierOperation :public MetaQReflect_BarrierOperation{};

}
  Q_DECLARE_METATYPE(osg::QMLBarrierOperation)
#include <osg/GraphicsThread_pmoc.hpp>
#include <QObject>
#include <osg/GraphicsThread>

#include <osg/GraphicsThread_pmoc.hpp>
#include <osg/OperationThread_pmoc.hpp>
#include <osg/GraphicsThread_pmoc.hpp>
namespace osg{
class  QMLReleaseContext_Block_MakeCurrentOperation: public QReflect_ReleaseContext_Block_MakeCurrentOperation
{
Q_OBJECT
public:
QMLReleaseContext_Block_MakeCurrentOperation(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLReleaseContext_Block_MakeCurrentOperation :public MetaQReflect_ReleaseContext_Block_MakeCurrentOperation{};

}
  Q_DECLARE_METATYPE(osg::QMLReleaseContext_Block_MakeCurrentOperation)

#endif //osg_GraphicsThread_customHPP

