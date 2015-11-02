#ifndef osg_Matrixd_pmocHPP
#define  osg_Matrixd_pmocHPP 1
#include <osg/Matrixd_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Quat;
			} ;
namespace osg{ 
class QReflect_Vec3f;
			} ;
namespace osg{ 
class QReflect_Vec3d;
			} ;
namespace osg{ 
class QReflect_Matrixd;
			} ;
#include <osg/Matrixd>

#include <MetaQQuickClass.h>
namespace osg{
class QReflect_Matrixd: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 0;}

/// inheritance simulated via composition
Matrixd * _model;
QReflect_Matrixd(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Matrixd( );
//Matrixd
// Matrixd  frustum( double  , double  , double  , double  , double  , double );
// Matrixd  identity();
// Matrixd  inverse(const  Matrixd &);
// Matrixd  lookAt(const  Vec3d & ,const  Vec3d & ,const  Vec3d &);
// Matrixd  lookAt(const  Vec3f & ,const  Vec3f & ,const  Vec3f &);
// Matrixd  operator*(const  Matrixd &);
// Matrixd & operator=(const  Matrixd &);
// Matrixd & operator=(const  Matrixf &);
// Matrixd  ortho( double  , double  , double  , double  , double  , double );
// Matrixd  ortho2D( double  , double  , double  , double );
// Matrixd  orthoNormal(const  Matrixd &);
// Matrixd  perspective( double  , double  , double  , double );
// Matrixd  rotate(const  Quat &);
// Matrixd  rotate( value_type  ,const  Vec3d &);
// Matrixd  rotate( value_type  ,const  Vec3f &);
// Matrixd  rotate(const  Vec3d & ,const  Vec3d &);
// Matrixd  rotate(const  Vec3f & ,const  Vec3f &);
// Matrixd  rotate( value_type  , value_type  , value_type  , value_type );
// Matrixd  rotate( value_type  ,const  Vec3d & , value_type  ,const  Vec3d & , value_type  ,const  Vec3d &);
// Matrixd  rotate( value_type  ,const  Vec3f & , value_type  ,const  Vec3f & , value_type  ,const  Vec3f &);
// Matrixd  scale(const  Vec3d &);
// Matrixd  scale(const  Vec3f &);
// Matrixd  scale( value_type  , value_type  , value_type );
// Matrixd  translate(const  Vec3d &);
// Matrixd  translate(const  Vec3f &);
// Matrixd  translate( value_type  , value_type  , value_type );
// Quat  getRotate();
// Vec3d  getScale();
// Vec3d  getTrans();
// Vec3d  operator*(const  Vec3d &);
// Vec3d  postMult(const  Vec3d &);
// Vec3d  preMult(const  Vec3d &);
// Vec3d  transform3x3(const  Matrixd & ,const  Vec3d &);
// Vec3d  transform3x3(const  Vec3d & ,const  Matrixd &);
// Vec3f  operator*(const  Vec3f &);
// Vec3f  postMult(const  Vec3f &);
// Vec3f  preMult(const  Vec3f &);
// Vec3f  transform3x3(const  Matrixd & ,const  Vec3f &);
// Vec3f  transform3x3(const  Vec3f & ,const  Matrixd &);
// Vec4d  operator*(const  Vec4d &);
// Vec4d  postMult(const  Vec4d &);
// Vec4d  preMult(const  Vec4d &);
// Vec4f  operator*(const  Vec4f &);
// Vec4f  postMult(const  Vec4f &);
// Vec4f  preMult(const  Vec4f &);
// bool  operator!=(const  Matrixd &);
// bool  operator<(const  Matrixd &);
// bool  operator==(const  Matrixd &);
// value_type  operator()( int  , int );
// value_type & operator()( int  , int );
// void  operator*=(const  Matrixd &);
// void  set(const  Matrixf &);
Q_INVOKABLE  bool  getFrustum( double & , double & , double & , double & , double & , double &)const;
Q_INVOKABLE  bool  getFrustum( float & , float & , float & , float & , float & , float &)const;
Q_INVOKABLE  bool  getOrtho( double & , double & , double & , double & , double & , double &)const;
Q_INVOKABLE  bool  getOrtho( float & , float & , float & , float & , float & , float &)const;
Q_INVOKABLE  bool  getPerspective( double & , double & , double & , double &)const;
Q_INVOKABLE  bool  getPerspective( float & , float & , float & , float &)const;
Q_INVOKABLE  bool  invert(osg::QReflect_Matrixd *);
Q_INVOKABLE  bool  invert_4x3(osg::QReflect_Matrixd *);
Q_INVOKABLE  bool  invert_4x4(osg::QReflect_Matrixd *);
Q_INVOKABLE  bool  isIdentity()const;
Q_INVOKABLE  bool  isNaN()const;
Q_INVOKABLE  bool  valid()const;
Q_INVOKABLE  double*  ptr();
Q_INVOKABLE  int  compare(osg::QReflect_Matrixd *)const;
Q_INVOKABLE const  double*  ptr()const;
Q_INVOKABLE void  decompose(osg::QReflect_Vec3d * ,osg::QReflect_Quat * ,osg::QReflect_Vec3d * ,osg::QReflect_Quat *)const;
Q_INVOKABLE void  decompose(osg::QReflect_Vec3f * ,osg::QReflect_Quat * ,osg::QReflect_Vec3f * ,osg::QReflect_Quat *)const;
Q_INVOKABLE void  get(osg::QReflect_Quat *)const;
Q_INVOKABLE void  getLookAt(osg::QReflect_Vec3d * ,osg::QReflect_Vec3d * ,osg::QReflect_Vec3d * , double )const;
Q_INVOKABLE void  getLookAt(osg::QReflect_Vec3f * ,osg::QReflect_Vec3f * ,osg::QReflect_Vec3f * , double )const;
Q_INVOKABLE void  makeFrustum( double  , double  , double  , double  , double  , double );
Q_INVOKABLE void  makeIdentity();
Q_INVOKABLE void  makeLookAt(osg::QReflect_Vec3d * ,osg::QReflect_Vec3d * ,osg::QReflect_Vec3d *);
Q_INVOKABLE void  makeOrtho( double  , double  , double  , double  , double  , double );
Q_INVOKABLE void  makeOrtho2D( double  , double  , double  , double );
Q_INVOKABLE void  makePerspective( double  , double  , double  , double );
Q_INVOKABLE void  makeRotate( double  , double  , double  , double );
Q_INVOKABLE void  makeRotate( double  ,osg::QReflect_Vec3d * , double  ,osg::QReflect_Vec3d * , double  ,osg::QReflect_Vec3d *);
Q_INVOKABLE void  makeRotate( double  ,osg::QReflect_Vec3d *);
Q_INVOKABLE void  makeRotate( double  ,osg::QReflect_Vec3f * , double  ,osg::QReflect_Vec3f * , double  ,osg::QReflect_Vec3f *);
Q_INVOKABLE void  makeRotate( double  ,osg::QReflect_Vec3f *);
Q_INVOKABLE void  makeRotate(osg::QReflect_Quat *);
Q_INVOKABLE void  makeRotate(osg::QReflect_Vec3d * ,osg::QReflect_Vec3d *);
Q_INVOKABLE void  makeRotate(osg::QReflect_Vec3f * ,osg::QReflect_Vec3f *);
Q_INVOKABLE void  makeScale( double  , double  , double );
Q_INVOKABLE void  makeScale(osg::QReflect_Vec3d *);
Q_INVOKABLE void  makeScale(osg::QReflect_Vec3f *);
Q_INVOKABLE void  makeTranslate( double  , double  , double );
Q_INVOKABLE void  makeTranslate(osg::QReflect_Vec3d *);
Q_INVOKABLE void  makeTranslate(osg::QReflect_Vec3f *);
Q_INVOKABLE void  mult(osg::QReflect_Matrixd * ,osg::QReflect_Matrixd *);
Q_INVOKABLE void  orthoNormalize(osg::QReflect_Matrixd *);
Q_INVOKABLE void  postMult(osg::QReflect_Matrixd *);
Q_INVOKABLE void  postMultRotate(osg::QReflect_Quat *);
Q_INVOKABLE void  postMultScale(osg::QReflect_Vec3d *);
Q_INVOKABLE void  postMultScale(osg::QReflect_Vec3f *);
Q_INVOKABLE void  postMultTranslate(osg::QReflect_Vec3d *);
Q_INVOKABLE void  postMultTranslate(osg::QReflect_Vec3f *);
Q_INVOKABLE void  preMult(osg::QReflect_Matrixd *);
Q_INVOKABLE void  preMultRotate(osg::QReflect_Quat *);
Q_INVOKABLE void  preMultScale(osg::QReflect_Vec3d *);
Q_INVOKABLE void  preMultScale(osg::QReflect_Vec3f *);
Q_INVOKABLE void  preMultTranslate(osg::QReflect_Vec3d *);
Q_INVOKABLE void  preMultTranslate(osg::QReflect_Vec3f *);
Q_INVOKABLE void  set( double  , double  , double  , double  , double  , double  , double  , double  , double  , double  , double  , double  , double  , double  , double  , double );
Q_INVOKABLE void  set( double *);
Q_INVOKABLE void  set( float *);
Q_INVOKABLE void  set(osg::QReflect_Matrixd *);
Q_INVOKABLE void  set(osg::QReflect_Quat *);
Q_INVOKABLE void  setRotate(osg::QReflect_Quat *);
Q_INVOKABLE void  setTrans( double  , double  , double );
Q_INVOKABLE void  setTrans(osg::QReflect_Vec3d *);
Q_INVOKABLE void  setTrans(osg::QReflect_Vec3f *);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Matrixd: public pmoc::MetaQQuickClass{
protected:
std::set<osg::Matrixd* 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_Matrixd();
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
#include <osg/Matrixd_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Object;
			} ;
namespace osg{ 
class QReflect_CopyOp;
			} ;
#include <osg/Matrixd>
#include <osg/Matrixd>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_RefMatrixd: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 2;}

/// inheritance simulated via composition
RefMatrixd * _model;
QReflect_RefMatrixd(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_RefMatrixd( );
//RefMatrixd
Q_INVOKABLE  bool  isSameKindAs(osg::QReflect_Object *)const;
Q_INVOKABLE const  char*  className()const;
Q_INVOKABLE const  char*  libraryName()const;
Q_INVOKABLE osg::QReflect_Object*  clone(osg::QReflect_CopyOp *)const;
Q_INVOKABLE osg::QReflect_Object*  cloneType()const;
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_RefMatrixd: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::RefMatrixd> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_RefMatrixd();
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

#endif //osg_Matrixd_pmocHPP

