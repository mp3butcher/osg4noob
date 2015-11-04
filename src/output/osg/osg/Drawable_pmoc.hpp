#ifndef osg_Drawable_pmocHPP
#define  osg_Drawable_pmocHPP 1


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
class QReflect_State;
			} ;
namespace osg{ 
class QReflect_PrimitiveFunctor;
			} ;
namespace osg{ 
class QReflect_Drawable;
			} ;
namespace osg{ 
class QReflect_Shape;
			} ;
namespace osg{ 
class QReflect_PrimitiveIndexFunctor;
			} ;
#include <osg/Drawable>
#include <osg/Drawable>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_Drawable: public pmoc::QQModel
{
Q_OBJECT
public:
 enum AttributeTypes{
VERTICES =Drawable::VERTICES,
WEIGHTS =Drawable::WEIGHTS,
NORMALS =Drawable::NORMALS,
COLORS =Drawable::COLORS,
SECONDARY_COLORS =Drawable::SECONDARY_COLORS,
FOG_COORDS =Drawable::FOG_COORDS,
ATTRIBUTE_6 =Drawable::ATTRIBUTE_6,
ATTRIBUTE_7 =Drawable::ATTRIBUTE_7,
TEXTURE_COORDS =Drawable::TEXTURE_COORDS,
TEXTURE_COORDS_0 =Drawable::TEXTURE_COORDS_0,
TEXTURE_COORDS_1 =Drawable::TEXTURE_COORDS_1,
TEXTURE_COORDS_2 =Drawable::TEXTURE_COORDS_2,
TEXTURE_COORDS_3 =Drawable::TEXTURE_COORDS_3,
TEXTURE_COORDS_4 =Drawable::TEXTURE_COORDS_4,
TEXTURE_COORDS_5 =Drawable::TEXTURE_COORDS_5,
TEXTURE_COORDS_6 =Drawable::TEXTURE_COORDS_6,
TEXTURE_COORDS_7 =Drawable::TEXTURE_COORDS_7};
  Q_ENUMS(AttributeTypes)
private:
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
Drawable * _model;
QReflect_Drawable(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Drawable( );
//Drawable
//virtual  BoundingBox  computeBoundingBox();
//virtual  BoundingSphere  computeBound();
// ComputeBoundingBoxCallback * getComputeBoundingBoxCallback();
// DrawCallback * getDrawCallback();
// MatrixList  getWorldMatrices(const  osg::Node *);
//virtual  bool  supports(const  AttributeFunctor &);
//virtual  bool  supports(const  ConstAttributeFunctor &);
//virtual  void  accept( AttributeFunctor &);
//virtual  void  accept( ConstAttributeFunctor &);
//virtual  void  accept( PrimitiveFunctor &);
//virtual  void  accept( PrimitiveIndexFunctor &);
//virtual  void  compileGLObjects( RenderInfo &);
// void  draw( RenderInfo &);
//virtual  void  drawImplementation( RenderInfo &);
// void  setComputeBoundingBoxCallback( ComputeBoundingBoxCallback *);
//virtual  void  setDrawCallback( DrawCallback *);
// void  setInitialBound(const  osg::BoundingBox &);
//const  BoundingBox & getBoundingBox();
//const  BoundingBox & getInitialBound();
//const  BoundingSphere & getBound();
//const  ComputeBoundingBoxCallback * getComputeBoundingBoxCallback();
//const  DrawCallback * getDrawCallback();
Q_INVOKABLE  GLuint  generateDisplayList( unsigned int  , unsigned int );
Q_INVOKABLE  GLuint&  getDisplayList( unsigned int )const;
Q_INVOKABLE  bool  supports(osg::QReflect_PrimitiveFunctor *)const;
Q_INVOKABLE  bool  supports(osg::QReflect_PrimitiveIndexFunctor *)const;
Q_INVOKABLE  osg::QReflect_Shape * getShape()const;
Q_INVOKABLE  unsigned int  getGLObjectSizeHint()const;
Q_INVOKABLE const bool  getSupportsDisplayList()const;
Q_INVOKABLE const bool  getUseDisplayList()const;
Q_INVOKABLE const bool  getUseVertexBufferObjects()const;
Q_INVOKABLE const unsigned int  getMinimumNumberOfDisplayListsToRetainInCache()const;
Q_INVOKABLE osg::QReflect_Drawable*  asDrawable();
Q_INVOKABLE osg::QReflect_Drawable*  asDrawable()const;
Q_INVOKABLE void  computeDataVariance();
Q_INVOKABLE void  deleteDisplayList( unsigned int  , GLuint  , unsigned int );
Q_INVOKABLE void  dirtyDisplayList();
Q_INVOKABLE void  releaseGLObjects(osg::QReflect_State *)const;
Q_INVOKABLE void  resizeGLObjectBuffers( unsigned int );
Q_INVOKABLE void  setThreadSafeRefUnref( bool );
Q_INVOKABLE void pmoc_reverse_setShape( osg::QReflect_Shape *par=0);
Q_INVOKABLE void setMinimumNumberOfDisplayListsToRetainInCache(const unsigned int &);
Q_INVOKABLE void setShape( osg::QReflect_Shape *par);
Q_INVOKABLE void setSupportsDisplayList(const bool &);
Q_INVOKABLE void setUseDisplayList(const bool &);
Q_INVOKABLE void setUseVertexBufferObjects(const bool &);
Q_PROPERTY(bool SupportsDisplayList  READ getSupportsDisplayList WRITE setSupportsDisplayList NOTIFY SupportsDisplayListChanged)
Q_PROPERTY(bool UseDisplayList  READ getUseDisplayList WRITE setUseDisplayList NOTIFY UseDisplayListChanged)
Q_PROPERTY(bool UseVertexBufferObjects  READ getUseVertexBufferObjects WRITE setUseVertexBufferObjects NOTIFY UseVertexBufferObjectsChanged)
Q_PROPERTY(unsigned int MinimumNumberOfDisplayListsToRetainInCache  READ getMinimumNumberOfDisplayListsToRetainInCache WRITE setMinimumNumberOfDisplayListsToRetainInCache NOTIFY MinimumNumberOfDisplayListsToRetainInCacheChanged)
signals: void MinimumNumberOfDisplayListsToRetainInCacheChanged(const unsigned int&);
public:
signals: void ShapeChanged(const osg::QReflect_Shape*);
public:
signals: void SupportsDisplayListChanged(const bool&);
public:
signals: void UseDisplayListChanged(const bool&);
public:
signals: void UseVertexBufferObjectsChanged(const bool&);
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Drawable: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::Drawable> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_Drawable();
 virtual pmoc::Instance createInstance();
public:
    virtual pmoc::QQModel* createQQModel(pmoc::Instance*i);
       virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
  
} 
#include <osg/Drawable_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Array;
			} ;
