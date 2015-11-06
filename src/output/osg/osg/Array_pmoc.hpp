#ifndef osg_Array_pmocHPP
#define  osg_Array_pmocHPP 1
#include <osg/Array_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Vec2b;
			} ;
namespace osg{ 
class QReflect_Vec4b;
			} ;
namespace osg{ 
class QReflect_Vec3b;
			} ;
namespace osg{ 
class QReflect_Vec2s;
			} ;
namespace osg{ 
class QReflect_Vec3s;
			} ;
namespace osg{ 
class QReflect_Vec4s;
			} ;
namespace osg{ 
class QReflect_Vec2i;
			} ;
namespace osg{ 
class QReflect_Vec3i;
			} ;
namespace osg{ 
class QReflect_Vec4i;
			} ;
namespace osg{ 
class QReflect_Vec2ub;
			} ;
namespace osg{ 
class QReflect_Vec3ub;
			} ;
namespace osg{ 
class QReflect_Vec2us;
			} ;
namespace osg{ 
class QReflect_Vec4ub;
			} ;
namespace osg{ 
class QReflect_Vec3f;
			} ;
namespace osg{ 
class QReflect_Vec2f;
			} ;
namespace osg{ 
class QReflect_Vec3us;
			} ;
namespace osg{ 
class QReflect_Vec4us;
			} ;
namespace osg{ 
class QReflect_Vec2ui;
			} ;
namespace osg{ 
class QReflect_Vec3ui;
			} ;
namespace osg{ 
class QReflect_Vec4ui;
			} ;
namespace osg{ 
class QReflect_Vec4f;
			} ;
namespace osg{ 
class QReflect_Vec3d;
			} ;
namespace osg{ 
class QReflect_Vec2d;
			} ;
namespace osg{ 
class QReflect_Vec4d;
			} ;
namespace osg{ 
class QReflect_Matrixf;
			} ;
namespace osg{ 
class QReflect_Matrixd;
			} ;
#include <osg/Array>

#include <MetaQQuickClass.h>
namespace osg{
class QReflect_ValueVisitor: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 0;}

/// inheritance simulated via composition
ValueVisitor * _model;
QReflect_ValueVisitor(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_ValueVisitor( );
//ValueVisitor
Q_INVOKABLE void  apply( GLbyte &);
Q_INVOKABLE void  apply( GLdouble &);
Q_INVOKABLE void  apply( GLfloat &);
Q_INVOKABLE void  apply( GLint &);
Q_INVOKABLE void  apply( GLshort &);
Q_INVOKABLE void  apply( GLubyte &);
Q_INVOKABLE void  apply( GLuint &);
Q_INVOKABLE void  apply( GLushort &);
Q_INVOKABLE void  apply(osg::QReflect_Matrixd *);
Q_INVOKABLE void  apply(osg::QReflect_Matrixf *);
Q_INVOKABLE void  apply(osg::QReflect_Vec2b *);
Q_INVOKABLE void  apply(osg::QReflect_Vec2d *);
Q_INVOKABLE void  apply(osg::QReflect_Vec2f *);
Q_INVOKABLE void  apply(osg::QReflect_Vec2i *);
Q_INVOKABLE void  apply(osg::QReflect_Vec2s *);
Q_INVOKABLE void  apply(osg::QReflect_Vec2ub *);
Q_INVOKABLE void  apply(osg::QReflect_Vec2ui *);
Q_INVOKABLE void  apply(osg::QReflect_Vec2us *);
Q_INVOKABLE void  apply(osg::QReflect_Vec3b *);
Q_INVOKABLE void  apply(osg::QReflect_Vec3d *);
Q_INVOKABLE void  apply(osg::QReflect_Vec3f *);
Q_INVOKABLE void  apply(osg::QReflect_Vec3i *);
Q_INVOKABLE void  apply(osg::QReflect_Vec3s *);
Q_INVOKABLE void  apply(osg::QReflect_Vec3ub *);
Q_INVOKABLE void  apply(osg::QReflect_Vec3ui *);
Q_INVOKABLE void  apply(osg::QReflect_Vec3us *);
Q_INVOKABLE void  apply(osg::QReflect_Vec4b *);
Q_INVOKABLE void  apply(osg::QReflect_Vec4d *);
Q_INVOKABLE void  apply(osg::QReflect_Vec4f *);
Q_INVOKABLE void  apply(osg::QReflect_Vec4i *);
Q_INVOKABLE void  apply(osg::QReflect_Vec4s *);
Q_INVOKABLE void  apply(osg::QReflect_Vec4ub *);
Q_INVOKABLE void  apply(osg::QReflect_Vec4ui *);
Q_INVOKABLE void  apply(osg::QReflect_Vec4us *);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_ValueVisitor: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ValueVisitor* 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_ValueVisitor();
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
#include <osg/Array_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Vec2b;
			} ;
