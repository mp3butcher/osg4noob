#ifndef osg_Uniform_pmocHPP
#define  osg_Uniform_pmocHPP 1
#include <osg/Uniform_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Vec2f;
			} ;
namespace osg{ 
class QReflect_Vec3f;
			} ;
namespace osg{ 
class QReflect_Vec4f;
			} ;
namespace osg{ 
class QReflect_Vec2d;
			} ;
namespace osg{ 
class QReflect_Vec3d;
			} ;
namespace osg{ 
class QReflect_Vec4d;
			} ;
namespace osg{ 
class QReflect_Uniform;
			} ;
namespace osg{ 
class QReflect_UniformCallback;
			} ;
namespace osg{ 
class QReflect_Matrixf;
			} ;
namespace osg{ 
class QReflect_Matrixd;
			} ;
#include <osg/Uniform>
#include <osg/Uniform>

#include <osg/ref_ptr>
#include<osg/Uniform_pmoc.hpp>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_Uniform: public pmoc::QQModel
{
Q_OBJECT
public:
 enum Type{
FLOAT =Uniform::FLOAT,
FLOAT_VEC2 =Uniform::FLOAT_VEC2,
FLOAT_VEC3 =Uniform::FLOAT_VEC3,
FLOAT_VEC4 =Uniform::FLOAT_VEC4,
DOUBLE =Uniform::DOUBLE,
DOUBLE_VEC2 =Uniform::DOUBLE_VEC2,
DOUBLE_VEC3 =Uniform::DOUBLE_VEC3,
DOUBLE_VEC4 =Uniform::DOUBLE_VEC4,
INT =Uniform::INT,
INT_VEC2 =Uniform::INT_VEC2,
INT_VEC3 =Uniform::INT_VEC3,
INT_VEC4 =Uniform::INT_VEC4,
UNSIGNED_INT =Uniform::UNSIGNED_INT,
UNSIGNED_INT_VEC2 =Uniform::UNSIGNED_INT_VEC2,
UNSIGNED_INT_VEC3 =Uniform::UNSIGNED_INT_VEC3,
UNSIGNED_INT_VEC4 =Uniform::UNSIGNED_INT_VEC4,
BOOL =Uniform::BOOL,
BOOL_VEC2 =Uniform::BOOL_VEC2,
BOOL_VEC3 =Uniform::BOOL_VEC3,
BOOL_VEC4 =Uniform::BOOL_VEC4,
FLOAT_MAT2 =Uniform::FLOAT_MAT2,
FLOAT_MAT3 =Uniform::FLOAT_MAT3,
FLOAT_MAT4 =Uniform::FLOAT_MAT4,
FLOAT_MAT2x3 =Uniform::FLOAT_MAT2x3,
FLOAT_MAT2x4 =Uniform::FLOAT_MAT2x4,
FLOAT_MAT3x2 =Uniform::FLOAT_MAT3x2,
FLOAT_MAT3x4 =Uniform::FLOAT_MAT3x4,
FLOAT_MAT4x2 =Uniform::FLOAT_MAT4x2,
FLOAT_MAT4x3 =Uniform::FLOAT_MAT4x3,
DOUBLE_MAT2 =Uniform::DOUBLE_MAT2,
DOUBLE_MAT3 =Uniform::DOUBLE_MAT3,
DOUBLE_MAT4 =Uniform::DOUBLE_MAT4,
DOUBLE_MAT2x3 =Uniform::DOUBLE_MAT2x3,
DOUBLE_MAT2x4 =Uniform::DOUBLE_MAT2x4,
DOUBLE_MAT3x2 =Uniform::DOUBLE_MAT3x2,
DOUBLE_MAT3x4 =Uniform::DOUBLE_MAT3x4,
DOUBLE_MAT4x2 =Uniform::DOUBLE_MAT4x2,
DOUBLE_MAT4x3 =Uniform::DOUBLE_MAT4x3,
SAMPLER_1D =Uniform::SAMPLER_1D,
SAMPLER_2D =Uniform::SAMPLER_2D,
SAMPLER_3D =Uniform::SAMPLER_3D,
SAMPLER_CUBE =Uniform::SAMPLER_CUBE,
SAMPLER_1D_SHADOW =Uniform::SAMPLER_1D_SHADOW,
SAMPLER_2D_SHADOW =Uniform::SAMPLER_2D_SHADOW,
SAMPLER_1D_ARRAY =Uniform::SAMPLER_1D_ARRAY,
SAMPLER_2D_ARRAY =Uniform::SAMPLER_2D_ARRAY,
SAMPLER_CUBE_MAP_ARRAY =Uniform::SAMPLER_CUBE_MAP_ARRAY,
SAMPLER_1D_ARRAY_SHADOW =Uniform::SAMPLER_1D_ARRAY_SHADOW,
SAMPLER_2D_ARRAY_SHADOW =Uniform::SAMPLER_2D_ARRAY_SHADOW,
SAMPLER_2D_MULTISAMPLE =Uniform::SAMPLER_2D_MULTISAMPLE,
SAMPLER_2D_MULTISAMPLE_ARRAY =Uniform::SAMPLER_2D_MULTISAMPLE_ARRAY,
SAMPLER_CUBE_SHADOW =Uniform::SAMPLER_CUBE_SHADOW,
SAMPLER_CUBE_MAP_ARRAY_SHADOW =Uniform::SAMPLER_CUBE_MAP_ARRAY_SHADOW,
SAMPLER_BUFFER =Uniform::SAMPLER_BUFFER,
SAMPLER_2D_RECT =Uniform::SAMPLER_2D_RECT,
SAMPLER_2D_RECT_SHADOW =Uniform::SAMPLER_2D_RECT_SHADOW,
INT_SAMPLER_1D =Uniform::INT_SAMPLER_1D,
INT_SAMPLER_2D =Uniform::INT_SAMPLER_2D,
INT_SAMPLER_3D =Uniform::INT_SAMPLER_3D,
INT_SAMPLER_CUBE =Uniform::INT_SAMPLER_CUBE,
INT_SAMPLER_1D_ARRAY =Uniform::INT_SAMPLER_1D_ARRAY,
INT_SAMPLER_2D_ARRAY =Uniform::INT_SAMPLER_2D_ARRAY,
INT_SAMPLER_CUBE_MAP_ARRAY =Uniform::INT_SAMPLER_CUBE_MAP_ARRAY,
INT_SAMPLER_2D_MULTISAMPLE =Uniform::INT_SAMPLER_2D_MULTISAMPLE,
INT_SAMPLER_2D_MULTISAMPLE_ARRAY =Uniform::INT_SAMPLER_2D_MULTISAMPLE_ARRAY,
INT_SAMPLER_BUFFER =Uniform::INT_SAMPLER_BUFFER,
INT_SAMPLER_2D_RECT =Uniform::INT_SAMPLER_2D_RECT,
UNSIGNED_INT_SAMPLER_1D =Uniform::UNSIGNED_INT_SAMPLER_1D,
UNSIGNED_INT_SAMPLER_2D =Uniform::UNSIGNED_INT_SAMPLER_2D,
UNSIGNED_INT_SAMPLER_3D =Uniform::UNSIGNED_INT_SAMPLER_3D,
UNSIGNED_INT_SAMPLER_CUBE =Uniform::UNSIGNED_INT_SAMPLER_CUBE,
UNSIGNED_INT_SAMPLER_1D_ARRAY =Uniform::UNSIGNED_INT_SAMPLER_1D_ARRAY,
UNSIGNED_INT_SAMPLER_2D_ARRAY =Uniform::UNSIGNED_INT_SAMPLER_2D_ARRAY,
UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY =Uniform::UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY,
UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE =Uniform::UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE,
UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY =Uniform::UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY,
UNSIGNED_INT_SAMPLER_BUFFER =Uniform::UNSIGNED_INT_SAMPLER_BUFFER,
UNSIGNED_INT_SAMPLER_2D_RECT =Uniform::UNSIGNED_INT_SAMPLER_2D_RECT,
IMAGE_1D =Uniform::IMAGE_1D,
IMAGE_2D =Uniform::IMAGE_2D,
IMAGE_3D =Uniform::IMAGE_3D,
IMAGE_2D_RECT =Uniform::IMAGE_2D_RECT,
IMAGE_CUBE =Uniform::IMAGE_CUBE,
IMAGE_BUFFER =Uniform::IMAGE_BUFFER,
IMAGE_1D_ARRAY =Uniform::IMAGE_1D_ARRAY,
IMAGE_2D_ARRAY =Uniform::IMAGE_2D_ARRAY,
IMAGE_CUBE_MAP_ARRAY =Uniform::IMAGE_CUBE_MAP_ARRAY,
IMAGE_2D_MULTISAMPLE =Uniform::IMAGE_2D_MULTISAMPLE,
IMAGE_2D_MULTISAMPLE_ARRAY =Uniform::IMAGE_2D_MULTISAMPLE_ARRAY,
INT_IMAGE_1D =Uniform::INT_IMAGE_1D,
INT_IMAGE_2D =Uniform::INT_IMAGE_2D,
INT_IMAGE_3D =Uniform::INT_IMAGE_3D,
INT_IMAGE_2D_RECT =Uniform::INT_IMAGE_2D_RECT,
INT_IMAGE_CUBE =Uniform::INT_IMAGE_CUBE,
INT_IMAGE_BUFFER =Uniform::INT_IMAGE_BUFFER,
INT_IMAGE_1D_ARRAY =Uniform::INT_IMAGE_1D_ARRAY,
INT_IMAGE_2D_ARRAY =Uniform::INT_IMAGE_2D_ARRAY,
INT_IMAGE_CUBE_MAP_ARRAY =Uniform::INT_IMAGE_CUBE_MAP_ARRAY,
INT_IMAGE_2D_MULTISAMPLE =Uniform::INT_IMAGE_2D_MULTISAMPLE,
INT_IMAGE_2D_MULTISAMPLE_ARRAY =Uniform::INT_IMAGE_2D_MULTISAMPLE_ARRAY,
UNSIGNED_INT_IMAGE_1D =Uniform::UNSIGNED_INT_IMAGE_1D,
UNSIGNED_INT_IMAGE_2D =Uniform::UNSIGNED_INT_IMAGE_2D,
UNSIGNED_INT_IMAGE_3D =Uniform::UNSIGNED_INT_IMAGE_3D,
UNSIGNED_INT_IMAGE_2D_RECT =Uniform::UNSIGNED_INT_IMAGE_2D_RECT,
UNSIGNED_INT_IMAGE_CUBE =Uniform::UNSIGNED_INT_IMAGE_CUBE,
UNSIGNED_INT_IMAGE_BUFFER =Uniform::UNSIGNED_INT_IMAGE_BUFFER,
UNSIGNED_INT_IMAGE_1D_ARRAY =Uniform::UNSIGNED_INT_IMAGE_1D_ARRAY,
UNSIGNED_INT_IMAGE_2D_ARRAY =Uniform::UNSIGNED_INT_IMAGE_2D_ARRAY,
UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY =Uniform::UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY,
UNSIGNED_INT_IMAGE_2D_MULTISAMPLE =Uniform::UNSIGNED_INT_IMAGE_2D_MULTISAMPLE,
UNSIGNED_INT_IMAGE_2D_MULTISAMPLE_ARRAY =Uniform::UNSIGNED_INT_IMAGE_2D_MULTISAMPLE_ARRAY,
UNDEFINED =Uniform::UNDEFINED};
  Q_ENUMS(Type)
private:
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
Uniform * _model;
QReflect_Uniform(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Uniform( );
//Uniform
// DoubleArray * getDoubleArray();
// FloatArray * getFloatArray();
// GLenum  getInternalArrayType( Type );
// IntArray * getIntArray();
// ParentList  getParents();
// StateSet * getParent( unsigned int );
// UIntArray * getUIntArray();
// bool  get( osg::Matrix2 &);
// bool  get( osg::Matrix2d &);
// bool  get( osg::Matrix2x3 &);
// bool  get( osg::Matrix2x3d &);
// bool  get( osg::Matrix2x4 &);
// bool  get( osg::Matrix2x4d &);
// bool  get( osg::Matrix3 &);
// bool  get( osg::Matrix3d &);
// bool  get( osg::Matrix3x2 &);
// bool  get( osg::Matrix3x2d &);
// bool  get( osg::Matrix3x4 &);
// bool  get( osg::Matrix3x4d &);
// bool  get( osg::Matrix4x2 &);
// bool  get( osg::Matrix4x2d &);
// bool  get( osg::Matrix4x3 &);
// bool  get( osg::Matrix4x3d &);
// bool  getElement( unsigned int  , osg::Matrix2 &);
// bool  getElement( unsigned int  , osg::Matrix2d &);
// bool  getElement( unsigned int  , osg::Matrix2x3 &);
// bool  getElement( unsigned int  , osg::Matrix2x3d &);
// bool  getElement( unsigned int  , osg::Matrix2x4 &);
// bool  getElement( unsigned int  , osg::Matrix2x4d &);
// bool  getElement( unsigned int  , osg::Matrix3 &);
// bool  getElement( unsigned int  , osg::Matrix3d &);
// bool  getElement( unsigned int  , osg::Matrix3x2 &);
// bool  getElement( unsigned int  , osg::Matrix3x2d &);
// bool  getElement( unsigned int  , osg::Matrix3x4 &);
// bool  getElement( unsigned int  , osg::Matrix3x4d &);
// bool  getElement( unsigned int  , osg::Matrix4x2 &);
// bool  getElement( unsigned int  , osg::Matrix4x2d &);
// bool  getElement( unsigned int  , osg::Matrix4x3 &);
// bool  getElement( unsigned int  , osg::Matrix4x3d &);
// bool  operator!=(const  Uniform &);
// bool  operator<(const  Uniform &);
// bool  operator==(const  Uniform &);
// bool  set(const  osg::Matrix2 &);
// bool  set(const  osg::Matrix2d &);
// bool  set(const  osg::Matrix2x3 &);
// bool  set(const  osg::Matrix2x3d &);
// bool  set(const  osg::Matrix2x4 &);
// bool  set(const  osg::Matrix2x4d &);
// bool  set(const  osg::Matrix3 &);
// bool  set(const  osg::Matrix3d &);
// bool  set(const  osg::Matrix3x2 &);
// bool  set(const  osg::Matrix3x2d &);
// bool  set(const  osg::Matrix3x4 &);
// bool  set(const  osg::Matrix3x4d &);
// bool  set(const  osg::Matrix4x2 &);
// bool  set(const  osg::Matrix4x2d &);
// bool  set(const  osg::Matrix4x3 &);
// bool  set(const  osg::Matrix4x3d &);
// bool  setArray( DoubleArray *);
// bool  setArray( FloatArray *);
// bool  setArray( IntArray *);
// bool  setArray( UIntArray *);
// bool  setElement( unsigned int  ,const  osg::Matrix2 &);
// bool  setElement( unsigned int  ,const  osg::Matrix2d &);
// bool  setElement( unsigned int  ,const  osg::Matrix2x3 &);
// bool  setElement( unsigned int  ,const  osg::Matrix2x3d &);
// bool  setElement( unsigned int  ,const  osg::Matrix2x4 &);
// bool  setElement( unsigned int  ,const  osg::Matrix2x4d &);
// bool  setElement( unsigned int  ,const  osg::Matrix3 &);
// bool  setElement( unsigned int  ,const  osg::Matrix3d &);
// bool  setElement( unsigned int  ,const  osg::Matrix3x2 &);
// bool  setElement( unsigned int  ,const  osg::Matrix3x2d &);
// bool  setElement( unsigned int  ,const  osg::Matrix3x4 &);
// bool  setElement( unsigned int  ,const  osg::Matrix3x4d &);
// bool  setElement( unsigned int  ,const  osg::Matrix4x2 &);
// bool  setElement( unsigned int  ,const  osg::Matrix4x2d &);
// bool  setElement( unsigned int  ,const  osg::Matrix4x3 &);
// bool  setElement( unsigned int  ,const  osg::Matrix4x3d &);
// void  apply(const  GLExtensions * , GLint );
//const  DoubleArray * getDoubleArray();
//const  FloatArray * getFloatArray();
//const  IntArray * getIntArray();
//const  ParentList & getParents();
//const  StateSet * getParent( unsigned int );
//const  UIntArray * getUIntArray();
Q_INVOKABLE  bool  get( bool & , bool & , bool & , bool &)const;
Q_INVOKABLE  bool  get( bool & , bool & , bool &)const;
Q_INVOKABLE  bool  get( bool & , bool &)const;
Q_INVOKABLE  bool  get( bool &)const;
Q_INVOKABLE  bool  get( double &)const;
Q_INVOKABLE  bool  get( float &)const;
Q_INVOKABLE  bool  get( int & , int & , int & , int &)const;
Q_INVOKABLE  bool  get( int & , int & , int &)const;
Q_INVOKABLE  bool  get( int & , int &)const;
Q_INVOKABLE  bool  get( int &)const;
Q_INVOKABLE  bool  get( unsigned int & , unsigned int & , unsigned int & , unsigned int &)const;
Q_INVOKABLE  bool  get( unsigned int & , unsigned int & , unsigned int &)const;
Q_INVOKABLE  bool  get( unsigned int & , unsigned int &)const;
Q_INVOKABLE  bool  get( unsigned int &)const;
Q_INVOKABLE  bool  get(osg::QReflect_Matrixd *)const;
Q_INVOKABLE  bool  get(osg::QReflect_Matrixf *)const;
Q_INVOKABLE  bool  get(osg::QReflect_Vec2d *)const;
Q_INVOKABLE  bool  get(osg::QReflect_Vec2f *)const;
Q_INVOKABLE  bool  get(osg::QReflect_Vec3d *)const;
Q_INVOKABLE  bool  get(osg::QReflect_Vec3f *)const;
Q_INVOKABLE  bool  get(osg::QReflect_Vec4d *)const;
Q_INVOKABLE  bool  get(osg::QReflect_Vec4f *)const;
Q_INVOKABLE  bool  getElement( unsigned int  , bool & , bool & , bool & , bool &)const;
Q_INVOKABLE  bool  getElement( unsigned int  , bool & , bool & , bool &)const;
Q_INVOKABLE  bool  getElement( unsigned int  , bool & , bool &)const;
Q_INVOKABLE  bool  getElement( unsigned int  , bool &)const;
Q_INVOKABLE  bool  getElement( unsigned int  , double &)const;
Q_INVOKABLE  bool  getElement( unsigned int  , float &)const;
Q_INVOKABLE  bool  getElement( unsigned int  , int & , int & , int & , int &)const;
Q_INVOKABLE  bool  getElement( unsigned int  , int & , int & , int &)const;
Q_INVOKABLE  bool  getElement( unsigned int  , int & , int &)const;
Q_INVOKABLE  bool  getElement( unsigned int  , int &)const;
Q_INVOKABLE  bool  getElement( unsigned int  , unsigned int & , unsigned int & , unsigned int & , unsigned int &)const;
Q_INVOKABLE  bool  getElement( unsigned int  , unsigned int & , unsigned int & , unsigned int &)const;
Q_INVOKABLE  bool  getElement( unsigned int  , unsigned int & , unsigned int &)const;
Q_INVOKABLE  bool  getElement( unsigned int  , unsigned int &)const;
Q_INVOKABLE  bool  getElement( unsigned int  ,osg::QReflect_Matrixd *)const;
Q_INVOKABLE  bool  getElement( unsigned int  ,osg::QReflect_Matrixf *)const;
Q_INVOKABLE  bool  getElement( unsigned int  ,osg::QReflect_Vec2d *)const;
Q_INVOKABLE  bool  getElement( unsigned int  ,osg::QReflect_Vec2f *)const;
Q_INVOKABLE  bool  getElement( unsigned int  ,osg::QReflect_Vec3d *)const;
Q_INVOKABLE  bool  getElement( unsigned int  ,osg::QReflect_Vec3f *)const;
Q_INVOKABLE  bool  getElement( unsigned int  ,osg::QReflect_Vec4d *)const;
Q_INVOKABLE  bool  getElement( unsigned int  ,osg::QReflect_Vec4f *)const;
Q_INVOKABLE  bool  set( bool  , bool  , bool  , bool );
Q_INVOKABLE  bool  set( bool  , bool  , bool );
Q_INVOKABLE  bool  set( bool  , bool );
Q_INVOKABLE  bool  set( bool );
Q_INVOKABLE  bool  set( double );
Q_INVOKABLE  bool  set( float );
Q_INVOKABLE  bool  set( int  , int  , int  , int );
Q_INVOKABLE  bool  set( int  , int  , int );
Q_INVOKABLE  bool  set( int  , int );
Q_INVOKABLE  bool  set( int );
Q_INVOKABLE  bool  set( unsigned int  , unsigned int  , unsigned int  , unsigned int );
Q_INVOKABLE  bool  set( unsigned int  , unsigned int  , unsigned int );
Q_INVOKABLE  bool  set( unsigned int  , unsigned int );
Q_INVOKABLE  bool  set( unsigned int );
Q_INVOKABLE  bool  set(osg::QReflect_Matrixd *);
Q_INVOKABLE  bool  set(osg::QReflect_Matrixf *);
Q_INVOKABLE  bool  set(osg::QReflect_Vec2d *);
Q_INVOKABLE  bool  set(osg::QReflect_Vec2f *);
Q_INVOKABLE  bool  set(osg::QReflect_Vec3d *);
Q_INVOKABLE  bool  set(osg::QReflect_Vec3f *);
Q_INVOKABLE  bool  set(osg::QReflect_Vec4d *);
Q_INVOKABLE  bool  set(osg::QReflect_Vec4f *);
Q_INVOKABLE  bool  setElement( unsigned int  , bool  , bool  , bool  , bool );
Q_INVOKABLE  bool  setElement( unsigned int  , bool  , bool  , bool );
Q_INVOKABLE  bool  setElement( unsigned int  , bool  , bool );
Q_INVOKABLE  bool  setElement( unsigned int  , bool );
Q_INVOKABLE  bool  setElement( unsigned int  , double );
Q_INVOKABLE  bool  setElement( unsigned int  , float );
Q_INVOKABLE  bool  setElement( unsigned int  , int  , int  , int  , int );
Q_INVOKABLE  bool  setElement( unsigned int  , int  , int  , int );
Q_INVOKABLE  bool  setElement( unsigned int  , int  , int );
Q_INVOKABLE  bool  setElement( unsigned int  , int );
Q_INVOKABLE  bool  setElement( unsigned int  , unsigned int  , unsigned int  , unsigned int  , unsigned int );
Q_INVOKABLE  bool  setElement( unsigned int  , unsigned int  , unsigned int  , unsigned int );
Q_INVOKABLE  bool  setElement( unsigned int  , unsigned int  , unsigned int );
Q_INVOKABLE  bool  setElement( unsigned int  , unsigned int );
Q_INVOKABLE  bool  setElement( unsigned int  ,osg::QReflect_Matrixd *);
Q_INVOKABLE  bool  setElement( unsigned int  ,osg::QReflect_Matrixf *);
Q_INVOKABLE  bool  setElement( unsigned int  ,osg::QReflect_Vec2d *);
Q_INVOKABLE  bool  setElement( unsigned int  ,osg::QReflect_Vec2f *);
Q_INVOKABLE  bool  setElement( unsigned int  ,osg::QReflect_Vec3d *);
Q_INVOKABLE  bool  setElement( unsigned int  ,osg::QReflect_Vec3f *);
Q_INVOKABLE  bool  setElement( unsigned int  ,osg::QReflect_Vec4d *);
Q_INVOKABLE  bool  setElement( unsigned int  ,osg::QReflect_Vec4f *);
Q_INVOKABLE  bool  setType(osg::QReflect_Uniform::Type );
Q_INVOKABLE  int  compare(osg::QReflect_Uniform *)const;
Q_INVOKABLE  int  compareData(osg::QReflect_Uniform *)const;
Q_INVOKABLE  int  getTypeNumComponents(osg::QReflect_Uniform::Type );
Q_INVOKABLE  osg::QReflect_UniformCallback * getEventCallback()const;
Q_INVOKABLE  osg::QReflect_UniformCallback * getUpdateCallback()const;
Q_INVOKABLE  unsigned int  getInternalArrayNumElements()const;
Q_INVOKABLE  unsigned int  getNameID()const;
Q_INVOKABLE  unsigned int  getNameID(const  QString &);
Q_INVOKABLE  unsigned int  getNumParents()const;
Q_INVOKABLE const  char*  getTypename(osg::QReflect_Uniform::Type );
Q_INVOKABLE const unsigned int  getModifiedCount()const;
Q_INVOKABLE const unsigned int  getNumElements()const;
Q_INVOKABLE osg::QReflect_Uniform*  asUniform();
Q_INVOKABLE osg::QReflect_Uniform*  asUniform()const;
Q_INVOKABLE osg::QReflect_Uniform::Type  getGlApiType(osg::QReflect_Uniform::Type );
Q_INVOKABLE osg::QReflect_Uniform::Type  getType()const;
Q_INVOKABLE osg::QReflect_Uniform::Type  getTypeId(const  QString &);
Q_INVOKABLE void  copyData(osg::QReflect_Uniform *);
Q_INVOKABLE void  dirty();
Q_INVOKABLE void  setName(const  QString &);
Q_INVOKABLE void pmoc_reverse_setEventCallback( osg::QReflect_UniformCallback *par=0);
Q_INVOKABLE void pmoc_reverse_setUpdateCallback( osg::QReflect_UniformCallback *par=0);
Q_INVOKABLE void setEventCallback( osg::QReflect_UniformCallback *par);
Q_INVOKABLE void setModifiedCount(const unsigned int &);
Q_INVOKABLE void setNumElements(const unsigned int &);
Q_INVOKABLE void setUpdateCallback( osg::QReflect_UniformCallback *par);
Q_PROPERTY(unsigned int ModifiedCount  READ getModifiedCount WRITE setModifiedCount NOTIFY ModifiedCountChanged)
Q_PROPERTY(unsigned int NumElements  READ getNumElements WRITE setNumElements NOTIFY NumElementsChanged)
signals: void EventCallbackChanged(const osg::QReflect_UniformCallback*);
public:
signals: void ModifiedCountChanged(const unsigned int&);
public:
signals: void NumElementsChanged(const unsigned int&);
public:
signals: void UpdateCallbackChanged(const osg::QReflect_UniformCallback*);
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Uniform: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::Uniform> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_Uniform();
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

#endif //osg_Uniform_pmocHPP

