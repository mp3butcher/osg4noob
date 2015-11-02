#ifndef osg_Matrixf_pmocHPP
#define  osg_Matrixf_pmocHPP 1
#include <osg/Matrixf_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Vec3f;
			} ;
namespace osg{ 
class QReflect_Vec3d;
			} ;
namespace osg{ 
class QReflect_Matrixf;
			} ;
namespace osg{ 
class QReflect_Quat;
			} ;
#include <osg/Matrixf>

#include <MetaQQuickClass.h>
namespace osg{
class QReflect_Matrixf: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 0;}

/// inheritance simulated via composition
Matrixf * _model;
QReflect_Matrixf(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Matrixf( );
//Matrixf
// Matrixf  frustum( double  , double  , double  , double  , double  , double );
// Matrixf  identity();
// Matrixf  inverse(const  Matrixf &);
// Matrixf  lookAt(const  Vec3d & ,const  Vec3d & ,const  Vec3d &);
// Matrixf  lookAt(const  Vec3f & ,const  Vec3f & ,const  Vec3f &);
// Matrixf  operator*( value_type );
// Matrixf  operator*(const  Matrixf &);
// Matrixf & operator*=( value_type );
// Matrixf  operator+(const  Matrixf &);
// Matrixf & operator+=(const  Matrixf &);
// Matrixf  operator/( value_type );
// Matrixf & operator/=( value_type );
// Matrixf & operator=(const  Matrixd &);
// Matrixf & operator=(const  Matrixf &);
// Matrixf  ortho( double  , double  , double  , double  , double  , double );
// Matrixf  ortho2D( double  , double  , double  , double );
// Matrixf  orthoNormal(const  Matrixf &);
// Matrixf  perspective( double  , double  , double  , double );
// Matrixf  rotate(const  Quat &);
// Matrixf  rotate( value_type  ,const  Vec3d &);
// Matrixf  rotate( value_type  ,const  Vec3f &);
// Matrixf  rotate(const  Vec3d & ,const  Vec3d &);
// Matrixf  rotate(const  Vec3f & ,const  Vec3f &);
// Matrixf  rotate( value_type  , value_type  , value_type  , value_type );
// Matrixf  rotate( value_type  ,const  Vec3d & , value_type  ,const  Vec3d & , value_type  ,const  Vec3d &);
// Matrixf  rotate( value_type  ,const  Vec3f & , value_type  ,const  Vec3f & , value_type  ,const  Vec3f &);
// Matrixf  scale(const  Vec3d &);
// Matrixf  scale(const  Vec3f &);
// Matrixf  scale( value_type  , value_type  , value_type );
// Matrixf  translate(const  Vec3d &);
// Matrixf  translate(const  Vec3f &);
// Matrixf  translate( value_type  , value_type  , value_type );
// Quat  getRotate();
// Vec3d  getScale();
// Vec3d  getTrans();
// Vec3d  operator*(const  Vec3d &);
// Vec3d  postMult(const  Vec3d &);
// Vec3d  preMult(const  Vec3d &);
// Vec3d  transform3x3(const  Matrixf & ,const  Vec3d &);
// Vec3d  transform3x3(const  Vec3d & ,const  Matrixf &);
// Vec3f  operator*(const  Vec3f &);
// Vec3f  postMult(const  Vec3f &);
// Vec3f  preMult(const  Vec3f &);
// Vec3f  transform3x3(const  Matrixf & ,const  Vec3f &);
// Vec3f  transform3x3(const  Vec3f & ,const  Matrixf &);
// Vec4d  operator*(const  Vec4d &);
// Vec4d  postMult(const  Vec4d &);
// Vec4d  preMult(const  Vec4d &);
// Vec4f  operator*(const  Vec4f &);
// Vec4f  postMult(const  Vec4f &);
// Vec4f  preMult(const  Vec4f &);
// bool  operator!=(const  Matrixf &);
// bool  operator<(const  Matrixf &);
// bool  operator==(const  Matrixf &);
// value_type  operator()( int  , int );
// value_type & operator()( int  , int );
// void  operator*=(const  Matrixf &);
// void  set(const  Matrixd &);
Q_INVOKABLE  bool  getFrustum( double & , double & , double & , double & , double & , double &)const;
Q_INVOKABLE  bool  getFrustum( float & , float & , float & , float & , float & , float &)const;
Q_INVOKABLE  bool  getOrtho( double & , double & , double & , double & , double & , double &)const;
Q_INVOKABLE  bool  getOrtho( float & , float & , float & , float & , float & , float &)const;
Q_INVOKABLE  bool  getPerspective( double & , double & , double & , double &)const;
Q_INVOKABLE  bool  getPerspective( float & , float & , float & , float &)const;
Q_INVOKABLE  bool  invert(osg::QReflect_Matrixf *);
Q_INVOKABLE  bool  invert_4x3(osg::QReflect_Matrixf *);
Q_INVOKABLE  bool  invert_4x4(osg::QReflect_Matrixf *);
Q_INVOKABLE  bool  isIdentity()const;
Q_INVOKABLE  bool  isNaN()const;
Q_INVOKABLE  bool  valid()const;
Q_INVOKABLE  float*  ptr();
Q_INVOKABLE  int  compare(osg::QReflect_Matrixf *)const;
Q_INVOKABLE const  float*  ptr()const;
Q_INVOKABLE void  decompose(osg::QReflect_Vec3d * ,osg::QReflect_Quat * ,osg::QReflect_Vec3d * ,osg::QReflect_Quat *)const;
Q_INVOKABLE void  decompose(osg::QReflect_Vec3f * ,osg::QReflect_Quat * ,osg::QReflect_Vec3f * ,osg::QReflect_Quat *)const;
Q_INVOKABLE void  get(osg::QReflect_Quat *)const;
Q_INVOKABLE void  getLookAt(osg::QReflect_Vec3d * ,osg::QReflect_Vec3d * ,osg::QReflect_Vec3d * , float )const;
Q_INVOKABLE void  getLookAt(osg::QReflect_Vec3f * ,osg::QReflect_Vec3f * ,osg::QReflect_Vec3f * , float )const;
Q_INVOKABLE void  makeFrustum( double  , double  , double  , double  , double  , double );
Q_INVOKABLE void  makeIdentity();
Q_INVOKABLE void  makeLookAt(osg::QReflect_Vec3d * ,osg::QReflect_Vec3d * ,osg::QReflect_Vec3d *);
Q_INVOKABLE void  makeOrtho( double  , double  , double  , double  , double  , double );
Q_INVOKABLE void  makeOrtho2D( double  , double  , double  , double );
Q_INVOKABLE void  makePerspective( double  , double  , double  , double );
Q_INVOKABLE void  makeRotate( float  , float  , float  , float );
Q_INVOKABLE void  makeRotate( float  ,osg::QReflect_Vec3d * , float  ,osg::QReflect_Vec3d * , float  ,osg::QReflect_Vec3d *);
Q_INVOKABLE void  makeRotate( float  ,osg::QReflect_Vec3d *);
Q_INVOKABLE void  makeRotate( float  ,osg::QReflect_Vec3f * , float  ,osg::QReflect_Vec3f * , float  ,osg::QReflect_Vec3f *);
Q_INVOKABLE void  makeRotate( float  ,osg::QReflect_Vec3f *);
Q_INVOKABLE void  makeRotate(osg::QReflect_Quat *);
Q_INVOKABLE void  makeRotate(osg::QReflect_Vec3d * ,osg::QReflect_Vec3d *);
Q_INVOKABLE void  makeRotate(osg::QReflect_Vec3f * ,osg::QReflect_Vec3f *);
Q_INVOKABLE void  makeScale( float  , float  , float );
Q_INVOKABLE void  makeScale(osg::QReflect_Vec3d *);
Q_INVOKABLE void  makeScale(osg::QReflect_Vec3f *);
Q_INVOKABLE void  makeTranslate( float  , float  , float );
Q_INVOKABLE void  makeTranslate(osg::QReflect_Vec3d *);
Q_INVOKABLE void  makeTranslate(osg::QReflect_Vec3f *);
Q_INVOKABLE void  mult(osg::QReflect_Matrixf * ,osg::QReflect_Matrixf *);
Q_INVOKABLE void  orthoNormalize(osg::QReflect_Matrixf *);
Q_INVOKABLE void  postMult(osg::QReflect_Matrixf *);
Q_INVOKABLE void  postMultRotate(osg::QReflect_Quat *);
Q_INVOKABLE void  postMultScale(osg::QReflect_Vec3d *);
Q_INVOKABLE void  postMultScale(osg::QReflect_Vec3f *);
Q_INVOKABLE void  postMultTranslate(osg::QReflect_Vec3d *);
Q_INVOKABLE void  postMultTranslate(osg::QReflect_Vec3f *);
Q_INVOKABLE void  preMult(osg::QReflect_Matrixf *);
Q_INVOKABLE void  preMultRotate(osg::QReflect_Quat *);
Q_INVOKABLE void  preMultScale(osg::QReflect_Vec3d *);
Q_INVOKABLE void  preMultScale(osg::QReflect_Vec3f *);
Q_INVOKABLE void  preMultTranslate(osg::QReflect_Vec3d *);
Q_INVOKABLE void  preMultTranslate(osg::QReflect_Vec3f *);
Q_INVOKABLE void  set( double *);
Q_INVOKABLE void  set( float  , float  , float  , float  , float  , float  , float  , float  , float  , float  , float  , float  , float  , float  , float  , float );
Q_INVOKABLE void  set( float *);
Q_INVOKABLE void  set(osg::QReflect_Matrixf *);
Q_INVOKABLE void  set(osg::QReflect_Quat *);
Q_INVOKABLE void  setRotate(osg::QReflect_Quat *);
Q_INVOKABLE void  setTrans( float  , float  , float );
Q_INVOKABLE void  setTrans(osg::QReflect_Vec3d *);
Q_INVOKABLE void  setTrans(osg::QReflect_Vec3f *);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Matrixf: public pmoc::MetaQQuickClass{
protected:
std::set<osg::Matrixf* 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_Matrixf();
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
#include <osg/Matrixf_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Object;
			} ;
namespace osg{ 
class QReflect_CopyOp;
			} ;
#include <osg/Matrixf>
#include <osg/Matrixf>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_RefMatrixf: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 2;}

/// inheritance simulated via composition
RefMatrixf * _model;
QReflect_RefMatrixf(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_RefMatrixf( );
//RefMatrixf
Q_INVOKABLE  bool  isSameKindAs(osg::QReflect_Object *)const;
Q_INVOKABLE const  char*  className()const;
Q_INVOKABLE const  char*  libraryName()const;
Q_INVOKABLE osg::QReflect_Object*  clone(osg::QReflect_CopyOp *)const;
Q_INVOKABLE osg::QReflect_Object*  cloneType()const;
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_RefMatrixf: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::RefMatrixf> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_RefMatrixf();
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

#endif //osg_Matrixf_pmocHPP

