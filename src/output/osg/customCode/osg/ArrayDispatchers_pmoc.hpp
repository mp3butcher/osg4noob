#ifndef osg_ArrayDispatchers_customHPP
#define  osg_ArrayDispatchers_customHPP 1

//includes
#include <osg/ArrayDispatchers_pmoc.hpp>
#include <QObject>
#include <osg/ArrayDispatchers>

#include <osg/Referenced_pmoc.hpp>
#include <osg/ArrayDispatchers_pmoc.hpp>
namespace osg{
class  QMLArrayDispatchers: public QReflect_ArrayDispatchers
{
Q_OBJECT
public:
QMLArrayDispatchers(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLArrayDispatchers :public MetaQReflect_ArrayDispatchers{};

}
  Q_DECLARE_METATYPE(osg::QMLArrayDispatchers)
#include <osg/ArrayDispatchers_pmoc.hpp>
#include <QObject>
#include <osg/ArrayDispatchers>

#include <osg/Referenced_pmoc.hpp>
#include <osg/ArrayDispatchers_pmoc.hpp>
namespace osg{
class  QMLAttributeDispatch: public QReflect_AttributeDispatch
{
Q_OBJECT
public:
QMLAttributeDispatch(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLAttributeDispatch :public MetaQReflect_AttributeDispatch{};

}
  Q_DECLARE_METATYPE(osg::QMLAttributeDispatch)

#endif //osg_ArrayDispatchers_customHPP

