#ifndef osg_Drawable_pmocHPP
#define  osg_Drawable_pmocHPP 1


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
QReflect_AttributeFunctorArrayVisitor(const pmoc::Instance *i=0,QObject* parent=0);
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
Q_INVOKABLE void  applyArray( unsigned int type ,osg::QReflect_Array *array);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_AttributeFunctorArrayVisitor: public pmoc::MetaQQuickClass{
protected:
   public:
MetaQReflect_AttributeFunctorArrayVisitor();
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
QReflect_ConstAttributeFunctorArrayVisitor(const pmoc::Instance *i=0,QObject* parent=0);
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
Q_INVOKABLE void  applyArray( unsigned int type ,osg::QReflect_Array *array);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_ConstAttributeFunctorArrayVisitor: public pmoc::MetaQQuickClass{
protected:
   public:
MetaQReflect_ConstAttributeFunctorArrayVisitor();
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
#include <osg/Drawable_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Drawable;
			} ;
namespace osg{ 
class QReflect_Shape;
			} ;
namespace osg{ 
class QReflect_State;
			} ;
namespace osg{ 
class QReflect_RenderInfo;
			} ;
namespace osg{ 
class QReflect_PrimitiveFunctor;
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
QReflect_Drawable(const pmoc::Instance *i=0,QObject* parent=0);
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
// void  setComputeBoundingBoxCallback( ComputeBoundingBoxCallback *);
//virtual  void  setDrawCallback( DrawCallback *);
// void  setInitialBound(const  osg::BoundingBox &);
//const  BoundingBox & getBoundingBox();
//const  BoundingBox & getInitialBound();
//const  BoundingSphere & getBound();
//const  ComputeBoundingBoxCallback * getComputeBoundingBoxCallback();
//const  DrawCallback * getDrawCallback();
Q_INVOKABLE  GLuint  generateDisplayList( unsigned int contextID , unsigned int sizeHint);
Q_INVOKABLE  GLuint&  getDisplayList( unsigned int contextID)const;
Q_INVOKABLE  bool  getSupportsDisplayList()const;
Q_INVOKABLE  bool  getUseDisplayList()const;
Q_INVOKABLE  bool  getUseVertexBufferObjects()const;
Q_INVOKABLE  bool  supports(osg::QReflect_PrimitiveFunctor *)const;
Q_INVOKABLE  bool  supports(osg::QReflect_PrimitiveIndexFunctor *)const;
Q_INVOKABLE  unsigned int  getGLObjectSizeHint()const;
Q_INVOKABLE  unsigned int  getMinimumNumberOfDisplayListsToRetainInCache();
Q_INVOKABLE osg::QReflect_Drawable*  asDrawable();
Q_INVOKABLE osg::QReflect_Drawable*  asDrawable()const;
Q_INVOKABLE osg::QReflect_Shape*  getShape();
Q_INVOKABLE osg::QReflect_Shape*  getShape()const;
Q_INVOKABLE void  accept(osg::QReflect_PrimitiveFunctor *)const;
Q_INVOKABLE void  accept(osg::QReflect_PrimitiveIndexFunctor *)const;
Q_INVOKABLE void  compileGLObjects(osg::QReflect_RenderInfo *renderInfo)const;
Q_INVOKABLE void  computeDataVariance();
Q_INVOKABLE void  deleteDisplayList( unsigned int contextID , GLuint globj , unsigned int sizeHint);
Q_INVOKABLE void  dirtyDisplayList();
Q_INVOKABLE void  discardAllDeletedDisplayLists( unsigned int contextID);
Q_INVOKABLE void  draw(osg::QReflect_RenderInfo *renderInfo)const;
Q_INVOKABLE void  drawImplementation(osg::QReflect_RenderInfo *)const;
Q_INVOKABLE void  flushAllDeletedDisplayLists( unsigned int contextID);
Q_INVOKABLE void  flushDeletedDisplayLists( unsigned int contextID , double &availableTime);
Q_INVOKABLE void  releaseGLObjects(osg::QReflect_State *state)const;
Q_INVOKABLE void  resizeGLObjectBuffers( unsigned int maxSize);
Q_INVOKABLE void  setMinimumNumberOfDisplayListsToRetainInCache( unsigned int minimum);
Q_INVOKABLE void  setShape(osg::QReflect_Shape *shape);
Q_INVOKABLE void  setSupportsDisplayList( bool flag);
Q_INVOKABLE void  setThreadSafeRefUnref( bool threadSafe);
Q_INVOKABLE void  setUseDisplayList( bool flag);
Q_INVOKABLE void  setUseVertexBufferObjects( bool flag);
Q_PROPERTY(bool  SupportsDisplayList  READ getSupportsDisplayList WRITE setSupportsDisplayList NOTIFY SupportsDisplayListChanged)
Q_PROPERTY(bool  UseDisplayList  READ getUseDisplayList WRITE setUseDisplayList NOTIFY UseDisplayListChanged)
Q_PROPERTY(bool  UseVertexBufferObjects  READ getUseVertexBufferObjects WRITE setUseVertexBufferObjects NOTIFY UseVertexBufferObjectsChanged)
Q_PROPERTY(osg::QReflect_Shape * Shape  READ getShape WRITE setShape NOTIFY ShapeChanged)
Q_PROPERTY(unsigned int  MinimumNumberOfDisplayListsToRetainInCache  READ getMinimumNumberOfDisplayListsToRetainInCache WRITE setMinimumNumberOfDisplayListsToRetainInCache NOTIFY MinimumNumberOfDisplayListsToRetainInCacheChanged)
signals: void MinimumNumberOfDisplayListsToRetainInCacheChanged();
public:
signals: void ShapeChanged();
public:
signals: void SupportsDisplayListChanged();
public:
signals: void UseDisplayListChanged();
public:
signals: void UseVertexBufferObjectsChanged();
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


#endif //osg_Drawable_pmocHPP

