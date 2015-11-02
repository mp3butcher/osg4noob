#ifndef osg_ShadowVolumeOccluder_pmocHPP
#define  osg_ShadowVolumeOccluder_pmocHPP 1

#include <osg/ShadowVolumeOccluder_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Matrixd;
			} ;
#include <osg/ShadowVolumeOccluder>

#include <MetaQQuickClass.h>
namespace osg{
class QReflect_ShadowVolumeOccluder: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 0;}

/// inheritance simulated via composition
ShadowVolumeOccluder * _model;
QReflect_ShadowVolumeOccluder(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_ShadowVolumeOccluder( );
//ShadowVolumeOccluder
// HoleList & getHoleList();
// NodePath & getNodePath();
// Polytope & getOccluder();
// bool  computeOccluder(const  NodePath & ,const  ConvexPlanarOccluder & , CullStack & , bool );
// bool  contains(const  BoundingBox &);
// bool  contains(const  BoundingSphere &);
// bool  contains(const  std::vector<Vec3> &);
// bool  operator<(const  ShadowVolumeOccluder &);
// void  setNodePath( NodePath &);
//const  HoleList & getHoleList();
//const  NodePath & getNodePath();
//const  Polytope & getOccluder();
Q_INVOKABLE  bool  matchProjectionMatrix(osg::QReflect_Matrixd *)const;
Q_INVOKABLE  float  getVolume()const;
Q_INVOKABLE void  disableResultMasks();
Q_INVOKABLE void  popCurrentMask();
Q_INVOKABLE void  pushCurrentMask();
Q_INVOKABLE void  transformProvidingInverse(osg::QReflect_Matrixd *);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_ShadowVolumeOccluder: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ShadowVolumeOccluder* 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_ShadowVolumeOccluder();
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

#endif //osg_ShadowVolumeOccluder_pmocHPP

