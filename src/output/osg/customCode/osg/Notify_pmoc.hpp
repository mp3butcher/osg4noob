#ifndef osg_Notify_customHPP
#define  osg_Notify_customHPP 1

//includes
#include <osg/Notify_pmoc.hpp>
#include <QObject>
#include <osg/Notify>

#include <osg/Notify_pmoc.hpp>
namespace osg{
class  QMLNotifyHandler: public QReflect_NotifyHandler
{
Q_OBJECT
public:
QMLNotifyHandler(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLNotifyHandler :public MetaQReflect_NotifyHandler{};

}
  Q_DECLARE_METATYPE(osg::QMLNotifyHandler)
#include <osg/Notify_pmoc.hpp>
#include <QObject>
#include <osg/Notify>

#include <osg/Notify_pmoc.hpp>
#include <osg/Notify_pmoc.hpp>

#include <osg/Notify_pmoc.hpp>
#include <QObject>
#include <osg/Notify>

#include <osg/Notify_pmoc.hpp>
#include <osg/Notify_pmoc.hpp>
namespace osg{
class  QMLStandardNotifyHandler: public QReflect_StandardNotifyHandler
{
Q_OBJECT
public:
QMLStandardNotifyHandler(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLStandardNotifyHandler :public MetaQReflect_StandardNotifyHandler{};

}
  Q_DECLARE_METATYPE(osg::QMLStandardNotifyHandler)

#endif //osg_Notify_customHPP

