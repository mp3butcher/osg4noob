#ifndef osg_Shape_pmocHPP
#define  osg_Shape_pmocHPP 1


#include <osg/Shape_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Shape;
			} ;
namespace osg{ 
class QReflect_Sphere;
			} ;
namespace osg{ 
class QReflect_Box;
			} ;
namespace osg{ 
class QReflect_Cone;
			} ;
namespace osg{ 
class QReflect_Cylinder;
			} ;
namespace osg{ 
class QReflect_Capsule;
			} ;
namespace osg{ 
class QReflect_InfinitePlane;
			} ;
namespace osg{ 
class QReflect_TriangleMesh;
			} ;
namespace osg{ 
class QReflect_ConvexHull;
			} ;
namespace osg{ 
class QReflect_HeightField;
			} ;
namespace osg{ 
class QReflect_CompositeShape;
			} ;
#include <osg/Shape>

#include <MetaQQuickClass.h>
namespace osg{
class QReflect_ShapeVisitor: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 0;}

/// inheritance simulated via composition
ShapeVisitor * _model;
QReflect_ShapeVisitor(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_ShapeVisitor( );
//ShapeVisitor
Q_INVOKABLE void  apply(osg::QReflect_Box *);
Q_INVOKABLE void  apply(osg::QReflect_Capsule *);
Q_INVOKABLE void  apply(osg::QReflect_CompositeShape *);
Q_INVOKABLE void  apply(osg::QReflect_Cone *);
Q_INVOKABLE void  apply(osg::QReflect_ConvexHull *);
Q_INVOKABLE void  apply(osg::QReflect_Cylinder *);
Q_INVOKABLE void  apply(osg::QReflect_HeightField *);
Q_INVOKABLE void  apply(osg::QReflect_InfinitePlane *);
Q_INVOKABLE void  apply(osg::QReflect_Shape *);
Q_INVOKABLE void  apply(osg::QReflect_Sphere *);
Q_INVOKABLE void  apply(osg::QReflect_TriangleMesh *);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_ShapeVisitor: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ShapeVisitor* 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_ShapeVisitor();
 virtual pmoc::Instance createInstance();
public:
    virtual pmoc::QQModel* createQQModel(const pmoc::Instance*i);
       virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
  
} 
#include <osg/Shape_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Shape;
			} ;
namespace osg{ 
class QReflect_Sphere;
			} ;
namespace osg{ 
class QReflect_Box;
			} ;
namespace osg{ 
class QReflect_Cone;
			} ;
namespace osg{ 
class QReflect_Cylinder;
			} ;
namespace osg{ 
class QReflect_Capsule;
			} ;
namespace osg{ 
class QReflect_InfinitePlane;
			} ;
namespace osg{ 
class QReflect_TriangleMesh;
			} ;
namespace osg{ 
class QReflect_ConvexHull;
			} ;
namespace osg{ 
class QReflect_HeightField;
			} ;
namespace osg{ 
class QReflect_CompositeShape;
			} ;
#include <osg/Shape>

#include <MetaQQuickClass.h>
namespace osg{
class QReflect_ConstShapeVisitor: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 0;}

/// inheritance simulated via composition
ConstShapeVisitor * _model;
QReflect_ConstShapeVisitor(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_ConstShapeVisitor( );
//ConstShapeVisitor
Q_INVOKABLE void  apply(osg::QReflect_Box *);
Q_INVOKABLE void  apply(osg::QReflect_Capsule *);
Q_INVOKABLE void  apply(osg::QReflect_CompositeShape *);
Q_INVOKABLE void  apply(osg::QReflect_Cone *);
Q_INVOKABLE void  apply(osg::QReflect_ConvexHull *);
Q_INVOKABLE void  apply(osg::QReflect_Cylinder *);
Q_INVOKABLE void  apply(osg::QReflect_HeightField *);
Q_INVOKABLE void  apply(osg::QReflect_InfinitePlane *);
Q_INVOKABLE void  apply(osg::QReflect_Shape *);
Q_INVOKABLE void  apply(osg::QReflect_Sphere *);
Q_INVOKABLE void  apply(osg::QReflect_TriangleMesh *);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_ConstShapeVisitor: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ConstShapeVisitor* 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_ConstShapeVisitor();
 virtual pmoc::Instance createInstance();
public:
    virtual pmoc::QQModel* createQQModel(const pmoc::Instance*i);
       virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
  
} 
#include <osg/Shape_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Object;
			} ;