namespace osg{ 
class QReflect_Vec4b;
			} ;
namespace osg{ 
class QReflect_Vec3b;
			} ;
namespace osg{ 
class QReflect_Vec2s;
			} ;
namespace osg{ 
class QReflect_Vec3s;
			} ;
namespace osg{ 
class QReflect_Vec4s;
			} ;
namespace osg{ 
class QReflect_Vec2i;
			} ;
namespace osg{ 
class QReflect_Vec3i;
			} ;
namespace osg{ 
class QReflect_Vec4i;
			} ;
namespace osg{ 
class QReflect_Vec2ub;
			} ;
namespace osg{ 
class QReflect_Vec3ub;
			} ;
namespace osg{ 
class QReflect_Vec2us;
			} ;
namespace osg{ 
class QReflect_Vec4ub;
			} ;
namespace osg{ 
class QReflect_Vec3f;
			} ;
namespace osg{ 
class QReflect_Vec2f;
			} ;
namespace osg{ 
class QReflect_Vec3us;
			} ;
namespace osg{ 
class QReflect_Vec4us;
			} ;
namespace osg{ 
class QReflect_Vec2ui;
			} ;
namespace osg{ 
class QReflect_Vec3ui;
			} ;
namespace osg{ 
class QReflect_Vec4ui;
			} ;
namespace osg{ 
class QReflect_Vec4f;
			} ;
namespace osg{ 
class QReflect_Vec3d;
			} ;
namespace osg{ 
class QReflect_Vec2d;
			} ;
namespace osg{ 
class QReflect_Vec4d;
			} ;
namespace osg{ 
class QReflect_Matrixf;
			} ;
namespace osg{ 
class QReflect_Matrixd;
			} ;
#include <osg/Array>

#include <MetaQQuickClass.h>
namespace osg{
class QReflect_ConstValueVisitor: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 0;}

