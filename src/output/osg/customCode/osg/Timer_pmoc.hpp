#ifndef osg_Timer_customHPP
#define  osg_Timer_customHPP 1

//includes
#include <osg/Timer_pmoc.hpp>
#include <QObject>
#include <osg/Timer>

#include <osg/Timer_pmoc.hpp>
namespace osg{
class  QMLTimer: public QReflect_Timer
{
Q_OBJECT
public:
QMLTimer(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLTimer :public MetaQReflect_Timer{};

}
  Q_DECLARE_METATYPE(osg::QMLTimer)
#include <osg/Timer_pmoc.hpp>
#include <QObject>
#include <osg/Timer>

#include <osg/Timer_pmoc.hpp>
namespace osg{
class  QMLElapsedTime: public QReflect_ElapsedTime
{
Q_OBJECT
public:
QMLElapsedTime(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLElapsedTime :public MetaQReflect_ElapsedTime{};

}
  Q_DECLARE_METATYPE(osg::QMLElapsedTime)

#endif //osg_Timer_customHPP

