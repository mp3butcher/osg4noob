#ifndef osg_NodeVisitor_pmocHPP
#define  osg_NodeVisitor_pmocHPP 1

#include <osg/NodeVisitor_pmoc.hpp>
#include <QObject>
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
QReflect_NodeAcceptOp(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_NodeAcceptOp( );
//NodeAcceptOp
// void  operator()( Node *);
// void  operator()( ref_ptr<Node> );
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_NodeAcceptOp: public pmoc::MetaQQuickClass{
protected:
   public:
MetaQReflect_NodeAcceptOp();
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
#include <osg/NodeVisitor_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_NodeVisitor;
			} ;
namespace osg{ 
class QReflect_Node;
			} ;
namespace osg{ 
class QReflect_Vec3f;
			} ;
namespace osg{ 
class QReflect_FrameStamp;
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
QReflect_NodeVisitor(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_NodeVisitor( );
//NodeVisitor
// DatabaseRequestHandler * getDatabaseRequestHandler();
// ImageRequestHandler * getImageRequestHandler();
// NodePath & getNodePath();
//virtual  osg::Vec3  getEyePoint();
//virtual  osg::Vec3  getViewPoint();
//virtual  void  apply( Billboard &);
//virtual  void  apply( Camera &);
//virtual  void  apply( CameraView &);
//virtual  void  apply( ClearNode &);
//virtual  void  apply( ClipNode &);
//virtual  void  apply( CoordinateSystemNode &);
//virtual  void  apply( Drawable &);
//virtual  void  apply( Geode &);
//virtual  void  apply( Geometry &);
//virtual  void  apply( Group &);
//virtual  void  apply( LOD &);
//virtual  void  apply( LightSource &);
//virtual  void  apply( MatrixTransform &);
//virtual  void  apply( OccluderNode &);
//virtual  void  apply( OcclusionQueryNode &);
//virtual  void  apply( PagedLOD &);
//virtual  void  apply( PositionAttitudeTransform &);
//virtual  void  apply( Projection &);
//virtual  void  apply( ProxyNode &);
//virtual  void  apply( Sequence &);
//virtual  void  apply( Switch &);
//virtual  void  apply( TexGenNode &);
//virtual  void  apply( Transform &);
// void  setDatabaseRequestHandler( DatabaseRequestHandler *);
// void  setImageRequestHandler( ImageRequestHandler *);
//const  DatabaseRequestHandler * getDatabaseRequestHandler();
//const  ImageRequestHandler * getImageRequestHandler();
//const  NodePath & getNodePath();
Q_INVOKABLE  bool  validNodeMask(osg::QReflect_Node *)const;
Q_INVOKABLE  float  getDistanceFromEyePoint(osg::QReflect_Vec3f * , bool )const;
Q_INVOKABLE  float  getDistanceToEyePoint(osg::QReflect_Vec3f * , bool )const;
Q_INVOKABLE  float  getDistanceToViewPoint(osg::QReflect_Vec3f * , bool )const;
Q_INVOKABLE  osg::QReflect_FrameStamp * getFrameStamp()const;
Q_INVOKABLE  unsigned int  getNodeMaskOverride()const;
Q_INVOKABLE  unsigned int  getTraversalMask()const;
Q_INVOKABLE const unsigned int  getTraversalNumber()const;
Q_INVOKABLE osg::QReflect_NodeVisitor*  asNodeVisitor();
Q_INVOKABLE osg::QReflect_NodeVisitor*  asNodeVisitor()const;
Q_INVOKABLE osg::QReflect_NodeVisitor::TraversalMode  getTraversalMode()const;
Q_INVOKABLE osg::QReflect_NodeVisitor::VisitorType  getVisitorType()const;
Q_INVOKABLE void  apply(osg::QReflect_Node *);
Q_INVOKABLE void  popFromNodePath();
Q_INVOKABLE void  pushOntoNodePath(osg::QReflect_Node *);
Q_INVOKABLE void  reset();
Q_INVOKABLE void  setNodeMaskOverride( unsigned int );
Q_INVOKABLE void  setTraversalMask( unsigned int );
Q_INVOKABLE void  setTraversalMode(osg::QReflect_NodeVisitor::TraversalMode );
Q_INVOKABLE void  setVisitorType(osg::QReflect_NodeVisitor::VisitorType );
Q_INVOKABLE void  traverse(osg::QReflect_Node *);
Q_INVOKABLE void pmoc_reverse_setFrameStamp( osg::QReflect_FrameStamp *par=0);
Q_INVOKABLE void setFrameStamp( osg::QReflect_FrameStamp *par);
Q_INVOKABLE void setTraversalNumber(const unsigned int &);
Q_PROPERTY(unsigned int TraversalNumber  READ getTraversalNumber WRITE setTraversalNumber NOTIFY TraversalNumberChanged)
signals: void FrameStampChanged(const osg::QReflect_FrameStamp*);
public:
signals: void TraversalNumberChanged(const unsigned int&);
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

#endif //osg_NodeVisitor_pmocHPP

