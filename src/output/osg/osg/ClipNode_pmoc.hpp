#ifndef osg_ClipNode_pmocHPP
#define  osg_ClipNode_pmocHPP 1


#include <osg/ClipNode_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_StateSet;
			} ;
namespace osg{ 
class QReflect_ClipPlane;
			} ;
#include <osg/ClipNode>
#include <osg/ClipNode>

#include <osg/ref_ptr>
#include<osg/ClipNode_pmoc.hpp>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_ClipNode: public pmoc::QQModel
{
Q_OBJECT
public:
 enum ReferenceFrame{
RELATIVE_RF =ClipNode::RELATIVE_RF,
ABSOLUTE_RF =ClipNode::ABSOLUTE_RF};
  Q_ENUMS(ReferenceFrame)
private:
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
ClipNode * _model;
QReflect_ClipNode(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_ClipNode( );
//ClipNode
//virtual  BoundingSphere  computeBound();
// ClipPlaneList & getClipPlaneList();
// void  createClipBox(const  BoundingBox & , unsigned int );
// void  setClipPlaneList(const  ClipPlaneList &);
//const  ClipPlaneList & getClipPlaneList();
Q_INVOKABLE  bool  addClipPlane(osg::QReflect_ClipPlane *clipplane);
Q_INVOKABLE  bool  removeClipPlane( unsigned int pos);
Q_INVOKABLE  bool  removeClipPlane(osg::QReflect_ClipPlane *clipplane);
Q_INVOKABLE  unsigned int  getNumClipPlanes()const;
Q_INVOKABLE osg::QReflect_ClipNode::ReferenceFrame  getReferenceFrame()const;
Q_INVOKABLE osg::QReflect_ClipPlane*  getClipPlane( unsigned int pos);
Q_INVOKABLE osg::QReflect_ClipPlane*  getClipPlane( unsigned int pos)const;
Q_INVOKABLE void  setLocalStateSetModes( unsigned int );
Q_INVOKABLE void  setReferenceFrame(osg::QReflect_ClipNode::ReferenceFrame rf);
Q_INVOKABLE void  setStateSetModes(osg::QReflect_StateSet * , unsigned int )const;
Q_PROPERTY(osg::QReflect_ClipNode::ReferenceFrame  ReferenceFrame  READ getReferenceFrame WRITE setReferenceFrame NOTIFY ReferenceFrameChanged)
signals: void ClipPlaneCollectionChanged();
public:
signals: void ReferenceFrameChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_ClipNode: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::ClipNode> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_ClipNode();
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


#endif //osg_ClipNode_pmocHPP

