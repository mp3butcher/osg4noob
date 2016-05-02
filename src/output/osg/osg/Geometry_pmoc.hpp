#ifndef osg_Geometry_pmocHPP
#define  osg_Geometry_pmocHPP 1


#include <osg/Geometry_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Array;
			} ;
namespace osg{ 
class QReflect_PrimitiveSet;
			} ;
namespace osg{ 
class QReflect_State;
			} ;
namespace osg{ 
class QReflect_VertexBufferObject;
			} ;
namespace osg{ 
class QReflect_ElementBufferObject;
			} ;
namespace osg{ 
class QReflect_Geometry;
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
#include <osg/Geometry>
#include <osg/Geometry>

#include <osg/ref_ptr>
#include<osg/Geometry_pmoc.hpp>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_Geometry: public pmoc::QQModel
{
Q_OBJECT
public:
 enum AttributeBinding{
BIND_OFF =Geometry::BIND_OFF,
BIND_OVERALL =Geometry::BIND_OVERALL,
BIND_PER_PRIMITIVE_SET =Geometry::BIND_PER_PRIMITIVE_SET,
BIND_PER_VERTEX =Geometry::BIND_PER_VERTEX};
  Q_ENUMS(AttributeBinding)
private:
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
Geometry * _model;
QReflect_Geometry(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Geometry( );
//Geometry
// ArrayList & getTexCoordArrayList();
// ArrayList & getVertexAttribArrayList();
// PrimitiveSetList & getPrimitiveSetList();
// bool  getArrayList( ArrayList &);
// bool  getDrawElementsList( DrawElementsList &);
//virtual  bool  supports(const  Drawable::AttributeFunctor &);
//virtual  bool  supports(const  Drawable::ConstAttributeFunctor &);
//virtual  void  accept( Drawable::AttributeFunctor &);
//virtual  void  accept( Drawable::ConstAttributeFunctor &);
// void  setColorArray( Array * , osg::Array::Binding );
// void  setFogCoordArray( Array * , osg::Array::Binding );
// void  setNormalArray( Array * , osg::Array::Binding );
// void  setPrimitiveSetList(const  PrimitiveSetList &);
// void  setSecondaryColorArray( Array * , osg::Array::Binding );
// void  setTexCoordArray( unsigned int  , Array * , osg::Array::Binding );
// void  setTexCoordArrayList(const  ArrayList &);
// void  setVertexAttribArray( unsigned int  , Array * , osg::Array::Binding );
// void  setVertexAttribArrayList(const  ArrayList &);
//const  ArrayList & getTexCoordArrayList();
//const  ArrayList & getVertexAttribArrayList();
//const  PrimitiveSetList & getPrimitiveSetList();
Q_INVOKABLE  GLboolean  getVertexAttribNormalize( unsigned int index)const;
Q_INVOKABLE  bool  addPrimitiveSet(osg::QReflect_PrimitiveSet *primitiveset);
Q_INVOKABLE  bool  checkForDeprecatedData();
Q_INVOKABLE  bool  containsDeprecatedData()const;
Q_INVOKABLE  bool  containsSharedArrays()const;
Q_INVOKABLE  bool  empty()const;
Q_INVOKABLE  bool  insertPrimitiveSet( unsigned int i ,osg::QReflect_PrimitiveSet *primitiveset);
Q_INVOKABLE  bool  removePrimitiveSet( unsigned int i , unsigned int numElementsToRemove);
Q_INVOKABLE  bool  setPrimitiveSet( unsigned int i ,osg::QReflect_PrimitiveSet *primitiveset);
Q_INVOKABLE  bool  supports(osg::QReflect_PrimitiveFunctor *)const;
Q_INVOKABLE  bool  supports(osg::QReflect_PrimitiveIndexFunctor *)const;
Q_INVOKABLE  unsigned int  getGLObjectSizeHint()const;
Q_INVOKABLE  unsigned int  getNumPrimitiveSets()const;
Q_INVOKABLE  unsigned int  getNumTexCoordArrays()const;
Q_INVOKABLE  unsigned int  getNumVertexAttribArrays()const;
Q_INVOKABLE  unsigned int  getPrimitiveSetIndex(osg::QReflect_PrimitiveSet *primitiveset)const;
Q_INVOKABLE osg::QReflect_Array*  getColorArray();
Q_INVOKABLE osg::QReflect_Array*  getColorArray()const;
Q_INVOKABLE osg::QReflect_Array*  getFogCoordArray();
Q_INVOKABLE osg::QReflect_Array*  getFogCoordArray()const;
Q_INVOKABLE osg::QReflect_Array*  getNormalArray();
Q_INVOKABLE osg::QReflect_Array*  getNormalArray()const;
Q_INVOKABLE osg::QReflect_Array*  getSecondaryColorArray();
Q_INVOKABLE osg::QReflect_Array*  getSecondaryColorArray()const;
Q_INVOKABLE osg::QReflect_Array*  getTexCoordArray( unsigned int unit);
Q_INVOKABLE osg::QReflect_Array*  getTexCoordArray( unsigned int unit)const;
Q_INVOKABLE osg::QReflect_Array*  getVertexArray();
Q_INVOKABLE osg::QReflect_Array*  getVertexArray()const;
Q_INVOKABLE osg::QReflect_Array*  getVertexAttribArray( unsigned int index);
Q_INVOKABLE osg::QReflect_Array*  getVertexAttribArray( unsigned int index)const;
Q_INVOKABLE osg::QReflect_ElementBufferObject*  getOrCreateElementBufferObject();
Q_INVOKABLE osg::QReflect_Geometry*  asGeometry();
Q_INVOKABLE osg::QReflect_Geometry*  asGeometry()const;
Q_INVOKABLE osg::QReflect_Geometry::AttributeBinding  getColorBinding()const;
Q_INVOKABLE osg::QReflect_Geometry::AttributeBinding  getFogCoordBinding()const;
Q_INVOKABLE osg::QReflect_Geometry::AttributeBinding  getNormalBinding()const;
Q_INVOKABLE osg::QReflect_Geometry::AttributeBinding  getSecondaryColorBinding()const;
Q_INVOKABLE osg::QReflect_Geometry::AttributeBinding  getVertexAttribBinding( unsigned int index)const;
Q_INVOKABLE osg::QReflect_PrimitiveSet*  getPrimitiveSet( unsigned int pos);
Q_INVOKABLE osg::QReflect_PrimitiveSet*  getPrimitiveSet( unsigned int pos)const;
Q_INVOKABLE osg::QReflect_VertexBufferObject*  getOrCreateVertexBufferObject();
Q_INVOKABLE void  accept(osg::QReflect_PrimitiveFunctor *pf)const;
Q_INVOKABLE void  accept(osg::QReflect_PrimitiveIndexFunctor *pf)const;
Q_INVOKABLE void  compileGLObjects(osg::QReflect_RenderInfo *renderInfo)const;
Q_INVOKABLE void  dirtyDisplayList();
Q_INVOKABLE void  drawImplementation(osg::QReflect_RenderInfo *renderInfo)const;
Q_INVOKABLE void  drawPrimitivesImplementation(osg::QReflect_RenderInfo *renderInfo)const;
Q_INVOKABLE void  drawVertexArraysImplementation(osg::QReflect_RenderInfo *renderInfo)const;
Q_INVOKABLE void  duplicateSharedArrays();
Q_INVOKABLE void  fixDeprecatedData();
Q_INVOKABLE void  releaseGLObjects(osg::QReflect_State *state)const;
Q_INVOKABLE void  resizeGLObjectBuffers( unsigned int maxSize);
Q_INVOKABLE void  setColorArray(osg::QReflect_Array *array);
Q_INVOKABLE void  setColorBinding(osg::QReflect_Geometry::AttributeBinding ab);
Q_INVOKABLE void  setFogCoordArray(osg::QReflect_Array *array);
Q_INVOKABLE void  setFogCoordBinding(osg::QReflect_Geometry::AttributeBinding ab);
Q_INVOKABLE void  setNormalArray(osg::QReflect_Array *array);
Q_INVOKABLE void  setNormalBinding(osg::QReflect_Geometry::AttributeBinding ab);
Q_INVOKABLE void  setSecondaryColorArray(osg::QReflect_Array *array);
Q_INVOKABLE void  setSecondaryColorBinding(osg::QReflect_Geometry::AttributeBinding ab);
Q_INVOKABLE void  setTexCoordArray( unsigned int unit ,osg::QReflect_Array *array);
Q_INVOKABLE void  setUseVertexBufferObjects( bool flag);
Q_INVOKABLE void  setVertexArray(osg::QReflect_Array *array);
Q_INVOKABLE void  setVertexAttribArray( unsigned int index ,osg::QReflect_Array *array);
Q_INVOKABLE void  setVertexAttribBinding( unsigned int index ,osg::QReflect_Geometry::AttributeBinding ab);
Q_INVOKABLE void  setVertexAttribNormalize( unsigned int index , GLboolean norm);
Q_PROPERTY(osg::QReflect_Array * ColorArray  READ getColorArray WRITE setColorArray NOTIFY ColorArrayChanged)
Q_PROPERTY(osg::QReflect_Array * FogCoordArray  READ getFogCoordArray WRITE setFogCoordArray NOTIFY FogCoordArrayChanged)
Q_PROPERTY(osg::QReflect_Array * NormalArray  READ getNormalArray WRITE setNormalArray NOTIFY NormalArrayChanged)
Q_PROPERTY(osg::QReflect_Array * SecondaryColorArray  READ getSecondaryColorArray WRITE setSecondaryColorArray NOTIFY SecondaryColorArrayChanged)
Q_PROPERTY(osg::QReflect_Array * VertexArray  READ getVertexArray WRITE setVertexArray NOTIFY VertexArrayChanged)
Q_PROPERTY(osg::QReflect_Geometry::AttributeBinding  ColorBinding  READ getColorBinding WRITE setColorBinding NOTIFY ColorBindingChanged)
Q_PROPERTY(osg::QReflect_Geometry::AttributeBinding  FogCoordBinding  READ getFogCoordBinding WRITE setFogCoordBinding NOTIFY FogCoordBindingChanged)
Q_PROPERTY(osg::QReflect_Geometry::AttributeBinding  NormalBinding  READ getNormalBinding WRITE setNormalBinding NOTIFY NormalBindingChanged)
Q_PROPERTY(osg::QReflect_Geometry::AttributeBinding  SecondaryColorBinding  READ getSecondaryColorBinding WRITE setSecondaryColorBinding NOTIFY SecondaryColorBindingChanged)
signals: void ColorArrayChanged();
public:
signals: void ColorBindingChanged();
public:
signals: void FogCoordArrayChanged();
public:
signals: void FogCoordBindingChanged();
public:
signals: void NormalArrayChanged();
public:
signals: void NormalBindingChanged();
public:
signals: void SecondaryColorArrayChanged();
public:
signals: void SecondaryColorBindingChanged();
public:
signals: void VertexArrayChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Geometry: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::Geometry> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_Geometry();
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

#include <osg/Geometry_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_IndexArray;
			} ;
#include <osg/Geometry>
#include <osg/Geometry>

#include <osg/ref_ptr>
#include<osg/Geometry_pmoc.hpp>
#include <MetaQQuickClass.h>
namespace deprecated_osg{
class QReflect_Geometry: public pmoc::QQModel
{
Q_OBJECT
public:
 enum AttributeBinding{
BIND_OFF =Geometry::BIND_OFF,
BIND_OVERALL =Geometry::BIND_OVERALL,
BIND_PER_PRIMITIVE_SET =Geometry::BIND_PER_PRIMITIVE_SET,
BIND_PER_PRIMITIVE =Geometry::BIND_PER_PRIMITIVE,
BIND_PER_VERTEX =Geometry::BIND_PER_VERTEX};
  Q_ENUMS(AttributeBinding)
private:
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
Geometry * _model;
QReflect_Geometry(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Geometry( );
//Geometry
Q_INVOKABLE  GLboolean  getVertexAttribNormalize( unsigned int index)const;
Q_INVOKABLE deprecated_osg::QReflect_Geometry::AttributeBinding  getColorBinding()const;
Q_INVOKABLE deprecated_osg::QReflect_Geometry::AttributeBinding  getFogCoordBinding()const;
Q_INVOKABLE deprecated_osg::QReflect_Geometry::AttributeBinding  getNormalBinding()const;
Q_INVOKABLE deprecated_osg::QReflect_Geometry::AttributeBinding  getSecondaryColorBinding()const;
Q_INVOKABLE deprecated_osg::QReflect_Geometry::AttributeBinding  getVertexAttribBinding( unsigned int index)const;
Q_INVOKABLE osg::QReflect_IndexArray*  getColorIndices()const;
Q_INVOKABLE osg::QReflect_IndexArray*  getFogCoordIndices()const;
Q_INVOKABLE osg::QReflect_IndexArray*  getNormalIndices()const;
Q_INVOKABLE osg::QReflect_IndexArray*  getSecondaryColorIndices()const;
Q_INVOKABLE osg::QReflect_IndexArray*  getTexCoordIndices( unsigned int unit)const;
Q_INVOKABLE osg::QReflect_IndexArray*  getVertexAttribIndices( unsigned int index)const;
Q_INVOKABLE osg::QReflect_IndexArray*  getVertexIndices()const;
Q_INVOKABLE void  setColorBinding(deprecated_osg::QReflect_Geometry::AttributeBinding ab);
Q_INVOKABLE void  setColorIndices(osg::QReflect_IndexArray *array);
Q_INVOKABLE void  setFogCoordBinding(deprecated_osg::QReflect_Geometry::AttributeBinding ab);
Q_INVOKABLE void  setFogCoordIndices(osg::QReflect_IndexArray *array);
Q_INVOKABLE void  setNormalBinding(deprecated_osg::QReflect_Geometry::AttributeBinding ab);
Q_INVOKABLE void  setNormalIndices(osg::QReflect_IndexArray *array);
Q_INVOKABLE void  setSecondaryColorBinding(deprecated_osg::QReflect_Geometry::AttributeBinding ab);
Q_INVOKABLE void  setSecondaryColorIndices(osg::QReflect_IndexArray *array);
Q_INVOKABLE void  setTexCoordIndices( unsigned int unit ,osg::QReflect_IndexArray *array);
Q_INVOKABLE void  setVertexAttribBinding( unsigned int index ,deprecated_osg::QReflect_Geometry::AttributeBinding ab);
Q_INVOKABLE void  setVertexAttribIndices( unsigned int index ,osg::QReflect_IndexArray *array);
Q_INVOKABLE void  setVertexAttribNormalize( unsigned int index , GLboolean norm);
Q_INVOKABLE void  setVertexIndices(osg::QReflect_IndexArray *array);
Q_PROPERTY(deprecated_osg::QReflect_Geometry::AttributeBinding  ColorBinding  READ getColorBinding WRITE setColorBinding NOTIFY ColorBindingChanged)
Q_PROPERTY(deprecated_osg::QReflect_Geometry::AttributeBinding  FogCoordBinding  READ getFogCoordBinding WRITE setFogCoordBinding NOTIFY FogCoordBindingChanged)
Q_PROPERTY(deprecated_osg::QReflect_Geometry::AttributeBinding  NormalBinding  READ getNormalBinding WRITE setNormalBinding NOTIFY NormalBindingChanged)
Q_PROPERTY(deprecated_osg::QReflect_Geometry::AttributeBinding  SecondaryColorBinding  READ getSecondaryColorBinding WRITE setSecondaryColorBinding NOTIFY SecondaryColorBindingChanged)
Q_PROPERTY(osg::QReflect_IndexArray * ColorIndices  READ getColorIndices WRITE setColorIndices NOTIFY ColorIndicesChanged)
Q_PROPERTY(osg::QReflect_IndexArray * FogCoordIndices  READ getFogCoordIndices WRITE setFogCoordIndices NOTIFY FogCoordIndicesChanged)
Q_PROPERTY(osg::QReflect_IndexArray * NormalIndices  READ getNormalIndices WRITE setNormalIndices NOTIFY NormalIndicesChanged)
Q_PROPERTY(osg::QReflect_IndexArray * SecondaryColorIndices  READ getSecondaryColorIndices WRITE setSecondaryColorIndices NOTIFY SecondaryColorIndicesChanged)
Q_PROPERTY(osg::QReflect_IndexArray * VertexIndices  READ getVertexIndices WRITE setVertexIndices NOTIFY VertexIndicesChanged)
signals: void ColorBindingChanged();
public:
signals: void ColorIndicesChanged();
public:
signals: void FogCoordBindingChanged();
public:
signals: void FogCoordIndicesChanged();
public:
signals: void NormalBindingChanged();
public:
signals: void NormalIndicesChanged();
public:
signals: void SecondaryColorBindingChanged();
public:
signals: void SecondaryColorIndicesChanged();
public:
signals: void VertexIndicesChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Geometry: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<deprecated_osg::Geometry> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_Geometry();
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

#endif //osg_Geometry_pmocHPP

