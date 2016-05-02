#ifndef osg_Node_pmocHPP
#define  osg_Node_pmocHPP 1


#include <osg/Node_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Object;
			} ;
namespace osg{ 
class QReflect_StateSet;
			} ;
namespace osg{ 
class QReflect_Node;
			} ;
namespace osg{ 
class QReflect_Drawable;
			} ;
namespace osg{ 
class QReflect_Callback;
			} ;
namespace osg{ 
class QReflect_CopyOp;
			} ;
namespace osg{ 
class QReflect_State;
			} ;
namespace osg{ 
class QReflect_NodeVisitor;
			} ;
namespace osg{ 
class QReflect_Group;
			} ;
namespace osg{ 
class QReflect_Transform;
			} ;
namespace osg{ 
class QReflect_Switch;
			} ;
namespace osg{ 
class QReflect_Geode;
			} ;
namespace osg{ 
class QReflect_Geometry;
			} ;
namespace osg{ 
class QReflect_Camera;
			} ;
#include <osg/Node>
#include <osg/Node>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_Node: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
Node * _model;
QReflect_Node(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Node( );
//Node
//virtual  BoundingSphere  computeBound();
// ComputeBoundingSphereCallback * getComputeBoundingSphereCallback();
// DescriptionList & getDescriptions();
// MatrixList  getWorldMatrices(const  osg::Node *);
// NodePathList  getParentalNodePaths( osg::Node *);
// ParentList  getParents();
//virtual  osgTerrain::Terrain * asTerrain();
// void  setComputeBoundingSphereCallback( ComputeBoundingSphereCallback *);
// void  setDescriptions(const  DescriptionList &);
// void  setInitialBound(const  osg::BoundingSphere &);
//const  BoundingSphere & getBound();
//const  BoundingSphere & getInitialBound();
//const  ComputeBoundingSphereCallback * getComputeBoundingSphereCallback();
//const  DescriptionList & getDescriptions();
//const  ParentList & getParents();
//virtual const  osgTerrain::Terrain * asTerrain();
Q_INVOKABLE  bool  containsOccluderNodes()const;
Q_INVOKABLE  bool  getCullingActive()const;
Q_INVOKABLE  bool  isCullingActive()const;
Q_INVOKABLE  bool  isSameKindAs(osg::QReflect_Object *obj)const;
Q_INVOKABLE  unsigned int  getNodeMask()const;
Q_INVOKABLE  unsigned int  getNumChildrenRequiringEventTraversal()const;
Q_INVOKABLE  unsigned int  getNumChildrenRequiringUpdateTraversal()const;
Q_INVOKABLE  unsigned int  getNumChildrenWithCullingDisabled()const;
Q_INVOKABLE  unsigned int  getNumChildrenWithOccluderNodes()const;
Q_INVOKABLE  unsigned int  getNumDescriptions()const;
Q_INVOKABLE  unsigned int  getNumParents()const;
Q_INVOKABLE QString  getDescription( unsigned int i);
Q_INVOKABLE QString  getDescription( unsigned int i)const;
Q_INVOKABLE const  char*  className()const;
Q_INVOKABLE const  char*  libraryName()const;
Q_INVOKABLE osg::QReflect_Callback*  getCullCallback();
Q_INVOKABLE osg::QReflect_Callback*  getCullCallback()const;
Q_INVOKABLE osg::QReflect_Callback*  getEventCallback();
Q_INVOKABLE osg::QReflect_Callback*  getEventCallback()const;
Q_INVOKABLE osg::QReflect_Callback*  getUpdateCallback();
Q_INVOKABLE osg::QReflect_Callback*  getUpdateCallback()const;
Q_INVOKABLE osg::QReflect_Camera*  asCamera();
Q_INVOKABLE osg::QReflect_Camera*  asCamera()const;
Q_INVOKABLE osg::QReflect_Drawable*  asDrawable();
Q_INVOKABLE osg::QReflect_Drawable*  asDrawable()const;
Q_INVOKABLE osg::QReflect_Geode*  asGeode();
Q_INVOKABLE osg::QReflect_Geode*  asGeode()const;
Q_INVOKABLE osg::QReflect_Geometry*  asGeometry();
Q_INVOKABLE osg::QReflect_Geometry*  asGeometry()const;
Q_INVOKABLE osg::QReflect_Group*  asGroup();
Q_INVOKABLE osg::QReflect_Group*  asGroup()const;
Q_INVOKABLE osg::QReflect_Group*  getParent( unsigned int i);
Q_INVOKABLE osg::QReflect_Group*  getParent( unsigned int i)const;
Q_INVOKABLE osg::QReflect_Node*  asNode();
Q_INVOKABLE osg::QReflect_Node*  asNode()const;
Q_INVOKABLE osg::QReflect_Object*  clone(osg::QReflect_CopyOp *copyop)const;
Q_INVOKABLE osg::QReflect_Object*  cloneType()const;
Q_INVOKABLE osg::QReflect_StateSet*  getOrCreateStateSet();
Q_INVOKABLE osg::QReflect_StateSet*  getStateSet();
Q_INVOKABLE osg::QReflect_StateSet*  getStateSet()const;
Q_INVOKABLE osg::QReflect_Switch*  asSwitch();
Q_INVOKABLE osg::QReflect_Switch*  asSwitch()const;
Q_INVOKABLE osg::QReflect_Transform*  asTransform();
Q_INVOKABLE osg::QReflect_Transform*  asTransform()const;
Q_INVOKABLE void  accept(osg::QReflect_NodeVisitor *nv);
Q_INVOKABLE void  addCullCallback(osg::QReflect_Callback *nc);
Q_INVOKABLE void  addDescription(const  QString &desc);
Q_INVOKABLE void  addEventCallback(osg::QReflect_Callback *nc);
Q_INVOKABLE void  addUpdateCallback(osg::QReflect_Callback *nc);
Q_INVOKABLE void  ascend(osg::QReflect_NodeVisitor *nv);
Q_INVOKABLE void  dirtyBound();
Q_INVOKABLE void  releaseGLObjects(osg::QReflect_State *)const;
Q_INVOKABLE void  removeCullCallback(osg::QReflect_Callback *nc);
Q_INVOKABLE void  removeEventCallback(osg::QReflect_Callback *nc);
Q_INVOKABLE void  removeUpdateCallback(osg::QReflect_Callback *nc);
Q_INVOKABLE void  resizeGLObjectBuffers( unsigned int );
Q_INVOKABLE void  setCullCallback(osg::QReflect_Callback *nc);
Q_INVOKABLE void  setCullingActive( bool active);
Q_INVOKABLE void  setEventCallback(osg::QReflect_Callback *nc);
Q_INVOKABLE void  setNodeMask( unsigned int nm);
Q_INVOKABLE void  setStateSet(osg::QReflect_StateSet *stateset);
Q_INVOKABLE void  setThreadSafeRefUnref( bool threadSafe);
Q_INVOKABLE void  setUpdateCallback(osg::QReflect_Callback *nc);
Q_INVOKABLE void  traverse(osg::QReflect_NodeVisitor *);
Q_PROPERTY(bool  CullingActive  READ getCullingActive WRITE setCullingActive NOTIFY CullingActiveChanged)
Q_PROPERTY(osg::QReflect_Callback * CullCallback  READ getCullCallback WRITE setCullCallback NOTIFY CullCallbackChanged)
Q_PROPERTY(osg::QReflect_Callback * EventCallback  READ getEventCallback WRITE setEventCallback NOTIFY EventCallbackChanged)
Q_PROPERTY(osg::QReflect_Callback * UpdateCallback  READ getUpdateCallback WRITE setUpdateCallback NOTIFY UpdateCallbackChanged)
Q_PROPERTY(osg::QReflect_StateSet * StateSet  READ getStateSet WRITE setStateSet NOTIFY StateSetChanged)
Q_PROPERTY(unsigned int  NodeMask  READ getNodeMask WRITE setNodeMask NOTIFY NodeMaskChanged)
signals: void CullCallbackChanged();
public:
signals: void CullCallbackCollectionChanged();
public:
signals: void CullingActiveChanged();
public:
signals: void EventCallbackChanged();
public:
signals: void EventCallbackCollectionChanged();
public:
signals: void NodeMaskChanged();
public:
signals: void StateSetChanged();
public:
signals: void UpdateCallbackChanged();
public:
signals: void UpdateCallbackCollectionChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Node: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::Node> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_Node();
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


#endif //osg_Node_pmocHPP

