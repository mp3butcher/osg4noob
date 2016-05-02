#ifndef osg_Matrixd_pmocHPP
#define  osg_Matrixd_pmocHPP 1


#include <osg/Matrixd_pmoc.hpp>
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
class QReflect_Matrixd;
			} ;
namespace osg{ 
class QReflect_Quat;
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
QReflect_Matrixd(const pmoc::Instance *i=0,QObject* parent=0);
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
Q_INVOKABLE  bool  getFrustum( double &left , double &right , double &bottom , double &top , double &zNear , double &zFar)const;
Q_INVOKABLE  bool  getFrustum( float &left , float &right , float &bottom , float &top , float &zNear , float &zFar)const;
Q_INVOKABLE  bool  getOrtho( double &left , double &right , double &bottom , double &top , double &zNear , double &zFar)const;
Q_INVOKABLE  bool  getOrtho( float &left , float &right , float &bottom , float &top , float &zNear , float &zFar)const;
Q_INVOKABLE  bool  getPerspective( double &fovy , double &aspectRatio , double &zNear , double &zFar)const;
Q_INVOKABLE  bool  getPerspective( float &fovy , float &aspectRatio , float &zNear , float &zFar)const;
Q_INVOKABLE  bool  invert(osg::QReflect_Matrixd *rhs);
Q_INVOKABLE  bool  invert_4x3(osg::QReflect_Matrixd *rhs);
Q_INVOKABLE  bool  invert_4x4(osg::QReflect_Matrixd *rhs);
Q_INVOKABLE  bool  isIdentity()const;
Q_INVOKABLE  bool  isNaN()const;
Q_INVOKABLE  bool  operator!=(osg::QReflect_Matrixd &m)const;
Q_INVOKABLE  bool  operator<(osg::QReflect_Matrixd &m)const;
Q_INVOKABLE  bool  operator==(osg::QReflect_Matrixd &m)const;
Q_INVOKABLE  bool  valid()const;
Q_INVOKABLE  double  operator()( int row , int col)const;
Q_INVOKABLE  double&  operator()( int row , int col);
Q_INVOKABLE  double*  ptr();
Q_INVOKABLE  int  compare(osg::QReflect_Matrixd *m)const;
Q_INVOKABLE const  double*  ptr()const;
Q_INVOKABLE void  decompose(osg::QReflect_Vec3d *translation ,osg::QReflect_Quat *rotation ,osg::QReflect_Vec3d *scale ,osg::QReflect_Quat *so)const;
Q_INVOKABLE void  decompose(osg::QReflect_Vec3f *translation ,osg::QReflect_Quat *rotation ,osg::QReflect_Vec3f *scale ,osg::QReflect_Quat *so)const;
Q_INVOKABLE void  get(osg::QReflect_Quat *q)const;
Q_INVOKABLE void  getLookAt(osg::QReflect_Vec3d *eye ,osg::QReflect_Vec3d *center ,osg::QReflect_Vec3d *up , double lookDistance)const;
Q_INVOKABLE void  getLookAt(osg::QReflect_Vec3f *eye ,osg::QReflect_Vec3f *center ,osg::QReflect_Vec3f *up , double lookDistance)const;
Q_INVOKABLE void  makeFrustum( double left , double right , double bottom , double top , double zNear , double zFar);
Q_INVOKABLE void  makeIdentity();
Q_INVOKABLE void  makeLookAt(osg::QReflect_Vec3d *eye ,osg::QReflect_Vec3d *center ,osg::QReflect_Vec3d *up);
Q_INVOKABLE void  makeOrtho( double left , double right , double bottom , double top , double zNear , double zFar);
Q_INVOKABLE void  makeOrtho2D( double left , double right , double bottom , double top);
Q_INVOKABLE void  makePerspective( double fovy , double aspectRatio , double zNear , double zFar);
Q_INVOKABLE void  makeRotate( double angle , double x , double y , double z);
Q_INVOKABLE void  makeRotate( double angle ,osg::QReflect_Vec3d *axis);
Q_INVOKABLE void  makeRotate( double angle ,osg::QReflect_Vec3f *axis);
Q_INVOKABLE void  makeRotate( double angle1 ,osg::QReflect_Vec3d *axis1 , double angle2 ,osg::QReflect_Vec3d *axis2 , double angle3 ,osg::QReflect_Vec3d *axis3);
Q_INVOKABLE void  makeRotate( double angle1 ,osg::QReflect_Vec3f *axis1 , double angle2 ,osg::QReflect_Vec3f *axis2 , double angle3 ,osg::QReflect_Vec3f *axis3);
Q_INVOKABLE void  makeRotate(osg::QReflect_Quat *);
Q_INVOKABLE void  makeRotate(osg::QReflect_Vec3d *from ,osg::QReflect_Vec3d *to);
Q_INVOKABLE void  makeRotate(osg::QReflect_Vec3f *from ,osg::QReflect_Vec3f *to);
Q_INVOKABLE void  makeScale( double  , double  , double );
Q_INVOKABLE void  makeScale(osg::QReflect_Vec3d *);
Q_INVOKABLE void  makeScale(osg::QReflect_Vec3f *);
Q_INVOKABLE void  makeTranslate( double  , double  , double );
Q_INVOKABLE void  makeTranslate(osg::QReflect_Vec3d *);
Q_INVOKABLE void  makeTranslate(osg::QReflect_Vec3f *);
Q_INVOKABLE void  mult(osg::QReflect_Matrixd * ,osg::QReflect_Matrixd *);
Q_INVOKABLE void  operator*=(osg::QReflect_Matrixd &other);
Q_INVOKABLE void  orthoNormalize(osg::QReflect_Matrixd *rhs);
Q_INVOKABLE void  postMult(osg::QReflect_Matrixd *);
Q_INVOKABLE void  postMultRotate(osg::QReflect_Quat *q);
Q_INVOKABLE void  postMultScale(osg::QReflect_Vec3d *v);
Q_INVOKABLE void  postMultScale(osg::QReflect_Vec3f *v);
Q_INVOKABLE void  postMultTranslate(osg::QReflect_Vec3d *v);
Q_INVOKABLE void  postMultTranslate(osg::QReflect_Vec3f *v);
Q_INVOKABLE void  preMult(osg::QReflect_Matrixd *);
Q_INVOKABLE void  preMultRotate(osg::QReflect_Quat *q);
Q_INVOKABLE void  preMultScale(osg::QReflect_Vec3d *v);
Q_INVOKABLE void  preMultScale(osg::QReflect_Vec3f *v);
Q_INVOKABLE void  preMultTranslate(osg::QReflect_Vec3d *v);
Q_INVOKABLE void  preMultTranslate(osg::QReflect_Vec3f *v);
Q_INVOKABLE void  set( double *ptr);
Q_INVOKABLE void  set( double a00 , double a01 , double a02 , double a03 , double a10 , double a11 , double a12 , double a13 , double a20 , double a21 , double a22 , double a23 , double a30 , double a31 , double a32 , double a33);
Q_INVOKABLE void  set( float *ptr);
Q_INVOKABLE void  set(osg::QReflect_Matrixd *rhs);
Q_INVOKABLE void  set(osg::QReflect_Matrixf *rhs);
Q_INVOKABLE void  set(osg::QReflect_Quat *q);
Q_INVOKABLE void  setRotate(osg::QReflect_Quat *q);
Q_INVOKABLE void  setTrans( double tx , double ty , double tz);
Q_INVOKABLE void  setTrans(osg::QReflect_Vec3d *v);
Q_INVOKABLE void  setTrans(osg::QReflect_Vec3f *v);
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
QReflect_RefMatrixd(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_RefMatrixd( );
//RefMatrixd
Q_INVOKABLE  bool  isSameKindAs(osg::QReflect_Object *obj)const;
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


#endif //osg_Matrixd_pmocHPP