#include <osg/Shape>
#include <osg/Shape>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_Shape: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
Shape * _model;
QReflect_Shape(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Shape( );
//Shape
Q_INVOKABLE  bool  isSameKindAs(osg::QReflect_Object *obj)const;
Q_INVOKABLE const  char*  className()const;
Q_INVOKABLE const  char*  libraryName()const;
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Shape: public pmoc::MetaQQuickClass{
protected:
   public:
MetaQReflect_Shape();
 virtual pmoc::Instance createInstance();
public:
    virtual pmoc::QQModel* createQQModel(const pmoc::Instance*i);
       virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
  
} 
#include <osg/Shape_pmoc.hpp>
#include <QObject>
#include <osg/Shape>
#include <osg/Shape>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_InfinitePlane: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 2;}

/// inheritance simulated via composition
InfinitePlane * _model;
QReflect_InfinitePlane(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_InfinitePlane( );
//InfinitePlane
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_InfinitePlane: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::InfinitePlane> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_InfinitePlane();
 virtual pmoc::Instance createInstance();
public:
    virtual pmoc::QQModel* createQQModel(const pmoc::Instance*i);
       virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
  
} 
#include <osg/Shape_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Vec3f;
			} ;
namespace osg{ 
class QReflect_Quat;
			} ;
#include <osg/Shape>
#include <osg/Shape>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_HeightField: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
HeightField * _model;
QReflect_HeightField(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_HeightField( );
//HeightField
// HeightList & getHeightList();
// Matrix  computeRotationMatrix();
// Vec2  getHeightDelta( unsigned int  , unsigned int );
// Vec3  getNormal( unsigned int  , unsigned int );
// Vec3  getVertex( unsigned int  , unsigned int );
// osg::FloatArray * getFloatArray();
//const  HeightList & getHeightList();
//const  Quat & getRotation();
//const  osg::FloatArray * getFloatArray();
//const  osg::Vec3 & getOrigin();
Q_INVOKABLE  bool  zeroRotation()const;
Q_INVOKABLE  float  getHeight( unsigned int c , unsigned int r)const;
Q_INVOKABLE  float  getSkirtHeight()const;
Q_INVOKABLE  float  getXInterval()const;
Q_INVOKABLE  float  getYInterval()const;
Q_INVOKABLE  float&  getHeight( unsigned int c , unsigned int r);
Q_INVOKABLE  unsigned int  getBorderWidth()const;
Q_INVOKABLE  unsigned int  getNumColumns()const;
Q_INVOKABLE  unsigned int  getNumRows()const;
Q_INVOKABLE void  allocate( unsigned int numColumns , unsigned int numRows);
Q_INVOKABLE void  setBorderWidth( unsigned int borderWidth);
Q_INVOKABLE void  setHeight( unsigned int c , unsigned int r , float value);
Q_INVOKABLE void  setOrigin(osg::QReflect_Vec3f *origin);
Q_INVOKABLE void  setRotation(osg::QReflect_Quat *quat);
Q_INVOKABLE void  setSkirtHeight( float skirtHeight);
Q_INVOKABLE void  setXInterval( float dx);
Q_INVOKABLE void  setYInterval( float dy);
Q_PROPERTY(float  SkirtHeight  READ getSkirtHeight WRITE setSkirtHeight NOTIFY SkirtHeightChanged)
Q_PROPERTY(float  XInterval  READ getXInterval WRITE setXInterval NOTIFY XIntervalChanged)
Q_PROPERTY(float  YInterval  READ getYInterval WRITE setYInterval NOTIFY YIntervalChanged)
Q_PROPERTY(unsigned int  BorderWidth  READ getBorderWidth WRITE setBorderWidth NOTIFY BorderWidthChanged)
signals: void BorderWidthChanged();
public:
signals: void SkirtHeightChanged();
public:
signals: void XIntervalChanged();
public:
signals: void YIntervalChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_HeightField: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::HeightField> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_HeightField();
 virtual pmoc::Instance createInstance();
public:
    virtual pmoc::QQModel* createQQModel(const pmoc::Instance*i);
       virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
  
} 
#include <osg/Shape_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Vec3f;
			} ;
namespace osg{ 
class QReflect_Quat;
			} ;
