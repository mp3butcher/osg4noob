#ifndef osg_CullingSet_pmocHPP
#define  osg_CullingSet_pmocHPP 1

#include <osg/CullingSet_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Vec3f;
			} ;
namespace osg{ 
class QReflect_Vec4f;
			} ;
namespace osg{ 
class QReflect_Polytope;
			} ;
namespace osg{ 
class QReflect_StateSet;
			} ;
namespace osg{ 
class QReflect_Matrixd;
			} ;
namespace osg{ 
class QReflect_ShadowVolumeOccluder;
			} ;
namespace osg{ 
class QReflect_CullingSet;
			} ;
#include <osg/CullingSet>
#include <osg/CullingSet>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_CullingSet: public pmoc::QQModel
{
Q_OBJECT
public:
 enum MaskValues{
NO_CULLING =CullingSet::NO_CULLING,
VIEW_FRUSTUM_SIDES_CULLING =CullingSet::VIEW_FRUSTUM_SIDES_CULLING,
NEAR_PLANE_CULLING =CullingSet::NEAR_PLANE_CULLING,
FAR_PLANE_CULLING =CullingSet::FAR_PLANE_CULLING,
VIEW_FRUSTUM_CULLING =CullingSet::VIEW_FRUSTUM_CULLING,
SMALL_FEATURE_CULLING =CullingSet::SMALL_FEATURE_CULLING,
SHADOW_OCCLUSION_CULLING =CullingSet::SHADOW_OCCLUSION_CULLING,
DEFAULT_CULLING =CullingSet::DEFAULT_CULLING,
ENABLE_ALL_CULLING =CullingSet::ENABLE_ALL_CULLING};
  Q_ENUMS(MaskValues)
private:
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
CullingSet * _model;
QReflect_CullingSet(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_CullingSet( );
//CullingSet
// CullingSet & operator=(const  CullingSet &);
// Polytope & getFrustum();
// StateFrustumList & getStateFrustumList();
// Vec4 & getPixelSizeVector();
// bool  isCulled(const  Bound &);
// bool  isCulled(const  BoundingBox &);
// bool  isCulled(const  BoundingSphere &);
// bool  isCulled(const  std::vector<Vec3> &);
// float  clampedPixelSize(const  BoundingSphere &);
// float  pixelSize(const  BoundingSphere &);
// osg::Vec4  computePixelSizeVector(const  Viewport & ,const  Matrix & ,const  Matrix &);
// void  disableAndPushOccludersCurrentMask( NodePath &);
// void  getStateFrustumList( StateFrustumList &);
// void  popOccludersCurrentMask( NodePath &);
//const  Polytope & getFrustum();
//const  Vec4 & getPixelSizeVector();
Q_INVOKABLE  float  clampedPixelSize(osg::QReflect_Vec3f * , float )const;
Q_INVOKABLE  float  pixelSize(osg::QReflect_Vec3f * , float )const;
Q_INVOKABLE  int  getCullingMask()const;
Q_INVOKABLE const float  getSmallFeatureCullingPixelSize()const;
Q_INVOKABLE void  addOccluder(osg::QReflect_ShadowVolumeOccluder *);
Q_INVOKABLE void  addStateFrustum(osg::QReflect_StateSet * ,osg::QReflect_Polytope *);
Q_INVOKABLE void  popCurrentMask();
Q_INVOKABLE void  pushCurrentMask();
Q_INVOKABLE void  resetCullingMask();
Q_INVOKABLE void  set(osg::QReflect_CullingSet * ,osg::QReflect_Matrixd * ,osg::QReflect_Vec4f *);
Q_INVOKABLE void  set(osg::QReflect_CullingSet *);
Q_INVOKABLE void  setCullingMask( int );
Q_INVOKABLE void  setFrustum(osg::QReflect_Polytope *);
Q_INVOKABLE void  setPixelSizeVector(osg::QReflect_Vec4f *);
Q_INVOKABLE void setSmallFeatureCullingPixelSize(const float &);
Q_PROPERTY(float SmallFeatureCullingPixelSize  READ getSmallFeatureCullingPixelSize WRITE setSmallFeatureCullingPixelSize NOTIFY SmallFeatureCullingPixelSizeChanged)
signals: void SmallFeatureCullingPixelSizeChanged(const float&);
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_CullingSet: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::CullingSet> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_CullingSet();
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

#endif //osg_CullingSet_pmocHPP

