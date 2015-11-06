#ifndef osg_Group_pmocHPP
#define  osg_Group_pmocHPP 1

#include <osg/Group_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Node;
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
namespace osg{
class QReflect_Node; 
}


#include <MetaQQuickClass.h>
namespace osg{
class QReflect_Group: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
Group * _model;
QReflect_Group(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Group( );
//Group
//virtual  BoundingSphere  computeBound();
//virtual  void  releaseGLObjects( osg::State *);
Q_INVOKABLE  bool  containsNode(osg::QReflect_Node *)const;
Q_INVOKABLE  bool  insertChild( unsigned int  ,osg::QReflect_Node *);
Q_INVOKABLE  bool  removeChild( unsigned int  , unsigned int );
Q_INVOKABLE  bool  removeChildren( unsigned int  , unsigned int );
Q_INVOKABLE  bool  replaceChild(osg::QReflect_Node * ,osg::QReflect_Node *);
Q_INVOKABLE  bool  setChild( unsigned int  ,osg::QReflect_Node *);
Q_INVOKABLE  unsigned int  getChildIndex(osg::QReflect_Node *)const;
Q_INVOKABLE  unsigned int  getNumChildren()const;
Q_INVOKABLE osg::QReflect_Group*  asGroup();
Q_INVOKABLE osg::QReflect_Group*  asGroup()const;
Q_INVOKABLE osg::QReflect_Node*  getChild( unsigned int );
Q_INVOKABLE osg::QReflect_Node*  getChild( unsigned int )const;
Q_INVOKABLE void  resizeGLObjectBuffers( unsigned int );
Q_INVOKABLE void  setThreadSafeRefUnref( bool );
Q_INVOKABLE void  traverse(osg::QReflect_NodeVisitor *);
virtual Q_INVOKABLE void   addChild( osg::QReflect_Node *par);//{return new osg::QReflect_Node(_model->getChild());}
virtual Q_INVOKABLE void pmoc_reverse_addChild( osg::QReflect_Node *par);//{_model->setChild(par->_model);emit ChildCollectionChanged(par);}
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

#endif //osg_Group_pmocHPP