#include <osg/Drawable>

#include <MetaQQuickClass.h>
namespace osg{
class QReflect_ConstAttributeFunctorArrayVisitor: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
ConstAttributeFunctorArrayVisitor * _model;
QReflect_ConstAttributeFunctorArrayVisitor(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_ConstAttributeFunctorArrayVisitor( );
//ConstAttributeFunctorArrayVisitor
//virtual  void  apply(const  ByteArray &);
//virtual  void  apply(const  DoubleArray &);
//virtual  void  apply(const  FloatArray &);
//virtual  void  apply(const  IntArray &);
//virtual  void  apply(const  ShortArray &);
//virtual  void  apply(const  UByteArray &);
//virtual  void  apply(const  UIntArray &);
//virtual  void  apply(const  UShortArray &);
//virtual  void  apply(const  Vec2Array &);
//virtual  void  apply(const  Vec2dArray &);
//virtual  void  apply(const  Vec3Array &);
//virtual  void  apply(const  Vec3dArray &);
//virtual  void  apply(const  Vec4Array &);
//virtual  void  apply(const  Vec4dArray &);
//virtual  void  apply(const  Vec4ubArray &);
Q_INVOKABLE void  applyArray( unsigned int  ,osg::QReflect_Array *);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_ConstAttributeFunctorArrayVisitor: public pmoc::MetaQQuickClass{
protected:
   public:
MetaQReflect_ConstAttributeFunctorArrayVisitor();
 virtual pmoc::Instance createInstance();
public:
    virtual pmoc::QQModel* createQQModel(pmoc::Instance*i);
       virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
  
} 
#include <osg/Vec4ub_pmoc.hpp>
#include <QObject>
#include <osg/Drawable_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Array;
			} ;
#include <osg/Drawable>

#include <MetaQQuickClass.h>
namespace osg{
class QReflect_AttributeFunctorArrayVisitor: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
AttributeFunctorArrayVisitor * _model;
QReflect_AttributeFunctorArrayVisitor(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_AttributeFunctorArrayVisitor( );
//AttributeFunctorArrayVisitor
//virtual  void  apply( ByteArray &);
//virtual  void  apply( DoubleArray &);
//virtual  void  apply( FloatArray &);
//virtual  void  apply( IntArray &);
//virtual  void  apply( ShortArray &);
//virtual  void  apply( UByteArray &);
//virtual  void  apply( UIntArray &);
//virtual  void  apply( UShortArray &);
//virtual  void  apply( Vec2Array &);
//virtual  void  apply( Vec2dArray &);
//virtual  void  apply( Vec3Array &);
//virtual  void  apply( Vec3dArray &);
//virtual  void  apply( Vec4Array &);
//virtual  void  apply( Vec4dArray &);
//virtual  void  apply( Vec4ubArray &);
Q_INVOKABLE void  applyArray( unsigned int  ,osg::QReflect_Array *);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_AttributeFunctorArrayVisitor: public pmoc::MetaQQuickClass{
protected:
   public:
MetaQReflect_AttributeFunctorArrayVisitor();
 virtual pmoc::Instance createInstance();
public:
    virtual pmoc::QQModel* createQQModel(pmoc::Instance*i);
       virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
  
} 

#endif //osg_Drawable_pmocHPP

