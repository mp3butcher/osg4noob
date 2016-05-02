#ifndef osg_ProxyNode_pmocHPP
#define  osg_ProxyNode_pmocHPP 1


#include <osg/ProxyNode_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Node;
			} ;
namespace osg{ 
class QReflect_Referenced;
			} ;
namespace osg{ 
class QReflect_NodeVisitor;
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
QReflect_ProxyNode(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_ProxyNode( );
//ProxyNode
//virtual  BoundingSphere  computeBound();
// osg::ref_ptr<osg::Referenced> & getDatabaseRequest( unsigned int );
// value_type  getRadius();
// void  setCenter(const  vec_type &);
// void  setRadius( value_type );
//const  osg::ref_ptr<osg::Referenced> & getDatabaseRequest( unsigned int );
//const  vec_type & getCenter();
Q_INVOKABLE  bool  addChild(osg::QReflect_Node *child ,const  QString &filename);
Q_INVOKABLE  bool  addChild(osg::QReflect_Node *child);
Q_INVOKABLE  bool  removeChildren( unsigned int pos , unsigned int numChildrenToRemove);
Q_INVOKABLE  unsigned int  getNumFileNames()const;
Q_INVOKABLE QString  getDatabasePath()const;
Q_INVOKABLE QString  getFileName( unsigned int childNo)const;
Q_INVOKABLE osg::QReflect_ProxyNode::CenterMode  getCenterMode()const;
Q_INVOKABLE osg::QReflect_ProxyNode::LoadingExternalReferenceMode  getLoadingExternalReferenceMode()const;
Q_INVOKABLE osg::QReflect_Referenced*  getDatabaseOptions();
Q_INVOKABLE osg::QReflect_Referenced*  getDatabaseOptions()const;
Q_INVOKABLE void  setCenterMode(osg::QReflect_ProxyNode::CenterMode mode);
Q_INVOKABLE void  setDatabaseOptions(osg::QReflect_Referenced *options);
Q_INVOKABLE void  setDatabasePath(const  QString &path);
Q_INVOKABLE void  setFileName( unsigned int childNo ,const  QString &filename);
Q_INVOKABLE void  setLoadingExternalReferenceMode(osg::QReflect_ProxyNode::LoadingExternalReferenceMode mode);
Q_INVOKABLE void  traverse(osg::QReflect_NodeVisitor *nv);
Q_PROPERTY(QString  DatabasePath  READ getDatabasePath WRITE setDatabasePath NOTIFY DatabasePathChanged)
Q_PROPERTY(osg::QReflect_ProxyNode::CenterMode  CenterMode  READ getCenterMode WRITE setCenterMode NOTIFY CenterModeChanged)
Q_PROPERTY(osg::QReflect_ProxyNode::LoadingExternalReferenceMode  LoadingExternalReferenceMode  READ getLoadingExternalReferenceMode WRITE setLoadingExternalReferenceMode NOTIFY LoadingExternalReferenceModeChanged)
Q_PROPERTY(osg::QReflect_Referenced * DatabaseOptions  READ getDatabaseOptions WRITE setDatabaseOptions NOTIFY DatabaseOptionsChanged)
signals: void CenterModeChanged();
public:
signals: void DatabaseOptionsChanged();
public:
signals: void DatabasePathChanged();
public:
signals: void LoadingExternalReferenceModeChanged();
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


#endif //osg_ProxyNode_pmocHPP

