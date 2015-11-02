#ifndef osg_GraphicsContext_customHPP
#define  osg_GraphicsContext_customHPP 1

//includes
#include <osg/GraphicsContext_pmoc.hpp>
#include <QObject>
#include <osg/GraphicsContext>

#include <osg/GraphicsContext_pmoc.hpp>
namespace osg{
class  QMLSyncSwapBuffersCallback: public QReflect_SyncSwapBuffersCallback
{
Q_OBJECT
public:
QMLSyncSwapBuffersCallback(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLSyncSwapBuffersCallback :public MetaQReflect_SyncSwapBuffersCallback{};

}
  Q_DECLARE_METATYPE(osg::QMLSyncSwapBuffersCallback)
#include <osg/GraphicsContext_pmoc.hpp>
#include <QObject>
namespace osg{
class QReflect_State;
			} ;
namespace osg{
class QReflect_GraphicsThread;
			} ;
#include <osg/GraphicsContext>

#include <osg/GraphicsThread>
#include <osg/GraphicsThread_pmoc.hpp>
#include <osg/Object_pmoc.hpp>
#include <osg/State>
#include <osg/State_pmoc.hpp>
#include <osg/GraphicsContext_pmoc.hpp>
namespace osg{
class  QMLGraphicsContext: public QReflect_GraphicsContext
{
Q_OBJECT
public:
QMLGraphicsContext(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLGraphicsContext :public MetaQReflect_GraphicsContext{};

}
  Q_DECLARE_METATYPE(osg::QMLGraphicsContext)

#endif //osg_GraphicsContext_customHPP

