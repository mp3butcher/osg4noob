#ifndef osg_Group_pmocHPP
#define  osg_Group_pmocHPP 1


#include <osg/Group_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Node;
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
#include <osg/Group>
#include <osg/Group>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_Group: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
Group * _model;
QReflect_Group(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Group( );
//Group
//virtual  BoundingSphere  computeBound();
Q_INVOKABLE  bool  addChild(osg::QReflect_Node *child);
Q_INVOKABLE  bool  containsNode(osg::QReflect_Node *node)const;
Q_INVOKABLE  bool  insertChild( unsigned int index ,osg::QReflect_Node *child);
Q_INVOKABLE  bool  removeChild( unsigned int pos , unsigned int numChildrenToRemove);
Q_INVOKABLE  bool  removeChild(osg::QReflect_Node *child);
Q_INVOKABLE  bool  removeChildren( unsigned int pos , unsigned int numChildrenToRemove);
Q_INVOKABLE  bool  replaceChild(osg::QReflect_Node *origChild ,osg::QReflect_Node *newChild);
Q_INVOKABLE  bool  setChild( unsigned int i ,osg::QReflect_Node *node);
Q_INVOKABLE  unsigned int  getChildIndex(osg::QReflect_Node *node)const;
Q_INVOKABLE  unsigned int  getNumChildren()const;
Q_INVOKABLE osg::QReflect_Group*  asGroup();
Q_INVOKABLE osg::QReflect_Group*  asGroup()const;
Q_INVOKABLE osg::QReflect_Node*  getChild( unsigned int i);
Q_INVOKABLE osg::QReflect_Node*  getChild( unsigned int i)const;
Q_INVOKABLE void  releaseGLObjects(osg::QReflect_State *)const;
Q_INVOKABLE void  resizeGLObjectBuffers( unsigned int maxSize);
Q_INVOKABLE void  setThreadSafeRefUnref( bool threadSafe);
Q_INVOKABLE void  traverse(osg::QReflect_NodeVisitor *nv);
signals: void ChildCollectionChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Group: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::Group> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_Group();
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


#endif //osg_Group_pmocHPP