/// inheritance simulated via composition
ConstValueVisitor * _model;
QReflect_ConstValueVisitor(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_ConstValueVisitor( );
//ConstValueVisitor
Q_INVOKABLE void  apply(const  GLbyte &);
Q_INVOKABLE void  apply(const  GLdouble &);
Q_INVOKABLE void  apply(const  GLfloat &);
Q_INVOKABLE void  apply(const  GLint &);
Q_INVOKABLE void  apply(const  GLshort &);
Q_INVOKABLE void  apply(const  GLubyte &);
Q_INVOKABLE void  apply(const  GLuint &);
Q_INVOKABLE void  apply(const  GLushort &);
Q_INVOKABLE void  apply(osg::QReflect_Matrixd *);
Q_INVOKABLE void  apply(osg::QReflect_Matrixf *);
Q_INVOKABLE void  apply(osg::QReflect_Vec2b *);
Q_INVOKABLE void  apply(osg::QReflect_Vec2d *);
Q_INVOKABLE void  apply(osg::QReflect_Vec2f *);
Q_INVOKABLE void  apply(osg::QReflect_Vec2i *);
Q_INVOKABLE void  apply(osg::QReflect_Vec2s *);
Q_INVOKABLE void  apply(osg::QReflect_Vec2ub *);
Q_INVOKABLE void  apply(osg::QReflect_Vec2ui *);
Q_INVOKABLE void  apply(osg::QReflect_Vec2us *);
Q_INVOKABLE void  apply(osg::QReflect_Vec3b *);
Q_INVOKABLE void  apply(osg::QReflect_Vec3d *);
Q_INVOKABLE void  apply(osg::QReflect_Vec3f *);
Q_INVOKABLE void  apply(osg::QReflect_Vec3i *);
Q_INVOKABLE void  apply(osg::QReflect_Vec3s *);
Q_INVOKABLE void  apply(osg::QReflect_Vec3ub *);
Q_INVOKABLE void  apply(osg::QReflect_Vec3ui *);
Q_INVOKABLE void  apply(osg::QReflect_Vec3us *);
Q_INVOKABLE void  apply(osg::QReflect_Vec4b *);
Q_INVOKABLE void  apply(osg::QReflect_Vec4d *);
Q_INVOKABLE void  apply(osg::QReflect_Vec4f *);
Q_INVOKABLE void  apply(osg::QReflect_Vec4i *);
Q_INVOKABLE void  apply(osg::QReflect_Vec4s *);
Q_INVOKABLE void  apply(osg::QReflect_Vec4ub *);
Q_INVOKABLE void  apply(osg::QReflect_Vec4ui *);
Q_INVOKABLE void  apply(osg::QReflect_Vec4us *);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_ConstValueVisitor: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ConstValueVisitor* 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_ConstValueVisitor();
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
#include <osg/Array_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Array;
			} ;
#include <osg/Array>

#include <MetaQQuickClass.h>
namespace osg{
class QReflect_ArrayVisitor: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 0;}

/// inheritance simulated via composition
ArrayVisitor * _model;
QReflect_ArrayVisitor(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_ArrayVisitor( );
//ArrayVisitor
//virtual  void  apply( ByteArray &);
//virtual  void  apply( DoubleArray &);
//virtual  void  apply( FloatArray &);
//virtual  void  apply( IntArray &);
//virtual  void  apply( MatrixdArray &);
//virtual  void  apply( MatrixfArray &);
//virtual  void  apply( ShortArray &);
//virtual  void  apply( UByteArray &);
//virtual  void  apply( UIntArray &);
//virtual  void  apply( UShortArray &);
//virtual  void  apply( Vec2Array &);
//virtual  void  apply( Vec2bArray &);
//virtual  void  apply( Vec2dArray &);
//virtual  void  apply( Vec2iArray &);
//virtual  void  apply( Vec2sArray &);
//virtual  void  apply( Vec2ubArray &);
//virtual  void  apply( Vec2uiArray &);
//virtual  void  apply( Vec2usArray &);
//virtual  void  apply( Vec3Array &);
//virtual  void  apply( Vec3bArray &);
//virtual  void  apply( Vec3dArray &);
//virtual  void  apply( Vec3iArray &);
//virtual  void  apply( Vec3sArray &);
//virtual  void  apply( Vec3ubArray &);
//virtual  void  apply( Vec3uiArray &);
//virtual  void  apply( Vec3usArray &);
//virtual  void  apply( Vec4Array &);
//virtual  void  apply( Vec4bArray &);
//virtual  void  apply( Vec4dArray &);
//virtual  void  apply( Vec4iArray &);
//virtual  void  apply( Vec4sArray &);
//virtual  void  apply( Vec4ubArray &);
//virtual  void  apply( Vec4uiArray &);
//virtual  void  apply( Vec4usArray &);
Q_INVOKABLE void  apply(osg::QReflect_Array *);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_ArrayVisitor: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ArrayVisitor* 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_ArrayVisitor();
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
#include <osg/Array_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Object;
			} ;
