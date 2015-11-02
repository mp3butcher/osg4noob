#ifndef osg_CameraView_pmocHPP
#define  osg_CameraView_pmocHPP 1

#include <osg/CameraView_pmoc.hpp>
#include <QObject>
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
class QReflect_NodeVisitor;
			} ;
#include <osg/CameraView>
#include <osg/CameraView>

#include <osg/ref_ptr>
#include<osg/CameraView_pmoc.hpp>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_CameraView: public pmoc::QQModel
{
Q_OBJECT
public:
 enum FieldOfViewMode{
UNCONSTRAINED =CameraView::UNCONSTRAINED,
HORIZONTAL =CameraView::HORIZONTAL,
VERTICAL =CameraView::VERTICAL};
  Q_ENUMS(FieldOfViewMode)
private:
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
CameraView * _model;
QReflect_CameraView(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_CameraView( );
//CameraView
//const  Quat & getAttitude();
//const  Vec3d & getPosition();
Q_INVOKABLE  bool  computeLocalToWorldMatrix(osg::QReflect_Matrixd * ,osg::QReflect_NodeVisitor *)const;
Q_INVOKABLE  bool  computeWorldToLocalMatrix(osg::QReflect_Matrixd * ,osg::QReflect_NodeVisitor *)const;
Q_INVOKABLE const double  getFieldOfView()const;
Q_INVOKABLE const double  getFocalLength()const;
Q_INVOKABLE osg::QReflect_CameraView::FieldOfViewMode  getFieldOfViewMode()const;
Q_INVOKABLE void  setAttitude(osg::QReflect_Quat *);
Q_INVOKABLE void  setFieldOfViewMode(osg::QReflect_CameraView::FieldOfViewMode );
Q_INVOKABLE void  setPosition(osg::QReflect_Vec3d *);
Q_INVOKABLE void setFieldOfView(const double &);
Q_INVOKABLE void setFocalLength(const double &);
Q_PROPERTY(double FieldOfView  READ getFieldOfView WRITE setFieldOfView NOTIFY FieldOfViewChanged)
Q_PROPERTY(double FocalLength  READ getFocalLength WRITE setFocalLength NOTIFY FocalLengthChanged)
signals: void FieldOfViewChanged(const double&);
public:
signals: void FocalLengthChanged(const double&);
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_CameraView: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::CameraView> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_CameraView();
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

#endif //osg_CameraView_pmocHPP

