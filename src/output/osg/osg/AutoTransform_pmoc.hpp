#ifndef osg_AutoTransform_pmocHPP
#define  osg_AutoTransform_pmocHPP 1

#include <osg/AutoTransform_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Object;
			} ;
namespace osg{ 
class QReflect_CopyOp;
			} ;
namespace osg{ 
class QReflect_NodeVisitor;
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
namespace osg{ 
class QReflect_Quat;
			} ;
namespace osg{ 
class QReflect_AutoTransform;
			} ;
#include <osg/AutoTransform>
#include <osg/AutoTransform>

#include <osg/ref_ptr>
#include<osg/AutoTransform_pmoc.hpp>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_AutoTransform: public pmoc::QQModel
{
Q_OBJECT
public:
 enum AutoRotateMode{
NO_ROTATION =AutoTransform::NO_ROTATION,
ROTATE_TO_SCREEN =AutoTransform::ROTATE_TO_SCREEN,
ROTATE_TO_CAMERA =AutoTransform::ROTATE_TO_CAMERA,
ROTATE_TO_AXIS =AutoTransform::ROTATE_TO_AXIS};
  Q_ENUMS(AutoRotateMode)
private:
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
AutoTransform * _model;
QReflect_AutoTransform(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_AutoTransform( );
//AutoTransform
//virtual  BoundingSphere  computeBound();
//const  Quat & getRotation();
//const  Vec3 & getAxis();
//const  Vec3 & getNormal();
//const  Vec3d & getPivotPoint();
//const  Vec3d & getPosition();
//const  Vec3d & getScale();
Q_INVOKABLE  bool  computeLocalToWorldMatrix(osg::QReflect_Matrixd * ,osg::QReflect_NodeVisitor *)const;
Q_INVOKABLE  bool  computeWorldToLocalMatrix(osg::QReflect_Matrixd * ,osg::QReflect_NodeVisitor *)const;
Q_INVOKABLE  bool  isSameKindAs(osg::QReflect_Object *)const;
Q_INVOKABLE const  char*  className()const;
Q_INVOKABLE const  char*  libraryName()const;
Q_INVOKABLE const bool  getAutoScaleToScreen()const;
Q_INVOKABLE const double  getMaximumScale()const;
Q_INVOKABLE const double  getMinimumScale()const;
Q_INVOKABLE const float  getAutoScaleTransitionWidthRatio()const;
Q_INVOKABLE const float  getAutoUpdateEyeMovementTolerance()const;
Q_INVOKABLE osg::QReflect_AutoTransform*  asAutoTransform();
Q_INVOKABLE osg::QReflect_AutoTransform*  asAutoTransform()const;
Q_INVOKABLE osg::QReflect_AutoTransform::AutoRotateMode  getAutoRotateMode()const;
Q_INVOKABLE osg::QReflect_Object*  clone(osg::QReflect_CopyOp *)const;
Q_INVOKABLE osg::QReflect_Object*  cloneType()const;
Q_INVOKABLE void  accept(osg::QReflect_NodeVisitor *);
Q_INVOKABLE void  setAutoRotateMode(osg::QReflect_AutoTransform::AutoRotateMode );
Q_INVOKABLE void  setAxis(osg::QReflect_Vec3f *);
Q_INVOKABLE void  setNormal(osg::QReflect_Vec3f *);
Q_INVOKABLE void  setPivotPoint(osg::QReflect_Vec3d *);
Q_INVOKABLE void  setPosition(osg::QReflect_Vec3d *);
Q_INVOKABLE void  setRotation(osg::QReflect_Quat *);
Q_INVOKABLE void  setScale( double );
Q_INVOKABLE void  setScale(osg::QReflect_Vec3d *);
Q_INVOKABLE void setAutoScaleToScreen(const bool &);
Q_INVOKABLE void setAutoScaleTransitionWidthRatio(const float &);
Q_INVOKABLE void setAutoUpdateEyeMovementTolerance(const float &);
Q_INVOKABLE void setMaximumScale(const double &);
Q_INVOKABLE void setMinimumScale(const double &);
Q_PROPERTY(bool AutoScaleToScreen  READ getAutoScaleToScreen WRITE setAutoScaleToScreen NOTIFY AutoScaleToScreenChanged)
Q_PROPERTY(double MaximumScale  READ getMaximumScale WRITE setMaximumScale NOTIFY MaximumScaleChanged)
Q_PROPERTY(double MinimumScale  READ getMinimumScale WRITE setMinimumScale NOTIFY MinimumScaleChanged)
Q_PROPERTY(float AutoScaleTransitionWidthRatio  READ getAutoScaleTransitionWidthRatio WRITE setAutoScaleTransitionWidthRatio NOTIFY AutoScaleTransitionWidthRatioChanged)
Q_PROPERTY(float AutoUpdateEyeMovementTolerance  READ getAutoUpdateEyeMovementTolerance WRITE setAutoUpdateEyeMovementTolerance NOTIFY AutoUpdateEyeMovementToleranceChanged)
signals: void AutoScaleToScreenChanged(const bool&);
public:
signals: void AutoScaleTransitionWidthRatioChanged(const float&);
public:
signals: void AutoUpdateEyeMovementToleranceChanged(const float&);
public:
signals: void MaximumScaleChanged(const double&);
public:
signals: void MinimumScaleChanged(const double&);
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_AutoTransform: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::AutoTransform> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_AutoTransform();
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

#endif //osg_AutoTransform_pmocHPP

