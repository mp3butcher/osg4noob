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
class QReflect_Callback;
			} ;
namespace osg{ 
class QReflect_CopyOp;
			} ;
#include <osg/Node>
#include <osg/Node>

#include <osg/ref_ptr>
namespace osg{
class QReflect_Callback; 
}


#include <MetaQQuickClass.h>
namespace osg{
class QReflect_Node: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
Node * _model;
QReflect_Node(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Node( );
//Node
//virtual  BoundingSphere  computeBound();
//virtual  Camera * asCamera();
// ComputeBoundingSphereCallback * getComputeBoundingSphereCallback();
// DescriptionList & getDescriptions();
//virtual  Drawable * asDrawable();
//virtual  Geode * asGeode();
//virtual  Geometry * asGeometry();
//virtual  Group * asGroup();
// Group * getParent( unsigned int );
// MatrixList  getWorldMatrices(const  osg::Node *);
// NodePathList  getParentalNodePaths( osg::Node *);
// ParentList  getParents();
//virtual  Switch * asSwitch();
//virtual  Transform * asTransform();
//virtual  osgTerrain::Terrain * asTerrain();
//virtual  void  accept( NodeVisitor &);
//virtual  void  ascend( NodeVisitor &);
//virtual  void  releaseGLObjects( osg::State *);
// void  setComputeBoundingSphereCallback( ComputeBoundingSphereCallback *);
// void  setDescriptions(const  DescriptionList &);
// void  setInitialBound(const  osg::BoundingSphere &);
//virtual  void  traverse( NodeVisitor &);
//const  BoundingSphere & getBound();
//const  BoundingSphere & getInitialBound();
//virtual const  Camera * asCamera();
//const  ComputeBoundingSphereCallback * getComputeBoundingSphereCallback();
//const  DescriptionList & getDescriptions();
//virtual const  Drawable * asDrawable();
//virtual const  Geode * asGeode();
//virtual const  Geometry * asGeometry();
//virtual const  Group * asGroup();
//const  Group * getParent( unsigned int );
//const  ParentList & getParents();
//virtual const  Switch * asSwitch();
//virtual const  Transform * asTransform();
//virtual const  osgTerrain::Terrain * asTerrain();
Q_INVOKABLE  bool  containsOccluderNodes()const;
Q_INVOKABLE  bool  isCullingActive()const;
Q_INVOKABLE  bool  isSameKindAs(osg::QReflect_Object *)const;
Q_INVOKABLE  osg::QReflect_Callback * getCullCallback()const;
Q_INVOKABLE  osg::QReflect_Callback * getEventCallback()const;
Q_INVOKABLE  osg::QReflect_Callback * getUpdateCallback()const;
Q_INVOKABLE  osg::QReflect_StateSet * getStateSet()const;
Q_INVOKABLE  unsigned int  getNodeMask()const;
Q_INVOKABLE  unsigned int  getNumChildrenRequiringEventTraversal()const;
Q_INVOKABLE  unsigned int  getNumChildrenRequiringUpdateTraversal()const;
Q_INVOKABLE  unsigned int  getNumChildrenWithCullingDisabled()const;
Q_INVOKABLE  unsigned int  getNumChildrenWithOccluderNodes()const;
Q_INVOKABLE  unsigned int  getNumDescriptions()const;
Q_INVOKABLE  unsigned int  getNumParents()const;
Q_INVOKABLE QString  getDescription( unsigned int );
Q_INVOKABLE QString  getDescription( unsigned int )const;
Q_INVOKABLE const  char*  className()const;
Q_INVOKABLE const  char*  libraryName()const;
Q_INVOKABLE const bool  getCullingActive()const;
Q_INVOKABLE osg::QReflect_Node*  asNode();
Q_INVOKABLE osg::QReflect_Node*  asNode()const;
Q_INVOKABLE osg::QReflect_Object*  clone(osg::QReflect_CopyOp *)const;
Q_INVOKABLE osg::QReflect_Object*  cloneType()const;
Q_INVOKABLE osg::QReflect_StateSet*  getOrCreateStateSet();
Q_INVOKABLE void   addCullCallback( osg::QReflect_Callback *par);//{return new osg::QReflect_Callback(_model->getCullCallback());}
Q_INVOKABLE void   addEventCallback( osg::QReflect_Callback *par);//{return new osg::QReflect_Callback(_model->getEventCallback());}
Q_INVOKABLE void   addUpdateCallback( osg::QReflect_Callback *par);//{return new osg::QReflect_Callback(_model->getUpdateCallback());}
Q_INVOKABLE void  addDescription(const  QString &);
Q_INVOKABLE void  dirtyBound();
Q_INVOKABLE void  resizeGLObjectBuffers( unsigned int );
Q_INVOKABLE void  setNodeMask( unsigned int );
Q_INVOKABLE void  setThreadSafeRefUnref( bool );
Q_INVOKABLE void pmoc_reverse_addCullCallback( osg::QReflect_Callback *par);//{_model->setCullCallback(par->_model);emit CullCallbackCollectionChanged(par);}
Q_INVOKABLE void pmoc_reverse_addEventCallback( osg::QReflect_Callback *par);//{_model->setEventCallback(par->_model);emit EventCallbackCollectionChanged(par);}
Q_INVOKABLE void pmoc_reverse_addUpdateCallback( osg::QReflect_Callback *par);//{_model->setUpdateCallback(par->_model);emit UpdateCallbackCollectionChanged(par);}
Q_INVOKABLE void pmoc_reverse_setCullCallback( osg::QReflect_Callback *par=0);
Q_INVOKABLE void pmoc_reverse_setEventCallback( osg::QReflect_Callback *par=0);
Q_INVOKABLE void pmoc_reverse_setStateSet( osg::QReflect_StateSet *par=0);
Q_INVOKABLE void pmoc_reverse_setUpdateCallback( osg::QReflect_Callback *par=0);
Q_INVOKABLE void setCullCallback( osg::QReflect_Callback *par);
Q_INVOKABLE void setCullingActive(const bool &);
Q_INVOKABLE void setEventCallback( osg::QReflect_Callback *par);
Q_INVOKABLE void setStateSet( osg::QReflect_StateSet *par);
Q_INVOKABLE void setUpdateCallback( osg::QReflect_Callback *par);
Q_PROPERTY(bool CullingActive  READ getCullingActive WRITE setCullingActive NOTIFY CullingActiveChanged)
signals: void CullCallbackChanged(const osg::QReflect_Callback*);
public:
signals: void CullCallbackCollectionChanged();
public:
signals: void CullingActiveChanged(const bool&);
public:
signals: void EventCallbackChanged(const osg::QReflect_Callback*);
public:
signals: void EventCallbackCollectionChanged();
public:
signals: void StateSetChanged(const osg::QReflect_StateSet*);
public:
signals: void UpdateCallbackChanged(const osg::QReflect_Callback*);
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

#endif //osg_Node_pmocHPP

