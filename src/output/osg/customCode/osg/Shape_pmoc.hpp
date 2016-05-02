#ifndef osg_Shape_customHPP
#define  osg_Shape_customHPP 1

//includes
#include <osg/Shape_pmoc.hpp>
#include <QObject>
#include <osg/Shape>

#include <osg/Shape_pmoc.hpp>
namespace osg{
class  QMLShapeVisitor: public QReflect_ShapeVisitor
{
Q_OBJECT
public:
QMLShapeVisitor(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLShapeVisitor :public MetaQReflect_ShapeVisitor{};

}
  Q_DECLARE_METATYPE(osg::QMLShapeVisitor)
#include <osg/Shape_pmoc.hpp>
#include <QObject>
#include <osg/Object_pmoc.hpp>
#include <osg/Shape>

#include <osg/Shape_pmoc.hpp>
namespace osg{
class  QMLShape: public QReflect_Shape
{
Q_OBJECT
public:
QMLShape(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLShape :public MetaQReflect_Shape{};

}
  Q_DECLARE_METATYPE(osg::QMLShape)
#include <osg/Shape_pmoc.hpp>
#include <QObject>
#include <osg/Plane_pmoc.hpp>
#include <osg/Shape>

#include <osg/Shape_pmoc.hpp>
#include <osg/Shape_pmoc.hpp>
namespace osg{
class  QMLInfinitePlane: public QReflect_InfinitePlane
{
Q_OBJECT
public:
QMLInfinitePlane(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLInfinitePlane :public MetaQReflect_InfinitePlane{};

}
  Q_DECLARE_METATYPE(osg::QMLInfinitePlane)
#include <osg/Shape_pmoc.hpp>
#include <QObject>
namespace osg{
class QReflect_Quat;
			} ;
#include <osg/Quat>
#include <osg/Quat_pmoc.hpp>
#include <osg/Shape>

#include <osg/Shape_pmoc.hpp>
#include <osg/Shape_pmoc.hpp>
namespace osg{
class  QMLHeightField: public QReflect_HeightField
{
Q_OBJECT
public:
QMLHeightField(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLHeightField :public MetaQReflect_HeightField{};

}
  Q_DECLARE_METATYPE(osg::QMLHeightField)
#include <osg/Shape_pmoc.hpp>
#include <QObject>
namespace osg{
class QReflect_Quat;
			} ;
#include <osg/Quat>
#include <osg/Quat_pmoc.hpp>
#include <osg/Shape>

#include <osg/Shape_pmoc.hpp>
#include <osg/Shape_pmoc.hpp>
namespace osg{
class  QMLCylinder: public QReflect_Cylinder
{
Q_OBJECT
public:
QMLCylinder(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLCylinder :public MetaQReflect_Cylinder{};

}
  Q_DECLARE_METATYPE(osg::QMLCylinder)
#include <osg/Shape_pmoc.hpp>
#include <QObject>
#include <osg/Shape>

#include <osg/Shape_pmoc.hpp>
namespace osg{
class  QMLConstShapeVisitor: public QReflect_ConstShapeVisitor
{
Q_OBJECT
public:
QMLConstShapeVisitor(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLConstShapeVisitor :public MetaQReflect_ConstShapeVisitor{};

}
  Q_DECLARE_METATYPE(osg::QMLConstShapeVisitor)
#include <osg/Shape_pmoc.hpp>
#include <QObject>
namespace osg{
class QReflect_Shape;
			} ;
#include <osg/Shape>
#include <osg/Shape>

#include <osg/Shape_pmoc.hpp>
#include <osg/Shape_pmoc.hpp>
namespace osg{
class  QMLCompositeShape: public QReflect_CompositeShape
{
Q_OBJECT
public:
QMLCompositeShape(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLCompositeShape :public MetaQReflect_CompositeShape{};

}
  Q_DECLARE_METATYPE(osg::QMLCompositeShape)
#include <osg/Shape_pmoc.hpp>
#include <QObject>
namespace osg{
class QReflect_Quat;
			} ;
#include <osg/Quat>
#include <osg/Quat_pmoc.hpp>
#include <osg/Shape>

#include <osg/Shape_pmoc.hpp>
#include <osg/Shape_pmoc.hpp>
namespace osg{
class  QMLBox: public QReflect_Box
{
Q_OBJECT
public:
QMLBox(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLBox :public MetaQReflect_Box{};

}
  Q_DECLARE_METATYPE(osg::QMLBox)
#include <osg/Shape_pmoc.hpp>
#include <QObject>
#include <osg/Shape>

#include <osg/Shape_pmoc.hpp>
#include <osg/Shape_pmoc.hpp>
namespace osg{
class  QMLSphere: public QReflect_Sphere
{
Q_OBJECT
public:
QMLSphere(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLSphere :public MetaQReflect_Sphere{};

}
  Q_DECLARE_METATYPE(osg::QMLSphere)
#include <osg/Shape_pmoc.hpp>
#include <QObject>
namespace osg{
class QReflect_Quat;
			} ;
#include <osg/Quat>
#include <osg/Quat_pmoc.hpp>
#include <osg/Shape>

#include <osg/Shape_pmoc.hpp>
#include <osg/Shape_pmoc.hpp>
namespace osg{
class  QMLCone: public QReflect_Cone
{
Q_OBJECT
public:
QMLCone(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLCone :public MetaQReflect_Cone{};

}
  Q_DECLARE_METATYPE(osg::QMLCone)
#include <osg/Shape_pmoc.hpp>
#include <QObject>
namespace osg{
class QReflect_IndexArray;
			} ;
#include <osg/Array>
#include <osg/Array_pmoc.hpp>
#include <osg/Shape>

#include <osg/Shape_pmoc.hpp>
#include <osg/Shape_pmoc.hpp>
namespace osg{
class  QMLTriangleMesh: public QReflect_TriangleMesh
{
Q_OBJECT
public:
QMLTriangleMesh(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLTriangleMesh :public MetaQReflect_TriangleMesh{};

}
  Q_DECLARE_METATYPE(osg::QMLTriangleMesh)
#include <osg/Shape_pmoc.hpp>
#include <QObject>
#include <osg/Shape>

#include <osg/Shape_pmoc.hpp>
#include <osg/Shape_pmoc.hpp>
namespace osg{
class  QMLConvexHull: public QReflect_ConvexHull
{
Q_OBJECT
public:
QMLConvexHull(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLConvexHull :public MetaQReflect_ConvexHull{};

}
  Q_DECLARE_METATYPE(osg::QMLConvexHull)
#include <osg/Shape_pmoc.hpp>
#include <QObject>
namespace osg{
class QReflect_Quat;
			} ;
#include <osg/Quat>
#include <osg/Quat_pmoc.hpp>
#include <osg/Shape>

#include <osg/Shape_pmoc.hpp>
#include <osg/Shape_pmoc.hpp>
namespace osg{
class  QMLCapsule: public QReflect_Capsule
{
Q_OBJECT
public:
QMLCapsule(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLCapsule :public MetaQReflect_Capsule{};

}
  Q_DECLARE_METATYPE(osg::QMLCapsule)

#endif //osg_Shape_customHPP

