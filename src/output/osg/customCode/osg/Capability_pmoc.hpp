#ifndef osg_Capability_customHPP
#define  osg_Capability_customHPP 1

//includes
#include <osg/Capability_pmoc.hpp>
#include <QObject>
#include <osg/Capability>

#include <osg/StateAttribute_pmoc.hpp>
#include <osg/Capability_pmoc.hpp>
namespace osg{
class  QMLCapability: public QReflect_Capability
{
Q_OBJECT
public:
QMLCapability(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLCapability :public MetaQReflect_Capability{};

}
  Q_DECLARE_METATYPE(osg::QMLCapability)
#include <osg/Capability_pmoc.hpp>
#include <QObject>
#include <osg/Capability>

#include <osg/Capability_pmoc.hpp>
#include <osg/Capability_pmoc.hpp>
namespace osg{
class  QMLCapabilityi: public QReflect_Capabilityi
{
Q_OBJECT
public:
QMLCapabilityi(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLCapabilityi :public MetaQReflect_Capabilityi{};

}
  Q_DECLARE_METATYPE(osg::QMLCapabilityi)
#include <osg/Capability_pmoc.hpp>
#include <QObject>
#include <osg/Capability>

#include <osg/Capability_pmoc.hpp>
#include <osg/Capability_pmoc.hpp>
namespace osg{
class  QMLEnablei: public QReflect_Enablei
{
Q_OBJECT
public:
QMLEnablei(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLEnablei :public MetaQReflect_Enablei{};

}
  Q_DECLARE_METATYPE(osg::QMLEnablei)
#include <osg/Capability_pmoc.hpp>
#include <QObject>
#include <osg/Capability>

#include <osg/Capability_pmoc.hpp>
#include <osg/Capability_pmoc.hpp>
namespace osg{
class  QMLDisablei: public QReflect_Disablei
{
Q_OBJECT
public:
QMLDisablei(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLDisablei :public MetaQReflect_Disablei{};

}
  Q_DECLARE_METATYPE(osg::QMLDisablei)

#endif //osg_Capability_customHPP

