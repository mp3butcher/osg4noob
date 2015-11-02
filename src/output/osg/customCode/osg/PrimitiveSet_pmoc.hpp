#ifndef osg_PrimitiveSet_customHPP
#define  osg_PrimitiveSet_customHPP 1

//includes
#include <osg/PrimitiveSet_pmoc.hpp>
#include <QObject>
#include <osg/PrimitiveSet>

#include <osg/PrimitiveSet_pmoc.hpp>
namespace osg{
class  QMLPrimitiveIndexFunctor: public QReflect_PrimitiveIndexFunctor
{
Q_OBJECT
public:
QMLPrimitiveIndexFunctor(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLPrimitiveIndexFunctor :public MetaQReflect_PrimitiveIndexFunctor{};

}
  Q_DECLARE_METATYPE(osg::QMLPrimitiveIndexFunctor)
#include <osg/PrimitiveSet_pmoc.hpp>
#include <QObject>
#include <osg/PrimitiveSet>

#include <osg/PrimitiveSet_pmoc.hpp>
namespace osg{
class  QMLPrimitiveFunctor: public QReflect_PrimitiveFunctor
{
Q_OBJECT
public:
QMLPrimitiveFunctor(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLPrimitiveFunctor :public MetaQReflect_PrimitiveFunctor{};

}
  Q_DECLARE_METATYPE(osg::QMLPrimitiveFunctor)
#include <osg/PrimitiveSet_pmoc.hpp>
#include <QObject>
#include <osg/BufferObject_pmoc.hpp>
#include <osg/PrimitiveSet>

#include <osg/PrimitiveSet_pmoc.hpp>
namespace osg{
class  QMLPrimitiveSet: public QReflect_PrimitiveSet
{
Q_OBJECT
public:
QMLPrimitiveSet(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLPrimitiveSet :public MetaQReflect_PrimitiveSet{};

}
  Q_DECLARE_METATYPE(osg::QMLPrimitiveSet)
#include <osg/PrimitiveSet_pmoc.hpp>
#include <QObject>
namespace osg{
class QReflect_ElementBufferObject;
			} ;
#include <osg/BufferObject>
#include <osg/BufferObject_pmoc.hpp>
#include <osg/PrimitiveSet>

#include <osg/PrimitiveSet_pmoc.hpp>
#include <osg/PrimitiveSet_pmoc.hpp>
namespace osg{
class  QMLDrawElements: public QReflect_DrawElements
{
Q_OBJECT
public:
QMLDrawElements(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLDrawElements :public MetaQReflect_DrawElements{};

}
  Q_DECLARE_METATYPE(osg::QMLDrawElements)
#include <osg/PrimitiveSet_pmoc.hpp>
#include <QObject>
#include <osg/PrimitiveSet>

#include <osg/PrimitiveSet_pmoc.hpp>
namespace osg{
class  QMLDrawArrayLengths: public QReflect_DrawArrayLengths
{
Q_OBJECT
public:
QMLDrawArrayLengths(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLDrawArrayLengths :public MetaQReflect_DrawArrayLengths{};

}
  Q_DECLARE_METATYPE(osg::QMLDrawArrayLengths)
#include <osg/PrimitiveSet_pmoc.hpp>
#include <QObject>
#include <osg/PrimitiveSet>

#include <osg/PrimitiveSet_pmoc.hpp>
namespace osg{
class  QMLDrawElementsUShort: public QReflect_DrawElementsUShort
{
Q_OBJECT
public:
QMLDrawElementsUShort(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLDrawElementsUShort :public MetaQReflect_DrawElementsUShort{};

}
  Q_DECLARE_METATYPE(osg::QMLDrawElementsUShort)
#include <osg/PrimitiveSet_pmoc.hpp>
#include <QObject>
#include <osg/PrimitiveSet>

#include <osg/PrimitiveSet_pmoc.hpp>
namespace osg{
class  QMLDrawElementsUByte: public QReflect_DrawElementsUByte
{
Q_OBJECT
public:
QMLDrawElementsUByte(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLDrawElementsUByte :public MetaQReflect_DrawElementsUByte{};

}
  Q_DECLARE_METATYPE(osg::QMLDrawElementsUByte)
#include <osg/PrimitiveSet_pmoc.hpp>
#include <QObject>
#include <osg/PrimitiveSet>

#include <osg/PrimitiveSet_pmoc.hpp>
namespace osg{
class  QMLDrawElementsUInt: public QReflect_DrawElementsUInt
{
Q_OBJECT
public:
QMLDrawElementsUInt(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLDrawElementsUInt :public MetaQReflect_DrawElementsUInt{};

}
  Q_DECLARE_METATYPE(osg::QMLDrawElementsUInt)
#include <osg/PrimitiveSet_pmoc.hpp>
#include <QObject>
#include <osg/PrimitiveSet>

#include <osg/PrimitiveSet_pmoc.hpp>
#include <osg/PrimitiveSet_pmoc.hpp>
namespace osg{
class  QMLDrawArrays: public QReflect_DrawArrays
{
Q_OBJECT
public:
QMLDrawArrays(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLDrawArrays :public MetaQReflect_DrawArrays{};

}
  Q_DECLARE_METATYPE(osg::QMLDrawArrays)

#endif //osg_PrimitiveSet_customHPP

