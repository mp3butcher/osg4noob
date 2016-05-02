#ifndef osg_CollectOccludersVisitor_pmocHPP
#define  osg_CollectOccludersVisitor_pmocHPP 1


#include <osg/CollectOccludersVisitor_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Object;
			} ;
namespace osg{ 
class QReflect_Node;
			} ;
namespace osg{ 
class QReflect_Vec3f;
			} ;
namespace osg{ 
class QReflect_Transform;
			} ;
namespace osg{ 
class QReflect_Switch;
			} ;
namespace osg{ 
class QReflect_LOD;
			} ;
namespace osg{ 
class QReflect_OccluderNode;
			} ;
namespace osg{ 
class QReflect_Projection;
			} ;
#include <osg/CollectOccludersVisitor>
#include <osg/CollectOccludersVisitor>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_CollectOccludersVisitor: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 2;}

/// inheritance simulated via composition
CollectOccludersVisitor * _model;
QReflect_CollectOccludersVisitor(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_CollectOccludersVisitor( );
//CollectOccludersVisitor
// ShadowVolumeOccluderSet & getCollectedOccluderSet();
// void  setCollectedOccluderSet(const  ShadowVolumeOccluderSet &);
//const  ShadowVolumeOccluderSet & getCollectedOccluderSet();
Q_INVOKABLE  bool  getCreateDrawablesOnOccludeNodes()const;
Q_INVOKABLE  float  getDistanceFromEyePoint(osg::QReflect_Vec3f *pos , bool withLODScale)const;
Q_INVOKABLE  float  getDistanceToEyePoint(osg::QReflect_Vec3f *pos , bool withLODScale)const;
Q_INVOKABLE  float  getDistanceToViewPoint(osg::QReflect_Vec3f *pos , bool withLODScale)const;
Q_INVOKABLE  float  getMinimumShadowOccluderVolume()const;
Q_INVOKABLE  unsigned int  getMaximumNumberOfActiveOccluders()const;
Q_INVOKABLE osg::QReflect_Object*  cloneType()const;
Q_INVOKABLE void  apply(osg::QReflect_LOD *node);
Q_INVOKABLE void  apply(osg::QReflect_Node *);
Q_INVOKABLE void  apply(osg::QReflect_OccluderNode *node);
Q_INVOKABLE void  apply(osg::QReflect_Projection *node);
Q_INVOKABLE void  apply(osg::QReflect_Switch *node);
Q_INVOKABLE void  apply(osg::QReflect_Transform *node);
Q_INVOKABLE void  removeOccludedOccluders();
Q_INVOKABLE void  reset();
Q_INVOKABLE void  setCreateDrawablesOnOccludeNodes( bool flag);
Q_INVOKABLE void  setMaximumNumberOfActiveOccluders( unsigned int num);
Q_INVOKABLE void  setMinimumShadowOccluderVolume( float vol);
Q_PROPERTY(bool  CreateDrawablesOnOccludeNodes  READ getCreateDrawablesOnOccludeNodes WRITE setCreateDrawablesOnOccludeNodes NOTIFY CreateDrawablesOnOccludeNodesChanged)
Q_PROPERTY(float  MinimumShadowOccluderVolume  READ getMinimumShadowOccluderVolume WRITE setMinimumShadowOccluderVolume NOTIFY MinimumShadowOccluderVolumeChanged)
Q_PROPERTY(unsigned int  MaximumNumberOfActiveOccluders  READ getMaximumNumberOfActiveOccluders WRITE setMaximumNumberOfActiveOccluders NOTIFY MaximumNumberOfActiveOccludersChanged)
signals: void CreateDrawablesOnOccludeNodesChanged();
public:
signals: void MaximumNumberOfActiveOccludersChanged();
public:
signals: void MinimumShadowOccluderVolumeChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_CollectOccludersVisitor: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::CollectOccludersVisitor> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_CollectOccludersVisitor();
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


#endif //osg_CollectOccludersVisitor_pmocHPP

