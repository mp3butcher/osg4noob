#ifndef osg_Callback_customHPP
#define  osg_Callback_customHPP 1

//includes
#include <osg/Callback_pmoc.hpp>
#include <QObject>
namespace osg{
class QReflect_Callback;
			} ;
#include <osg/Callback>
#include <osg/Callback>

#include <osg/Callback_pmoc.hpp>
#include <osg/Object_pmoc.hpp>
#include <osg/Callback_pmoc.hpp>
namespace osg{
class  QMLCallback: public QReflect_Callback
{
Q_OBJECT
public:
QMLCallback(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};

 class  MetaQMLCallback :public MetaQReflect_Callback{};
}
  Q_DECLARE_METATYPE(osg::QMLCallback)
#include <osg/Callback_pmoc.hpp>
#include <QObject>
#include <osg/Callback>

#include <osg/Callback_pmoc.hpp>
#include <osg/Callback_pmoc.hpp>
namespace osg{
class  QMLStateAttributeCallback: public QReflect_StateAttributeCallback
{
Q_OBJECT
public:
QMLStateAttributeCallback(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};

 class  MetaQMLStateAttributeCallback :public MetaQReflect_StateAttributeCallback{};
}
  Q_DECLARE_METATYPE(osg::QMLStateAttributeCallback)
#include <osg/Callback_pmoc.hpp>
#include <QObject>
#include <osg/Callback>

#include <osg/Callback_pmoc.hpp>
#include <osg/Callback_pmoc.hpp>
namespace osg{
class  QMLNodeCallback: public QReflect_NodeCallback
{
Q_OBJECT
public:
QMLNodeCallback(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};

 class  MetaQMLNodeCallback :public MetaQReflect_NodeCallback{};
}
  Q_DECLARE_METATYPE(osg::QMLNodeCallback)
#include <osg/Callback_pmoc.hpp>
#include <QObject>
#include <osg/Callback>

#include <osg/Callback_pmoc.hpp>
#include <osg/Callback_pmoc.hpp>
namespace osg{
class  QMLUniformCallback: public QReflect_UniformCallback
{
Q_OBJECT
public:
QMLUniformCallback(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};

 class  MetaQMLUniformCallback :public MetaQReflect_UniformCallback{};
}
  Q_DECLARE_METATYPE(osg::QMLUniformCallback)
#include <osg/Callback_pmoc.hpp>
#include <QObject>
#include <osg/Callback>

#include <osg/Callback_pmoc.hpp>
#include <osg/Callback_pmoc.hpp>
namespace osg{
class  QMLCallbackObject: public QReflect_CallbackObject
{
Q_OBJECT
public:
QMLCallbackObject(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLCallbackObject :public MetaQReflect_CallbackObject{};
}
  Q_DECLARE_METATYPE(osg::QMLCallbackObject)

#endif //osg_Callback_customHPP