#include <osg/Shape>
#include <osg/Shape>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_Cylinder: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
Cylinder * _model;
QReflect_Cylinder(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Cylinder( );
//Cylinder
// Matrix  computeRotationMatrix();
//const  Quat & getRotation();
//const  Vec3 & getCenter();
Q_INVOKABLE  bool  valid()const;
Q_INVOKABLE  bool  zeroRotation()const;
Q_INVOKABLE  float  getHeight()const;
Q_INVOKABLE  float  getRadius()const;
Q_INVOKABLE void  set(osg::QReflect_Vec3f *center , float radius , float height);
Q_INVOKABLE void  setCenter(osg::QReflect_Vec3f *center);
Q_INVOKABLE void  setHeight( float height);
Q_INVOKABLE void  setRadius( float radius);
Q_INVOKABLE void  setRotation(osg::QReflect_Quat *quat);
Q_PROPERTY(float  Height  READ getHeight WRITE setHeight NOTIFY HeightChanged)
Q_PROPERTY(float  Radius  READ getRadius WRITE setRadius NOTIFY RadiusChanged)
signals: void HeightChanged();
public:
signals: void RadiusChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Cylinder: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::Cylinder> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_Cylinder();
 virtual pmoc::Instance createInstance();
public:
    virtual pmoc::QQModel* createQQModel(const pmoc::Instance*i);
       virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
  
} 
#include <osg/Shape_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Vec3f;
			} ;
namespace osg{ 
class QReflect_Quat;
			} ;
#include <osg/Shape>
#include <osg/Shape>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_Cone: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
Cone * _model;
QReflect_Cone(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Cone( );
//Cone
// Matrix  computeRotationMatrix();
//const  Quat & getRotation();
//const  Vec3 & getCenter();
Q_INVOKABLE  bool  valid()const;
Q_INVOKABLE  bool  zeroRotation()const;
Q_INVOKABLE  float  getBaseOffset()const;
Q_INVOKABLE  float  getBaseOffsetFactor()const;
Q_INVOKABLE  float  getHeight()const;
Q_INVOKABLE  float  getRadius()const;
Q_INVOKABLE void  set(osg::QReflect_Vec3f *center , float radius , float height);
Q_INVOKABLE void  setCenter(osg::QReflect_Vec3f *center);
Q_INVOKABLE void  setHeight( float height);
Q_INVOKABLE void  setRadius( float radius);
Q_INVOKABLE void  setRotation(osg::QReflect_Quat *quat);
Q_PROPERTY(float  Height  READ getHeight WRITE setHeight NOTIFY HeightChanged)
Q_PROPERTY(float  Radius  READ getRadius WRITE setRadius NOTIFY RadiusChanged)
signals: void HeightChanged();
public:
signals: void RadiusChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Cone: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::Cone> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_Cone();
 virtual pmoc::Instance createInstance();
public:
    virtual pmoc::QQModel* createQQModel(const pmoc::Instance*i);
       virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
  
} 
#include <osg/Shape_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Shape;
			} ;
#include <osg/Shape>
#include <osg/Shape>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_CompositeShape: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
CompositeShape * _model;
QReflect_CompositeShape(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_CompositeShape( );
//CompositeShape
Q_INVOKABLE  unsigned int  findChildNo(osg::QReflect_Shape *shape)const;
Q_INVOKABLE  unsigned int  getNumChildren()const;
Q_INVOKABLE osg::QReflect_Shape*  getChild( unsigned int i);
Q_INVOKABLE osg::QReflect_Shape*  getChild( unsigned int i)const;
Q_INVOKABLE osg::QReflect_Shape*  getShape();
Q_INVOKABLE osg::QReflect_Shape*  getShape()const;
Q_INVOKABLE void  addChild(osg::QReflect_Shape *shape);
Q_INVOKABLE void  removeChild( unsigned int i);
Q_INVOKABLE void  setShape(osg::QReflect_Shape *shape);
Q_PROPERTY(osg::QReflect_Shape * Shape  READ getShape WRITE setShape NOTIFY ShapeChanged)
signals: void ShapeChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_CompositeShape: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::CompositeShape> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_CompositeShape();
 virtual pmoc::Instance createInstance();
public:
    virtual pmoc::QQModel* createQQModel(const pmoc::Instance*i);
       virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
  
} 
#include <osg/Shape_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Vec3f;
			} ;
namespace osg{ 
class QReflect_Quat;
			} ;
