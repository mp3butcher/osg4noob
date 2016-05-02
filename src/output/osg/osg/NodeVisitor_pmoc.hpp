#ifndef osg_NodeVisitor_pmocHPP
#define  osg_NodeVisitor_pmocHPP 1


#include <osg/NodeVisitor_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Node;
			} ;
#include <osg/NodeVisitor>

#include <MetaQQuickClass.h>
namespace osg{
class QReflect_NodeAcceptOp: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 0;}

/// inheritance simulated via composition
NodeAcceptOp * _model;
QReflect_NodeAcceptOp(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_NodeAcceptOp( );
//NodeAcceptOp
// void  operator()( ref_ptr<Node> );
Q_INVOKABLE void  operator()(osg::QReflect_Node *node);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_NodeAcceptOp: public pmoc::MetaQQuickClass{
protected:
   public:
MetaQReflect_NodeAcceptOp();
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
#include <osg/NodeVisitor_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Node;
			} ;
namespace osg{ 
class QReflect_Drawable;
			} ;
namespace osg{ 
class QReflect_NodeVisitor;
			} ;
namespace osg{ 
class QReflect_Vec3f;
			} ;
namespace osg{ 
class QReflect_FrameStamp;
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
namespace osg{ 
class QReflect_Billboard;
			} ;
namespace osg{ 
class QReflect_ClearNode;
			} ;
namespace osg{ 
class QReflect_ClipNode;
			} ;
namespace osg{ 
class QReflect_CoordinateSystemNode;
			} ;
namespace osg{ 
class QReflect_LightSource;
			} ;
namespace osg{ 
class QReflect_LOD;
			} ;
namespace osg{ 
class QReflect_MatrixTransform;
			} ;
namespace osg{ 
class QReflect_OccluderNode;
			} ;
namespace osg{ 
class QReflect_OcclusionQueryNode;
			} ;
namespace osg{ 
class QReflect_PagedLOD;
			} ;
namespace osg{ 
class QReflect_PositionAttitudeTransform;
			} ;
namespace osg{ 
class QReflect_Projection;
			} ;
namespace osg{ 
class QReflect_ProxyNode;
			} ;
namespace osg{ 
class QReflect_Sequence;
			} ;
namespace osg{ 
class QReflect_TexGenNode;
			} ;
namespace osg{ 
class QReflect_CameraView;
			} ;
#include <osg/NodeVisitor>
#include <osg/NodeVisitor>

#include <osg/ref_ptr>
#include<osg/NodeVisitor_pmoc.hpp>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_NodeVisitor: public pmoc::QQModel
{
Q_OBJECT
public:
 enum TraversalMode{
TRAVERSE_NONE =NodeVisitor::TRAVERSE_NONE,
TRAVERSE_PARENTS =NodeVisitor::TRAVERSE_PARENTS,
TRAVERSE_ALL_CHILDREN =NodeVisitor::TRAVERSE_ALL_CHILDREN,
TRAVERSE_ACTIVE_CHILDREN =NodeVisitor::TRAVERSE_ACTIVE_CHILDREN};
  Q_ENUMS(TraversalMode)
private:
public:
 enum VisitorType{
NODE_VISITOR =NodeVisitor::NODE_VISITOR,
UPDATE_VISITOR =NodeVisitor::UPDATE_VISITOR,
EVENT_VISITOR =NodeVisitor::EVENT_VISITOR,
COLLECT_OCCLUDER_VISITOR =NodeVisitor::COLLECT_OCCLUDER_VISITOR,
CULL_VISITOR =NodeVisitor::CULL_VISITOR,
INTERSECTION_VISITOR =NodeVisitor::INTERSECTION_VISITOR};
  Q_ENUMS(VisitorType)
private:
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
NodeVisitor * _model;
QReflect_NodeVisitor(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_NodeVisitor( );
//NodeVisitor
// DatabaseRequestHandler * getDatabaseRequestHandler();
// ImageRequestHandler * getImageRequestHandler();
// NodePath & getNodePath();
//virtual  osg::Vec3  getEyePoint();
//virtual  osg::Vec3  getViewPoint();
// void  setDatabaseRequestHandler( DatabaseRequestHandler *);
// void  setImageRequestHandler( ImageRequestHandler *);
//const  DatabaseRequestHandler * getDatabaseRequestHandler();
//const  ImageRequestHandler * getImageRequestHandler();
//const  NodePath & getNodePath();
Q_INVOKABLE  bool  validNodeMask(osg::QReflect_Node *node)const;
Q_INVOKABLE  float  getDistanceFromEyePoint(osg::QReflect_Vec3f * , bool )const;
Q_INVOKABLE  float  getDistanceToEyePoint(osg::QReflect_Vec3f * , bool )const;
Q_INVOKABLE  float  getDistanceToViewPoint(osg::QReflect_Vec3f * , bool )const;
Q_INVOKABLE  unsigned int  getNodeMaskOverride()const;
Q_INVOKABLE  unsigned int  getTraversalMask()const;
Q_INVOKABLE  unsigned int  getTraversalNumber()const;
Q_INVOKABLE osg::QReflect_FrameStamp*  getFrameStamp()const;
Q_INVOKABLE osg::QReflect_NodeVisitor*  asNodeVisitor();
Q_INVOKABLE osg::QReflect_NodeVisitor*  asNodeVisitor()const;
Q_INVOKABLE osg::QReflect_NodeVisitor::TraversalMode  getTraversalMode()const;
Q_INVOKABLE osg::QReflect_NodeVisitor::VisitorType  getVisitorType()const;
Q_INVOKABLE void  apply(osg::QReflect_Billboard *node);
Q_INVOKABLE void  apply(osg::QReflect_Camera *node);
Q_INVOKABLE void  apply(osg::QReflect_CameraView *node);
Q_INVOKABLE void  apply(osg::QReflect_ClearNode *node);
Q_INVOKABLE void  apply(osg::QReflect_ClipNode *node);
Q_INVOKABLE void  apply(osg::QReflect_CoordinateSystemNode *node);
Q_INVOKABLE void  apply(osg::QReflect_Drawable *drawable);
Q_INVOKABLE void  apply(osg::QReflect_Geode *node);
Q_INVOKABLE void  apply(osg::QReflect_Geometry *geometry);
Q_INVOKABLE void  apply(osg::QReflect_Group *node);
Q_INVOKABLE void  apply(osg::QReflect_LOD *node);
Q_INVOKABLE void  apply(osg::QReflect_LightSource *node);
Q_INVOKABLE void  apply(osg::QReflect_MatrixTransform *node);
Q_INVOKABLE void  apply(osg::QReflect_Node *node);
Q_INVOKABLE void  apply(osg::QReflect_OccluderNode *node);
Q_INVOKABLE void  apply(osg::QReflect_OcclusionQueryNode *node);
Q_INVOKABLE void  apply(osg::QReflect_PagedLOD *node);
Q_INVOKABLE void  apply(osg::QReflect_PositionAttitudeTransform *node);
Q_INVOKABLE void  apply(osg::QReflect_Projection *node);
Q_INVOKABLE void  apply(osg::QReflect_ProxyNode *node);
Q_INVOKABLE void  apply(osg::QReflect_Sequence *node);
Q_INVOKABLE void  apply(osg::QReflect_Switch *node);
Q_INVOKABLE void  apply(osg::QReflect_TexGenNode *node);
Q_INVOKABLE void  apply(osg::QReflect_Transform *node);
Q_INVOKABLE void  popFromNodePath();
Q_INVOKABLE void  pushOntoNodePath(osg::QReflect_Node *node);
Q_INVOKABLE void  reset();
Q_INVOKABLE void  setFrameStamp(osg::QReflect_FrameStamp *fs);
Q_INVOKABLE void  setNodeMaskOverride( unsigned int mask);
Q_INVOKABLE void  setTraversalMask( unsigned int mask);
Q_INVOKABLE void  setTraversalMode(osg::QReflect_NodeVisitor::TraversalMode mode);
Q_INVOKABLE void  setTraversalNumber( unsigned int fn);
Q_INVOKABLE void  setVisitorType(osg::QReflect_NodeVisitor::VisitorType type);
Q_INVOKABLE void  traverse(osg::QReflect_Node *node);
Q_PROPERTY(osg::QReflect_FrameStamp * FrameStamp  READ getFrameStamp WRITE setFrameStamp NOTIFY FrameStampChanged)
Q_PROPERTY(osg::QReflect_NodeVisitor::TraversalMode  TraversalMode  READ getTraversalMode WRITE setTraversalMode NOTIFY TraversalModeChanged)
Q_PROPERTY(osg::QReflect_NodeVisitor::VisitorType  VisitorType  READ getVisitorType WRITE setVisitorType NOTIFY VisitorTypeChanged)
Q_PROPERTY(unsigned int  NodeMaskOverride  READ getNodeMaskOverride WRITE setNodeMaskOverride NOTIFY NodeMaskOverrideChanged)
Q_PROPERTY(unsigned int  TraversalMask  READ getTraversalMask WRITE setTraversalMask NOTIFY TraversalMaskChanged)
Q_PROPERTY(unsigned int  TraversalNumber  READ getTraversalNumber WRITE setTraversalNumber NOTIFY TraversalNumberChanged)
signals: void FrameStampChanged();
public:
signals: void NodeMaskOverrideChanged();
public:
signals: void TraversalMaskChanged();
public:
signals: void TraversalModeChanged();
public:
signals: void TraversalNumberChanged();
public:
signals: void VisitorTypeChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_NodeVisitor: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::NodeVisitor> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_NodeVisitor();
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


#endif //osg_NodeVisitor_pmocHPP

