#ifndef osg_Geometry_pmocHPP
#define  osg_Geometry_pmocHPP 1


#include <osg/Geometry_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_State;
			} ;
namespace osg{ 
class QReflect_PrimitiveFunctor;
			} ;
namespace osg{ 
class QReflect_Array;
			} ;
namespace osg{ 
class QReflect_PrimitiveSet;
			} ;
namespace osg{ 
class QReflect_VertexBufferObject;
			} ;
namespace osg{ 
class QReflect_ElementBufferObject;
			} ;
namespace osg{ 
class QReflect_PrimitiveIndexFunctor;
			} ;
namespace osg{ 
class QReflect_Geometry;
			} ;
namespace osg{ 
class QReflect_RenderInfo;
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
QReflect_Geometry(pmoc::Instance *i=0,QObject* parent=0);
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
Q_INVOKABLE  GLboolean  getVertexAttribNormalize( unsigned int )const;
Q_INVOKABLE  bool  addPrimitiveSet(osg::QReflect_PrimitiveSet *);
Q_INVOKABLE  bool  checkForDeprecatedData();
Q_INVOKABLE  bool  containsDeprecatedData()const;
Q_INVOKABLE  bool  containsSharedArrays()const;
Q_INVOKABLE  bool  empty()const;
Q_INVOKABLE  bool  insertPrimitiveSet( unsigned int  ,osg::QReflect_PrimitiveSet *);
Q_INVOKABLE  bool  removePrimitiveSet( unsigned int  , unsigned int );
Q_INVOKABLE  bool  setPrimitiveSet( unsigned int  ,osg::QReflect_PrimitiveSet *);
Q_INVOKABLE  bool  supports(osg::QReflect_PrimitiveFunctor *)const;
Q_INVOKABLE  bool  supports(osg::QReflect_PrimitiveIndexFunctor *)const;
Q_INVOKABLE  osg::QReflect_Array * getColorArray()const;
Q_INVOKABLE  osg::QReflect_Array * getFogCoordArray()const;
Q_INVOKABLE  osg::QReflect_Array * getNormalArray()const;
Q_INVOKABLE  osg::QReflect_Array * getSecondaryColorArray()const;
Q_INVOKABLE  osg::QReflect_Array * getVertexArray()const;
Q_INVOKABLE  unsigned int  getGLObjectSizeHint()const;
Q_INVOKABLE  unsigned int  getNumPrimitiveSets()const;
Q_INVOKABLE  unsigned int  getNumTexCoordArrays()const;
Q_INVOKABLE  unsigned int  getNumVertexAttribArrays()const;
Q_INVOKABLE  unsigned int  getPrimitiveSetIndex(osg::QReflect_PrimitiveSet *)const;
Q_INVOKABLE osg::QReflect_Array*  getTexCoordArray( unsigned int );
Q_INVOKABLE osg::QReflect_Array*  getTexCoordArray( unsigned int )const;
Q_INVOKABLE osg::QReflect_Array*  getVertexAttribArray( unsigned int );
Q_INVOKABLE osg::QReflect_Array*  getVertexAttribArray( unsigned int )const;
Q_INVOKABLE osg::QReflect_ElementBufferObject*  getOrCreateElementBufferObject();
Q_INVOKABLE osg::QReflect_Geometry*  asGeometry();
Q_INVOKABLE osg::QReflect_Geometry*  asGeometry()const;
Q_INVOKABLE osg::QReflect_Geometry::AttributeBinding  getColorBinding()const;
Q_INVOKABLE osg::QReflect_Geometry::AttributeBinding  getFogCoordBinding()const;
Q_INVOKABLE osg::QReflect_Geometry::AttributeBinding  getNormalBinding()const;
Q_INVOKABLE osg::QReflect_Geometry::AttributeBinding  getSecondaryColorBinding()const;
Q_INVOKABLE osg::QReflect_Geometry::AttributeBinding  getVertexAttribBinding( unsigned int )const;
Q_INVOKABLE osg::QReflect_PrimitiveSet*  getPrimitiveSet( unsigned int );
Q_INVOKABLE osg::QReflect_PrimitiveSet*  getPrimitiveSet( unsigned int )const;
Q_INVOKABLE osg::QReflect_VertexBufferObject*  getOrCreateVertexBufferObject();
Q_INVOKABLE void  accept(osg::QReflect_PrimitiveFunctor *)const;
Q_INVOKABLE void  accept(osg::QReflect_PrimitiveIndexFunctor *)const;
Q_INVOKABLE void  compileGLObjects(osg::QReflect_RenderInfo *)const;
Q_INVOKABLE void  dirtyDisplayList();
Q_INVOKABLE void  drawImplementation(osg::QReflect_RenderInfo *)const;
Q_INVOKABLE void  drawPrimitivesImplementation(osg::QReflect_RenderInfo *)const;
Q_INVOKABLE void  drawVertexArraysImplementation(osg::QReflect_RenderInfo *)const;
Q_INVOKABLE void  duplicateSharedArrays();
Q_INVOKABLE void  fixDeprecatedData();
Q_INVOKABLE void  releaseGLObjects(osg::QReflect_State *)const;
Q_INVOKABLE void  resizeGLObjectBuffers( unsigned int );
Q_INVOKABLE void  setColorBinding(osg::QReflect_Geometry::AttributeBinding );
Q_INVOKABLE void  setFogCoordBinding(osg::QReflect_Geometry::AttributeBinding );
Q_INVOKABLE void  setNormalBinding(osg::QReflect_Geometry::AttributeBinding );
Q_INVOKABLE void  setSecondaryColorBinding(osg::QReflect_Geometry::AttributeBinding );
Q_INVOKABLE void  setTexCoordArray( unsigned int  ,osg::QReflect_Array *);
Q_INVOKABLE void  setUseVertexBufferObjects( bool );
Q_INVOKABLE void  setVertexAttribArray( unsigned int  ,osg::QReflect_Array *);
Q_INVOKABLE void  setVertexAttribBinding( unsigned int  ,osg::QReflect_Geometry::AttributeBinding );
Q_INVOKABLE void  setVertexAttribNormalize( unsigned int  , GLboolean );
Q_INVOKABLE void pmoc_reverse_setColorArray( osg::QReflect_Array *par=0);
Q_INVOKABLE void pmoc_reverse_setFogCoordArray( osg::QReflect_Array *par=0);
Q_INVOKABLE void pmoc_reverse_setNormalArray( osg::QReflect_Array *par=0);
Q_INVOKABLE void pmoc_reverse_setSecondaryColorArray( osg::QReflect_Array *par=0);
Q_INVOKABLE void pmoc_reverse_setVertexArray( osg::QReflect_Array *par=0);
Q_INVOKABLE void setColorArray( osg::QReflect_Array *par);
Q_INVOKABLE void setFogCoordArray( osg::QReflect_Array *par);
Q_INVOKABLE void setNormalArray( osg::QReflect_Array *par);
Q_INVOKABLE void setSecondaryColorArray( osg::QReflect_Array *par);
Q_INVOKABLE void setVertexArray( osg::QReflect_Array *par);
signals: void ColorArrayChanged(const osg::QReflect_Array*);
public:
signals: void FogCoordArrayChanged(const osg::QReflect_Array*);
public:
signals: void NormalArrayChanged(const osg::QReflect_Array*);
public:
signals: void SecondaryColorArrayChanged(const osg::QReflect_Array*);
public:
signals: void VertexArrayChanged(const osg::QReflect_Array*);
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
QReflect_Geometry(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Geometry( );
//Geometry
Q_INVOKABLE  GLboolean  getVertexAttribNormalize( unsigned int )const;
Q_INVOKABLE  osg::QReflect_IndexArray * getColorIndices()const;
Q_INVOKABLE  osg::QReflect_IndexArray * getFogCoordIndices()const;
Q_INVOKABLE  osg::QReflect_IndexArray * getNormalIndices()const;
Q_INVOKABLE  osg::QReflect_IndexArray * getSecondaryColorIndices()const;
Q_INVOKABLE  osg::QReflect_IndexArray * getVertexIndices()const;
Q_INVOKABLE deprecated_osg::QReflect_Geometry::AttributeBinding  getColorBinding()const;
Q_INVOKABLE deprecated_osg::QReflect_Geometry::AttributeBinding  getFogCoordBinding()const;
Q_INVOKABLE deprecated_osg::QReflect_Geometry::AttributeBinding  getNormalBinding()const;
Q_INVOKABLE deprecated_osg::QReflect_Geometry::AttributeBinding  getSecondaryColorBinding()const;
Q_INVOKABLE deprecated_osg::QReflect_Geometry::AttributeBinding  getVertexAttribBinding( unsigned int )const;
Q_INVOKABLE osg::QReflect_IndexArray*  getTexCoordIndices( unsigned int )const;
Q_INVOKABLE osg::QReflect_IndexArray*  getVertexAttribIndices( unsigned int )const;
Q_INVOKABLE void  setColorBinding(deprecated_osg::QReflect_Geometry::AttributeBinding );
Q_INVOKABLE void  setFogCoordBinding(deprecated_osg::QReflect_Geometry::AttributeBinding );
Q_INVOKABLE void  setNormalBinding(deprecated_osg::QReflect_Geometry::AttributeBinding );
Q_INVOKABLE void  setSecondaryColorBinding(deprecated_osg::QReflect_Geometry::AttributeBinding );
Q_INVOKABLE void  setTexCoordIndices( unsigned int  ,osg::QReflect_IndexArray *);
Q_INVOKABLE void  setVertexAttribBinding( unsigned int  ,deprecated_osg::QReflect_Geometry::AttributeBinding );
Q_INVOKABLE void  setVertexAttribIndices( unsigned int  ,osg::QReflect_IndexArray *);
Q_INVOKABLE void  setVertexAttribNormalize( unsigned int  , GLboolean );
Q_INVOKABLE void pmoc_reverse_setColorIndices( osg::QReflect_IndexArray *par=0);
Q_INVOKABLE void pmoc_reverse_setFogCoordIndices( osg::QReflect_IndexArray *par=0);
Q_INVOKABLE void pmoc_reverse_setNormalIndices( osg::QReflect_IndexArray *par=0);
Q_INVOKABLE void pmoc_reverse_setSecondaryColorIndices( osg::QReflect_IndexArray *par=0);
Q_INVOKABLE void pmoc_reverse_setVertexIndices( osg::QReflect_IndexArray *par=0);
Q_INVOKABLE void setColorIndices( osg::QReflect_IndexArray *par);
Q_INVOKABLE void setFogCoordIndices( osg::QReflect_IndexArray *par);
Q_INVOKABLE void setNormalIndices( osg::QReflect_IndexArray *par);
Q_INVOKABLE void setSecondaryColorIndices( osg::QReflect_IndexArray *par);
Q_INVOKABLE void setVertexIndices( osg::QReflect_IndexArray *par);
signals: void ColorIndicesChanged(const osg::QReflect_IndexArray*);
public:
signals: void FogCoordIndicesChanged(const osg::QReflect_IndexArray*);
public:
signals: void NormalIndicesChanged(const osg::QReflect_IndexArray*);
public:
signals: void SecondaryColorIndicesChanged(const osg::QReflect_IndexArray*);
public:
signals: void VertexIndicesChanged(const osg::QReflect_IndexArray*);
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

#endif //osg_Geometry_pmocHPP

