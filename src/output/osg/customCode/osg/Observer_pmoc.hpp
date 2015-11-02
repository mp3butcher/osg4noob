#ifndef osg_Observer_customHPP
#define  osg_Observer_customHPP 1

//includes
#include <osg/Observer_pmoc.hpp>
#include <QObject>
#include <osg/Observer>

#include <osg/Observer_pmoc.hpp>
namespace osg{
class  QMLObserver: public QReflect_Observer
{
Q_OBJECT
public:
QMLObserver(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLObserver :public MetaQReflect_Observer{};

}
  Q_DECLARE_METATYPE(osg::QMLObserver)
#include <osg/Observer_pmoc.hpp>
#include <QObject>
#include <osg/Observer>

#include <osg/Referenced_pmoc.hpp>
#include <osg/Observer_pmoc.hpp>
namespace osg{
class  QMLObserverSet: public QReflect_ObserverSet
{
Q_OBJECT
public:
QMLObserverSet(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLObserverSet :public MetaQReflect_ObserverSet{};

}
  Q_DECLARE_METATYPE(osg::QMLObserverSet)

#endif //osg_Observer_customHPP

