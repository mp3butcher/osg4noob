#ifndef osg_Drawable_customHPP
#define  osg_Drawable_customHPP 1

//includes


#include <osg/Vec4f_pmoc.hpp>
#include <QObject>
#include <osg/Vec3f_pmoc.hpp>
#include <QObject>
#include <osg/Vec2f_pmoc.hpp>
#include <QObject>
#include <osg/NodeVisitor_pmoc.hpp>
#include <QObject>
#include <osg/ArrayDispatchers_pmoc.hpp>
#include <QObject>
#include <osg/Drawable_pmoc.hpp>
#include <QObject>
namespace osg{
class QReflect_Shape;
			} ;
#include <osg/Drawable>

#include <osg/Node_pmoc.hpp>
#include <osg/Shape>
#include <osg/Shape_pmoc.hpp>
#include <osg/Drawable_pmoc.hpp>
namespace osg{
class  QMLDrawable: public QReflect_Drawable
{
Q_OBJECT
public:
QMLDrawable(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLDrawable :public MetaQReflect_Drawable{};

}
  Q_DECLARE_METATYPE(osg::QMLDrawable)
#include <osg/Drawable_pmoc.hpp>
#include <QObject>
#include <osg/Array_pmoc.hpp>
#include <osg/Drawable>

#include <osg/Drawable_pmoc.hpp>
namespace osg{
class  QMLConstAttributeFunctorArrayVisitor: public QReflect_ConstAttributeFunctorArrayVisitor
{
Q_OBJECT
public:
QMLConstAttributeFunctorArrayVisitor(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLConstAttributeFunctorArrayVisitor :public MetaQReflect_ConstAttributeFunctorArrayVisitor{};

}
  Q_DECLARE_METATYPE(osg::QMLConstAttributeFunctorArrayVisitor)
#include <osg/Vec4ub_pmoc.hpp>
#include <QObject>
#include <osg/Drawable_pmoc.hpp>
#include <QObject>
#include <osg/Array_pmoc.hpp>
#include <osg/Drawable>

#include <osg/Drawable_pmoc.hpp>
namespace osg{
class  QMLAttributeFunctorArrayVisitor: public QReflect_AttributeFunctorArrayVisitor
{
Q_OBJECT
public:
QMLAttributeFunctorArrayVisitor(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLAttributeFunctorArrayVisitor :public MetaQReflect_AttributeFunctorArrayVisitor{};

}
  Q_DECLARE_METATYPE(osg::QMLAttributeFunctorArrayVisitor)

#endif //osg_Drawable_customHPP

