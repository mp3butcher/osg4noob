#ifndef osg_ShapeDrawable_customHPP
#define  osg_ShapeDrawable_customHPP 1

//includes


#include <osg/ShapeDrawable_pmoc.hpp>
#include <QObject>
#include <osg/Object_pmoc.hpp>
#include <osg/ShapeDrawable>

#include <osg/ShapeDrawable_pmoc.hpp>
namespace osg{
class  QMLTessellationHints: public QReflect_TessellationHints
{
Q_OBJECT
public:
QMLTessellationHints(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLTessellationHints :public MetaQReflect_TessellationHints{};

}
  Q_DECLARE_METATYPE(osg::QMLTessellationHints)
#include <osg/ShapeDrawable_pmoc.hpp>
#include <QObject>
namespace osg{
class QReflect_TessellationHints;
			} ;
#include <osg/Drawable_pmoc.hpp>
#include <osg/ShapeDrawable>
#include <osg/ShapeDrawable>

#include <osg/ShapeDrawable_pmoc.hpp>
#include <osg/ShapeDrawable_pmoc.hpp>
namespace osg{
class  QMLShapeDrawable: public QReflect_ShapeDrawable
{
Q_OBJECT
public:
QMLShapeDrawable(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLShapeDrawable :public MetaQReflect_ShapeDrawable{};

}
  Q_DECLARE_METATYPE(osg::QMLShapeDrawable)

#endif //osg_ShapeDrawable_customHPP