#include <osg/Shape>
#include <osg/Shape>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_Capsule: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
Capsule * _model;
QReflect_Capsule(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Capsule( );
//Capsule
// Matrix  computeRotationMatrix();
//const  Quat & getRotation();
//const  Vec3 & getCenter();
Q_INVOKABLE  bool  valid()const;
Q_INVOKABLE  bool  zeroRotation()const;
Q_INVOKABLE  float  getHeight()const;
Q_INVOKABLE  float  getRadius()const;
Q_INVOKABLE void  set(osg::QReflect_Vec3f *center , float radius , float height);
Q_INVOKABLE void  setCenter(osg::QReflect_Vec3f *center);
Q_INVOKABLE void  setHeight( float height);
Q_INVOKABLE void  setRadius( float radius);
Q_INVOKABLE void  setRotation(osg::QReflect_Quat *quat);
Q_PROPERTY(float  Height  READ getHeight WRITE setHeight NOTIFY HeightChanged)
Q_PROPERTY(float  Radius  READ getRadius WRITE setRadius NOTIFY RadiusChanged)
signals: void HeightChanged();
public:
signals: void RadiusChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Capsule: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::Capsule> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_Capsule();
 virtual pmoc::Instance createInstance();
public:
    virtual pmoc::QQModel* createQQModel(const pmoc::Instance*i);
       virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
  
} 
#include <osg/Shape_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Vec3f;
			} ;
#include <osg/Shape>
#include <osg/Shape>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_Sphere: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
Sphere * _model;
QReflect_Sphere(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Sphere( );
//Sphere
//const  Vec3 & getCenter();
Q_INVOKABLE  bool  valid()const;
Q_INVOKABLE  float  getRadius()const;
Q_INVOKABLE void  set(osg::QReflect_Vec3f *center , float radius);
Q_INVOKABLE void  setCenter(osg::QReflect_Vec3f *center);
Q_INVOKABLE void  setRadius( float radius);
Q_PROPERTY(float  Radius  READ getRadius WRITE setRadius NOTIFY RadiusChanged)
signals: void RadiusChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Sphere: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::Sphere> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_Sphere();
 virtual pmoc::Instance createInstance();
public:
    virtual pmoc::QQModel* createQQModel(const pmoc::Instance*i);
       virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
  
} 
#include <osg/Shape_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Vec3f;
			} ;
namespace osg{ 
class QReflect_Quat;
			} ;
#include <osg/Shape>
#include <osg/Shape>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_Box: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
Box * _model;
QReflect_Box(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Box( );
//Box
// Matrix  computeRotationMatrix();
//const  Quat & getRotation();
//const  Vec3 & getCenter();
//const  Vec3 & getHalfLengths();
Q_INVOKABLE  bool  valid()const;
Q_INVOKABLE  bool  zeroRotation()const;
Q_INVOKABLE void  set(osg::QReflect_Vec3f *center ,osg::QReflect_Vec3f *halfLengths);
Q_INVOKABLE void  setCenter(osg::QReflect_Vec3f *center);
Q_INVOKABLE void  setHalfLengths(osg::QReflect_Vec3f *halfLengths);
Q_INVOKABLE void  setRotation(osg::QReflect_Quat *quat);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Box: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::Box> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_Box();
 virtual pmoc::Instance createInstance();
public:
    virtual pmoc::QQModel* createQQModel(const pmoc::Instance*i);
       virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
  
} 
#include <osg/Shape_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_IndexArray;
			} ;
#include <osg/Shape>
#include <osg/Shape>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_TriangleMesh: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
TriangleMesh * _model;
QReflect_TriangleMesh(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_TriangleMesh( );
//TriangleMesh
// Vec3Array * getVertices();
// void  setVertices( Vec3Array *);
//const  Vec3Array * getVertices();
Q_INVOKABLE osg::QReflect_IndexArray*  getIndices();
Q_INVOKABLE osg::QReflect_IndexArray*  getIndices()const;
Q_INVOKABLE void  setIndices(osg::QReflect_IndexArray *indices);
Q_PROPERTY(osg::QReflect_IndexArray * Indices  READ getIndices WRITE setIndices NOTIFY IndicesChanged)
signals: void IndicesChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_TriangleMesh: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::TriangleMesh> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_TriangleMesh();
 virtual pmoc::Instance createInstance();
public:
    virtual pmoc::QQModel* createQQModel(const pmoc::Instance*i);
       virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
  
} 
#include <osg/Shape_pmoc.hpp>
#include <QObject>
#include <osg/Shape>
#include <osg/Shape>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_ConvexHull: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
ConvexHull * _model;
QReflect_ConvexHull(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_ConvexHull( );
//ConvexHull
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_ConvexHull: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::ConvexHull> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_ConvexHull();
 virtual pmoc::Instance createInstance();
public:
    virtual pmoc::QQModel* createQQModel(const pmoc::Instance*i);
       virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
  
} 


#endif //osg_Shape_pmocHPP

