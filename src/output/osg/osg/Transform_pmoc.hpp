#ifndef osg_Transform_pmocHPP
#define  osg_Transform_pmocHPP 1


#include <osg/Transform_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_NodeVisitor;
			} ;
namespace osg{ 
class QReflect_Matrixd;
			} ;
namespace osg{ 
class QReflect_Transform;
			} ;
namespace osg{ 
class QReflect_MatrixTransform;
			} ;
namespace osg{ 
class QReflect_PositionAttitudeTransform;
			} ;
#include <osg/Transform>
#include <osg/Transform>

#include <osg/ref_ptr>
#include<osg/Transform_pmoc.hpp>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_Transform: public pmoc::QQModel
{
Q_OBJECT
public:
 enum ReferenceFrame{
RELATIVE_RF =Transform::RELATIVE_RF,
ABSOLUTE_RF =Transform::ABSOLUTE_RF,
ABSOLUTE_RF_INHERIT_VIEWPOINT =Transform::ABSOLUTE_RF_INHERIT_VIEWPOINT};
  Q_ENUMS(ReferenceFrame)
private:
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
Transform * _model;
QReflect_Transform(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Transform( );
//Transform
//virtual  BoundingSphere  computeBound();
Q_INVOKABLE  bool  computeLocalToWorldMatrix(osg::QReflect_Matrixd *matrix ,osg::QReflect_NodeVisitor *)const;
Q_INVOKABLE  bool  computeWorldToLocalMatrix(osg::QReflect_Matrixd *matrix ,osg::QReflect_NodeVisitor *)const;
Q_INVOKABLE osg::QReflect_MatrixTransform*  asMatrixTransform();
Q_INVOKABLE osg::QReflect_MatrixTransform*  asMatrixTransform()const;
Q_INVOKABLE osg::QReflect_PositionAttitudeTransform*  asPositionAttitudeTransform();
Q_INVOKABLE osg::QReflect_PositionAttitudeTransform*  asPositionAttitudeTransform()const;
Q_INVOKABLE osg::QReflect_Transform*  asTransform();
Q_INVOKABLE osg::QReflect_Transform*  asTransform()const;
Q_INVOKABLE osg::QReflect_Transform::ReferenceFrame  getReferenceFrame()const;
Q_INVOKABLE void  setReferenceFrame(osg::QReflect_Transform::ReferenceFrame rf);
Q_PROPERTY(osg::QReflect_Transform::ReferenceFrame  ReferenceFrame  READ getReferenceFrame WRITE setReferenceFrame NOTIFY ReferenceFrameChanged)
signals: void ReferenceFrameChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Transform: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::Transform> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_Transform();
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


#endif //osg_Transform_pmocHPP

