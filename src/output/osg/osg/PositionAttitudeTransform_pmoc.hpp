#ifndef osg_PositionAttitudeTransform_pmocHPP
#define  osg_PositionAttitudeTransform_pmocHPP 1

#include <osg/PositionAttitudeTransform_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_NodeVisitor;
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
class QReflect_PositionAttitudeTransform;
			} ;
#include <osg/PositionAttitudeTransform>
#include <osg/PositionAttitudeTransform>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_PositionAttitudeTransform: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
PositionAttitudeTransform * _model;
QReflect_PositionAttitudeTransform(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_PositionAttitudeTransform( );
//PositionAttitudeTransform
//const  Quat & getAttitude();
//const  Vec3d & getPivotPoint();
//const  Vec3d & getPosition();
//const  Vec3d & getScale();
Q_INVOKABLE  bool  computeLocalToWorldMatrix(osg::QReflect_Matrixd * ,osg::QReflect_NodeVisitor *)const;
Q_INVOKABLE  bool  computeWorldToLocalMatrix(osg::QReflect_Matrixd * ,osg::QReflect_NodeVisitor *)const;
Q_INVOKABLE osg::QReflect_PositionAttitudeTransform*  asPositionAttitudeTransform();
Q_INVOKABLE osg::QReflect_PositionAttitudeTransform*  asPositionAttitudeTransform()const;
Q_INVOKABLE void  setAttitude(osg::QReflect_Quat *);
Q_INVOKABLE void  setPivotPoint(osg::QReflect_Vec3d *);
Q_INVOKABLE void  setPosition(osg::QReflect_Vec3d *);
Q_INVOKABLE void  setScale(osg::QReflect_Vec3d *);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_PositionAttitudeTransform: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::PositionAttitudeTransform> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_PositionAttitudeTransform();
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

#endif //osg_PositionAttitudeTransform_pmocHPP

