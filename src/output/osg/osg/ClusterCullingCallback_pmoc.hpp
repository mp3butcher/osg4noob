#ifndef osg_ClusterCullingCallback_pmocHPP
#define  osg_ClusterCullingCallback_pmocHPP 1


#include <osg/ClusterCullingCallback_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Vec3f;
			} ;
namespace osg{ 
class QReflect_Object;
			} ;
namespace osg{ 
class QReflect_Drawable;
			} ;
namespace osg{ 
class QReflect_State;
			} ;
namespace osg{ 
class QReflect_NodeVisitor;
			} ;
namespace osg{ 
class QReflect_Matrixd;
			} ;
#include <osg/ClusterCullingCallback>
#include <osg/ClusterCullingCallback>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_ClusterCullingCallback: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
ClusterCullingCallback * _model;
QReflect_ClusterCullingCallback(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_ClusterCullingCallback( );
//ClusterCullingCallback
//virtual  void  operator()( Node * , NodeVisitor *);
//const  osg::Vec3 & getControlPoint();
//const  osg::Vec3 & getNormal();
Q_INVOKABLE  bool  cull(osg::QReflect_NodeVisitor * ,osg::QReflect_Drawable * ,osg::QReflect_State *)const;
Q_INVOKABLE  bool  run(osg::QReflect_Object * ,osg::QReflect_Object *);
Q_INVOKABLE const float  getDeviation()const;
Q_INVOKABLE const float  getRadius()const;
Q_INVOKABLE void  computeFrom(osg::QReflect_Drawable *);
Q_INVOKABLE void  set(osg::QReflect_Vec3f * ,osg::QReflect_Vec3f * , float  , float );
Q_INVOKABLE void  setControlPoint(osg::QReflect_Vec3f *);
Q_INVOKABLE void  setNormal(osg::QReflect_Vec3f *);
Q_INVOKABLE void  transform(osg::QReflect_Matrixd *);
Q_INVOKABLE void setDeviation(const float &);
Q_INVOKABLE void setRadius(const float &);
Q_PROPERTY(float Deviation  READ getDeviation WRITE setDeviation NOTIFY DeviationChanged)
Q_PROPERTY(float Radius  READ getRadius WRITE setRadius NOTIFY RadiusChanged)
signals: void DeviationChanged(const float&);
public:
signals: void RadiusChanged(const float&);
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_ClusterCullingCallback: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::ClusterCullingCallback> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_ClusterCullingCallback();
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

#endif //osg_ClusterCullingCallback_pmocHPP

