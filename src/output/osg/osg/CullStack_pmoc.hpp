#ifndef osg_CullStack_pmocHPP
#define  osg_CullStack_pmocHPP 1


#include <osg/CullStack_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Node;
			} ;
namespace osg{ 
class QReflect_Vec3f;
			} ;
namespace osg{ 
class QReflect_RefMatrixd;
			} ;
namespace osg{ 
class QReflect_Viewport;
			} ;
#include <osg/CullStack>

#include<osg/Transform_pmoc.hpp>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_CullStack: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
CullStack * _model;
QReflect_CullStack(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_CullStack( );
//CullStack
// CullingSet & getCurrentCullingSet();
// CullingStack & getClipSpaceCullingStack();
// CullingStack & getModelViewCullingStack();
// CullingStack & getProjectionCullingStack();
// ShadowVolumeOccluderList & getOccluderList();
// bool  isCulled(const  BoundingBox &);
// bool  isCulled(const  BoundingSphere &);
// bool  isCulled(const  std::vector<Vec3> &);
// float  clampedPixelSize(const  BoundingSphere &);
// float  pixelSize(const  BoundingSphere &);
// osg::Matrix  getWindowMatrix();
// void  disableAndPushOccludersCurrentMask( NodePath &);
// void  popOccludersCurrentMask( NodePath &);
// void  setOccluderList(const  ShadowVolumeOccluderList &);
//const  CullingSet & getCurrentCullingSet();
//const  ShadowVolumeOccluderList & getOccluderList();
//const  osg::Vec3 & getEyeLocal();
//const  osg::Vec3  getLookVectorLocal();
//const  osg::Vec3 & getReferenceViewPoint();
//const  osg::Vec3  getUpLocal();
//const  osg::Vec3 & getViewPointLocal();
Q_INVOKABLE  bool  isCulled(osg::QReflect_Node *node);
Q_INVOKABLE  float  clampedPixelSize(osg::QReflect_Vec3f *v , float radius)const;
Q_INVOKABLE  float  getFrustumVolume();
Q_INVOKABLE  float  pixelSize(osg::QReflect_Vec3f *v , float radius)const;
Q_INVOKABLE osg::QReflect_RefMatrixd*  getMVPW();
Q_INVOKABLE osg::QReflect_RefMatrixd*  getModelViewMatrix();
Q_INVOKABLE osg::QReflect_RefMatrixd*  getProjectionMatrix();
Q_INVOKABLE osg::QReflect_Viewport*  getViewport();
Q_INVOKABLE void  popCullingSet();
Q_INVOKABLE void  popCurrentMask();
Q_INVOKABLE void  popModelViewMatrix();
Q_INVOKABLE void  popProjectionMatrix();
Q_INVOKABLE void  popReferenceViewPoint();
Q_INVOKABLE void  popViewport();
Q_INVOKABLE void  pushCullingSet();
Q_INVOKABLE void  pushCurrentMask();
Q_INVOKABLE void  pushModelViewMatrix(osg::QReflect_RefMatrixd *matrix ,osg::QReflect_Transform::ReferenceFrame referenceFrame);
Q_INVOKABLE void  pushProjectionMatrix(osg::QReflect_RefMatrixd *matrix);
Q_INVOKABLE void  pushReferenceViewPoint(osg::QReflect_Vec3f *viewPoint);
Q_INVOKABLE void  pushViewport(osg::QReflect_Viewport *viewport);
Q_INVOKABLE void  reset();
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_CullStack: public pmoc::MetaQQuickClass{
protected:
std::set<osg::CullStack* 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_CullStack();
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


#endif //osg_CullStack_pmocHPP

