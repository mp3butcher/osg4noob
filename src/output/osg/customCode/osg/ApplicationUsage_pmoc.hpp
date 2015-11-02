#ifndef osg_ApplicationUsage_customHPP
#define  osg_ApplicationUsage_customHPP 1

//includes
#include <osg/ApplicationUsage_pmoc.hpp>
#include <QObject>
#include <osg/ApplicationUsage>

#include <osg/ApplicationUsage_pmoc.hpp>
namespace osg{
class  QMLApplicationUsageProxy: public QReflect_ApplicationUsageProxy
{
Q_OBJECT
public:
QMLApplicationUsageProxy(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLApplicationUsageProxy :public MetaQReflect_ApplicationUsageProxy{};

}
  Q_DECLARE_METATYPE(osg::QMLApplicationUsageProxy)
#include <osg/ApplicationUsage_pmoc.hpp>
#include <QObject>
#include <osg/ApplicationUsage>

#include <osg/Referenced_pmoc.hpp>
#include <osg/ApplicationUsage_pmoc.hpp>
namespace osg{
class  QMLApplicationUsage: public QReflect_ApplicationUsage
{
Q_OBJECT
public:
QMLApplicationUsage(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLApplicationUsage :public MetaQReflect_ApplicationUsage{};

}
  Q_DECLARE_METATYPE(osg::QMLApplicationUsage)

#endif //osg_ApplicationUsage_customHPP

