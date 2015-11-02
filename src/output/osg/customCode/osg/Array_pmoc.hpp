#ifndef osg_Array_customHPP
#define  osg_Array_customHPP 1

//includes
#include <osg/Array_pmoc.hpp>
#include <QObject>
#include <osg/Array>

#include <osg/Array_pmoc.hpp>
namespace osg{
class  QMLValueVisitor: public QReflect_ValueVisitor
{
Q_OBJECT
public:
QMLValueVisitor(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLValueVisitor :public MetaQReflect_ValueVisitor{};

}
  Q_DECLARE_METATYPE(osg::QMLValueVisitor)
#include <osg/Array_pmoc.hpp>
#include <QObject>
#include <osg/Array>

#include <osg/Array_pmoc.hpp>
namespace osg{
class  QMLConstValueVisitor: public QReflect_ConstValueVisitor
{
Q_OBJECT
public:
QMLConstValueVisitor(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLConstValueVisitor :public MetaQReflect_ConstValueVisitor{};

}
  Q_DECLARE_METATYPE(osg::QMLConstValueVisitor)
#include <osg/Array_pmoc.hpp>
#include <QObject>
#include <osg/Array>

#include <osg/Array_pmoc.hpp>
namespace osg{
class  QMLArrayVisitor: public QReflect_ArrayVisitor
{
Q_OBJECT
public:
QMLArrayVisitor(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLArrayVisitor :public MetaQReflect_ArrayVisitor{};

}
  Q_DECLARE_METATYPE(osg::QMLArrayVisitor)
#include <osg/Array_pmoc.hpp>
#include <QObject>
namespace osg{
class QReflect_VertexBufferObject;
			} ;
#include <osg/Array>

#include <osg/BufferObject>
#include <osg/BufferObject_pmoc.hpp>
#include <osg/Array_pmoc.hpp>
namespace osg{
class  QMLArray: public QReflect_Array
{
Q_OBJECT
public:
QMLArray(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLArray :public MetaQReflect_Array{};

}
  Q_DECLARE_METATYPE(osg::QMLArray)
#include <osg/Array_pmoc.hpp>
#include <QObject>
#include <osg/Array>

#include <osg/Array_pmoc.hpp>
namespace osg{
class  QMLConstArrayVisitor: public QReflect_ConstArrayVisitor
{
Q_OBJECT
public:
QMLConstArrayVisitor(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLConstArrayVisitor :public MetaQReflect_ConstArrayVisitor{};

}
  Q_DECLARE_METATYPE(osg::QMLConstArrayVisitor)
#include <osg/Array_pmoc.hpp>
#include <QObject>
#include <osg/Array>

#include <osg/Array_pmoc.hpp>
#include <osg/Array_pmoc.hpp>
namespace osg{
class  QMLIndexArray: public QReflect_IndexArray
{
Q_OBJECT
public:
QMLIndexArray(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLIndexArray :public MetaQReflect_IndexArray{};

}
  Q_DECLARE_METATYPE(osg::QMLIndexArray)

#endif //osg_Array_customHPP

