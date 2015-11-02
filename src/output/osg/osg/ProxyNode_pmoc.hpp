#ifndef osg_ProxyNode_pmocHPP
#define  osg_ProxyNode_pmocHPP 1

#include <osg/ProxyNode_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_NodeVisitor;
			} ;
namespace osg{ 
class QReflect_Referenced;
			} ;
namespace osg{ 
class QReflect_Node;
			} ;
#include <osg/ProxyNode>
#include <osg/ProxyNode>

#include <osg/ref_ptr>
#include<osg/ProxyNode_pmoc.hpp>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_ProxyNode: public pmoc::QQModel
{
Q_OBJECT
public:
 enum CenterMode{
USE_BOUNDING_SPHERE_CENTER =ProxyNode::USE_BOUNDING_SPHERE_CENTER,
USER_DEFINED_CENTER =ProxyNode::USER_DEFINED_CENTER,
UNION_OF_BOUNDING_SPHERE_AND_USER_DEFINED =ProxyNode::UNION_OF_BOUNDING_SPHERE_AND_USER_DEFINED};
  Q_ENUMS(CenterMode)
private:
public:
 enum LoadingExternalReferenceMode{
LOAD_IMMEDIATELY =ProxyNode::LOAD_IMMEDIATELY,
DEFER_LOADING_TO_DATABASE_PAGER =ProxyNode::DEFER_LOADING_TO_DATABASE_PAGER,
NO_AUTOMATIC_LOADING =ProxyNode::NO_AUTOMATIC_LOADING};
  Q_ENUMS(LoadingExternalReferenceMode)
private:
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
ProxyNode * _model;
QReflect_ProxyNode(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_ProxyNode( );
//ProxyNode
//virtual  BoundingSphere  computeBound();
// osg::ref_ptr<osg::Referenced> & getDatabaseRequest( unsigned int );
// value_type  getRadius();
// void  setCenter(const  vec_type &);
// void  setRadius( value_type );
//const  osg::ref_ptr<osg::Referenced> & getDatabaseRequest( unsigned int );
//const  vec_type & getCenter();
Q_INVOKABLE  bool  addChild(osg::QReflect_Node * ,const  QString &);
Q_INVOKABLE  bool  addChild(osg::QReflect_Node *);
Q_INVOKABLE  bool  removeChildren( unsigned int  , unsigned int );
Q_INVOKABLE  osg::QReflect_Referenced * getDatabaseOptions()const;
Q_INVOKABLE  unsigned int  getNumFileNames()const;
Q_INVOKABLE QString  getFileName( unsigned int )const;
Q_INVOKABLE const QString  getDatabasePath()const;
Q_INVOKABLE osg::QReflect_ProxyNode::CenterMode  getCenterMode()const;
Q_INVOKABLE osg::QReflect_ProxyNode::LoadingExternalReferenceMode  getLoadingExternalReferenceMode()const;
Q_INVOKABLE void  setCenterMode(osg::QReflect_ProxyNode::CenterMode );
Q_INVOKABLE void  setFileName( unsigned int  ,const  QString &);
Q_INVOKABLE void  setLoadingExternalReferenceMode(osg::QReflect_ProxyNode::LoadingExternalReferenceMode );
Q_INVOKABLE void  traverse(osg::QReflect_NodeVisitor *);
Q_INVOKABLE void pmoc_reverse_setDatabaseOptions( osg::QReflect_Referenced *par=0);
Q_INVOKABLE void setDatabaseOptions( osg::QReflect_Referenced *par);
Q_INVOKABLE void setDatabasePath(const QString &);
Q_PROPERTY(QString DatabasePath  READ getDatabasePath WRITE setDatabasePath NOTIFY DatabasePathChanged)
signals: void DatabaseOptionsChanged(const osg::QReflect_Referenced*);
public:
signals: void DatabasePathChanged(const QString&);
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_ProxyNode: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::ProxyNode> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_ProxyNode();
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

#endif //osg_ProxyNode_pmocHPP

