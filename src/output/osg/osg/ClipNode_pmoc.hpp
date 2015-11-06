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
namespace osg{
class QReflect_ClipPlane; 
}


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
QReflect_ClipNode(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_ClipNode( );
//ClipNode
//virtual  BoundingSphere  computeBound();
// ClipPlaneList & getClipPlaneList();
// void  createClipBox(const  BoundingBox & , unsigned int );
// void  setClipPlaneList(const  ClipPlaneList &);
//const  ClipPlaneList & getClipPlaneList();
Q_INVOKABLE  bool  removeClipPlane( unsigned int );
Q_INVOKABLE  unsigned int  getNumClipPlanes()const;
Q_INVOKABLE osg::QReflect_ClipNode::ReferenceFrame  getReferenceFrame()const;
Q_INVOKABLE osg::QReflect_ClipPlane*  getClipPlane( unsigned int );
Q_INVOKABLE osg::QReflect_ClipPlane*  getClipPlane( unsigned int )const;
Q_INVOKABLE void   addClipPlane( osg::QReflect_ClipPlane *par);//{return new osg::QReflect_ClipPlane(_model->getClipPlane());}
Q_INVOKABLE void  setLocalStateSetModes( unsigned int );
Q_INVOKABLE void  setReferenceFrame(osg::QReflect_ClipNode::ReferenceFrame );
Q_INVOKABLE void  setStateSetModes(osg::QReflect_StateSet * , unsigned int )const;
Q_INVOKABLE void pmoc_reverse_addClipPlane( osg::QReflect_ClipPlane *par);//{_model->setClipPlane(par->_model);emit ClipPlaneCollectionChanged(par);}
signals: void ClipPlaneCollectionChanged();
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

#endif //osg_ClipNode_pmocHPP