namespace osg{ 
class QReflect_Array;
			} ;
namespace osg{ 
class QReflect_VertexBufferObject;
			} ;
#include <osg/Array>
#include <osg/Array>

#include <osg/ref_ptr>
#include<osg/Array_pmoc.hpp>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_Array: public pmoc::QQModel
{
Q_OBJECT
public:
 enum Binding{
BIND_UNDEFINED =Array::BIND_UNDEFINED,
BIND_OFF =Array::BIND_OFF,
BIND_OVERALL =Array::BIND_OVERALL,
BIND_PER_PRIMITIVE_SET =Array::BIND_PER_PRIMITIVE_SET,
BIND_PER_VERTEX =Array::BIND_PER_VERTEX};
  Q_ENUMS(Binding)
private:
public:
 enum Type{
ArrayType =Array::ArrayType,
ByteArrayType =Array::ByteArrayType,
ShortArrayType =Array::ShortArrayType,
IntArrayType =Array::IntArrayType,
UByteArrayType =Array::UByteArrayType,
UShortArrayType =Array::UShortArrayType,
UIntArrayType =Array::UIntArrayType,
FloatArrayType =Array::FloatArrayType,
DoubleArrayType =Array::DoubleArrayType,
Vec2bArrayType =Array::Vec2bArrayType,
Vec3bArrayType =Array::Vec3bArrayType,
Vec4bArrayType =Array::Vec4bArrayType,
Vec2sArrayType =Array::Vec2sArrayType,
Vec3sArrayType =Array::Vec3sArrayType,
Vec4sArrayType =Array::Vec4sArrayType,
Vec2iArrayType =Array::Vec2iArrayType,
Vec3iArrayType =Array::Vec3iArrayType,
Vec4iArrayType =Array::Vec4iArrayType,
Vec2ubArrayType =Array::Vec2ubArrayType,
Vec3ubArrayType =Array::Vec3ubArrayType,
Vec4ubArrayType =Array::Vec4ubArrayType,
Vec2usArrayType =Array::Vec2usArrayType,
Vec3usArrayType =Array::Vec3usArrayType,
Vec4usArrayType =Array::Vec4usArrayType,
Vec2uiArrayType =Array::Vec2uiArrayType,
Vec3uiArrayType =Array::Vec3uiArrayType,
Vec4uiArrayType =Array::Vec4uiArrayType,
Vec2ArrayType =Array::Vec2ArrayType,
Vec3ArrayType =Array::Vec3ArrayType,
Vec4ArrayType =Array::Vec4ArrayType,
Vec2dArrayType =Array::Vec2dArrayType,
Vec3dArrayType =Array::Vec3dArrayType,
Vec4dArrayType =Array::Vec4dArrayType,
MatrixArrayType =Array::MatrixArrayType,
MatrixdArrayType =Array::MatrixdArrayType};
  Q_ENUMS(Type)
private:
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
Array * _model;
QReflect_Array(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Array( );
//Array
Q_INVOKABLE  GLenum  getDataType()const;
Q_INVOKABLE  GLint  getDataSize()const;
Q_INVOKABLE  bool  isSameKindAs(osg::QReflect_Object *)const;
Q_INVOKABLE  osg::QReflect_VertexBufferObject * getVertexBufferObject()const;
Q_INVOKABLE const  char*  className()const;
Q_INVOKABLE const  char*  libraryName()const;
Q_INVOKABLE const bool  getNormalize()const;
Q_INVOKABLE const bool  getPreserveDataType()const;
Q_INVOKABLE osg::QReflect_Array*  asArray();
Q_INVOKABLE osg::QReflect_Array*  asArray()const;
Q_INVOKABLE osg::QReflect_Array::Binding  getBinding()const;
Q_INVOKABLE osg::QReflect_Array::Type  getType()const;
Q_INVOKABLE void  setBinding(osg::QReflect_Array::Binding );
Q_INVOKABLE void  trim();
Q_INVOKABLE void pmoc_reverse_setVertexBufferObject( osg::QReflect_VertexBufferObject *par=0);
Q_INVOKABLE void setNormalize(const bool &);
Q_INVOKABLE void setPreserveDataType(const bool &);
Q_INVOKABLE void setVertexBufferObject( osg::QReflect_VertexBufferObject *par);
Q_PROPERTY(bool Normalize  READ getNormalize WRITE setNormalize NOTIFY NormalizeChanged)
Q_PROPERTY(bool PreserveDataType  READ getPreserveDataType WRITE setPreserveDataType NOTIFY PreserveDataTypeChanged)
signals: void NormalizeChanged(const bool&);
public:
signals: void PreserveDataTypeChanged(const bool&);
public:
signals: void VertexBufferObjectChanged(const osg::QReflect_VertexBufferObject*);
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Array: public pmoc::MetaQQuickClass{
protected:
   public:
MetaQReflect_Array();
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
#include <osg/Array_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Array;
			} ;
#include <osg/Array>

#include <MetaQQuickClass.h>
namespace osg{
class QReflect_ConstArrayVisitor: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 0;}

/// inheritance simulated via composition
ConstArrayVisitor * _model;
QReflect_ConstArrayVisitor(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_ConstArrayVisitor( );
//ConstArrayVisitor
//virtual  void  apply(const  ByteArray &);
//virtual  void  apply(const  DoubleArray &);
//virtual  void  apply(const  FloatArray &);
//virtual  void  apply(const  IntArray &);
//virtual  void  apply(const  MatrixdArray &);
//virtual  void  apply(const  MatrixfArray &);
//virtual  void  apply(const  ShortArray &);
//virtual  void  apply(const  UByteArray &);
//virtual  void  apply(const  UIntArray &);
//virtual  void  apply(const  UShortArray &);
//virtual  void  apply(const  Vec2Array &);
//virtual  void  apply(const  Vec2bArray &);
//virtual  void  apply(const  Vec2dArray &);
//virtual  void  apply(const  Vec2iArray &);
//virtual  void  apply(const  Vec2sArray &);
//virtual  void  apply(const  Vec2ubArray &);
//virtual  void  apply(const  Vec2uiArray &);
//virtual  void  apply(const  Vec2usArray &);
//virtual  void  apply(const  Vec3Array &);
//virtual  void  apply(const  Vec3bArray &);
//virtual  void  apply(const  Vec3dArray &);
//virtual  void  apply(const  Vec3iArray &);
//virtual  void  apply(const  Vec3sArray &);
//virtual  void  apply(const  Vec3ubArray &);
//virtual  void  apply(const  Vec3uiArray &);
//virtual  void  apply(const  Vec3usArray &);
//virtual  void  apply(const  Vec4Array &);
//virtual  void  apply(const  Vec4bArray &);
//virtual  void  apply(const  Vec4dArray &);
//virtual  void  apply(const  Vec4iArray &);
//virtual  void  apply(const  Vec4sArray &);
//virtual  void  apply(const  Vec4ubArray &);
//virtual  void  apply(const  Vec4uiArray &);
//virtual  void  apply(const  Vec4usArray &);
Q_INVOKABLE void  apply(osg::QReflect_Array *);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_ConstArrayVisitor: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ConstArrayVisitor* 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_ConstArrayVisitor();
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
#include <osg/Array_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Object;
			} ;
#include <osg/Array>
#include <osg/Array>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_IndexArray: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
IndexArray * _model;
QReflect_IndexArray(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_IndexArray( );
//IndexArray
Q_INVOKABLE  bool  isSameKindAs(osg::QReflect_Object *)const;
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_IndexArray: public pmoc::MetaQQuickClass{
protected:
   public:
MetaQReflect_IndexArray();
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

#endif //osg_Array_pmocHPP

