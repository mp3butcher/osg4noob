#ifndef osg_OperationThread_customHPP
#define  osg_OperationThread_customHPP 1

//includes
#include <osg/OperationThread_pmoc.hpp>
#include <QObject>
#include <osg/OperationThread>

#include <osg/OperationThread_pmoc.hpp>
namespace osg{
class  QMLRefBlock: public QReflect_RefBlock
{
Q_OBJECT
public:
QMLRefBlock(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLRefBlock :public MetaQReflect_RefBlock{};

}
  Q_DECLARE_METATYPE(osg::QMLRefBlock)
#include <osg/OperationThread_pmoc.hpp>
#include <QObject>
#include <osg/OperationThread>

#include <osg/Referenced_pmoc.hpp>
#include <osg/OperationThread_pmoc.hpp>
namespace osg{
class  QMLOperationQueue: public QReflect_OperationQueue
{
Q_OBJECT
public:
QMLOperationQueue(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLOperationQueue :public MetaQReflect_OperationQueue{};

}
  Q_DECLARE_METATYPE(osg::QMLOperationQueue)
#include <osg/OperationThread_pmoc.hpp>
#include <QObject>
#include <osg/OperationThread>

#include <osg/OperationThread_pmoc.hpp>
namespace osg{
class  QMLRefBlockCount: public QReflect_RefBlockCount
{
Q_OBJECT
public:
QMLRefBlockCount(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLRefBlockCount :public MetaQReflect_RefBlockCount{};

}
  Q_DECLARE_METATYPE(osg::QMLRefBlockCount)
#include <osg/OperationThread_pmoc.hpp>
#include <QObject>
#include <osg/OperationThread>

#include <osg/Referenced_pmoc.hpp>
#include <osg/OperationThread_pmoc.hpp>
namespace osg{
class  QMLOperation: public QReflect_Operation
{
Q_OBJECT
public:
QMLOperation(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLOperation :public MetaQReflect_Operation{};

}
  Q_DECLARE_METATYPE(osg::QMLOperation)
#include <osg/OperationThread_pmoc.hpp>
#include <QObject>
namespace osg{
class QReflect_Object;
			} ;
namespace osg{
class QReflect_OperationQueue;
			} ;
#include <osg/Object>
#include <osg/Object_pmoc.hpp>
#include <osg/OperationThread>
#include <osg/OperationThread>

#include <osg/OperationThread_pmoc.hpp>
#include <osg/OperationThread_pmoc.hpp>
namespace osg{
class  QMLOperationThread: public QReflect_OperationThread
{
Q_OBJECT
public:
QMLOperationThread(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLOperationThread :public MetaQReflect_OperationThread{};

}
  Q_DECLARE_METATYPE(osg::QMLOperationThread)

#endif //osg_OperationThread_customHPP

